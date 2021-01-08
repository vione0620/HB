//
//  UIView+MGNibLoading.h
//  MGKit
//
//  Created by mac on 2018/8/3.
//
// 各自模块中获取图片的方法， 不要在主工程调用，也不要在系统类扩展中调用， 每个模块中的图片，类名都要添加模块名缩写，避免全局名字冲突
#define ESBundle [NSBundle bundleForClass:[self class]]
#define ESImage(name) [UIImage imageNamed:name inBundle:ESBundle compatibleWithTraitCollection:nil]
#import <UIKit/UIKit.h>

//IB_DESIGNABLE
@interface UIView (CAMGNibLoading)

@property (nonatomic, assign) IBInspectable CGFloat wCornerRadius;
@property (nonatomic, assign) IBInspectable CGFloat wBorderWidth;
@property (nonatomic, assign) IBInspectable UIColor *wBorderColor;
@property (nonatomic, assign) IBInspectable CGFloat wDefineValue;
@property (nonatomic, assign) IBInspectable BOOL    wMasksToBounds;

/**
 根据当前类名的xib实例化UIView

 @return UIView
 */
+ (id)loadNib;

@end
