//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, QNPPaySwitchInfoButtonData, QNPPaymentMethodBaseItemViewData, QNPPaymentPriceViewData;

@interface QNPPaymentMethodViewMetaData : NSObject
{
    _Bool _haveArrow;
    NSString *_paymentMethodName;
    NSString *_balance;
    NSString *_promptText;
    NSMutableArray *_prefrentialInfos;
    NSArray *_userInputDataArray;
    QNPPaymentMethodBaseItemViewData *_bottomInfoData;
    QNPPaySwitchInfoButtonData *_switchInfoData;
    NSString *_paymentBtnTitle;
    unsigned long long _biometryType;
    NSString *_applePayImg;
    NSString *_payAmountTitle;
    unsigned long long _viewStyle;
}

@property(nonatomic) unsigned long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(retain, nonatomic) NSString *payAmountTitle; // @synthesize payAmountTitle=_payAmountTitle;
@property(nonatomic) NSString *applePayImg; // @synthesize applePayImg=_applePayImg;
@property(nonatomic) unsigned long long biometryType; // @synthesize biometryType=_biometryType;
@property(retain, nonatomic) NSString *paymentBtnTitle; // @synthesize paymentBtnTitle=_paymentBtnTitle;
@property(retain, nonatomic) QNPPaySwitchInfoButtonData *switchInfoData; // @synthesize switchInfoData=_switchInfoData;
@property(retain, nonatomic) QNPPaymentMethodBaseItemViewData *bottomInfoData; // @synthesize bottomInfoData=_bottomInfoData;
@property(retain, nonatomic) NSArray *userInputDataArray; // @synthesize userInputDataArray=_userInputDataArray;
@property(nonatomic) _Bool haveArrow; // @synthesize haveArrow=_haveArrow;
@property(retain, nonatomic) NSMutableArray *prefrentialInfos; // @synthesize prefrentialInfos=_prefrentialInfos;
@property(retain, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
@property(retain, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSString *paymentMethodName; // @synthesize paymentMethodName=_paymentMethodName;
- (void).cxx_destruct;
@property(readonly, nonatomic) QNPPaymentPriceViewData *priceViewData;
- (id)init;

@end

