//
//  WKWebView+CAEasyJS.h
//  CADisplay
//
//  Created by apple on 2021/1/12.
//

#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WKWebView (CAEasyJS)

- (void)setWebViewUAgent:(NSString *)agent;
- (void)evaluateJavaScriptByClassName:(NSString *)className addMethod:(NSString *)mothod completionHandle:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptById:(NSString *)Id addMethod:(NSString *)mothod completionHandle:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptDeleteByClassName:(NSString *)className completionHandle:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptDeleteById:(NSString *)Id completionHandle:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptTextByClassName:(NSString *)className text:(NSString *)text completionHandle:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptTextById:(NSString *)Id text:(NSString *)text completionHandle:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptGetTextByClassName:(NSString *)className completionHandle:(void (^ _Nullable)(_Nullable id text, NSError * _Nullable error))completionHandler;
- (void)evaluateJavaScriptGetTextById:(NSString *)Id completionHandle:(void (^ _Nullable)(_Nullable id text, NSError * _Nullable error))completionHandler;
/// 图片URL
- (void)evaluateJavaScriptGetAllImageUrlWithCompletionHandle:(void (^ _Nullable)( NSArray * _Nullable result, NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
