//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModulesViewController.h"

@protocol HTKVoucherServiceProtocol;

@interface HTKUseVoucherViewController : GCBaseModulesViewController
{
    id <HTKVoucherServiceProtocol> _service;
    long long _orderID;
    CDUnknownBlockType _completion;
    long long _shownStatus;
}

@property(nonatomic) long long shownStatus; // @synthesize shownStatus=_shownStatus;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) id <HTKVoucherServiceProtocol> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)modules;
- (void)refreshVouchers;
- (void)setOrderID:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithSelectedVouchers:(id)arg1 inputVoucher:(id)arg2 limit:(int)arg3 totalFee:(double)arg4 service:(id)arg5;
- (id)initWithDealID:(id)arg1 selectedVouchers:(id)arg2 inputVoucher:(id)arg3 limit:(int)arg4 totalFee:(double)arg5 service:(id)arg6;
- (id)initWithOrderID:(long long)arg1 selectedVouchers:(id)arg2 inputVoucher:(id)arg3 limit:(int)arg4 totalFee:(double)arg5 service:(id)arg6;

@end

