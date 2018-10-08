//
//  InterfaceUser.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//  2、用户相关接口

#import <Foundation/Foundation.h>
#import "InterfaceManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface InterfaceUser : NSObject

/// 2.1 登录接口
+ (void)userLoginCompletion:(ActionCompleteBlock)completion;

/// 2.2 同步信息接口(需授权)
+ (void)userSyncDataCompletion:(ActionCompleteBlock)completion;

/// 2.3、近期账单列表(需授权)
+ (void)userRecentBillsCompletion:(ActionCompleteBlock)completion;


@end

NS_ASSUME_NONNULL_END
