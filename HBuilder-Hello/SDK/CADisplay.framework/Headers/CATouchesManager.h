//
//  CATouchesManager.h
//  CADisplay
//
//  Created by CADisplay on 2019/12/3.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, CATouchesSlidingState) {
    CATouchesSlidingStatePossible,
    CATouchesSlidingStateBegan,
    CATouchesSlidingStateChanged,
    CATouchesSlidingStateEnded,
    CATouchesSlidingStateCancelled,
    CATouchesSlidingStateFailed
};

typedef NS_ENUM(NSInteger, CAEasyTouchesSlidingState) {
    CAEasyTouchesSlidingStateBegan,
    CAEasyTouchesSlidingStateChanged,
    CAEasyTouchesSlidingStateEnded
};
@protocol CATouchesSlidingDelegate <NSObject>

- (void)CATouchesSliding:(CATouchesSlidingState)state point:(CGPoint)point;
- (void)CAEasyTouchesSliding:(CAEasyTouchesSlidingState)state point:(CGPoint)point;
@end
NS_ASSUME_NONNULL_BEGIN

@interface CATouchesManager : NSObject
// CATouchesSlidingDelegate 滑动，开始位置为(0,0)
- (instancetype)initSlidingWithTarget:(UIControl *)target delegate:(id)delegate;

- (instancetype)initEasySlidingWithTarget:(UIControl *)target delegate:(id)delegate;
@end

NS_ASSUME_NONNULL_END
