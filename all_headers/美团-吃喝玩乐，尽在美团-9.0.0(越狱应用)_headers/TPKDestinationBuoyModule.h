//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKBaseModule.h"

@class TPKAdsSuspendView, TPKAdsViewModel;

@interface TPKDestinationBuoyModule : TPKBaseModule
{
    _Bool _recommendListTopViewHidden;
    long long _destinationCityId;
    TPKAdsViewModel *_adsViewModel;
    TPKAdsSuspendView *_suspendView;
}

@property(nonatomic) _Bool recommendListTopViewHidden; // @synthesize recommendListTopViewHidden=_recommendListTopViewHidden;
@property(retain, nonatomic) TPKAdsSuspendView *suspendView; // @synthesize suspendView=_suspendView;
@property(retain, nonatomic) TPKAdsViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
@property(nonatomic) long long destinationCityId; // @synthesize destinationCityId=_destinationCityId;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupModule;
- (void)retryForLoadingFail;
- (_Bool)shouldShow;

@end

