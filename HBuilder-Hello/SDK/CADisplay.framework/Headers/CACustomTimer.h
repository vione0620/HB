//
//  CACustomTimer.h
//  CADisplay
//
//  Created by CADisplay on 2019/11/20.
//

#import <Foundation/Foundation.h>

@protocol CACustomTimerDelegate <NSObject>

- (void)ca_customTimerRuing;

@end

NS_ASSUME_NONNULL_BEGIN

@interface CACustomTimer : NSObject

@property (nonatomic, weak) id <CACustomTimerDelegate> delegate;
// default 60
@property (nonatomic, assign) NSTimeInterval ti;
// default YES
@property (nonatomic, assign) BOOL repeats;

- (instancetype)initWithTimeInterval:(NSTimeInterval)ti;
- (void)begin;
- (void)stop;
- (void)pause;
- (void)resume;

@end

NS_ASSUME_NONNULL_END
