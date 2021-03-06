//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXJsonBase.h"

@class NSString;

@interface PayWalletTrade : YXJsonBase
{
    NSString *_accountDetailId;
    NSString *_operationId;
    long long _operationType;
    NSString *_operationTypeLabel;
    NSString *_operationTime;
    NSString *_operationAmount;
    long long _creditDebt;
    NSString *_bankId;
    NSString *_bankName;
    long long _cardType;
    NSString *_cardNoTail;
    NSString *_remark;
    long long _withdrawStatus;
    NSString *_expectEndTime;
    NSString *_remainHongbaoAmount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *remainHongbaoAmount; // @synthesize remainHongbaoAmount=_remainHongbaoAmount;
@property(retain, nonatomic) NSString *expectEndTime; // @synthesize expectEndTime=_expectEndTime;
@property(nonatomic) long long withdrawStatus; // @synthesize withdrawStatus=_withdrawStatus;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *cardNoTail; // @synthesize cardNoTail=_cardNoTail;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *bankId; // @synthesize bankId=_bankId;
@property(nonatomic) long long creditDebt; // @synthesize creditDebt=_creditDebt;
@property(retain, nonatomic) NSString *operationAmount; // @synthesize operationAmount=_operationAmount;
@property(retain, nonatomic) NSString *operationTime; // @synthesize operationTime=_operationTime;
@property(retain, nonatomic) NSString *operationTypeLabel; // @synthesize operationTypeLabel=_operationTypeLabel;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
@property(retain, nonatomic) NSString *accountDetailId; // @synthesize accountDetailId=_accountDetailId;
- (void).cxx_destruct;
- (id)getPayWalletTradeRemark;
- (id)formatWithdrawBank;
- (id)getPayWalletTradeTitle;
- (id)getPayWalletTradeStatusDesc;

@end

