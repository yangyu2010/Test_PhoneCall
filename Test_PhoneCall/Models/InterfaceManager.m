//
//  InterfaceManager.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "InterfaceManager.h"
#import "PCUser.h"
#import <WebInterface.h>
#import HEADER_LOCALIZE

@implementation InterfaceManager

/// 授权请求
+ (void)startAuthRequest:(NSString *)action
                describe:(NSString *)describe
                    body:(nullable NSDictionary *)body
              completion:(ActionCompleteBlock)completion {
    
    
    NSDictionary *authDict = @{
                               @"Authorization":  @"eyJ0eXAiOiJKV1QiLCJhbGciOiJTSEEyNTYifQ.eyJ1c2VySWQiOjI0NjM4LCJhY2NvdW50IjoiNDlCQUQzQTItQzNENS00NkIzLThBQ0UtMkQ2NkNFMDA1RjkzIiwibG9naW5XYXkiOiItMSIsInVzZXJUeXBlIjoiLTEiLCJleHAiOjE1NzAzMzc4MDR9.uck-c_r8KTsWx-m3WUqXnFOyGiWJY4UP5SDybFHpaQ8"
                               };

    [self startRequest:action describe:describe body:body header:authDict completion:completion];
    
}

/// 普通请求 未授权
+ (void)startRequest:(NSString *)action
            describe:(NSString *)describe
                body:(nullable NSDictionary *)body
              header:(nullable NSDictionary *)header
          completion:(ActionCompleteBlock)completion {
    
    [WebInterface startRequest:action
                      describe:locString([@"API_" stringByAppendingString:describe])
                        header:header
                          body:body
                    completion:^(BOOL isSucceed, NSString *message, id data) {
                        
                        completion? completion(isSucceed, message, data) : 0;
                    }];
    
}



@end
