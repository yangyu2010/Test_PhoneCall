//
//  InterfaceNumber.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "InterfaceNumber.h"

@implementation InterfaceNumber

/// 3.1、热门电话列表
+ (void)numberHotList:(NSInteger)page
           completion:(ActionCompleteBlock)completion {
    
    NSDictionary *body = @{
                           @"page": [NSNumber numberWithInteger:page],
                           };
    
    [InterfaceManager startRequest:API_NUMBER_HOTLIST describe:API_NUMBER_HOTLIST body:body header:nil completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
}


/// 3.2、资费详情接口
/// chargeType 1表示短信资费; 2表示语音资费
+ (void)numberChargeDetail:(NSInteger)chargeType
                completion:(ActionCompleteBlock)completion {
    
    
    NSDictionary *body = @{
                           @"chargeType": [NSNumber numberWithInteger:chargeType],
                           };
    
    [InterfaceManager startRequest:API_NUMBER_CHARGEDETAIL describe:API_NUMBER_CHARGEDETAIL body:body header:nil completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
    
}


/// 3.3、获取国家列表
+ (void)numberCountryListCompletion:(ActionCompleteBlock)completion {
    
    [InterfaceManager startRequest:API_NUMBER_COUNTRYLIST describe:API_NUMBER_COUNTRYLIST body:nil header:nil completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
}

/// 3.4、获取区域列表
+ (void)numberAreaListInCountry:(NSString *)countryCode
                     completion:(ActionCompleteBlock)completion {
    
    
}

/// 3.5、获取号码列表
+ (void)numberListInCountryOrArea:(NSString *)countryCode
                         areaCode:(NSString *)areaCode
                       completion:(ActionCompleteBlock)completion {
    
    
}


/// 3.6、用户购买号码(需授权)
+ (void)numberuserBuyOneWithNumber:(NSString *)phoneNumber
                       countryCode:(NSString *)countryCode
                          areaCode:(NSString *)areaCode
                        completion:(ActionCompleteBlock)completion {
    
    NSDictionary *body = @{
                           @"phoneNumber": phoneNumber,
                           @"countryCode": countryCode,
                           @"areaCode": areaCode,
                           };
    
    [InterfaceManager startAuthRequest:API_NUMBER_USERBUYONE describe:API_NUMBER_USERBUYONE body:body completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
}


/// 3.7、设置主号码接口(需授权)
+ (void)numberSetAsMain:(NSString *)phoneNumber
             completion:(ActionCompleteBlock)completion {
    
    NSDictionary *body = @{
                           @"phoneNumber": phoneNumber,
                           };
    
    [InterfaceManager startAuthRequest:API_NUMBER_SETASMAIN describe:API_NUMBER_SETASMAIN body:body completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
}

@end
