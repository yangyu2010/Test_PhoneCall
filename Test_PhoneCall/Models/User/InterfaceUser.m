//
//  InterfaceUser.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "InterfaceUser.h"
#import <MJDevice/MJDevice.h>

#import "PCUser.h"

@implementation InterfaceUser

/// 2.1 登录接口
+ (void)userLoginCompletion:(ActionCompleteBlock)completion {
    
    NSString *loginWay = @"-1";
    NSString *userType = @"-1";

    NSString *account = @"49BAD3A2-C3D5-46B3-8ACE-2D66CE005F93";
    NSString *password = @"18D1AEB7-02CA-46F5-BCD5-7EAC364CC54F";
    
    NSDictionary *body = @{
                           @"loginWay": loginWay,
                           @"userType": userType,
                           @"account": account,
                           @"password": password,
                           };
    
    [InterfaceManager startRequest:API_USER_LOGIN describe:API_USER_LOGIN body:body header:nil completion:^(BOOL isSucceed, NSString *message, id data) {
        
        if (isSucceed) {
            [PCUser saveUserInfo:data];
        }
        
        completion? completion(isSucceed, message, data) : 0;
    }];
    
    
}


/// 2.2 同步信息接口(需授权)
+ (void)userSyncDataCompletion:(ActionCompleteBlock)completion {
    
    [InterfaceManager startAuthRequest:API_USER_SYNCDATA describe:API_USER_SYNCDATA body:nil completion:^(BOOL isSucceed, NSString *message, id data) {
        if (isSucceed) {
            [PCUser updateUserInfo:data];
        }
        completion? completion(isSucceed, message, data) : 0;

    }];
}



/// 2.3、近期账单列表(需授权)
+ (void)userRecentBillsCompletion:(ActionCompleteBlock)completion {
    
    [InterfaceManager startAuthRequest:API_USER_RECENTBILLS describe:API_USER_RECENTBILLS body:nil completion:^(BOOL isSucceed, NSString *message, id data) {
        
        
        
    }];
}








@end
