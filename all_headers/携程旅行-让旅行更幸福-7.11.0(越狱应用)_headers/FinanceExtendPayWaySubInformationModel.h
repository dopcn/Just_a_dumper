//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FinanceExtendPayWaySubInformationModel : CTBusinessBean
{
    NSString *brandId;
    NSString *brandType;
    NSString *channelId;
    NSString *paymentWayID;
    PriceType *canUsedBalance;
    NSString *payCurrency;
    PriceType *payAmount;
    NSString *passWord;
    NSString *verifyCode;
    NSString *stageKey;
    int stageCount;
    PriceType *stageRepaymentAmount;
    PriceType *stageFee;
    NSString *repaymentCurrency;
}

@property(copy, nonatomic) NSString *repaymentCurrency; // @synthesize repaymentCurrency;
@property(retain, nonatomic) PriceType *stageFee; // @synthesize stageFee;
@property(retain, nonatomic) PriceType *stageRepaymentAmount; // @synthesize stageRepaymentAmount;
@property(nonatomic) int stageCount; // @synthesize stageCount;
@property(copy, nonatomic) NSString *stageKey; // @synthesize stageKey;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode;
@property(copy, nonatomic) NSString *passWord; // @synthesize passWord;
@property(retain, nonatomic) PriceType *payAmount; // @synthesize payAmount;
@property(copy, nonatomic) NSString *payCurrency; // @synthesize payCurrency;
@property(retain, nonatomic) PriceType *canUsedBalance; // @synthesize canUsedBalance;
@property(copy, nonatomic) NSString *paymentWayID; // @synthesize paymentWayID;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

