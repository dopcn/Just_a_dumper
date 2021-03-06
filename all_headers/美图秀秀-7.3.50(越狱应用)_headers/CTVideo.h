//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, CTPlayer, NSLayoutConstraint, NSString, UIButton, UIProgressView;
@protocol CTVideoControlDelegate;

@interface CTVideo : UIView
{
    UIButton *muteButton;
    _Bool playerVoiceState;
    _Bool _isRvMuteUse;
    _Bool _isVertical;
    _Bool _videoIsPlaying;
    _Bool _videoIsPlayEnd;
    id <CTVideoControlDelegate> _videoDelegate;
    NSLayoutConstraint *_progressBottomConstraint;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    CTPlayer *_playerView;
    id _playbackTimeObserver;
    NSString *_totalTime;
    UIProgressView *_videoProgress;
}

@property(nonatomic) _Bool videoIsPlayEnd; // @synthesize videoIsPlayEnd=_videoIsPlayEnd;
@property(nonatomic) _Bool videoIsPlaying; // @synthesize videoIsPlaying=_videoIsPlaying;
@property(retain, nonatomic) UIProgressView *videoProgress; // @synthesize videoProgress=_videoProgress;
@property(copy, nonatomic) NSString *totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) id playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(retain, nonatomic) CTPlayer *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(retain, nonatomic) NSLayoutConstraint *progressBottomConstraint; // @synthesize progressBottomConstraint=_progressBottomConstraint;
@property(nonatomic) __weak id <CTVideoControlDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(nonatomic) _Bool isRvMuteUse; // @synthesize isRvMuteUse=_isRvMuteUse;
- (void).cxx_destruct;
- (void)changeVideoVoiceState;
- (void)SetMuteButtonForRewardVideo;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)registerForApplicationNotifications;
- (void)dealloc;
- (void)beginPlayWithMute:(_Bool)arg1;
- (void)moviePlayDidEnd:(id)arg1;
- (void)monitoringPlayback:(id)arg1;
- (void)progressViewAutoLayoutWithControl:(id)arg1 andSuperItem:(id)arg2 left:(float)arg3 right:(float)arg4 bottom:(float)arg5 height:(float)arg6;
- (void)setVideoProgress;
- (double)availableDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)playerViewConfigWithMuted:(_Bool)arg1;
- (id)initCacheWithFrame:(struct CGRect)arg1 andPath:(id)arg2 isMuted:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andUrl:(id)arg2 isMuted:(_Bool)arg3;

@end

