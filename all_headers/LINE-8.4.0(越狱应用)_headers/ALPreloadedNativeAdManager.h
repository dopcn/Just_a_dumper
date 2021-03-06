//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBasePreloadManager.h"

#import "ALNativeAdLoadDelegate-Protocol.h"
#import "ALNativeAdPrecacheDelegate-Protocol.h"

@class NSString;

@interface ALPreloadedNativeAdManager : ALBasePreloadManager <ALNativeAdLoadDelegate, ALNativeAdPrecacheDelegate>
{
}

- (void)nativeAdService:(id)arg1 didFailToPrecacheVideoForAd:(id)arg2 withError:(long long)arg3;
- (void)nativeAdService:(id)arg1 didFailToPrecacheImagesForAd:(id)arg2 withError:(long long)arg3;
- (void)nativeAdService:(id)arg1 didPrecacheVideoForAd:(id)arg2;
- (void)nativeAdService:(id)arg1 didPrecacheImagesForAd:(id)arg2;
- (id)specForLoadable:(id)arg1;
- (void)notifyDelegate:(id)arg1 ofFailureForSpec:(id)arg2 withError:(long long)arg3 viaService:(id)arg4;
- (void)notifyDelegate:(id)arg1 ofSuccessWithLoadable:(id)arg2 viaService:(id)arg3;
- (void)nativeAdService:(id)arg1 didFailToLoadAdsWithError:(long long)arg2;
- (void)nativeAdService:(id)arg1 didLoadAds:(id)arg2;
- (id)createPreloadTaskForSpec:(id)arg1;
- (id)createPreloadedAdsDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

