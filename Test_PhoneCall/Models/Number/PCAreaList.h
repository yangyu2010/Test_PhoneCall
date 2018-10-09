//
//  PCAreaList.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//  3.4、获取区域列表 区域model

#import <Foundation/Foundation.h>
#import <DBModel/DBModel.h>
@class PCArea;

NS_ASSUME_NONNULL_BEGIN

/// 区域list model
@interface PCAreaList : DBModel

@property (nonatomic, strong) NSArray <PCArea *> *dataList;

@end

/// 区域model
@interface PCArea : DBModel

/// 地区码
@property (nonatomic, copy) NSString *areaCode;
/// 地区名称
@property (nonatomic, copy) NSString *areaName;


@end

NS_ASSUME_NONNULL_END
