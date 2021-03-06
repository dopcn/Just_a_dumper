//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlayerContainerProtocol-Protocol.h"
#import "PreloadInfoContainerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "VideoPlayerDelegate-Protocol.h"
#import "VideoPlayerProtocol-Protocol.h"

@class AdvertisesModel, NSArray, NSString, PlayTask, PlayTimeRecorder, SubtitleController, VideoLogRecorder, VideoPlayer, VideoPlayerContainer, VideoPreloadResource;

@interface BDCVideoPlayer : NSObject <VideoPlayerDelegate, PlayerContainerProtocol, PreloadInfoContainerProtocol, VideoPlayerProtocol, UIGestureRecognizerDelegate>
{
    _Bool _isClarityModeChanging;
    _Bool _autoPlayForAudioSessionInterruption;
    _Bool _isSeekGesture;
    _Bool _isPrepared;
    _Bool _isAlertForCellularDataShowing;
    _Bool _closeAction;
    _Bool _needsCheckBookmark;
    _Bool _clutter;
    _Bool _originalStuckFlagForLog;
    _Bool _smoothStuckFlagForLog;
    _Bool _nNetStuckFlagForLog;
    _Bool _isPreload;
    _Bool _isP2PForLog;
    _Bool _isReplay;
    PlayTask *_playTask;
    long long _videoPlayerState;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _panelActionBlock;
    CDUnknownBlockType _preloadActionBlock;
    CDUnknownBlockType _bindUnicomCardBlock;
    CDUnknownBlockType _buySVIPActionBlock;
    VideoPlayer *_videoPlayer;
    VideoPlayerContainer *_videoPlayerContainer;
    long long _videoPlayClarityMode;
    NSArray *_loadingPercentArray;
    double _seekToTimeWithGesture;
    long long _sdkPlayCount;
    SubtitleController *_subtitleController;
    PlayTimeRecorder *_playTimeRecorder;
    long long _clarityModeForLog;
    NSString *_videoSizeForLog;
    NSString *_preloadToken;
    VideoPreloadResource *_videoPreloadResource;
    double _volumeBeforeTheMute;
    AdvertisesModel *_videoPauseAdInfo;
    VideoLogRecorder *_videoLogRecorder;
    double _preloadCompleteTime;
    double _duration;
    double _currentDuration;
}

