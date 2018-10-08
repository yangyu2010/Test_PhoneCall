//
//  PCChargeInfo.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  资费详情model

#import <DBModel/DBModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface PCChargeInfo : DBModel

@property (nonatomic, copy) NSString *charge;         ///< 资费(发短信或打电话)
@property (nonatomic, copy) NSString *countryCode;    ///< 国家代码: (区号) 86
@property (nonatomic, copy) NSString *countryIso;     ///< 国家缩写: 中国-CN
@property (nonatomic, copy) NSString *countryName;    ///< 国家中文名字

@end





@interface PCPriceWrapper : DBModel

@property (nonatomic, strong) NSArray<PCChargeInfo *> *price;

@end


NS_ASSUME_NONNULL_END
