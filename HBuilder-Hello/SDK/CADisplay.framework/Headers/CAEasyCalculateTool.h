//
//  CAEasyCalculateTool.h
//  CADisplay
//
//  Created by apple on 2021/1/29.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAEasyCalculateTool : UICollectionViewLayout

///  total总数量  rowHeight行高 计算内容高度，只算行数和高度  内容有上下下边距可以算在高度里
+ (CGFloat)calculateContentHeightWithColumn:(NSInteger)column rowHeight:(CGFloat)rowHeight total:(NSInteger)total;

@end

NS_ASSUME_NONNULL_END
