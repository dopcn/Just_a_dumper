//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseMemberPointJournalRecord : NVBaseModel
{
    _Bool _isIncome;
    long long _orderId;
    NSString *_detail;
    NSString *_desc;
    long long _amount;
    NSString *_time;
    long long _uid;
}

+ (id)metaInfo;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(nonatomic) _Bool isIncome; // @synthesize isIncome=_isIncome;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

