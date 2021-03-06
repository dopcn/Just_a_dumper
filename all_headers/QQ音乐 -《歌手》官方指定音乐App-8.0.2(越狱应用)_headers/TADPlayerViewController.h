//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TADMediaViewControllerDelegate-Protocol.h"
#import "TADPlayerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, TADMediaViewController, TADPlayerNetworkErrorView, UIView;
@protocol TADPlayerProtocol, TADPlayerViewControllerDelegate;

@interface TADPlayerViewController : UIViewController <TADMediaViewControllerDelegate, TADPlayerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    CDUnknownBlockType monitorNetwork;
    NSTimer *_playerTimer;
    _Bool _isOfflinePlay;
    _Bool _isVip;
    _Bool _isPlayerReady;
    _Bool _isViewAppear;
    _Bool _isAppActive;
    _Bool _isRichMediaActive;
    _Bool _isPlayingCachedAd;
    _Bool _isWillFinishCalled;
    id <TADPlayerViewControllerDelegate> _delegate;
    double _totalDuration;
    double _playedDuration;
    TADMediaViewController *_mediaViewController;
    UIView<TADPlayerProtocol> *_playerView;
    UIView *_touchView;
    NSArray *_mediaItems;
    TADPlayerNetworkErrorView *_networkErrorView;
}

@property(retain, nonatomic) TADPlayerNetworkErrorView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(nonatomic) _Bool isWillFinishCalled; // @synthesize isWillFinishCalled=_isWillFinishCalled;
@property(nonatomic) _Bool isPlayingCachedAd; // @synthesize isPlayingCachedAd=_isPlayingCachedAd;
@property(nonatomic) _Bool isRichMediaActive; // @synthesize isRichMediaActive=_isRichMediaActive;
@property(nonatomic) _Bool isAppActive; // @synthesize isAppActive=_isAppActive;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(nonatomic) _Bool isPlayerReady; // @synthesize isPlayerReady=_isPlayerReady;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) UIView<TADPlayerProtocol> *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) TADMediaViewController *mediaViewController; // @synthesize mediaViewController=_mediaViewController;
@property(nonatomic) double playedDuration; // @synthesize playedDuration=_playedDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(nonatomic) _Bool isOfflinePlay; // @synthesize isOfflinePlay=_isOfflinePlay;
@property(nonatomic) __weak id <TADPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)landingPresentVC;
- (void)didPinch:(id)arg1;
- (void)panAdjustVolume:(id)arg1;
- (void)didSingleTap:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cleanPlayerView;
- (_Bool)interfaceIsFullScreen;
- (void)videoSeekToSeconds:(double)arg1;
- (void)skipCurrentAd;
- (void)skipAdPlay;
- (void)continueAdPlay;
- (void)pauseAdPlay;
- (void)hollywoodBtnClicked;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewWillDismiss;
- (void)adLandingViewDidPresent;
- (void)adLandingViewWillPresent;
- (_Bool)adLandingViewShouldPresent;
- (void)adMediaViewWillTurnVolume:(_Bool)arg1;
- (void)adMediaViewWillExpand;
- (void)adMediaViewWillSkipAd;
- (void)adMediaViewDidPresent;
- (void)notifyPlayer:(id)arg1 itemDidPlayToEnd:(long long)arg2;
- (void)videoPlayError;
- (void)videoPlayFinished;
- (void)videoReadyToPlay;
- (void)notifyPlayer:(id)arg1 state:(long long)arg2;
- (void)showAdPlayView;
- (void)MovieViewAnimationFinish;
- (void)MovieViewAnimationStart;
- (void)continueVideoAd;
- (void)pauseVideoAd;
- (void)cancelAdPlay;
- (void)launchAdPlay:(id)arg1;
- (void)checkStateAndPlay;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updatePlayerTime:(id)arg1;
- (void)timerInvalidate;
- (void)timerStart;
- (_Bool)isCurrentViewControllerVisible;
- (void)prerollAdInit;
- (void)resize16_9View:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

