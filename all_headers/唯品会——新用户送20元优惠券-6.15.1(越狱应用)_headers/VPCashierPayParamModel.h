//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VPNetworkParam.h"

@class NSNumber, NSString;
@protocol Optional;

@interface VPCashierPayParamModel : VPNetworkParam
{
    NSString *_client;
    NSNumber *_acquiringId;
    NSString *_paymentToken;
    NSString *_acquiringPaymentNo;
    NSString<Optional> *_sms;
    NSString<Optional> *_paypwd;
    NSString<Optional> *_lpp;
    NSString<Optional> *_fingerprint;
    NSString *_env;
}

@property(copy, nonatomic) NSString *env; // @synthesize env=_env;
@property(copy, nonatomic) NSString<Optional> *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(copy, nonatomic) NSString<Optional> *lpp; // @synthesize lpp=_lpp;
@property(copy, nonatomic) NSString<Optional> *paypwd; // @synthesize paypwd=_paypwd;
@property(copy, nonatomic) NSString<Optional> *sms; // @synthesize sms=_sms;
@property(retain, nonatomic) NSString *acquiringPaymentNo; // @synthesize acquiringPaymentNo=_acquiringPaymentNo;
@property(copy, nonatomic) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain, nonatomic) NSNumber *acquiringId; // @synthesize acquiringId=_acquiringId;
@property(copy, nonatomic) NSString *client; // @synthesize client=_client;
- (void).cxx_destruct;

@end

