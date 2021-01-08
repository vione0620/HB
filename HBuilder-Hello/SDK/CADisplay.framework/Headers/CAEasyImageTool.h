//
//  CAEasyImageTool.h
//  NothingImages
//
//  Created by CADisplay on 2019/12/9.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CAEasyImageTool : NSObject

/**
 *  改变图片的大小
 *
 *  @param img     需要改变的图片
 *  @param newsize 新图片的大小
 *
 *  @return 返回修改后的新图片
 */
+ (UIImage *)scaleToSize:(UIImage *)img size:(CGSize)newsize;
+ (UIImage*)changeColorWithimage:(UIImage *)img color:(UIColor*)color;
// 像素压缩，最大不能超过（如200k）
+ (UIImage *)compressImage:(UIImage *)image toMaxFileSize:(NSInteger)maxFileSize;
/// 文字
+ (UIImage *)addWatermarkInOriginImage:(UIImage *)originImage atPonit:(CGPoint)point WithText:(NSString *)string textSize:(CGFloat)textSize textColor:(UIColor *)textColor;
/**
 NSArray *points = @[NSStringFromCGPoint(CGPointMake(20, 20)), NSStringFromCGPoint(CGPointMake(40, 40))];
 NSArray *texts = @[@"2020", @"80"];
 NSArray *sizes = @[[NSNumber numberWithFloat:13], [NSNumber numberWithFloat:18]];
 NSArray *colors = @[[UIColor yellowColor], [UIColor purpleColor]];
 */
+ (UIImage *)addWatermarkInOriginImage:(UIImage *)originImage atPonits:(NSArray *)points WithTexts:(NSArray *)texts textSizes:(NSArray *)textSizes textColors:(NSArray *)textColors;

/// 图片
+ (UIImage *)addWatermarkInOriginImage:(UIImage *)originImage watermarkImage:(UIImage *)watermarkImage atPonit:(CGPoint)point;
+ (UIImage *)addWatermarkInOriginImage:(UIImage *)originImage watermarkImages:(NSArray *)watermarkImages atPonits:(NSArray *)points;

/// 文字 图片
+ (UIImage *)addWatermarkInOriginImage:(UIImage *)originImage watermarkImage:(UIImage *)watermarkImage atPonit:(CGPoint)point WithText:(NSString *)string testPonit:(CGPoint)textPonit textSize:(CGFloat)textSize textColor:(UIColor *)textColor;

@end

NS_ASSUME_NONNULL_END
