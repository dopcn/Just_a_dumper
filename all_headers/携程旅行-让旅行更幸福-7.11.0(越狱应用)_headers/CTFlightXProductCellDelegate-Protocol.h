//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CTFlightSignalReturnModel, NSArray, NSDictionary, NSURL, PriceType;

@protocol CTFlightXProductCellDelegate <NSObject>
- (NSArray *)getSummaryList;
- (NSArray *)getPackageSettingList4CreateOrderRequest;
- (NSArray *)getPackageList4CreatOrderRequest;
- (NSArray *)getDetailList;
- (PriceType *)getTotalPrice;
- (CTFlightSignalReturnModel *)parseInitDataFinish:(NSDictionary *)arg1;
- (NSDictionary *)setupInitData;
- (NSURL *)genURL;
@end

