//
//  CALayer+CAEasyDisplay.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/23.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

typedef NS_ENUM(NSUInteger, CAEasyDisplayLayerStyle) {
    CAEasyDisplayLayerStyleTop, //
    CAEasyDisplayLayerStyleLeft, //
    CAEasyDisplayLayerStyleRight, //
    CAEasyDisplayLayerStyleBottom, //
    CAEasyDisplayLayerStyleTopLeft,
    CAEasyDisplayLayerStyleTopRight,
    CAEasyDisplayLayerStyleBottomLeft,
    CAEasyDisplayLayerStyleBottomRight,
    CAEasyDisplayLayerStyleAll
};

typedef NS_ENUM(NSUInteger, CAEasyDisplayGradientColorStyle) {
    CAEasyDisplayGradientColorStyleTopBottom, //
    CAEasyDisplayGradientColorStyleLeftRight, //
    CAEasyDisplayGradientColorStyleBevel
};


NS_ASSUME_NONNULL_BEGIN

@interface CALayer (CAEasyDisplay)
/// 显示圆角
- (void)showCornerRadius:(CGFloat)radius style:(CAEasyDisplayLayerStyle)style;
/// 渐变 @[(__bridge id)[UIColor redColor].CGColor]   @[@0, @1.0];
- (void)drawColorWithColors:(NSArray *__nullable)colors locations:(NSArray *__nullable)locations style:(CAEasyDisplayGradientColorStyle)style;
@end

NS_ASSUME_NONNULL_END
