//
//  UIImageView+PodExtension.h
//  DJAppCom
//
//  Created by CADisplay on 2019/5/13.
//  Copyright © 2019 gyd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (CAPodExtension)

@property (nonatomic, copy) IBInspectable NSString *loadImage;
@property (nonatomic, copy) IBInspectable NSString *loadHlImage;
@property (nonatomic, copy) NSString *loadModuleClassName;

- (void)awakeFromNibAfterAspect;

@end

NS_ASSUME_NONNULL_END
