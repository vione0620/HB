//
//  CAEasyDarkManager.h
//  CADisplay
//
//  Created by CADisplay on 2019/11/17.
//

#import <Foundation/Foundation.h>

#import "UIColor+CAEasyDark.h"

typedef NS_ENUM(NSUInteger, CAEasyThemeStyle) {
    CAEasyThemeStyleUnspecified,
    CAEasyThemeStyleLight,
    CAEasyThemeStyleDark
};
NS_ASSUME_NONNULL_BEGIN

@interface CAEasyDarkManager : NSObject
/// 支持iOS13, 及以上，iOS13以下需要自行暗黑模式返回时设置
@property (class, readonly) CAEasyDarkManager *shared;

@property (nonatomic, assign) CAEasyThemeStyle style;
/// 是否自定义，不跟随系统
@property (nonatomic, assign) BOOL custom;
/// 在AppDelegate初始化
- (void)initTheme:(UIWindow *)window;

/// 返回是否暗黑模式
+ (BOOL)updateTheme:(id)object;
/// 手动设置页面主题
+ (void)setTheme:(id)object dark:(BOOL)dark;
/// 添加方法做主题界面更新
+ (void)addObject:(id)object selector:(SEL)aSelector;
+ (void)remove:(id)object;

@end

NS_ASSUME_NONNULL_END
