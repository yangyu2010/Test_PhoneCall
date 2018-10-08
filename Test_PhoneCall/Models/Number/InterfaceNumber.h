//
//  InterfaceNumber.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  3、号码相关接口

#import <Foundation/Foundation.h>
#import "InterfaceManager.h"


NS_ASSUME_NONNULL_BEGIN

@interface InterfaceNumber : NSObject

/// 3.1、热门电话列表
+ (void)numberHotList:(NSInteger)page
           completion:(ActionCompleteBlock)completion;

/// 3.2、资费详情接口
/// chargeType 1表示短信资费; 2表示语音资费
+ (void)numberChargeDetail:(NSInteger)chargeType
                completion:(ActionCompleteBlock)completion;

/// 3.3、获取国家列表
+ (void)numberCountryListCompletion:(ActionCompleteBlock)completion;

/// 3.4、获取区域列表
+ (void)numberAreaListInCountry:(NSString *)countryCode
                     completion:(ActionCompleteBlock)completion;

/// 3.5、获取号码列表
+ (void)numberListInCountryOrArea:(NSString *)countryCode
                         areaCode:(NSString *)areaCode
                       completion:(ActionCompleteBlock)completion;

/// 3.6、用户购买号码(需授权)
+ (void)numberuserBuyOneWithNumber:(NSString *)phoneNumber
                         countryCode:(NSString *)countryCode
                          areaCode:(NSString *)areaCode
                       completion:(ActionCompleteBlock)completion;

/// 3.7、设置主号码接口(需授权)
+ (void)numberSetAsMain:(NSString *)phoneNumber
             completion:(ActionCompleteBlock)completion;




@end

NS_ASSUME_NONNULL_END
