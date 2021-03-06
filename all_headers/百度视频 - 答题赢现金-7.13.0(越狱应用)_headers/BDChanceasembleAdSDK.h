//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDAdSDK.h"

#import "BDBasePlayerFrontPicAdViewDelegate-Protocol.h"
#import "BDFeedAdViewDelelgate-Protocol.h"
#import "BDInterstitialAdViewDelegate-Protocol.h"
#import "CSBInterstitialDelegate-Protocol.h"
#import "CSInterstitialDelegate-Protocol.h"
#import "CSNativeFeedsDelegate-Protocol.h"

@class BDFeedChanceAsAdView, BDInterstitialChanceAsAdView, BDPlayerFrontPicAdView, CSBInterstitial, CSInterstitial, CSNativeFeeds, NSString;

@interface BDChanceasembleAdSDK : BDAdSDK <CSInterstitialDelegate, CSBInterstitialDelegate, CSNativeFeedsDelegate, BDFeedAdViewDelelgate, BDBasePlayerFrontPicAdViewDelegate, BDInterstitialAdViewDelegate>
{
    _Bool _isVisiblePauseAdView;
    CSInterstitial *_frontInterstitial;
    CSBInterstitial *_pauseInterstitial;
    CSNativeFeeds *_feedNative;
    BDPlayerFrontPicAdView *_nonFrontAdView;
    BDFeedChanceAsAdView *_feedAdView;
    BDInterstitialChanceAsAdView *_pauseAdView;
}

@property(nonatomic) _Bool isVisiblePauseAdView; // @synthesize isVisiblePauseAdView=_isVisiblePauseAdView;
@property(retain, nonatomic) BDInterstitialChanceAsAdView *pauseAdView; // @synthesize pauseAdView=_pauseAdView;
@property(retain, nonatomic) BDFeedChanceAsAdView *feedAdView; // @synthesize feedAdView=_feedAdView;
@property(retain, nonatomic) BDPlayerFrontPicAdView *nonFrontAdView; // @synthesize nonFrontAdView=_nonFrontAdView;
@property(retain, nonatomic) CSNativeFeeds *feedNative; // @synthesize feedNative=_feedNative;
@property(retain, nonatomic) CSBInterstitial *pauseInterstitial; // @synthesize pauseInterstitial=_pauseInterstitial;
@property(retain, nonatomic) CSInterstitial *frontInterstitial; // @synthesize frontInterstitial=_frontInterstitial;
- (void).cxx_destruct;
- (void)csNativeFeeds:(id)arg1 clicked:(id)arg2;
- (void)csNativeFeeds:(id)arg1 loadFinished:(id)arg2;
- (void)csNativeFeeds:(id)arg1 requestADFailure:(id)arg2;
- (void)csNativeFeeds:(id)arg1 requestADSuccess:(id)arg2;
- (void)csbInterstitialClicked;
- (void)csbInterstitialDidDismiss;
- (void)csbInterstitialShowSuccess;
- (void)csbInterstitialLoadFailure:(id)arg1;
- (void)csbInterstitialLoadSuccess;
- (void)csInterstitialClicked:(id)arg1;
- (void)csInterstitialDidDismissScreen:(id)arg1;
- (void)csInterstitialWillDismissScreen:(id)arg1;
- (void)csInterstitialCountDownFinished:(id)arg1;
- (void)csInterstitialDidPresentScreen:(id)arg1;
- (void)csInterstitial:(id)arg1 loadAdFailureWithError:(id)arg2;
- (void)csInterstitialDidLoadAd:(id)arg1;
- (void)csInterstitialRequestAD:(id)arg1;
- (void)didTapAdViewWithAdItem:(id)arg1;
- (void)didTapCloseButton;
- (void)AdViewPrepareFailedWithAdItem:(id)arg1;
- (void)AdViewReadyToShowWithAdItem:(id)arg1;
- (void)didClosedAdView:(id)arg1 andAdItem:(id)arg2;
- (_Bool)shouldHandleClick:(id)arg1 forAdItem:(id)arg2;
- (void)didClickedAdView:(id)arg1 andAdItem:(id)arg2;
- (void)didTapDetailButtonWithAdItem:(id)arg1;
- (_Bool)isForSmallPlayer;
- (void)playerNonFullFrontAdDidEnd4TimeOut:(_Bool)arg1;
- (id)getPauseAdView;
- (id)getFeedAdView;
- (id)getFrontAdView;
- (void)_prepareFeedADView;
- (void)_preparePlayerPauseADView;
- (void)_prepareNonFrontADView;
- (void)pause;
- (void)start;
- (void)prepareAdView;
- (id)adView;
- (void)transformFrontADFrame;
- (void)dismissAd;
- (void)clear;
- (void)hide;
- (void)show;
- (_Bool)isVisible;
- (void)doSthReady4Show;
- (void)onShow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

