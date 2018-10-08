//
//  InterfacePayment.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "InterfacePayment.h"

@implementation InterfacePayment

/// 6.1、订阅创建接口(需授权)
+ (void)subscribeCreateWithUser:(NSString *)productId
                  transactionId:(NSString *)transactionId
                      comletion:(ActionCompleteBlock)completion {
    
}

/// 6.2、订阅延长过期时间(需授权)
+ (void)subscribeExtendExpiresTime:(NSString *)productId
                     transactionId:(NSString *)transactionId
                         comletion:(ActionCompleteBlock)completion {
    
}

/// 6.3、订阅切换绑定用户(需授权)
+ (void)subscribeBindToCurUser:(NSString *)productId
                 transactionId:(NSString *)transactionId
                     comletion:(ActionCompleteBlock)completion {
    
}

/// 6.4、用户切换订阅(需授权)
+ (void)subscribeUserChangeSubscribe:(NSString *)productId
                       transactionId:(NSString *)transactionId
                           comletion:(ActionCompleteBlock)completion {
    
}

@end
