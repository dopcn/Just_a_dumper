//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPayPaymentCodePayParameters : NSObject
{
    NSString *_mobilePayPwd;
    NSString *_payPwd;
    NSString *_code;
    NSString *_cpTradeNum;
    unsigned long long _paymentCodePayType;
}

@property(nonatomic) unsigned long long paymentCodePayType; // @synthesize paymentCodePayType=_paymentCodePayType;
@property(retain, nonatomic) NSString *cpTradeNum; // @synthesize cpTradeNum=_cpTradeNum;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *payPwd; // @synthesize payPwd=_payPwd;
@property(retain, nonatomic) NSString *mobilePayPwd; // @synthesize mobilePayPwd=_mobilePayPwd;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 pwdOrCode:(id)arg2 cpTradeNum:(id)arg3;

@end

