//
//  PCUser.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "PCUser.h"

#define kUserInfoDict   @"kUserInfoDict"



@implementation PCUser

+ (NSString *)authToken {
    return [[self getUserInfoDict] objectForKey:@"authToken"];
}

+ (NSString *)userId {
    return [NSString stringWithFormat:@"%@", [[self getUserInfoDict] objectForKey:@"userId"]];
}

+ (NSString *)account {
    return [[self getUserInfoDict] objectForKey:@"account"];
}

+ (int)userType {
    return [[[self getUserInfoDict] objectForKey:@"userType"] intValue];
}

+ (int)userCoins {
    return [[[self getUserInfoDict] objectForKey:@"userCoins"] intValue];
}

+ (NSString *)transationId {
    return [[self getUserInfoDict] objectForKey:@"transationId"];
}

+ (int)maxNumberCount {
    return [[[self getUserInfoDict] objectForKey:@"maxNumberCount"] intValue];
}

+ (NSString *)productId {
    return [[self getUserInfoDict] objectForKey:@"productId"];
}

+ (double)productPrice {
    return [[[self getUserInfoDict] objectForKey:@"productPrice"] doubleValue];
}

+ (NSArray<NSDictionary *> *)userNumbers {
    return [[self getUserInfoDict] objectForKey:@"userNumbers"];
}

+ (BOOL)isVip {
    return [[[self getUserInfoDict] objectForKey:@"isVip"] boolValue];
}

+ (NSString *)vipEndTime {
    return [NSString stringWithFormat:@"%@", [[self getUserInfoDict] objectForKey:@"vipEndTime"]];
}


#pragma mark- Public
/**
 保存用户信息到沙盒中
 */
+ (void)saveUserInfo:(NSDictionary *)userInfo {
    if (userInfo == nil) {
        return ;
    }
    [self setObject:userInfo forKey:kUserInfoDict];
}

/// 更新用户信息
+ (void)updateUserInfo:(NSDictionary *)userInfo {
    NSMutableDictionary *mDict = [[NSMutableDictionary alloc] initWithDictionary:[self getUserInfoDict]];
    [mDict addEntriesFromDictionary:userInfo];
    [self saveUserInfo:mDict];
}

/// 获取整个用户信息
+ (NSDictionary *)getUserInfoDict {
    return [[NSUserDefaults standardUserDefaults] valueForKey:kUserInfoDict];
}


#pragma mark - Private

+ (void)setObject:(id)value forKey:(NSString *)key {
    
#if DEBUG
    if ([value isKindOfClass:[NSDictionary class]] == NO) {
        @throw [NSException exceptionWithName:@"LCUser_Error" reason:@"保持内容 不是dict" userInfo:nil];
    }
#endif
    
    [[NSUserDefaults standardUserDefaults] setValue:value forKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}


@end
