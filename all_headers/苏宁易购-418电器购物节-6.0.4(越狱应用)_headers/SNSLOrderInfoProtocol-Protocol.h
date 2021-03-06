//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@protocol SNSLOrderInfoProtocol <NSObject>

@optional
@property(nonatomic) _Bool alipayFlag;
@property(nonatomic) _Bool isESSPay;
@property(nonatomic) _Bool selected;
@property(copy, nonatomic) NSString *currentTime;
@property(retain, nonatomic) NSMutableArray *productList;
@property(retain, nonatomic) NSMutableArray *supplierList;
@property(retain, nonatomic) NSString *sendTime;
@property(retain, nonatomic) NSString *orderTips;
@property(retain, nonatomic) NSString *remainEndTime;
@property(retain, nonatomic) NSString *remainStartTime;
@property(retain, nonatomic) NSString *depositeEndTime;
@property(retain, nonatomic) NSString *depositeStartTime;
@property(retain, nonatomic) NSString *remainAmount;
@property(retain, nonatomic) NSString *depositeAmount;
@property(nonatomic) unsigned long long djtPayStatus;
@property(nonatomic) int ydOrderStatue;
@property(copy, nonatomic) NSString *balancePayStatus;
@property(copy, nonatomic) NSString *depositPayStatus;
@property(nonatomic) _Bool showBalanceAmt;
@property(nonatomic) _Bool showDepositAmt;
@property(nonatomic) _Bool canSubstitutePay;
@property(nonatomic) _Bool canPayOrder;
@property(nonatomic) _Bool canMerchantOrder;
@property(nonatomic) _Bool canDeleteOrder;
@property(nonatomic) _Bool canTwiceBuy;
@property(copy, nonatomic) NSString *ormOrder;
@property(copy, nonatomic) NSString *lastUpdate;
@property(copy, nonatomic) NSString *orderType;
@property(copy, nonatomic) NSString *prepayAmount;
@property(copy, nonatomic) NSString *omsOrderId;
@property(copy, nonatomic) NSString *orderId;
- (void)encodeFromDictionary:(NSDictionary *)arg1;
@end

