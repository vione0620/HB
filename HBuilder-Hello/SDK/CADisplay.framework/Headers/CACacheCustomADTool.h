//
//  CACacheCustomADTool.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CACacheCustomADTool : NSObject
+ (CACacheCustomADTool *)sharedInstanceWithRootName:(NSString *)rootName;
+ (CACacheCustomADTool *)sharedInstance;
- (instancetype)initWithRootName:(NSString *)rootName;
/// 返回是否加载过
- (BOOL)setImageUrlStr:(NSArray *)images identity:(NSString *)identity;
- (UIImage *)getCacheImageWithIndex:(NSInteger)index;
- (NSArray *)getCacheImageIndexes;
@end

NS_ASSUME_NONNULL_END
