//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCMidasBannerAdViewModel.h"

@class NSString, NVModelBaseMtPayResult, SAKEnvironment;

@interface GCMidasDealPayBannerViewModel : GCMidasBannerAdViewModel
{
    SAKEnvironment *_environment;
    NVModelBaseMtPayResult *_payResult;
    NSString *_channel;
}

@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NVModelBaseMtPayResult *payResult; // @synthesize payResult=_payResult;
@property(nonatomic) __weak SAKEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (_Bool)needAutoModuleView;
- (void)setupSingalSubscribe;
- (long long)slotId;

@end

