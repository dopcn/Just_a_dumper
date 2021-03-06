//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MVVideoLoaderDelegate-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, AVURLAsset, MVLoadingHUD, MVVideoLoader, NSString, NSTimer, UIView;
@protocol MVVideoPlayerDelegate;

@interface MVVideoPlayer : NSObject <MVVideoLoaderDelegate>
{
    _Bool _mute;
    _Bool _autoPlay;
    _Bool _playGroundAutoPlay;
    _Bool _stopEnterPlayGroundPlay;
    _Bool _pauseInBackground;
    _Bool _callbackPlayStart;
    UIView *_showView;
    double _duration;
    double _current;
    long long _playerSatus;
    long long _timeOut;
    double _loadedProgress;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
    AVPlayerLayer *_currentPlayerLayer;
    NSObject *_playbackTimeObserver;
    AVURLAsset *_videoURLAsset;
    MVVideoLoader *_resouerLoader;
    AVAsset *_videoAsset;
    id <MVVideoPlayerDelegate> _delegate;
    long long _currentBufferTime;
    NSTimer *_bufferTimer;
    long long _playerFlag;
    MVLoadingHUD *_mvLoadingHUD;
}

+ (id)playerWithLoader:(id)arg1 showView:(id)arg2 delegate:(id)arg3 timeOut:(_Bool)arg4;
+ (id)playerWithLoader:(id)arg1 showView:(id)arg2 autoPlay:(_Bool)arg3 delegate:(id)arg4;
+ (id)playerWithUrl:(id)arg1 showView:(id)arg2 autoPlay:(_Bool)arg3 delegate:(id)arg4;
+ (id)playerWithLoader:(id)arg1 showView:(id)arg2 delegate:(id)arg3;
+ (id)playerWithUrl:(id)arg1 showView:(id)arg2 delegate:(id)arg3;
@property(nonatomic) _Bool callbackPlayStart; // @synthesize callbackPlayStart=_callbackPlayStart;
@property(retain, nonatomic) MVLoadingHUD *mvLoadingHUD; // @synthesize mvLoadingHUD=_mvLoadingHUD;
@property(nonatomic) long long playerFlag; // @synthesize playerFlag=_playerFlag;
@property(retain, nonatomic) NSTimer *bufferTimer; // @synthesize bufferTimer=_bufferTimer;
@property(nonatomic) long long currentBufferTime; // @synthesize currentBufferTime=_currentBufferTime;
@property(nonatomic) __weak id <MVVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) MVVideoLoader *resouerLoader; // @synthesize resouerLoader=_resouerLoader;
@property(retain, nonatomic) AVURLAsset *videoURLAsset; // @synthesize videoURLAsset=_videoURLAsset;
@property(nonatomic) _Bool pauseInBackground; // @synthesize pauseInBackground=_pauseInBackground;
@property(retain, nonatomic) NSObject *playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(retain, nonatomic) AVPlayerLayer *currentPlayerLayer; // @synthesize currentPlayerLayer=_currentPlayerLayer;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) double loadedProgress; // @synthesize loadedProgress=_loadedProgress;
@property(nonatomic) long long timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) _Bool stopEnterPlayGroundPlay; // @synthesize stopEnterPlayGroundPlay=_stopEnterPlayGroundPlay;
@property(nonatomic) _Bool playGroundAutoPlay; // @synthesize playGroundAutoPlay=_playGroundAutoPlay;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) long long playerSatus; // @synthesize playerSatus=_playerSatus;
@property(nonatomic) double current; // @synthesize current=_current;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
- (void).cxx_destruct;
- (void)removeLoadingView;
- (void)showLoadingView;
- (void)failedToPlay:(id)arg1;
@property(readonly, nonatomic) double progress;
- (void)didFailLoadingWithLoader:(id)arg1 WithError:(id)arg2;
- (void)didFinishLoadingWithLoader:(id)arg1;
- (void)playerItemDidPlayToEnd_v272:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)stopBufferTimeOut;
- (void)bufferTimeOut;
- (void)startBufferTimeOut;
- (void)bufferingSomeSecond;
- (void)handleBufferEmpty:(id)arg1;
- (void)calculateDownloadProgress:(id)arg1;
- (void)playerStatusChanged_v272:(id)arg1;
- (void)playerStatusChanged:(id)arg1;
- (void)observeValueForKeyPath_v272:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateLayerFrame;
- (void)handleDeviceOrientationDidChange:(long long)arg1;
- (void)appDidEnterPlayGround;
- (void)appDidEnterBackground;
- (void)stop;
- (void)pause;
- (void)play;
- (void)playWithLoader:(id)arg1 showView:(id)arg2 delegate:(id)arg3;
- (void)playWithUrl:(id)arg1 showView:(id)arg2 delegate:(id)arg3;
- (void)releasePlayer;
- (void)dealloc;
- (void)initVideoPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

