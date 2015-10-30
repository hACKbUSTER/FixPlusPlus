#include "Keyboard.h"
#include "DisplayManager.h"
#include "UnityForwardDecls.h"
#include <string>


static KeyboardDelegate*	_keyboard = nil;

static bool					_shouldHideInput = false;
static bool					_shouldHideInputChanged = false;

@implementation KeyboardDelegate
{
	// UI handling
	// in case of single line we use UITextField inside UIToolbar
	// in case of multi-line input we use UITextView with UIToolbar as accessory view
	UITextView*		textView;
	UITextField*	textField;
	UIToolbar*		viewToolbar;
	UIToolbar*		fieldToolbar;

	// inputView is view used for actual input (it will be responder): UITextField [single-line] or UITextView [multi-line]
	// editView is the "root" view for keyboard: UIToolbar [single-line] or UITextView [multi-line]
	UIView*			inputView;
	UIView*			editView;


	CGRect			_area;
	NSString*		initialText;

	UIKeyboardType	keyboardType;

	BOOL			_multiline;
	BOOL			_inputHidden;
	BOOL			_active;
	BOOL			_done;
	BOOL			_canceled;

	BOOL			_rotating;
}

@synthesize area;
@synthesize active		= _active;
@synthesize done		= _done;
@synthesize canceled	= _canceled;
@synthesize text;

- (BOOL)textFieldShouldReturn:(UITextField*)textFieldObj
{
	[self hide];
	return YES;
}

- (void)textInputDone:(id)sender
{
	[self hide];
}

- (void)textInputCancel:(id)sender
{
	_canceled = true;
	[self hide];
}

- (void)keyboardDidShow:(NSNotification*)notification;
{
	if (notification.userInfo == nil || inputView == nil)
		return;

	CGRect srcRect	= [[notification.userInfo objectForKey:UIKeyboardFrameEndUserInfoKey] CGRectValue];
	CGRect rect		= [UnityGetGLView() convertRect:srcRect fromView:nil];

	[self positionInput:rect x:rect.origin.x y:rect.origin.y];
	_active = YES;
}

- (void)keyboardWillHide:(NSNotification*)notification;
{
	[self systemHideKeyboard];
}
- (void)keyboardDidChangeFrame:(NSNotification*)notification;
{
	_active = true;

	CGRect srcRect	= [[notification.userInfo objectForKey:UIKeyboardFrameEndUserInfoKey] CGRectValue];
	CGRect rect		= [UnityGetGLView() convertRect:srcRect fromView: nil];

	if(rect.origin.y >= [UnityGetGLView() bounds].size.height)
		[self systemHideKeyboard];
	else
		[self positionInput:rect x:rect.origin.x y:rect.origin.y];
}

+ (void)Initialize
{
	NSAssert(_keyboard == nil, @"[KeyboardDelegate Initialize] called after creating keyboard");
	if(!_keyboard)
		_keyboard = [[KeyboardDelegate alloc] init];
}

+ (KeyboardDelegate*)Instance
{
	if(!_keyboard)
		_keyboard = [[KeyboardDelegate alloc] init];

	return _keyboard;
}

- (id)init
{
	NSAssert(_keyboard == nil, @"You can have only one instance of KeyboardDelegate");
	self = [super init];
	if(self)
	{
		textView = [[UITextView alloc] initWithFrame:CGRectMake(0, 480, 480, 30)];
		[textView setDelegate: self];
		textView.font = [UIFont systemFontOfSize:18.0];
		textView.hidden = YES;

		textField = [[UITextField alloc] initWithFrame:CGRectMake(0,0,120,30)];
		[textField setDelegate: self];
		[textField setBorderStyle: UITextBorderStyleRoundedRect];
		textField.font = [UIFont systemFontOfSize:20.0];
		textField.clearButtonMode = UITextFieldViewModeWhileEditing;

		viewToolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0,160,320,64)];
		viewToolbar.hidden = NO;
		UnitySetViewTouchProcessing(viewToolbar, touchesIgnored);
		
		fieldToolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0,160,320,64)];
		fieldToolbar.hidden = NO;
		UnitySetViewTouchProcessing(fieldToolbar, touchesIgnored);

		UIBarButtonItem* doneItem	= [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(textInputDone:)];
		UIBarButtonItem* cancelItem	= [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(textInputCancel:)];
		viewToolbar.items = @[doneItem, cancelItem];
		
		UIBarButtonItem* inputItem	= [[UIBarButtonItem alloc] initWithCustomView:textField];
		doneItem	= [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(textInputDone:)];
		cancelItem	= [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(textInputCancel:)];
		fieldToolbar.items = @[inputItem, doneItem, cancelItem];

		inputItem = nil;
		doneItem = nil;
		cancelItem = nil;

		[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardDidShow:) name:UIKeyboardDidShowNotification object:nil];
		[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardWillHide:) name:UIKeyboardWillHideNotification object:nil];
		[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardDidChangeFrame:) name:UIKeyboardDidChangeFrameNotification object:nil];
	}

	return self;
}

