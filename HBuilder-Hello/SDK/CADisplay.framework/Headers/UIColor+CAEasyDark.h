//
//  UIColor+CAEasyDark.h
//  CADisplay
//
//  Created by CADisplay on 2019/11/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (CAEasyDark)
/// iOS 13.0, * 不跟随系统请在 addNotificationObserver 重写
+ (UIColor *)ca_colorWithColorLight:(UIColor *)light dark:(UIColor *)dark;
@end

NS_ASSUME_NONNULL_END
