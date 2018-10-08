//
//  PCUser.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PCUser : NSObject

/// 用户 token
@property (nonatomic, copy, class, readonly) NSString *authToken;
/// 游客ID
@property (nonatomic, copy, class, readonly) NSString *userId;
/// 用户账号或游客UUID
@property (nonatomic, copy, class, readonly) NSString *account;

/// 用户类型
/// Eg:
/// -1-游客用户
/// 0-普通用户
/// 1-第三方用户
@property (nonatomic, assign, class, readonly) int userType;

/// 游客金币数
@property (nonatomic, assign, class, readonly) int userCoins;

/// 原始交易ID
@property (nonatomic, copy, class, readonly) NSString *transationId;

/// 最大号码个数
@property (nonatomic, assign, class, readonly) int maxNumberCount;

/// 订阅产品ID
@property (nonatomic, copy, class, readonly) NSString *productId;

/// 套餐价格
@property (nonatomic, assign, class, readonly) double productPrice;

/// 号码详情
/// phoneNumber    手机号码
/// countryIso    国家ISO码
/// countryCode    国家电话区码
@property (nonatomic, strong, class, readonly) NSArray <NSDictionary *> *userNumbers;

/// 是否是VIP
@property (nonatomic, assign, class, readonly) BOOL isVip;

/// VIP有效期
@property (nonatomic, copy, class, readonly) NSString *vipEndTime;




#pragma mark- Action

/// 保存用户信息到沙盒中
+ (void)saveUserInfo:(NSDictionary *)userInfo;

/// 更新用户信息
+ (void)updateUserInfo:(NSDictionary *)userInfo;

/// 获取整个用户信息
+ (NSDictionary *)getUserInfoDict;

@end

NS_ASSUME_NONNULL_END
