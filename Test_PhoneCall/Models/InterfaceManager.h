//
//  InterfaceManager.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ActionProtocol.h>

/// 2.1 登录接口
static NSString *const API_USER_LOGIN                       = @"User.login";
/// 2.2、同步信息接口(需授权)
static NSString *const API_USER_SYNCDATA                    = @"User.syncData";
/// 2.3、近期账单列表(需授权)
static NSString *const API_USER_RECENTBILLS                 = @"User.recentBills";


/// 3.1、热门电话列表
static NSString *const API_NUMBER_HOTLIST                   = @"Number.hotList";
/// 3.2、资费详情接口
static NSString *const API_NUMBER_CHARGEDETAIL              = @"Number.chargeDetail";
/// 3.3、获取国家列表
static NSString *const API_NUMBER_COUNTRYLIST               = @"Number.countryList";
/// 3.4、获取区域列表
static NSString *const API_NUMBER_AREALISTINCOUNTRY         = @"Number.areaListInCountry";
/// 3.5、获取号码列表
static NSString *const API_NUMBER_NUMBERLISTINCOUNTRYORAREA = @"Number.numberListInCountryOrArea";
/// 3.6、用户购买号码(需授权)
static NSString *const API_NUMBER_USERBUYONE                = @"Number.userBuyOne";
/// 3.7、设置主号码接口(需授权)
static NSString *const API_NUMBER_SETASMAIN                 = @"Number.setAsMain";


/// 4.1、获取号码第三方授权(需授权)
static NSString *const API_NUMBER_FETCHACCESSTOKEN          = @"Number.fetchAccessToken";
/// 4.2、号码绑定设备推送(需授权)
static NSString *const API_NUMBER_BINDDEVICE                = @"Number.bindDevice";
/// 4.3、通话前置检查(需授权)
static NSString *const API_NUMBER_VOICEPRECHECK             = @"Number.voicePreCheck";
/// 4.4、通话结束记录(需授权，后面考虑是否删除)
static NSString *const API_NUMBER_VOICEFINISHED             = @"Number.voiceFinished";
/// 4.5、号码发送短信(需授权)
static NSString *const API_NUMBER_SENDMESSAGE               = @"Number.sendMessage";
/// 4.6、获取未接收短信列表(需授权)
static NSString *const API_NUMBER_GETNEWMESSAGELIST         = @"Number.getNewMessageList";
/// 4.7、标记短信为已接收(需授权)
static NSString *const API_NUMBER_MESSAGESRECEIVED          = @"Number.messagesReceived";


/// 5.1、购买金币接口
static NSString *const API_USER_BUYCOINS                    = @"User.buyCoins";


/// 6.1、订阅创建接口(需授权)
static NSString *const API_SUBSCRIBE_CREATEWITHUSER         = @"Subscribe.createWithUser";
/// 6.2、订阅延长过期时间(需授权)
static NSString *const API_SUBSCRIBE_EXTENDEXPIRESTIME      = @"Subscribe.extendExpiresTime";
/// 6.3、订阅切换绑定用户(需授权)
static NSString *const API_SUBSCRIBE_BINDTOCURUSER          = @"Subscribe.bindToCurUser";
/// 6.3、6.4、用户切换订阅(需授权)
static NSString *const API_SUBSCRIBE_USERCHANGESUBSCIBE     = @"Subscribe.userChangeSubscribe";


NS_ASSUME_NONNULL_BEGIN

@interface InterfaceManager : NSObject


/// 授权请求
+ (void)startAuthRequest:(NSString *)action
                describe:(NSString *)describe
                    body:(nullable NSDictionary *)body
              completion:(ActionCompleteBlock)completion;

/// 普通请求 未授权
+ (void)startRequest:(NSString *)action
            describe:(NSString *)describe
                body:(nullable NSDictionary *)body
              header:(nullable NSDictionary *)header
          completion:(ActionCompleteBlock)completion;


@end

NS_ASSUME_NONNULL_END
