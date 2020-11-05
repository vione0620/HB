//
//  AppDelegate.h
//  Pandora
//
//  Created by Mac Pro_C on 12-12-26.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
// yiyibusi://yiyichina

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define RGBAColor(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:a]
#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *rootViewController;
- (BOOL)interruptCloseSplash;
-(void)setRootViewController;
-(void)pushHomeViewController;
- (void)setADVC;
@end

/**
 原 info
 amap 41c8f3ec724fc03639b804dd6d4d8917
 
 weixinoauth
 appid wxbe7f03382358338d
 appSecret  3e4eaaefe9ab84cd9d2c1a14a5a2cc9d
 
 */
