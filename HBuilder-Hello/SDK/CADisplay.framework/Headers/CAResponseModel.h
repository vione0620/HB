//
//  EMResponseModel.h
//  DJAppCom
//
//  Created by CADisplay on 2019/5/22.
//  Copyright © 2019 gyd. All rights reserved.
//

#import "CABaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CAResponseModel : CABaseModel

@property (nonatomic, assign) NSInteger error;
@property (nonatomic, copy) NSString *msg;

@end

NS_ASSUME_NONNULL_END
