//
//  InterfacePhone.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  4、电话和短信接口相关

#import <Foundation/Foundation.h>
#import "InterfaceManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface InterfacePhone : NSObject

/// 4.1、获取号码第三方授权(需授权)
+ (void)numberFetchAccessToken:(NSString *)phoneNumber
                    completion:(ActionCompleteBlock)completion;

/// 4.2、号码绑定设备推送(需授权)
+ (void)numberBindDeviceWithPushId:(NSString *)devicePushId
                      phoneNumbers:(NSString *)phoneNumbers
                    completion:(ActionCompleteBlock)completion;

/// 4.3、通话前置检查(需授权)
+ (void)numberVoicePreCheckFormNumber:(NSString *)fromNumber
                             toNumber:(NSString *)toNumber
                           completion:(ActionCompleteBlock)completion;

/// 4.4、通话结束记录(需授权，后面考虑是否删除)
+ (void)numberVoiceFinishedFormNumber:(NSString *)fromNumber
                             toNumber:(NSString *)toNumber
                      formNumberCoins:(NSInteger)formNumberCoins
                        toNumberCoins:(NSInteger)toNumberCoins
                             talkTime:(NSInteger)talkTime
                           completion:(ActionCompleteBlock)completion;

/// 4.5、号码发送短信(需授权)
+ (void)numberSendMessageFormNumber:(NSString *)fromNumber
                           toNumber:(NSString *)toNumber
                            content:(NSString *)content
                        countryCode:(NSString *)countryCode
                         countryIso:(NSString *)countryIso
                         completion:(ActionCompleteBlock)completion;

/// 4.6、获取未接收短信列表(需授权)
+ (void)numberGetNewMessageList:(NSString *)phoneNumbers
                     completion:(ActionCompleteBlock)completion;


/// 4.7、标记短信为已接收(需授权)
+ (void)numberMessagesReceived:(NSString *)messageIds
                    completion:(ActionCompleteBlock)completion;



@end

NS_ASSUME_NONNULL_END
