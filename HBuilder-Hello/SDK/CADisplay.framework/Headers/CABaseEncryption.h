//
//  CABaseEncryption.h
//  CADisplay
//
//  Created by CADisplay on 2018/9/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CABaseEncryption : NSObject
/**
 加密
 
 @param plainText 明文
 @return 密文
 */
+(NSString *)AES128Encrypt:(NSString *)plainText;

/**
 解密
 
 @param encryptText 密文
 @return 明文
 */
+(NSString *)AES128Decrypt:(NSString *)encryptText;
@end

NS_ASSUME_NONNULL_END
