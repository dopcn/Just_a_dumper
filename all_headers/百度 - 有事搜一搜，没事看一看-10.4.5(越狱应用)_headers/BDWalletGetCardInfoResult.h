//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BDWalletCardInfo, BDWalletPayResultRiskControlItem, NSString;

@interface BDWalletGetCardInfoResult : NSObject
{
    BDWalletCardInfo *_cardInfo;
    NSString *_desc;
    NSString *_easypay_amount;
    long long _sms_length;
    long long _sms_type;
    NSString *_initiativeBindCardDesp;
    BDWalletPayResultRiskControlItem *_riskControl;
}

@property(retain, nonatomic) BDWalletPayResultRiskControlItem *riskControl; // @synthesize riskControl=_riskControl;
@property(retain, nonatomic) NSString *initiativeBindCardDesp; // @synthesize initiativeBindCardDesp=_initiativeBindCardDesp;
@property(nonatomic) long long sms_type; // @synthesize sms_type=_sms_type;
@property(nonatomic) long long sms_length; // @synthesize sms_length=_sms_length;
@property(copy, nonatomic) NSString *easypay_amount; // @synthesize easypay_amount=_easypay_amount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) BDWalletCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void).cxx_destruct;

@end

