//
//  CASPlayVoiceManager.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/7.
// 系统语音

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CASPlayVoiceLanguageType) {
    CASPlayVoiceLanguageChinese = 0, //中文
    CASPlayVoiceLanguageZhHK, //中文香港
    CASPlayVoiceLanguageZhTW, //中文(台湾)
    CASPlayVoiceLanguageEsES, //西班牙
    CASPlayVoiceLanguageEnGB, //英语(英国)
    CASPlayVoiceLanguageEnUS, //英语(美国)
    CASPlayVoiceLanguageEnZA,
    CASPlayVoiceLanguageItIT, //意大利
    CASPlayVoiceLanguageDeDE, //德国
    CASPlayVoiceLanguageFrFR, //法国
    CASPlayVoiceLanguageJaJP
    
};

NS_ASSUME_NONNULL_BEGIN

@interface CASPlayVoiceManager : NSObject
@property (nonatomic, assign) CASPlayVoiceLanguageType languageType;
@property (nonatomic, copy) NSString *language; // Default = @"zh-CN";
@property (nonatomic, assign) float speed; // Values are pinned between AVSpeechUtteranceMinimumSpeechRate and AVSpeechUtteranceMaximumSpeechRate. Default = 1
@property (nonatomic, assign) float volume; // [0-1] Default = 1
@property (nonatomic, assign) float tone;  // [0.5 - 2] Default = 1
+ (instancetype)share;
- (void)setVoiceDelegate:(id)delegate;
- (void)playWithContent:(NSString *)content;
- (void)stop;
- (void)stopImmediate;
- (void)pause;
- (void)pauseImmediate;
- (void)continue;

@end

NS_ASSUME_NONNULL_END
