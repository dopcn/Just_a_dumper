//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSDate;

@interface NVModelBaseReceiptGroup : NVBaseModel
{
    long long _aggregationType;
    long long _dealGroupId;
    NSDate *_expireDate;
    long long _orderId;
    NSArray *_receiptList;
}

+ (id)metaInfo;
@property(retain, nonatomic) NSArray *receiptList; // @synthesize receiptList=_receiptList;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(nonatomic) long long dealGroupId; // @synthesize dealGroupId=_dealGroupId;
@property(nonatomic) long long aggregationType; // @synthesize aggregationType=_aggregationType;
- (void).cxx_destruct;

@end

