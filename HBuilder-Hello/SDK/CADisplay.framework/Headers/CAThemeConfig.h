//
//  CAThemeConfig.h
//  NothingClassPrefix
//
//  Created by CADisplay on 2019/10/8.
//

/**
 警告⚠️
 此单例一调用，就更换系统API，单依旧会调用。 
 是否是暗黑主题(仅用于作为全局变量存储当前主题状态，不能用于判断当前是否真的为暗黑模式，可外部监听系统变化，更改模式)
 本配置方法只是配置了大部分View，多层嵌套的View可以在更换模式后自己外部设置。(系统view太多属性，如果color上设置了value，但是没有改变，请在更换模式后外部设置)
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol CAThemeConfigDelegate <NSObject>

- (BOOL)CAThemeConfigDidSettingView:(UIView *_Nullable)view;

@end

NS_ASSUME_NONNULL_BEGIN

@interface CAThemeConfig : NSObject
@property (nonatomic, weak, nullable) id <CAThemeConfigDelegate> delegate;
/**
 初始化暗黑主题模式
 警告⚠️
 此单例一调用，就更换系统API，单依旧会调用。
 */
+ (instancetype)defaultConfig;
/**
 调用，其实可以在defaultConfig 里，但还是分开了
 */
- (void)initDarkTheme;
- (void)darkThemeChange:(BOOL)isDark;
/**
 是否是暗黑主题(此变量仅用于作为全局变量存储当前主题状态，不能用于判断当前是否真的为暗黑模式)
 */
- (BOOL)getDarkTheme;
- (void)cancelDarkTheme;
- (BOOL)isDarkThemeOn;
@end

NS_ASSUME_NONNULL_END
