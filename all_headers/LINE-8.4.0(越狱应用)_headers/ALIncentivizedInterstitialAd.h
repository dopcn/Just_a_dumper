//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALAdLoadDelegate-Protocol.h"

@class ALAd, ALIncentivizedConfirmationManager, ALIncentivizedPromptManager, ALInterstitialAd, ALSdk, ALTaskValidateReward, NSString;
@protocol ALAdDisplayDelegate, ALAdLoadDelegate, ALAdVideoPlaybackDelegate;

@interface ALIncentivizedInterstitialAd : NSObject <ALAdLoadDelegate>
{
    _Bool wasFullyWatched;
    ALSdk *sdk;
    ALInterstitialAd *interstitialAd;
    ALAd *lastAd;
    id <ALAdDisplayDelegate> adDisplayDelegate;
    id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate;
    id <ALAdLoadDelegate> lastLoadDelegate;
    ALTaskValidateReward *rewardTask;
    NSString *rewardTaskResult;
    ALIncentivizedPromptManager *_promptManager;
    ALIncentivizedConfirmationManager *_confirmationManager;
}

+ (void)showOverPlacement:(id)arg1 andNotify:(id)arg2;
+ (void)showOverPlacement:(id)arg1;
+ (void)show;
+ (id)userIdentifier;
+ (void)setUserIdentifier:(id)arg1;
+ (_Bool)isReadyForDisplay;
+ (void)showAndNotify:(id)arg1;
+ (void)showOver:(id)arg1 placement:(id)arg2 andNotify:(id)arg3;
+ (void)showOver:(id)arg1 andNotify:(id)arg2;
+ (void)preloadAndNotify:(id)arg1;
+ (id)shared;
@property(retain) ALIncentivizedConfirmationManager *confirmationManager; // @synthesize confirmationManager=_confirmationManager;
@property(retain) ALIncentivizedPromptManager *promptManager; // @synthesize promptManager=_promptManager;
@property _Bool wasFullyWatched; // @synthesize wasFullyWatched;
@property NSString *rewardTaskResult; // @synthesize rewardTaskResult;
@property(retain, nonatomic) ALTaskValidateReward *rewardTask; // @synthesize rewardTask;
@property __weak id <ALAdLoadDelegate> lastLoadDelegate; // @synthesize lastLoadDelegate;
@property(retain, nonatomic) id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; // @synthesize adVideoPlaybackDelegate;
@property(retain, nonatomic) id <ALAdDisplayDelegate> adDisplayDelegate; // @synthesize adDisplayDelegate;
@property(retain) ALAd *lastAd; // @synthesize lastAd;
@property(retain, nonatomic) ALInterstitialAd *interstitialAd; // @synthesize interstitialAd;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk;
- (void).cxx_destruct;
- (id)initIncentivizedInterstitialWithSdk:(id)arg1;
- (id)initWithSdk:(id)arg1;
- (void)show;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
@property(readonly, getter=isReadyForDisplay) _Bool readyForDisplay; // @dynamic readyForDisplay;
- (void)clearRewardState;
- (void)dismiss;
- (void)launchRewardTaskForAd:(id)arg1 delegate:(id)arg2;
- (void)showAndNotify:(id)arg1;
- (void)showOver:(id)arg1 placement:(id)arg2 renderAd:(id)arg3 andNotify:(id)arg4;
- (void)showOver:(id)arg1 placement:(id)arg2 andNotify:(id)arg3;
- (void)showOver:(id)arg1 andNotify:(id)arg2;
- (void)preloadAndNotify:(id)arg1;
- (void)loadNextAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

