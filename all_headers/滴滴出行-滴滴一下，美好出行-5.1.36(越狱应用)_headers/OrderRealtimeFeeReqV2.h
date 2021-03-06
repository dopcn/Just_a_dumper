//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface OrderRealtimeFeeReqV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *feeBottomArray; // @dynamic feeBottomArray;
@property(readonly, nonatomic) unsigned long long feeBottomArray_Count; // @dynamic feeBottomArray_Count;
@property(retain, nonatomic) NSMutableArray *feeInfoArray; // @dynamic feeInfoArray;
@property(readonly, nonatomic) unsigned long long feeInfoArray_Count; // @dynamic feeInfoArray_Count;
@property(nonatomic) _Bool hasOid; // @dynamic hasOid;
@property(nonatomic) _Bool hasPlutusData; // @dynamic hasPlutusData;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTotalFee; // @dynamic hasTotalFee;
@property(nonatomic) _Bool hasTotalFeeShowText; // @dynamic hasTotalFeeShowText;
@property(copy, nonatomic) NSString *oid; // @dynamic oid;
@property(copy, nonatomic) NSString *plutusData; // @dynamic plutusData;
@property(nonatomic) int timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *totalFee; // @dynamic totalFee;
@property(copy, nonatomic) NSString *totalFeeShowText; // @dynamic totalFeeShowText;

@end

