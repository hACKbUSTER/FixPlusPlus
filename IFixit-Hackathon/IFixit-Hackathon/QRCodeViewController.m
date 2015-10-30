//
//  QRCodeViewController.m
//  iFixit-HackBusters
//
//  Created by 杨思宇 on 10/24/15.
//  Copyright © 2015 杨思宇. All rights reserved.
//

#import "QRCodeViewController.h"

#define ScreenWidth      [[UIScreen mainScreen] bounds].size.width
#define ScreenHeight     [[UIScreen mainScreen] bounds].size.height


@interface QRCodeViewController ()

@property (nonatomic, strong) UIImageView *QRImageView;
@property (nonatomic, strong) UILabel *guideLabel;

@end

@implementation QRCodeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.QRImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0.0f, 0.0f, ScreenWidth, ScreenWidth)];
    self.QRImageView.center = CGPointMake(ScreenWidth / 2.0f, ScreenHeight / 2.0f);
    self.QRImageView.image = [UIImage imageNamed:@"Image"];
    [self.view addSubview:self.QRImageView];
    
    self.guideLabel = [[UILabel alloc] initWithFrame:CGRectMake(0.0f, 0.0f, ScreenWidth, 50.0f)];
    self.guideLabel.center = CGPointMake(ScreenWidth / 2.0f, self.QRImageView.center.y + 240.0f);
    self.guideLabel.text = @"请将手机平放于桌面上";
    self.guideLabel.numberOfLines = 1;
    self.guideLabel.font = [UIFont systemFontOfSize:17.0f];
    self.guideLabel.textColor = [UIColor blackColor];
    self.guideLabel.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:self.guideLabel];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
