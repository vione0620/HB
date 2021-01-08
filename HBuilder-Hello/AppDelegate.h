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
- (void)checkUpdateVersion;
@end

/**
 原 info
 amap 41c8f3ec724fc03639b804dd6d4d8917
 
 weixinoauth
 appid wxbe7f03382358338d
 appSecret  3e4eaaefe9ab84cd9d2c1a14a5a2cc9d
 
 
 此APP为公司的商家端APP，是给合作的商家从我们公司进货使用的。账号注册是由公司统一审核管理。此APP主要功能为，1、商家进货，确认收货等功能。2、商家查看我公司商品，周，月，年的销售情况。
 
 
 移移公司的商家端APP，供合作的商家从移移公司进货使用。账号注册是由移移公司统一审核管理。APP主要功能为，1、商家进货，确认收货等功能。2、商家查看我公司商品，周，月，年的销售情况。
 
 尊敬的苹果审核人员，你好！
 我们公司因产品需要，定制了公司的APP，现目前计划上线3个APP，一个是配送端，给公司合作的商家配送使用，一个是用户端，供消费者使用，还有一个就是现在提交审核的APP，此APP为公司的商家端APP，是给合作的商家从我们公司进货使用的。账号注册是由公司统一审核管理，商家是与我们公司合作的商家。此APP主要功能为，1、商家进货，确认收货等功能。2、商家查看我公司商品，周，月，年的销售情况。
 此致敬礼！
 

 尊敬的苹果审核人员，你好！
 很抱歉因为我们更换宣传图片您带来了不便，对您提出的问题我们已经修改了宣传图片。
 圣诞节快乐！
 此致敬礼！
 
 */