- (void)setKeyboardParams:(KeyboardShowParam)param
{
	if(_active)
		[self hide];

	initialText = param.text ? [[NSString alloc] initWithUTF8String: param.text] : @"";

	_multiline = param.multiline;
	if(param.multiline)
	{
		[textView setText: initialText];
		[textView setKeyboardType: param.keyboardType];
		[textView setAutocorrectionType: param.autocorrectionType];
		[textView setSecureTextEntry: (BOOL)param.secure];
		[textView setKeyboardAppearance: param.appearance];
		textView.inputAccessoryView = viewToolbar;
		inputView = textView;
		editView = textView;
	}
	else
	{
		[textField setPlaceholder: [NSString stringWithUTF8String: param.placeholder]];
		[textField setText: initialText];
		[textField setKeyboardType: param.keyboardType];
		[textField setAutocorrectionType: param.autocorrectionType];
		[textField setSecureTextEntry: (BOOL)param.secure];
		[textField setKeyboardAppearance: param.appearance];
		inputView = textField;
		editView = fieldToolbar;
	}

	[self shouldHideInput:_shouldHideInput];

	_done		= NO;
	_canceled	= NO;
	_active		= YES;
}

// we need to show/hide keyboard to react to orientation too, so extract we extract UI fiddling

- (void)showUI
{
	// if we unhide everything now the input will be shown smaller then needed quickly (and resized later)
	// so unhide only when keyboard is actually shown (we will update it when reacting to ios notifications)
	editView.hidden = YES;

	[UnityGetGLView() addSubview:editView];
	[inputView becomeFirstResponder];
}
- (void)hideUI
{
	[inputView resignFirstResponder];

	[editView removeFromSuperview];
	editView.hidden = YES;
}
- (void)systemHideKeyboard
{
	_active = editView.isFirstResponder;
	editView.hidden = YES;

	_area = CGRectMake(0,0,0,0);
}

- (void)show
{
	[self showUI];
}
- (void)hide
{
	[self hideUI];
	_done = YES;
}

- (void)updateInputHidden
{
	if(_shouldHideInputChanged)
	{
		[self shouldHideInput:_shouldHideInput];
		_shouldHideInputChanged = false;
	}

	textField.returnKeyType = _inputHidden ? UIReturnKeyDone : UIReturnKeyDefault;

	editView.hidden		= _inputHidden ? YES : NO;
	inputView.hidden	= _inputHidden ? YES : NO;
}

- (void)positionInput:(CGRect)kbRect x:(float)x y:(float)y
{
	static const unsigned kInputBarSize = 48;

	if(_multiline)
	{
		// use smaller area for iphones and bigger one for ipads
		int height = UnityDeviceDPI() > 300 ? 75 : 100;

		editView.frame	= CGRectMake(0, y - kInputBarSize, kbRect.size.width, height);
	}
	else
	{
		CGRect   statusFrame	= [UIApplication sharedApplication].statusBarFrame;
		unsigned statusHeight	= statusFrame.size.height;

		editView.frame	= CGRectMake(0, y - kInputBarSize - statusHeight, kbRect.size.width, kInputBarSize);
		inputView.frame	= CGRectMake(inputView.frame.origin.x, inputView.frame.origin.y,
									 kbRect.size.width - 3*18 - 2*50, inputView.frame.size.height
									);
	}

	_area = CGRectMake(x, y, kbRect.size.width, kbRect.size.height);
	[self updateInputHidden];
}

- (CGRect)queryArea
{
	return editView.hidden ? _area : CGRectUnion(_area, editView.frame);
}

+ (void)StartReorientation
{
	if(_keyboard && _keyboard.active)
	{
		[CATransaction begin];
		[_keyboard hideUI];
		[CATransaction commit];

		// not pretty but seems like easiest way to keep "we are rotating" status
		_keyboard->_rotating = YES;
	}
}

+ (void)FinishReorientation
{
	if(_keyboard && _keyboard->_rotating)
	{
		[CATransaction begin];
		[_keyboard showUI];
		[CATransaction commit];

		_keyboard->_rotating = NO;
	}
}

- (NSString*)getText
{
	if(_canceled)	return initialText;
	else			return _multiline ? [textView text] : [textField text];
}

- (void) setTextWorkaround:(id<UITextInput>)textInput text:(NSString*)newText
{
	UITextPosition* begin = [textInput beginningOfDocument];
	UITextPosition* end = [textInput endOfDocument];
	UITextRange* allText = [textInput textRangeFromPosition:begin toPosition:end];
	[textInput setSelectedTextRange:allText];
	[textInput insertText:newText];
}

