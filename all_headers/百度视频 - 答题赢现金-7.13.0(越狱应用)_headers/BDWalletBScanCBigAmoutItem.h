//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BDWalletBScanCBigAmoutItem : NSObject
{
    _Bool _isBalancePay;
    _Bool _requireSms;
    NSString *_spNo;
    NSString *_orderNo;
    NSString *_imei;
    NSString *_paycode;
    NSString *_goodValue;
    NSString *_money;
    NSString *_payAmount;
    NSString *_mobile;
}

@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) _Bool requireSms; // @synthesize requireSms=_requireSms;
@property(nonatomic) _Bool isBalancePay; // @synthesize isBalancePay=_isBalancePay;
@property(retain, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *goodValue; // @synthesize goodValue=_goodValue;
@property(retain, nonatomic) NSString *paycode; // @synthesize paycode=_paycode;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *spNo; // @synthesize spNo=_spNo;
- (void).cxx_destruct;

@end

