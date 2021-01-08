//
//  CABaseConfig.h
//  CADisplay
//
//  Created by CADisplay on 2019/10/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CACommonlyMacros.h"
NS_ASSUME_NONNULL_BEGIN

//基础配置

#define kIphoneX [CABaseConfig ca_isIphoneX]
#define kYOffset [CABaseConfig ca_YOffset]
#define kBottomOffset [CABaseConfig ca_bottomOffset]
#define kNavHeight [CABaseConfig ca_naviHeight]
#define kTabbarHeight [CABaseConfig ca_tabbarHeight]
#define kStatusBarHeight [CABaseConfig ca_statusBarHeight]

#define kIsSimulator [CABaseConfig ca_isSimulator]

#define kWSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

typedef NS_ENUM(NSUInteger, CABaseConfigVersion) {
    CABaseConfigVersionUnknown,//版本未知
    CABaseConfigVersionSame,//版本相同 不用更新
    CABaseConfigVersionClose,//当前版本高 不需要更新
    CABaseConfigVersionLow//当前版本低 ，需要更新
};


@interface CABaseConfig : NSObject

@property (class, readonly) CABaseConfig *shared;
/// 线上版本号
+ (NSString *)ca_getCurrentVersion:(NSString *)appleID;
+ (NSString *)ca_crrentVersion;
/// 是否有新版本可更新
+ (BOOL)ca_newCurrentVersion:(NSString *)appleID;
/// 异步返回主线程
+ (void)ca_newCurrentVersion:(NSString *)appleID block:(void (^)(NSString *version, BOOL hasNew))block;
+ (void)ca_newForChinaCurrentVersion:(NSString *)appleID block:(void (^)(NSString * _Nonnull, BOOL))block;
/// 该方法适用于APP版本为1.0.0这种格式
+ (CABaseConfigVersion)ca_updateVerion:(NSString *)appleID;

/// 开始测试
+ (void)ca_private;
/// 测试
+ (BOOL)ca_testVersion;

+ (BOOL)ca_isIphoneX;
+ (CGFloat)ca_YOffset;
+ (CGFloat)ca_naviHeight;
+ (CGFloat)ca_bottomOffset;
+ (CGFloat)ca_tabbarHeight;
+ (CGFloat)ca_statusBarHeight;

+ (BOOL)ca_isSimulator;
+ (void)waiting:(CGFloat)seconds;
@end

NS_ASSUME_NONNULL_END
