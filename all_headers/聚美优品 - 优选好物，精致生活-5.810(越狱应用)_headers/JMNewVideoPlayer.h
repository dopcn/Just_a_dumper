//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JMNewVideoPlayerResourceLoaderDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, JMNewVideoPlayerResourceLoader, NSString, NSURL, UIView;

@interface JMNewVideoPlayer : NSObject <JMNewVideoPlayerResourceLoaderDelegate>
{
    _Bool _autoReplay;
    _Bool _userClickedPlay;
    _Bool _userClickedPause;
    long long _state;
    double _duration;
    double _cacheProgress;
    double _playProgress;
    NSURL *_url;
    UIView *_inView;
    AVPlayer *_player;
    AVPlayerItem *_currentItem;
    AVPlayerLayer *_playerLayer;
    JMNewVideoPlayerResourceLoader *_resourceLoader;
    id _timeObserve;
    double _fps;
    double _cacheOffset;
    double _playOffset;
    double _lastCacheOffset;
    double _cacheProgForLog;
    double _playProgForLog;
}

+ (id)innerSelfStateStringFromState:(long long)arg1;
+ (id)innerPlayerStatusStringFromStatus:(long long)arg1;
@property(nonatomic) double playProgForLog; // @synthesize playProgForLog=_playProgForLog;
@property(nonatomic) double cacheProgForLog; // @synthesize cacheProgForLog=_cacheProgForLog;
@property(nonatomic) double lastCacheOffset; // @synthesize lastCacheOffset=_lastCacheOffset;
@property(nonatomic) _Bool userClickedPause; // @synthesize userClickedPause=_userClickedPause;
@property(nonatomic) _Bool userClickedPlay; // @synthesize userClickedPlay=_userClickedPlay;
@property(nonatomic) double playOffset; // @synthesize playOffset=_playOffset;
@property(nonatomic) double cacheOffset; // @synthesize cacheOffset=_cacheOffset;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(retain, nonatomic) id timeObserve; // @synthesize timeObserve=_timeObserve;
@property(retain, nonatomic) JMNewVideoPlayerResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *inView; // @synthesize inView=_inView;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double playProgress; // @synthesize playProgress=_playProgress;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool autoReplay; // @synthesize autoReplay=_autoReplay;
- (void).cxx_destruct;
- (void)downloadVideoHappenedError:(id)arg1 byURL:(id)arg2;
- (void)audioSessionInterrupted:(id)arg1;
- (void)playbackError:(id)arg1;
- (void)playbackFailed:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver;
- (void)addObserver;
- (_Bool)isErrorByNetwork:(long long)arg1;
- (void)calculateCacheProgress;
- (void)calculatePlayProgress;
- (_Bool)isPlaying;
- (double)checkDest:(double)arg1 greaterThanOrig:(double)arg2;
- (void)innerBufferedEnoughToPlay;
- (void)innerSeekTimeTo:(double)arg1;
- (void)innerEnd;
- (void)innerClean;
- (void)innerDestroy;
- (void)innerPause;
- (void)innerPlay;
- (void)innerStop;
- (void)seekTimeTo:(double)arg1;
- (void)destroy;
- (void)stop;
- (void)pause;
- (void)play;
- (void)preparePlayInView:(id)arg1 videoGravity:(id)arg2;
- (id)handleVideoURL;
- (void)reloadCurrentItem;
- (void)changeCurrentPlayerItemWithURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