+ (id)sharedBDCVideoPlayer;
@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double preloadCompleteTime; // @synthesize preloadCompleteTime=_preloadCompleteTime;
@property(nonatomic) _Bool isP2PForLog; // @synthesize isP2PForLog=_isP2PForLog;
@property(retain, nonatomic) VideoLogRecorder *videoLogRecorder; // @synthesize videoLogRecorder=_videoLogRecorder;
@property(retain, nonatomic) AdvertisesModel *videoPauseAdInfo; // @synthesize videoPauseAdInfo=_videoPauseAdInfo;
@property(nonatomic) double volumeBeforeTheMute; // @synthesize volumeBeforeTheMute=_volumeBeforeTheMute;
@property(retain, nonatomic) VideoPreloadResource *videoPreloadResource; // @synthesize videoPreloadResource=_videoPreloadResource;
@property(copy, nonatomic) NSString *preloadToken; // @synthesize preloadToken=_preloadToken;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) _Bool nNetStuckFlagForLog; // @synthesize nNetStuckFlagForLog=_nNetStuckFlagForLog;
@property(nonatomic) _Bool smoothStuckFlagForLog; // @synthesize smoothStuckFlagForLog=_smoothStuckFlagForLog;
@property(nonatomic) _Bool originalStuckFlagForLog; // @synthesize originalStuckFlagForLog=_originalStuckFlagForLog;
@property(copy, nonatomic) NSString *videoSizeForLog; // @synthesize videoSizeForLog=_videoSizeForLog;
@property(nonatomic) long long clarityModeForLog; // @synthesize clarityModeForLog=_clarityModeForLog;
@property(retain, nonatomic) PlayTimeRecorder *playTimeRecorder; // @synthesize playTimeRecorder=_playTimeRecorder;
@property(nonatomic) _Bool clutter; // @synthesize clutter=_clutter;
@property(retain, nonatomic) SubtitleController *subtitleController; // @synthesize subtitleController=_subtitleController;
@property(nonatomic) _Bool needsCheckBookmark; // @synthesize needsCheckBookmark=_needsCheckBookmark;
@property(nonatomic) _Bool closeAction; // @synthesize closeAction=_closeAction;
@property(nonatomic) long long sdkPlayCount; // @synthesize sdkPlayCount=_sdkPlayCount;
@property(nonatomic) _Bool isAlertForCellularDataShowing; // @synthesize isAlertForCellularDataShowing=_isAlertForCellularDataShowing;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isSeekGesture; // @synthesize isSeekGesture=_isSeekGesture;
@property(nonatomic) double seekToTimeWithGesture; // @synthesize seekToTimeWithGesture=_seekToTimeWithGesture;
@property(retain, nonatomic) NSArray *loadingPercentArray; // @synthesize loadingPercentArray=_loadingPercentArray;
@property(nonatomic) _Bool autoPlayForAudioSessionInterruption; // @synthesize autoPlayForAudioSessionInterruption=_autoPlayForAudioSessionInterruption;
@property(nonatomic) _Bool isClarityModeChanging; // @synthesize isClarityModeChanging=_isClarityModeChanging;
@property(nonatomic) long long videoPlayClarityMode; // @synthesize videoPlayClarityMode=_videoPlayClarityMode;
@property(retain, nonatomic) VideoPlayerContainer *videoPlayerContainer; // @synthesize videoPlayerContainer=_videoPlayerContainer;
@property(retain, nonatomic) VideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(copy, nonatomic) CDUnknownBlockType buySVIPActionBlock; // @synthesize buySVIPActionBlock=_buySVIPActionBlock;
@property(copy, nonatomic) CDUnknownBlockType bindUnicomCardBlock; // @synthesize bindUnicomCardBlock=_bindUnicomCardBlock;
@property(copy, nonatomic) CDUnknownBlockType preloadActionBlock; // @synthesize preloadActionBlock=_preloadActionBlock;
@property(copy, nonatomic) CDUnknownBlockType panelActionBlock; // @synthesize panelActionBlock=_panelActionBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) long long videoPlayerState; // @synthesize videoPlayerState=_videoPlayerState;
@property(retain, nonatomic) PlayTask *playTask; // @synthesize playTask=_playTask;
- (void).cxx_destruct;
- (void)saveRecord;
- (void)handleSeekForBookmark;
- (void)showSeekForBookmarkTip;
- (void)unicomPlanGuideBuySVIPAlertWithPlayBlock:(CDUnknownBlockType)arg1;
- (void)showUnicomSingkilCardTips;
- (_Bool)checkWWanAndShowAlert:(CDUnknownBlockType)arg1;
- (void)preloadInfoContainerTextAdButtonAction:(id)arg1;
- (void)preloadInfoContainerBackButtonAction:(id)arg1;
- (void)videoPlayerUnicomTipsBindAction:(id)arg1;
- (void)playerContainerPausePlaceholderAction:(id)arg1;
- (id)fileMetaForPlayerContainerShowDetail:(id)arg1;
- (void)playerContainerRetryButtonAction:(id)arg1;
- (void)playerContainerPanelItemAction:(id)arg1 panelItemType:(long long)arg2;
- (void)playerContainerProgressSliderDidChangedAction:(id)arg1 slider:(id)arg2;
- (void)playerContainerProgressSliderValueChangedAction:(id)arg1 slider:(id)arg2;
- (void)playerContainerProgressSliderWillChangeAction:(id)arg1 slider:(id)arg2;
- (void)playerContainerVolumeSliderValueChangedAction:(id)arg1 slider:(id)arg2;
- (void)playerContainerPlayClarityModeChanged:(id)arg1 mode:(long long)arg2;
- (void)playerContainerPauseButtonAction:(id)arg1;
- (void)playerContainerPlayButtonAction:(id)arg1;
- (id)playerContainerSubtitleButtonAction:(id)arg1;
- (void)playerContainerBackButtonAction:(id)arg1;
- (void)videoPlayerPreloadError:(id)arg1;
- (void)videoPlayerDoNotPreload:(id)arg1;
- (void)videoPlayer:(id)arg1 onPreload:(_Bool)arg2;
- (void)videoPlayer:(id)arg1 onPlayCachePercentChange:(long long)arg2;
- (void)videoPlayer:(id)arg1 onPlayCache:(long long)arg2;
- (void)videoPlayer:(id)arg1 onPlayCacheDurationChange:(double)arg2;
- (void)videoPlayer:(id)arg1 onPlaybackTimeChange:(double)arg2;
- (void)videoPlayerOnUseP2PModule:(id)arg1 p2pParams:(_Bool)arg2;
- (void)videoPlayerOnCompletion:(id)arg1;
- (void)videoPlayer:(id)arg1 onGotNetworkErrorReport:(id)arg2;
- (void)videoPlayer:(id)arg1 onError:(long long)arg2;
- (void)videoPlayerOnPause:(id)arg1;
- (void)videoPlayerOnPlaying:(id)arg1;
- (void)videoPlayerOnLoading:(id)arg1;
- (void)videoPlayerOnPrepared:(id)arg1;
- (void)videoPlayerStartPlay:(id)arg1;
- (void)handleAppBecomeActive;
- (void)stop;
- (void)seekTo:(double)arg1;
- (void)pause;
- (void)play;
- (void)showPreloadInfo;
- (id)getPreloadTokenFromCache;
- (void)playerPreloadLoopTimes:(id)arg1;
- (void)playerPreloadTimeout:(id)arg1;
- (void)playerPreloadPercent:(id)arg1;
- (id)textForCachePercent:(long long)arg1;
- (void)resetLoadingPercent;
- (void)resetContainerPanelView;
- (void)showMessageForClarityModeChanging;
- (void)cleanupResources;
- (void)handleError;
- (long long)getPlayClarityModeByBps;
- (long long)getBps;
- (void)setIdleTimerDisabled:(_Bool)arg1;
- (void)setupUnicomInfoConfig;
- (void)setupP2PConfig;
- (id)getCookie;
- (id)getUA;
- (void)audioSessionInterruption:(id)arg1;
- (void)systemVolumeDidChange:(id)arg1;
- (void)addSystemVolumeDidChangeNotification;
- (void)onNetWorkListener:(id)arg1;
- (void)close;
- (void)playCurrentPlayTask;
- (void)resume;
- (void)getPlayUrl;
- (void)getFileMeta;
- (_Bool)shouldStatusBarHidden;
- (void)checkToStopLoading;
- (_Bool)isLocalFileURL;
- (id)URLWithString:(id)arg1;
- (double)correctedVideoDuration;
- (void)showInView:(id)arg1;
- (id)init;
- (void)handleDoubleTap:(id)arg1;
- (void)handleBrightnessGestureAction:(double)arg1;
- (void)handleVolumeGestureAction:(double)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)seekWithGesture:(_Bool)arg1;
- (double)checkTimeBoundary:(double)arg1;
- (void)setGestureEnabled:(_Bool)arg1;
- (void)addGesture;
- (void)reportLogPlayTime;
- (void)computePlayTimeForLog;
- (void)resetLastStartPlayTime;
- (void)resetDataForLog;
- (void)setVideoPit;
- (void)setUserLevel;
- (void)handleClutter;
- (_Bool)calculateByPercentA;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

