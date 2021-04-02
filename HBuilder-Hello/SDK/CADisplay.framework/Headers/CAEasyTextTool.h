//
//  CADTextTool.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAEasyTextTool : NSObject
/**
 计算文字大小(size)

 @param fontSize 文字大小
 @param width 文字宽度，如果为‘0’或者‘MAXFLOAT’或者‘CGFLOAT_MAX’，该方法为计算文字宽度
 @param height 文字高度，如果为‘0’或者‘MAXFLOAT’或者‘CGFLOAT_MAX’，该方法为计算文字高度
 @return 返回文字的size
 */
+ (CGSize)sizeWithFont:(CGFloat)fontSize textSizeWidth:(CGFloat)width textSizeHeight:(CGFloat)height text:(NSString *)text;

/**
 计算文字高度，允许换行计算

 @param font 文字字体大小
 @param width 文字宽度
 @return 返回文字的高度
 */
+ (CGFloat)sizeLineFeedWithFont:(UIFont *)font textSizeWidth:(CGFloat)width text:(NSString *)text;
+ (CGFloat)sizeLineFeedWithFont:(UIFont *)font textSizeWidth:(CGFloat)width text:(NSString *)text lines:(NSInteger)lines;
/**
 计算文字高度，允许换行计算

 @param font 文字字体大小
 @param height 文字高度
 @return 返回文字宽度
 */
+ (CGFloat)sizeLineFeedWithFont:(UIFont *)font textSizeHeight:(CGFloat)height text:(NSString *)text;
/**
 计算文字高度，允许换行计算
 @param font 文字字体大小
 @param width 文字宽度
 @return 返回文字的高度
 */
+ (CGFloat)textViewSizeLineFeedWithFont:(UIFont *)font textSizeWidth:(CGFloat)width text:(NSString *)text;
@end

NS_ASSUME_NONNULL_END
