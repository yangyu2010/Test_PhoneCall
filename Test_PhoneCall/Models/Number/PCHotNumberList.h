//
//  PCHotNumberList.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  热门号码model

#import <Foundation/Foundation.h>
#import <DBModel/DBModel.h>

@class PCNumber;

NS_ASSUME_NONNULL_BEGIN

@interface PCHotNumberList : NSObject

/// 号码详情列表
@property (nonatomic, strong) NSArray <PCNumber *> *numbers;
/// 当前页码
@property (nonatomic, assign) NSInteger page;
/// 是否还有更多的号码
@property (nonatomic, assign) NSInteger isRemain;

@end



@interface PCNumber : DBModel

/// 号码
@property (nonatomic, copy) NSString *phoneNumber;
/// 是否支持短信
@property (nonatomic, assign) BOOL smsAvailable;
/// 是否支持语音
@property (nonatomic, assign) BOOL voiceAvailable;
/// 友好的号码名(不包含国家码)
@property (nonatomic, copy) NSString *friendlyName;

/// 号码所属的地区名
@property (nonatomic, copy) NSString *areaName;
/// 号码所属的地区代码
@property (nonatomic, copy) NSString *areaCode;
/// 国家iso码
@property (nonatomic, copy) NSString *countryIso;
/// 国家电话区号
@property (nonatomic, copy) NSString *countryCode;


@end

NS_ASSUME_NONNULL_END
