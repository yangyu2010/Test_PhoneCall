//
//  PCRecentBills.h
//  Test_PhoneCall
//
//  Created by Yang Yu on 2018/10/8.
//  Copyright © 2018 Musjoy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DBModel.h>

@class PCRecentBillList;
@class PCRecentBill;

NS_ASSUME_NONNULL_BEGIN

@interface PCRecentBillData : DBModel

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, strong) NSArray <PCRecentBillList *> *dataList;

@end


@interface PCRecentBillList : DBModel

@property (nonatomic, copy) NSString *month;
@property (nonatomic, strong) NSArray <PCRecentBill *> *billList;

@end



@interface PCRecentBill : DBModel

@property (nonatomic, copy) NSString *coinAmount;
@property (nonatomic, assign) NSInteger recordType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, assign) NSInteger talkTime;
@property (nonatomic, copy) NSString *createTime;


@end

NS_ASSUME_NONNULL_END
