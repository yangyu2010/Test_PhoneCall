//
//  InterfaceCoin.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "InterfaceCoin.h"

@implementation InterfaceCoin

/// 5.1、购买金币接口
+ (void)userBuyCoinsWithProductId:(NSString *)productId
                    transactionId:(NSString *)transactionId
                             earn:(NSInteger)earn
                       completion:(ActionCompleteBlock)completion {
    
    NSDictionary *body = @{
                           @"productId": productId,
                           @"platform":@1,
                           @"transactionId": transactionId,
                           @"earn": [NSNumber numberWithInteger:earn],
                           };
    
    [InterfaceManager startAuthRequest:API_USER_BUYCOINS describe:API_USER_BUYCOINS body:body completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
    
}


@end
