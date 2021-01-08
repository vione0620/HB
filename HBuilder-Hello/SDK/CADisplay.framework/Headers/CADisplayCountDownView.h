//
//  CACountDownView.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/28.
//

#import <UIKit/UIKit.h>
#import "CACountDownTool.h"
NS_ASSUME_NONNULL_BEGIN

@interface CADisplayCountDownView : UIView
/// 倒计时计数显示
@property (nonatomic ,strong) UILabel *timeLabel;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, assign) CGFloat LineWidth;
@property (nonatomic, strong) UIImage *doneImage;
@property (nonatomic, strong) UIImage *breakImage;
@property (nonatomic, strong) UIColor *countDownColor;
@property (nonatomic, assign) NSInteger secondsCount;
@property (nonatomic, assign) BOOL showZero;
@property (nonatomic, assign) BOOL showClockwise;
/// 测试随机打断返回
@property (nonatomic, assign) BOOL test;
@property (nonatomic, copy) void (^countDownDoneBlock) (void);
/// 测试,模拟打断使用
@property (nonatomic, copy) void (^countDownBreakBlock) (void);
- (void)showStatus:(BOOL)succee;
- (void)prepare;
- (void)reset;
- (void)begin;
- (void)stop;

@end

NS_ASSUME_NONNULL_END
