//
//  EMComManager.h
//  ESportsCom
//
//  Created by CADisplay on 2019/4/3.
//
// 项目配置信息
#define kCAAppBaseUrl     @"http://www.baidu.com"

#import <Foundation/Foundation.h>
#import "CAComConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface CAComManager : NSObject

+ (instancetype)shareManager;

+ (NSString *)baseUrl;

@property (nonatomic, strong, readonly) CAComConfig *config;

/**
 在APP启动时，调用该方法实现全局配置
 */
- (void)initWithConfig:(CAComConfig *)config;


@end

NS_ASSUME_NONNULL_END
