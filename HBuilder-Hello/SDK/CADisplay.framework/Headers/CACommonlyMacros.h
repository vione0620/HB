//
//  CACommonlyUsed.h
//  CADisplay
//
//  Created by CADisplay on 2019/11/23.
//

/*
 1. 颜色
 */
#define kRGBColorA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]//RGBA
#define kRGBColor(r, g, b) kRGBColorA((r), (g), (b), 255)//RGB
#define kRandomColor kRGBColor(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))//随机色
#define kColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]// rgb颜色转换（16进制->10进制）
#define kWhiteColor [UIColor whiteColor]
#define kBlackColor [UIColor blackColor]
#define kDarkGrayColor [UIColor darkGrayColor]
#define kLightGrayColor [UIColor lightGrayColor]
#define kGrayColor [UIColor grayColor]
#define kRedColor [UIColor redColor]
#define kGreenColor [UIColor greenColor]
#define kBlueColor [UIColor blueColor]
#define kCyanColor [UIColor cyanColor]
#define kYellowColor [UIColor yellowColor]
#define kMagentaColor [UIColor magentaColor]
#define kOrangeColor [UIColor orangeColor]
#define kPurpleColor [UIColor purpleColor]
#define kBrownColor [UIColor brownColor]
#define kClearColor [UIColor clearColor]

// k常见颜色
#define k_BlackColor kColorFromRGB(0x333333)
#define k_GrayColor  kColorFromRGB(0x999999)
#define k_Gray_BgButtonColor kColorFromRGB(0xd1d1d1)
#define k_GreenColor kColorFromRGB(0x30c1ce)
#define k_BgColor  kColorFromRGB(0xf1f1f1)
#define k_LineColor  kColorFromRGB(0xe5e5e5)


/*
 2. 打印
 */
#ifdef DEBUG
#define kLog(...) NSLog(@"\n打印结果:\n %s    第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else
#define kLog(...)
#endif

#define kLogFunc  NSLog(@"方法名:\n %s", __func__);//只打印函数名称
#define kLogResponseObject kLog(@"%@",responseObject);
#define kLogError kLog(@"%@",error);
#define kNSHomeDirectory kLog(@"%@",NSHomeDirectory());


/*
 3. 单利
 */
//单例化一个类
#if __has_feature(objc_arc)//ARC

#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(classname) \
\
+ (classname *)shared##classname;