- (void)setText:(NSString*)newText
{
	// We can't use setText on iOS7 because it does not update the undo stack.
	// We still prefer setText on other iOSes, because an undo operation results
	// in a smaller selection shown on the UI
	if(_ios70orNewer && !_ios80orNewer)
		[self setTextWorkaround: (_multiline ? textView : textField) text:newText];

	if(_multiline)
		[textView setText:newText];
	else
		[textField setText:newText];
}

- (void)shouldHideInput:(BOOL)hide
{
	if(hide)
	{
		switch(keyboardType)
		{
			case UIKeyboardTypeDefault:                 hide = YES;	break;
			case UIKeyboardTypeASCIICapable:            hide = YES;	break;
			case UIKeyboardTypeNumbersAndPunctuation:   hide = YES;	break;
			case UIKeyboardTypeURL:                     hide = YES;	break;
			case UIKeyboardTypeNumberPad:               hide = NO;	break;
			case UIKeyboardTypePhonePad:                hide = NO;	break;
			case UIKeyboardTypeNamePhonePad:            hide = NO;	break;
			case UIKeyboardTypeEmailAddress:            hide = YES;	break;
			default:                                    hide = NO;	break;
		}
	}

	_inputHidden = hide;
}

@end



//==============================================================================
//
//  Unity Interface:

extern "C" void UnityKeyboard_Create(unsigned keyboardType, int autocorrection, int multiline, int secure, int alert, const char* text, const char* placeholder)
{
	static const UIKeyboardType keyboardTypes[] =
	{
		UIKeyboardTypeDefault,
		UIKeyboardTypeASCIICapable,
		UIKeyboardTypeNumbersAndPunctuation,
		UIKeyboardTypeURL,
		UIKeyboardTypeNumberPad,
		UIKeyboardTypePhonePad,
		UIKeyboardTypeNamePhonePad,
		UIKeyboardTypeEmailAddress,
	};

	static const UITextAutocorrectionType autocorrectionTypes[] =
	{
		UITextAutocorrectionTypeNo,
		UITextAutocorrectionTypeDefault,
	};

	static const UIKeyboardAppearance keyboardAppearances[] =
	{
		UIKeyboardAppearanceDefault,
		UIKeyboardAppearanceAlert,
	};

	KeyboardShowParam param =
	{
		text, placeholder,
		keyboardTypes[keyboardType],
		autocorrectionTypes[autocorrection],
		keyboardAppearances[alert],
		(BOOL)multiline, (BOOL)secure
	};

	[[KeyboardDelegate Instance] setKeyboardParams:param];
}

extern "C" void UnityKeyboard_Show()
{
	// do not send hide if didnt create keyboard
	// TODO: probably assert?
	if(!_keyboard)
		return;

	[[KeyboardDelegate Instance] show];
}
extern "C" void UnityKeyboard_Hide()
{
	// do not send hide if didnt create keyboard
	// TODO: probably assert?
	if(!_keyboard)
		return;

	[[KeyboardDelegate Instance] hide];
}

extern "C" void UnityKeyboard_SetText(const char* text)
{
	[KeyboardDelegate Instance].text = [NSString stringWithUTF8String: text];
}

extern "C" NSString* UnityKeyboard_GetText()
{
	return [KeyboardDelegate Instance].text;
}

extern "C" int UnityKeyboard_IsActive()
{
	return (_keyboard && _keyboard.active) ? 1 : 0;
}

extern "C" int UnityKeyboard_IsDone()
{
	return (_keyboard && _keyboard.done) ? 1 : 0;
}

extern "C" int UnityKeyboard_WasCanceled()
{
	return (_keyboard && _keyboard.canceled) ? 1 : 0;
}

extern "C" void UnityKeyboard_SetInputHidden(int hidden)
{
	_shouldHideInput		= hidden;
	_shouldHideInputChanged	= true;

	// update hidden status only if keyboard is on screen to avoid showing input view out of nowhere
	if(_keyboard && _keyboard.active)
		[_keyboard updateInputHidden];
}

extern "C" int UnityKeyboard_IsInputHidden()
{
	return _shouldHideInput ? 1 : 0;
}

extern "C" void UnityKeyboard_GetRect(float* x, float* y, float* w, float* h)
{
	CGRect area = _keyboard ? _keyboard.area : CGRectMake(0,0,0,0);

	// convert to unity coord system

	float	multX	= (float)GetMainDisplaySurface()->targetW / UnityGetGLView().bounds.size.width;
	float	multY	= (float)GetMainDisplaySurface()->targetH / UnityGetGLView().bounds.size.height;

	*x = 0;
	*y = area.origin.y * multY;
	*w = area.size.width * multX;
	*h = area.size.height * multY;
}
