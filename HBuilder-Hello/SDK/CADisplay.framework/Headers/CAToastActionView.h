//
//  CAToastActionView.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/28.
//

#import <UIKit/UIKit.h>

#define kca_ShowAnimation [[CAToastActionView share] ca_showAnimation];
#define kca_ShowAnimationIn(view) [[CAToastActionView share] ca_showAnimationInSuperView:view];
#define kca_ShowIndicator [[CAToastActionView share] ca_showIndicatorView];
#define kca_ShowIndicatorIn(view) [[CAToastActionView share] ca_showIndicatorViewInSuperView:view];
#define kca_DismissAnimation [[CAToastActionView share] ca_dismiss];

NS_ASSUME_NONNULL_BEGIN

@interface CAToastActionView : UIView
/// 自定义动画时长
@property (nonatomic, assign) CGFloat duration;

+ (instancetype)share;
- (void)ca_setIndicatorColor:(UIColor *)color;
- (void)ca_setIndicatorAlpha:(CGFloat)alpha;

// 动画图片
- (void)ca_setAnimation:(NSArray *)animation;
- (void)ca_setAnimationAlpha:(CGFloat)alpha;

- (void)ca_showAnimation;
- (void)ca_showAnimationInSuperView:(UIView *)superView;
- (void)ca_showIndicatorView;
- (void)ca_showIndicatorViewInSuperView:(UIView *)superView;
- (void)ca_dismiss;
@end

NS_ASSUME_NONNULL_END
