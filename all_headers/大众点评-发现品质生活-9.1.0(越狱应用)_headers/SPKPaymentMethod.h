//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSNumber, NSString, SPKBankCardInfo, SPKIcon;

@interface SPKPaymentMethod : SAKDomainObject
{
    _Bool _selected;
    _Bool _canUseCashTicket;
    NSString *_methodID;
    NSString *_name;
    NSNumber *_status;
    NSString *_statusInfo;
    SPKBankCardInfo *_bankCardInfo;
    SPKIcon *_iconInfo;
    NSArray *_labelArray;
    NSArray *_campaignArray;
    NSNumber *_largeAmountPaymentThreshold;
    NSString *_largeAmountPaymentPrompt;
    NSString *_bankType;
    NSString *_cardType;
    NSString *_submitURLString;
}

+ (id)labelArrayJSONTransformer;
+ (id)campaignArrayJSONTransformer;
+ (id)iconInfoJSONTransformer;
+ (id)bankCardInfoJSONTransformer;
+ (id)predicateDictionary;
@property(copy, nonatomic) NSString *submitURLString; // @synthesize submitURLString=_submitURLString;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *bankType; // @synthesize bankType=_bankType;
@property(copy, nonatomic) NSString *largeAmountPaymentPrompt; // @synthesize largeAmountPaymentPrompt=_largeAmountPaymentPrompt;
@property(retain, nonatomic) NSNumber *largeAmountPaymentThreshold; // @synthesize largeAmountPaymentThreshold=_largeAmountPaymentThreshold;
@property(nonatomic) _Bool canUseCashTicket; // @synthesize canUseCashTicket=_canUseCashTicket;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSArray *campaignArray; // @synthesize campaignArray=_campaignArray;
@property(copy, nonatomic) NSArray *labelArray; // @synthesize labelArray=_labelArray;
@property(retain, nonatomic) SPKIcon *iconInfo; // @synthesize iconInfo=_iconInfo;
@property(retain, nonatomic) SPKBankCardInfo *bankCardInfo; // @synthesize bankCardInfo=_bankCardInfo;
@property(copy, nonatomic) NSString *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *methodID; // @synthesize methodID=_methodID;
- (void).cxx_destruct;
- (_Bool)mtp_shouldShowCampaignLabel;
- (_Bool)mtp_shouldShowStatusInfo;
- (_Bool)mtp_isExceedPaymentAmount;
- (double)mtp_discountMoneyWithTotalMoney:(double)arg1;
- (long long)mtp_displayStatus;
- (id)mtp_campaignLabel;
- (id)mtp_title;
- (_Bool)mtp_isPaymentMethodCardBIN;
- (_Bool)mtp_isPaymentMethodMeituanPay;

@end

