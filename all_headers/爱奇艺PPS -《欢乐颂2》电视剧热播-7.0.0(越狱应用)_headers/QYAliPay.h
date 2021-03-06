//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Order;
@protocol QYAliPayDelegate;

@interface QYAliPay : NSObject
{
    id <QYAliPayDelegate> _delegate;
    SEL _result;
    Order *_payOrder;
}

@property(retain, nonatomic) Order *payOrder; // @synthesize payOrder=_payOrder;
@property(nonatomic) SEL result; // @synthesize result=_result;
@property(nonatomic) __weak id <QYAliPayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)zfbPaymentResultHandle:(id)arg1;
- (void)zfbPaymentResultNotification:(id)arg1;
- (void)startAlipay:(id)arg1 sign:(id)arg2 signType:(id)arg3 appScheme:(id)arg4;
- (void)startAlipay:(id)arg1 appScheme:(id)arg2;
- (id)init;

@end

