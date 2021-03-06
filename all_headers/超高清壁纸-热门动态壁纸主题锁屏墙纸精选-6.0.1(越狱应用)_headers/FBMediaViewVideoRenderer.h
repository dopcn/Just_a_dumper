//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdKVOController, FBAdVideoLogger, FBAdVideoPlayerView, NSMutableSet;
@protocol FNFAVPlayer, FNFAVPlayerItem;

@interface FBMediaViewVideoRenderer : UIView
{
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _duration;
    CDUnknownBlockType _failureBlock;
    _Bool _isSeeking;
    _Bool _isStarted;
    FBAdKVOController *_kvoController;
    CDUnknownBlockType _loadedBlock;
    id <FNFAVPlayer> _player;
    id <FNFAVPlayerItem> _playerItem;
    _Bool _playingBeforeSeeked;
    NSMutableSet *_timingObservers;
    float _volume;
    UIView *_videoContainerView;
    FBAdVideoLogger *_videoLogger;
    FBAdVideoPlayerView *_videoView;
}

- (void).cxx_destruct;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidDisengageSeek;
- (void)videoDidSeek;
- (void)videoDidEngageSeek;
- (void)videoDidPlay;
- (void)videoDidPause;
- (void)videoDidLoad;
- (void)videoDidChangeVolume;
- (void)loadNativeAd:(id)arg1 autoplayEnabled:(_Bool)arg2 loadedBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) float volume;
- (void)seekVideoToTime:(CDStruct_1b6d18a9)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)playVideo;
- (void)pauseVideo;
- (void)engageVideoSeek;
- (void)disengageVideoSeek;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) double aspectRatio;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

