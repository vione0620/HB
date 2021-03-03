//
//  CAEasyZoomPicturesView.h
//  CADisplay
//
//  Created by CADisplay on 2019/12/9.
//

#import <UIKit/UIKit.h>
@protocol CAEasyShowImageViewDelegate <NSObject>

@optional
- (void)CAEasyBackgroundViewDidTouch;

@end
NS_ASSUME_NONNULL_BEGIN

@interface CAEasyZoomPicturesView : UIView
@property (nonatomic, weak) id <CAEasyShowImageViewDelegate> delegate;
@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) UIView *sView;
@property (nonatomic, assign) CGRect originRect;
///默认YES
@property (nonatomic, assign) BOOL canZoom;
///时长 默认0.5
@property (nonatomic, assign) CGFloat duration;
///缩小规模 默认1.0
@property (nonatomic, assign) CGFloat minScale;
///放大规模 默认2.0
@property (nonatomic, assign) CGFloat maxScale;
- (void)colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a;

/// 下面每两个为一组合使用方法
- (void)showInSuperView:(UIView *)view;
- (void)dismiss;

///
- (void)dismissWithFrame:(CGRect)rect;
- (void)showWithInSuperView:(UIView *)view frame:(CGRect)rect;

/// 设置 originRect  和  sView
- (void)dismissUseDefaultFrame;
- (void)showUseDefaultFrameAndSuperView;
@end

NS_ASSUME_NONNULL_END
