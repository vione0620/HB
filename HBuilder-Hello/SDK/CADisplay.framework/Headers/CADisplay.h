//
//  CADisplay.h
//  CADisplaySDK
// $(ARCHS_STANDARD)
//  Created by CADisplay on 2019/9/23.
//

#import <Foundation/Foundation.h>
#import "CASucceededView.h"

// ## 基础类
#import "CABaseConfig.h"
#import "CAComConfig.h"
#import "CAComManager.h"
#import "CABaseModel.h"
#import "CAResponseModel.h"
// 加密解密
#import "CABaseEncryption.h"
// 系统功能
#import "CASPlayInfoManager.h"
#import "CASPlayMapInfoManager.h"
#import "CAEasyImageTool.h"
// ## UI类
// 自动图片缓存，单例，有缓存可先从缓存获取显示
#import "CACacheCustomADTool.h"
// 简易toastView
#import "CAToastActionView.h"

// 圆圈倒计时倒计时
#import "CADisplayCountDownView.h"
#import "CACountDownTool.h"
#import "CACustomTimer.h"


// 2个主题方式，推荐使用EasyDark
// EasyDark简单手动赋值暗黑模式
#import "CAEasyDarkManager.h"

// 一键全局统一换主题，未全，推荐使用EasyDark
#import "CAThemeColor.h"
#import "CAThemeConfig.h"

//! Project version number for CADisplaySDK.
FOUNDATION_EXPORT double CADisplaySDKVersionNumber;

//! Project version string for CADisplaySDK.
FOUNDATION_EXPORT const unsigned char CADisplaySDKVersionString[];




