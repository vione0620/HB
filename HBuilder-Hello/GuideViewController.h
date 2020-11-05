//
//  GuideViewController.h
//  HBuilder
//
//  Created by apple on 2020/8/26.
//  Copyright © 2020 DCloud. All rights reserved.
//
#define iPhoneX \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})
#define iPhoneXTabbarHeight (iPhoneX ? 83 : 49)
#define iPhoneXstatusBarHeight (iPhoneX ? 35 : 20)
#define iPhoneXBottomOffset (iPhoneX ? 34 : 0)
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GuideViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIScrollView *myScroll;
/** 添加pagecontrol*/
@property (nonatomic,strong) UIPageControl *pageControl;
@end

NS_ASSUME_NONNULL_END
