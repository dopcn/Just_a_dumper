//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

@class DEFGroupPurchaseService, METPointPayment;

@interface DEFCreateOrderPointViewModel : GCBaseModuleViewModel
{
    DEFGroupPurchaseService *_purchaseService;
}

@property(retain, nonatomic) DEFGroupPurchaseService *purchaseService; // @synthesize purchaseService=_purchaseService;
- (void).cxx_destruct;
- (void)updateWantUsePoint:(_Bool)arg1;
@property(readonly, nonatomic) double totalFeeOriginal;
@property(readonly, nonatomic) double needToPayAfterVoucher;
@property(readonly, nonatomic) METPointPayment *pointPayment;
- (_Bool)shouldShow;
- (void)setupViewModel;

@end

