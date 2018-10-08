//
//  InterfaceCoin.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  5、金币相关接口

#import <Foundation/Foundation.h>
#import "InterfaceManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface InterfaceCoin : NSObject

/// 5.1、购买金币接口
+ (void)userBuyCoinsWithProductId:(NSString *)productId
                    transactionId:(NSString *)transactionId
                             earn:(NSInteger)earn
                       completion:(ActionCompleteBlock)completion;

@end

NS_ASSUME_NONNULL_END
