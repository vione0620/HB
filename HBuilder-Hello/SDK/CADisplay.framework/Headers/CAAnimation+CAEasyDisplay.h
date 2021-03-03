//
//  CAAnimation+CAEasyDisplay.h
//  CADisplay
//
//  Created by apple on 2021/2/4.
//

#import <QuartzCore/QuartzCore.h>
typedef NS_ENUM(NSUInteger, CAEasyDisplayLayerAnimationStyle) {
    CAEasyDisplayLayerAnimationStyleX, //左右
    CAEasyDisplayLayerAnimationStyleY, //上下
    CAEasyDisplayLayerAnimationStyleScale //放大缩小
};
NS_ASSUME_NONNULL_BEGIN

@interface CAAnimation (CAEasyDisplay)
/// 显示动画  values = @[@0.0, @0.0, @0.0] 0~1  key nil
+ (CAAnimation *)CreateCAAnimationValues:(NSArray *__nullable)values duration:(CGFloat)duration keyTimes:(NSArray * __nullable)keyTimes style:(CAEasyDisplayLayerAnimationStyle)style;

@end

NS_ASSUME_NONNULL_END
