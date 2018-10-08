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
    
    [InterfaceNumber numberChargeDetail:1 completion:^(BOOL isSucceed, NSString *message, id data) {
        
    }];
    
//    [InterfaceNumber numberCountryListCompletion:^(BOOL isSucceed, NSString *message, id data) {
//
//    }];
}


@end
