#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

#include "UnityAppController.h"
#include "UI/UnityView.h"
#include "UI/UnityViewControllerBase.h"
#include "UI/OrientationSupport.h"
#include "Unity/ObjCRuntime.h"


@interface MovieHolderView : UIView
{
	UIView*	movieView;
	BOOL	cancelOnTouch;
}
- (id)initWithView:(UIView*)view cancelOnTouch:(bool)cot;
@end

@interface MPVideoContext : NSObject
{
@public
	MPMoviePlayerController*	moviePlayer;
	MovieHolderView*			movieHolderView;

	MPMovieControlStyle			controlMode;
	MPMovieScalingMode			scalingMode;
	UIColor*					bgColor;

	bool						cancelOnTouch;
}

- (id)initAndPlay:(NSURL*)url bgColor:(UIColor*)color control:(MPMovieControlStyle)control scaling:(MPMovieScalingMode)scaling cancelOnTouch:(bool)cot;

- (void)actuallyStartTheMovie:(NSURL*)url;
- (void)moviePlayBackDidFinish:(NSNotification*)notification;
- (void)finish;
@end



static bool				_IsPlaying	= false;
static MPVideoContext*	_CurContext	= nil;

@implementation MPVideoContext
- (id)initAndPlay:(NSURL*)url bgColor:(UIColor*)color control:(MPMovieControlStyle)control scaling:(MPMovieScalingMode)scaling cancelOnTouch:(bool)cot
{
	_IsPlaying	= true;

	UnityPause(1);

	moviePlayer		= nil;
	movieHolderView	= nil;

	controlMode		= control;
	scalingMode		= scaling;
	bgColor			= color;
	cancelOnTouch	= cot;

	[self performSelector:@selector(actuallyStartTheMovie:) withObject:url afterDelay:0];
	return self;
}
- (void)dealloc
{
	[self finish];
}


- (void)actuallyStartTheMovie:(NSURL*)url
{
	@autoreleasepool
	{
		moviePlayer = [[MPMoviePlayerController alloc] initWithContentURL:url];
		if (moviePlayer == nil)
			return;

		UIView* bgView = [moviePlayer backgroundView];
		bgView.backgroundColor = bgColor;

		[moviePlayer prepareToPlay];
		moviePlayer.controlStyle = controlMode;
		moviePlayer.scalingMode = scalingMode;

		[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moviePlayBackDidFinish:) name:MPMoviePlayerPlaybackDidFinishNotification object:moviePlayer];
		[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moviePlayBackDidFinish:) name:MPMoviePlayerDidExitFullscreenNotification object:moviePlayer];
		[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(audioRouteChanged:) name:AVAudioSessionRouteChangeNotification object:nil];

		movieHolderView = [[MovieHolderView alloc] initWithView:moviePlayer.view cancelOnTouch:cancelOnTouch];
		[GetAppController().rootView addSubview:movieHolderView];
	}
}

- (void)moviePlayBackDidFinish:(NSNotification*)notification
{
	[self finish];
}
- (void)audioRouteChanged:(NSNotification*)notification
{
	// not really cool:
	// it might happen that due to audio route changing ios can pause playback
	// alas at this point playbackRate might be not yet changed, so we just resume always
	if(moviePlayer)
		[moviePlayer play];
}

- (void)finish
{
	if(moviePlayer)
	{
		// remove notifications right away to avoid recursively calling finish from callback
		[[NSNotificationCenter defaultCenter] removeObserver:self name:MPMoviePlayerPlaybackDidFinishNotification object:moviePlayer];
		[[NSNotificationCenter defaultCenter] removeObserver:self name:MPMoviePlayerDidExitFullscreenNotification object:moviePlayer];
		[[NSNotificationCenter defaultCenter] removeObserver:self name:AVAudioSessionRouteChangeNotification object:nil];
	}

	if(movieHolderView)
		[movieHolderView removeFromSuperview];
	movieHolderView = nil;

	if(moviePlayer)
	{
		[moviePlayer pause];
		[moviePlayer stop];
	}
	moviePlayer = nil;

	_IsPlaying	= false;
	_CurContext	= nil;

	if(UnityIsPaused())
		UnityPause(0);
}
@end

@implementation MovieHolderView
- (id)initWithView:(UIView*)view cancelOnTouch:(bool)cot
{
	UIView* rootView = GetAppController().rootView;
	if( (self = [super initWithFrame:rootView.bounds]) )
	{
		movieView = view;
		cancelOnTouch = cot;

		movieView.frame = rootView.bounds;
		[self addSubview:view];
		self.backgroundColor = [UIColor clearColor];
	}
	return self;
}
- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event
{
}
- (void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)event
{
	if(_CurContext && cancelOnTouch)
		[_CurContext finish];
}
- (void)touchesCancelled:(NSSet*)touches withEvent:(UIEvent*)event
{
}
- (void)touchesMoved:(NSSet*)touches withEvent:(UIEvent*)event
{
}
- (void)onUnityUpdateViewLayout
{
	UIView* rootView = GetAppController().rootView;
	self.frame	= movieView.frame	= rootView.bounds;
}
@end

extern "C" void UnityPlayMPMovie(const char* path, const float* color, unsigned control, unsigned scaling)
{
	const bool cancelOnTouch[] = { false, false, true, false };

	const MPMovieControlStyle controlMode[] =
	{
		MPMovieControlStyleFullscreen,
		MPMovieControlStyleEmbedded,
		MPMovieControlStyleNone,
		MPMovieControlStyleNone,
	};
	const MPMovieScalingMode scalingMode[] =
	{
		MPMovieScalingModeNone,
		MPMovieScalingModeAspectFit,
		MPMovieScalingModeAspectFill,
		MPMovieScalingModeFill,
	};

	const bool isURL = ::strstr(path, "://") != 0;

	NSURL* url = nil;
	if(isURL)
	{
		url = [NSURL URLWithString:[NSString stringWithUTF8String:path]];
	}
	else
	{
		NSString* relPath	= path[0] == '/' ? [NSString stringWithUTF8String:path] : [NSString stringWithFormat:@"Data/Raw/%s", path];
		NSString* fullPath	= [[NSBundle mainBundle].bundlePath stringByAppendingPathComponent:relPath];
		url = [NSURL fileURLWithPath:fullPath];
	}

	if(_CurContext)
		[_CurContext finish];

	_CurContext = [[MPVideoContext alloc] initAndPlay:url
		bgColor:[UIColor colorWithRed:color[0] green:color[1] blue:color[2] alpha:color[3]]
		control:controlMode[control] scaling:scalingMode[scaling] cancelOnTouch:cancelOnTouch[control]
	];
}

extern "C" void UnityStopMPMovieIfPlaying()
{
	if(_CurContext)
		[_CurContext finish];
}