#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
static dispatch_once_t pred; \
dispatch_once(&pred, ^{ shared##classname = [[classname alloc] init]; }); \
return shared##classname; \
}

#else//MRC

#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(classname) \
\
+ (classname *)shared##classname;

#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
static dispatch_once_t pred; \
dispatch_once(&pred, ^{ shared##classname = [[classname alloc] init]; }); \
return shared##classname; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return self; \
} \
\
- (id)retain \
{ \
return self; \
} \
\
- (NSUInteger)retainCount \
{ \
return NSUIntegerMax; \
} \
\
- (oneway void)release \
{ \
} \
\
- (id)autorelease \
{ \
return self; \
}

#endif


/*
 4.字体
 */
/*
#define kFontName  @"PingFangSC-Medium"
#define kSystemFontWithSize(R)  [UIFont fontWithName: kFontName size: R]

// 固定字体
#define kFont(float) kSystemFontWithSize(float)
// 可以适配的字体
#define kAdaptFont(float) kSystemFontWithSize(kAdapted_Width(float))
*/

// 字体大小适应
#define kFont(float) [UIFont systemFontOfSize:float]
#define kBoldFont(float) [UIFont boldSystemFontOfSize:float]
#define kFont_13 kFont(13)
#define kFont_14 kFont(14)
#define kFont_15 kFont(15)
#define kFont_17 kFont(17)
#define kFont_20 kFont(20)


/*
 5.尺寸 + 版本
 */
#define IOS11   @available(iOS 11.0, *)


// 尺寸
#define kScreen_Width          ([UIScreen mainScreen].bounds.size.width)
#define kScreen_Height         ([UIScreen mainScreen].bounds.size.height)
#define kStatusBar_Height      [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavigationBar_Height  self.navigationController.navigationBar.frame.size.height
#define kHeight_64             (kStatusBar_Height + kNavigationBar_Height)
#define kTabBar_Height         (IPhoneX ? 83.f : 49.f)
#define kScreen_Bounds         [UIScreen mainScreen].bounds
#define kShowView_Height       (Screen_Height - kHeight_64 - kTabBar_Height)

// 适配
// 现在产品设计稿有以iPhone6s为基准的
#define kScreenWidthRatio      (kScreen_Width / 375.0)
#define kScreenHeightRatio     (kScreen_Width / 375.0)//(kScreen_Height / 667.0)-适配ihopneX以屏幕宽度比例为准
#define kAdapted_Width(x)      (ceilf((x) * kScreenWidthRatio))
#define kAdapted_Height(x)     (ceilf((x) * kScreenHeightRatio))
#define kMarginWidth           kAdapted_Width(8)
#define kHeight                kAdapted_Height(8)
#define kLineViewHeight        0.5

/*
 round：如果参数是小数，则求本身的四舍五入。
 ceil：如果参数是小数，则求最小的整数但不小于本身.
 floor：如果参数是小数，则求最大的整数但不大于本身.
 */

/*
 6.缩写
 */
// 获取图片资源（本地）
#define kGetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]
#define kString(object) [NSString stringWithFormat:@"%@",object]

// 系统一些常用缩写
#define kNotificationCenter           [NSNotificationCenter defaultCenter]
#define kApplication                  [UIApplication sharedApplication]
#define kKeyWindow                    [UIApplication sharedApplication].keyWindow
#define kAppDelegate                  [UIApplication sharedApplication].delegate

#define UserDefaults                    [NSUserDefaults standardUserDefaults]
#define kSetUserDefaults(value,key)   [UserDefaults setObject:value forKey:key];\
[UserDefaults synchronize]
#define kGetUserDefaults(key)         [UserDefaults objectForKey:key]
#define kRemoveUserDefaults(key)      [UserDefaults removeObjectForKey:key]
#define kNotificationCenter           [NSNotificationCenter defaultCenter]
#define kNavigationView               self.navigationController.view

/*
 7. 弱引用/强引用
 */
#define kWeakSelf(type)    __weak typeof(type) weak##type = type;
#define kStrongSelf(type)  __strong typeof(type) type = weak##type;


/*
 8. 圆角、边框
 */
#define kViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]


/*
 9. 提示框
 */
//9.1AlertView
#define  kAVShow(Message)   [[[UIAlertView alloc]initWithTitle:@"提示" message:Message delegate:nil cancelButtonTitle:@"好的" otherButtonTitles:nil, nil] show]

//9.2UIAlertController的宏定义
//参数中的 MESSAGE是提示内容,  kVC是UIViewController就是你当前操作的页面,调用时直接传递 self
#define kACShow(Message,kVC) \
UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"温馨提示" message:Message preferredStyle:UIAlertControllerStyleAlert]; \
UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]; \
[alertController addAction:okAction]; \
[kVC presentViewController:alertController animated:YES completion:nil];


/*
 10. 判断字符串、数组、字典、对象为空
 */
//字符串是否为空
#define kStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length] < 1 ? YES : NO )
//数组是否为空
#define kArrayIsEmpty(array) ((array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0) ? YES : NO)
//字典是否为空
#define kDictIsEmpty(dic) ((dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0) ? YES : NO)
//是否是空对象
#define kObjectIsEmpty(_object) ((_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0)) ? YES : NO)


/*
 11. 获取一些路径
 */
//获取沙盒Document路径
#define kDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
//获取沙盒temp路径
#define kTempPath NSTemporaryDirectory()
//获取沙盒Cache路径
#define kCachePath [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]
//Library/Caches 文件路径
#define kFilePath ([[NSFileManager defaultManager] URLForDirectory:NSCachesDirectory inDomain:NSUserDomainMask appropriateForURL:nil create:YES error:nil])




#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CACommonlyMacros : NSObject

@end

NS_ASSUME_NONNULL_END
