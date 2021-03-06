//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseRsRecrodPrepayInfo : NVBaseModel
{
    long long _cancelFree;
    long long _payStatus;
    NSString *_currencySign;
    long long _prepayRecordId;
    NSString *_prepayAmount;
    NSArray *_desc;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *prepayAmount; // @synthesize prepayAmount=_prepayAmount;
@property(nonatomic) long long prepayRecordId; // @synthesize prepayRecordId=_prepayRecordId;
@property(copy, nonatomic) NSString *currencySign; // @synthesize currencySign=_currencySign;
@property(nonatomic) long long payStatus; // @synthesize payStatus=_payStatus;
@property(nonatomic) long long cancelFree; // @synthesize cancelFree=_cancelFree;
- (void).cxx_destruct;

@end

