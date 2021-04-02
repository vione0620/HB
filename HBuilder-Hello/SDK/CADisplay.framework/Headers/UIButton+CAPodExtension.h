//
//  UIButton+PodExtension.h
//  DJAppCom
//
//  Created by CADisplay on 2019/5/14.
//  Copyright © 2019 gyd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (CAPodExtension)

/**
 暂时只支持UIControlStateNormal状态下的图片设置
 */
@property (nonatomic, copy) IBInspectable NSString *loadImage;
@property (nonatomic, copy) IBInspectable NSString *loadHlImage;
@property (nonatomic, copy) IBInspectable NSString *loadSelImage;
@property (nonatomic, copy) IBInspectable NSString *loadDisImage;
@property (nonatomic, copy) IBInspectable NSString *loadBgImage;
@property (nonatomic, copy) NSString *loadModuleClassName;
- (void)awakeFromNibAfterAspect;

@end

NS_ASSUME_NONNULL_END
