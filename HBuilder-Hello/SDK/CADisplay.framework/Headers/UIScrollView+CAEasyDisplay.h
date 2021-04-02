//
//  UIScrollView+CAEasyDisplay.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIScrollView (CAEasyDisplay)

/// 上滑停止在顶部
- (BOOL)stopWhenUpCATop;
/// 下滑停止在顶部
- (BOOL)stopWhenDownCATop;

/// 停止在底部
- (BOOL)stopWhenUpCABottom;
/// 停止在底部
- (BOOL)stopWhenDownCABottom;

/// 停止在左
- (BOOL)stopWhenLeftSlideCALeft;
/// 停止在左
- (BOOL)stopWhenRightSlideCALeft;

/// 停止在右
- (BOOL)stopWhenLeftSlideCARight;
/// 停止在右
- (BOOL)stopWhenRightSlideCARight;

@end

NS_ASSUME_NONNULL_END
