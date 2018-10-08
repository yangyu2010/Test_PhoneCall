//
//  PCCountryList.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  3.3、获取国家列表 返回model

#import <Foundation/Foundation.h>
#import <DBModel/DBModel.h>
@class PCCountry;

NS_ASSUME_NONNULL_BEGIN

@interface PCCountryList : DBModel

@property (nonatomic, strong) NSArray <PCCountry *> *dataList;

@end



/**
 获取国家列表 国家model
 */
@interface PCCountry : DBModel

/// 国家名
@property (nonatomic, copy) NSString *countryName;
/// 国家代码
@property (nonatomic, copy) NSString *countryCode;
/// 国家名缩写
@property (nonatomic, copy) NSString *countryISO;
/// 是否包含地区
@property (nonatomic, assign) BOOL containAreas;

@end

NS_ASSUME_NONNULL_END
