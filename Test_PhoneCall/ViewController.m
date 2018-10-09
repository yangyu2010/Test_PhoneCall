//
//  ViewController.m
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/9/29.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import "ViewController.h"
#import "InterfaceUser.h"
#import "InterfaceNumber.h"
#import "PCCountryList.h"
#import "PCAreaList.h"
#import "PCNumberList.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

//    [InterfaceUser userLoginCompletion:^(BOOL isSucceed, NSString *message, id data) {
//
//    }];
    
//    [InterfaceUser userRecentBillsCompletion:^(BOOL isSucceed, NSString *message, id data) {
//
//    }];
    
    
//    [InterfaceNumber numberHotList:0 completion:^(BOOL isSucceed, NSString *message, id data) {
//
//    }];
    
//    [InterfaceNumber numberChargeDetail:1 completion:^(BOOL isSucceed, NSString *message, id data) {
//
//    }];

    /// 3.3、获取国家列表
//    [InterfaceNumber numberCountryListCompletion:^(BOOL isSucceed, NSString *message, id data) {
//        if (isSucceed) {
//            NSLog(@"%@", data);
//            NSLog(@"%@", [data class]);
//            if ([data isKindOfClass: [PCCountryList class]]) {
//                PCCountryList *list = data;
//
//                NSLog(@"%lu", (unsigned long)list.dataList.count);
//            }
//        }
//    }];
    
//    /// 3.4、获取区域列表
//    [InterfaceNumber numberAreaListInCountry:@"81" completion:^(BOOL isSucceed, NSString *message, id data) {
//        if (isSucceed) {
//            NSLog(@"%@", data);
//            NSLog(@"%@", [data class]);
//            if ([data isKindOfClass: [PCAreaList class]]) {
//                PCAreaList *list = data;
//
//                NSLog(@"%lu", (unsigned long)list.dataList.count);
//            }
//        }
//    }];
    
    /// 3.5、获取号码列表
    [InterfaceNumber numberListInCountryOrArea:@"1" areaCode:@"251" completion:^(BOOL isSucceed, NSString *message, id data) {
        if (isSucceed) {
            NSLog(@"%@", data);
            NSLog(@"%@", [data class]);
            if ([data isKindOfClass: [PCNumberList class]]) {
                PCNumberList *list = data;
                NSLog(@"%lu", (unsigned long)list.numbers.count);
            }
        }
    }];
    
}


@end
