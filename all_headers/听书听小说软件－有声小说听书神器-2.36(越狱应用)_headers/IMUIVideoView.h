//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMUIView.h"

#import "IMTimerDelegate-Protocol.h"
#import "IMUIInflator-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, IMTimerManager, IMUIVideoProperties, NSArray, NSNumber, NSString, UIButton, UITapGestureRecognizer;
@protocol IMUIVideoViewDelegate;

@interface IMUIVideoView : IMUIView <IMTimerDelegate, IMUIInflator>
{
    _Bool _isVideoPaused;
    _Bool _isFullScreen;
    _Bool _isVideoEnded;
    _Bool _kvoRegistered;
    _Bool _touchToFullScreen;
    _Bool _autoplay;
    _Bool _playMuted;
    _Bool _autoReplay;
    _Bool _fallbackTimersRegistered;
    _Bool _rateObserverAdded;
    _Bool _fallbackTimerAdded;
    _Bool _pauseTimerAdded;
    float _pauseAfter;
    id <IMUIVideoViewDelegate> _delegate;
    AVPlayerItem *_playerItem;
    NSArray *_viewabilityTimes;
    NSNumber *_isVideoMuted;
    double _playerRate;
    double _minViewablePercentage;
    double _currentViewedPercentage;
    NSNumber *_completeAfter;
    IMUIVideoProperties *_properties;
    UITapGestureRecognizer *_gestureRecognizer;
    id _boundaryObserver;
    id _viewabilityBoundaryObserver;
    id _completionBoundaryObserver;
    UIButton *_volumeCtrlButton;
    IMTimerManager *_fallbackTimer;
    IMTimerManager *_pauseTimer;
}

+ (Class)layerClass;
@property(nonatomic) _Bool pauseTimerAdded; // @synthesize pauseTimerAdded=_pauseTimerAdded;
@property(nonatomic) _Bool fallbackTimerAdded; // @synthesize fallbackTimerAdded=_fallbackTimerAdded;
@property(nonatomic) _Bool rateObserverAdded; // @synthesize rateObserverAdded=_rateObserverAdded;
@property(retain, nonatomic) IMTimerManager *pauseTimer; // @synthesize pauseTimer=_pauseTimer;
@property(retain, nonatomic) IMTimerManager *fallbackTimer; // @synthesize fallbackTimer=_fallbackTimer;
@property(retain, nonatomic) UIButton *volumeCtrlButton; // @synthesize volumeCtrlButton=_volumeCtrlButton;
@property(nonatomic) _Bool fallbackTimersRegistered; // @synthesize fallbackTimersRegistered=_fallbackTimersRegistered;
@property(nonatomic) _Bool autoReplay; // @synthesize autoReplay=_autoReplay;
@property(nonatomic) _Bool playMuted; // @synthesize playMuted=_playMuted;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool touchToFullScreen; // @synthesize touchToFullScreen=_touchToFullScreen;
@property _Bool kvoRegistered; // @synthesize kvoRegistered=_kvoRegistered;
@property(retain, nonatomic) id completionBoundaryObserver; // @synthesize completionBoundaryObserver=_completionBoundaryObserver;
@property(retain, nonatomic) id viewabilityBoundaryObserver; // @synthesize viewabilityBoundaryObserver=_viewabilityBoundaryObserver;
@property(retain, nonatomic) id boundaryObserver; // @synthesize boundaryObserver=_boundaryObserver;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) IMUIVideoProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSNumber *completeAfter; // @synthesize completeAfter=_completeAfter;
@property(nonatomic) float pauseAfter; // @synthesize pauseAfter=_pauseAfter;
@property(readonly) double currentViewedPercentage; // @synthesize currentViewedPercentage=_currentViewedPercentage;
@property(nonatomic) double minViewablePercentage; // @synthesize minViewablePercentage=_minViewablePercentage;
@property(nonatomic) _Bool isVideoEnded; // @synthesize isVideoEnded=_isVideoEnded;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) double playerRate; // @synthesize playerRate=_playerRate;
@property(retain, nonatomic) NSNumber *isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(retain, nonatomic) NSArray *viewabilityTimes; // @synthesize viewabilityTimes=_viewabilityTimes;
@property(nonatomic) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) __weak id <IMUIVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkAndAutoplayIfRequired;
- (void)audioRouteChanged:(id)arg1;
- (void)appEnteredForeground:(id)arg1;
- (void)appEnteredBackground:(id)arg1;
- (void)timerHitForManager:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)videoStallDetected;
- (void)didPlayToEnd;
- (void)checkAndFireVideoEnd;
- (void)checkAndRemovePauseTimer;
- (void)checkAndRemoveFallbackTimer;
- (void)checkAndStartPauseTimerWithDelayTime:(float)arg1;
- (void)checkAndStartFallbackTimerWithCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)checkAndRemovePlayerRateObserver;
- (void)checkAndAddPlayerRateObserver;
- (void)deregisterNotifications;
- (void)registerNotifications;
- (void)tapGesture:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)toggleMuteState;
- (void)updateMuteButton;
- (void)showMuteButton;
- (void)seekVideoToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unmuteAndFireEvents:(_Bool)arg1;
- (void)unmute;
- (void)muteAndFireEvents:(_Bool)arg1;
- (void)mute;
- (void)stop;
- (void)reloadVideo;
- (void)pause;
- (void)prepareForRecycle;
- (void)playVideo;
- (void)pauseVideo;
- (void)resume;
- (void)play;
- (void)replacePlayer:(id)arg1;
- (_Bool)isPlayerMuted;
- (void)setCurrentViewablePercentageAndAutoplay:(double)arg1;
- (void)initializeRecycledView;
- (void)clearProperties;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;
@property(readonly) AVPlayerLayer *playerLayer;
@property(retain) AVPlayer *player;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

