//
//  CACountDownTool.h
//  CADisplay
//
//  Created by CADisplay on 2019/11/20.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, CACountDownStatus) {
    CACountDownStatusStop,//停止
    CACountDownStatusRunning,//正在计时
    CACountDownStatusPause//暂停
};

NS_ASSUME_NONNULL_BEGIN

@interface CACountDownTool : NSObject
/// default 60
@property (nonatomic, assign) NSInteger secondsCount;

@property (nonatomic, assign) BOOL showZero;

@property (nonatomic, copy) void (^countDownBlock) (NSInteger currentSeconds);
@property (nonatomic, copy) void (^countDownDoneBlock) (void);

- (void)reset;
- (void)begin;
- (void)stop;

@end

NS_ASSUME_NONNULL_END
