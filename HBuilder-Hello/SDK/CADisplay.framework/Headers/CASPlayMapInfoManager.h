//
//  CASPlayMapInfoManager.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/7.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CASPlayMapInfoManager : NSObject
//判断是否已经超出中国范围
+ (BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;
//转GCJ-02
+ (CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;
@end

NS_ASSUME_NONNULL_END
