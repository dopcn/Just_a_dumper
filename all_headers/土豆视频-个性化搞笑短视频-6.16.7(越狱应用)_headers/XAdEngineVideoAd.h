//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XAdEngineAdModuleEvents-Protocol.h"
#import "XAdEngineAdModuleExternalEvent-Protocol.h"
#import "XAdEngineVideoAdViewDelegate-Protocol.h"
#import "XAdVideoDataSource-Protocol.h"
#import "YTEngineModule-Protocol.h"

@class NSMutableArray, NSString, XAdEnginePlayerAdItem, XAdEngineVideoAdView, XAdInteractiveContext, XAdVideoExposure, XAdVideoLoss, YTEngineScreenMode;
@protocol XAdEngineAdModuleEvents, XAdVideoExposureProtocol, XAdVideoLossProtocol, YKLoadingFeature, YTEngineModuleController><YTEngineAdController;

@interface XAdEngineVideoAd : UIView <XAdEngineVideoAdViewDelegate, YTEngineModule, XAdVideoDataSource, XAdEngineAdModuleEvents, XAdEngineAdModuleExternalEvent>
{
    NSMutableArray *_mImgAds;
    id <XAdVideoLossProtocol> _lossProtocol;
    id <XAdVideoExposureProtocol> _exposureProtocol;
    YTEngineScreenMode *_currentScreenMode;
    id <YKLoadingFeature> _loadingView;
    _Bool _externalForbidden;
    id <YTEngineModuleController><YTEngineAdController> moduleController;
    NSMutableArray *_adInfos;
    unsigned long long _currentAdFormat;
    XAdEnginePlayerAdItem *_mCurrentAdItem;
    XAdEngineVideoAdView *_mAdView;
    long long _adType;
    XAdEnginePlayerAdItem *_offlineAdItem;
    id <XAdEngineAdModuleEvents> _eventSuccessor;
    long long _externalEvents;
    XAdVideoExposure *_exposure;
    XAdVideoLoss *_loss;
    long long _sutime;
    XAdInteractiveContext *_context;
}

@property(retain, nonatomic) XAdInteractiveContext *context; // @synthesize context=_context;
@property(nonatomic) long long sutime; // @synthesize sutime=_sutime;
@property(retain, nonatomic) XAdVideoLoss *loss; // @synthesize loss=_loss;
@property(retain, nonatomic) XAdVideoExposure *exposure; // @synthesize exposure=_exposure;
@property(nonatomic) _Bool externalForbidden; // @synthesize externalForbidden=_externalForbidden;
@property(nonatomic) long long externalEvents; // @synthesize externalEvents=_externalEvents;
@property(nonatomic) __weak id <XAdEngineAdModuleEvents> eventSuccessor; // @synthesize eventSuccessor=_eventSuccessor;
@property(retain, nonatomic) XAdEnginePlayerAdItem *offlineAdItem; // @synthesize offlineAdItem=_offlineAdItem;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) XAdEngineVideoAdView *mAdView; // @synthesize mAdView=_mAdView;
@property(retain, nonatomic) XAdEnginePlayerAdItem *mCurrentAdItem; // @synthesize mCurrentAdItem=_mCurrentAdItem;
@property(readonly, nonatomic) unsigned long long currentAdFormat; // @synthesize currentAdFormat=_currentAdFormat;
@property(retain, nonatomic) NSMutableArray *adInfos; // @synthesize adInfos=_adInfos;
@property(nonatomic) __weak id <YTEngineModuleController><YTEngineAdController> moduleController; // @synthesize moduleController;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasForbiddenEventEvents;
- (void)resetForbiddenEvents;
- (void)removeExternalEvent:(long long)arg1;
- (void)addExternalEvent:(long long)arg1;
- (_Bool)supportExternalEvent:(long long)arg1;
- (void)endModuleExternalEvent:(long long)arg1;
- (void)startModuleExternalEvent:(long long)arg1;
- (void)endShowAdType:(long long)arg1 adPosition:(long long)arg2 formatType:(unsigned long long)arg3 sourceModule:(id)arg4 needForward:(_Bool)arg5;
- (void)startShowAdType:(long long)arg1 adPosition:(long long)arg2 formatType:(unsigned long long)arg3 sourceModule:(id)arg4 needForward:(_Bool)arg5;
- (void)loadInteractive;
- (void)destoryInteractive;
- (_Bool)hasInteractiveAd:(id)arg1;
- (void)caculateSu;
- (id)sessionID;
- (id)userAgent;
- (id)item;
- (void)moduleController:(id)arg1 moduleView:(id)arg2 didHidden:(_Bool)arg3 atPosition:(long long)arg4 userInfo:(id)arg5;
- (void)moduleController:(id)arg1 moduleView:(id)arg2 willHidden:(_Bool)arg3 atPosition:(long long)arg4 userInfo:(id)arg5;
- (void)moduleController:(id)arg1 endPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)moduleController:(id)arg1 startPlayWithType:(long long)arg2 atIndex:(long long)arg3 userInfo:(id)arg4;
- (void)moduleController:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)moduleController:(id)arg1 panelStateSwitchTo:(long long)arg2 from:(long long)arg3;
- (void)moduleController:(id)arg1 screenModeSwitchTo:(id)arg2 from:(id)arg3;
- (void)moduleContollerResume:(id)arg1;
- (void)moduleContollerInterrupted:(id)arg1;
- (void)moduleContollerWillUninstall:(id)arg1;
- (void)moduleControllerDidInstall:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)uninstallEventsObservers;
- (void)installEventsObservers;
- (void)uninstallAdView;
- (void)installAdView;
- (void)uninstallStaticModule;
- (void)installStaticModule;
- (void)updateAdIndex:(long long)arg1;
- (void)updateLoadingView:(_Bool)arg1;
- (void)updateCountdown:(double)arg1;
- (void)setupVideoAd;
- (_Bool)needAd;
- (id)init;
- (void)dealAdview;
- (void)vrExpose:(id)arg1;
- (void)videoAdViewTapAd:(id)arg1;
- (void)skipTrueView:(id)arg1;
- (void)videoAdViewTrueView:(id)arg1;
- (void)videoAdViewDetail:(id)arg1;
- (void)videoAdViewSkipCurrentAd:(id)arg1;
- (void)sendUTSkipEvent;
- (void)videoAdView:(id)arg1 switchScreenMode:(_Bool)arg2;
- (void)videoAdView:(id)arg1 tapSilentButton:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInactive;
@property(nonatomic) long long mutexEvents;
@property(readonly) Class superclass;

@end

