//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, BBAProgressControlView, CAGradientLayer, NSURL, UIImageView, UITapGestureRecognizer;

@interface BBAShortVideoPreview : UIView
{
    AVPlayer *_player;
    _Bool _isPlaying;
    _Bool _autoReplay;
    _Bool _showProgressBar;
    NSURL *_videoUrl;
    AVPlayerItem *_playerItem;
    AVAsset *_avAsset;
    AVPlayerLayer *_playerLayer;
    id _timeObserver;
    BBAProgressControlView *_progressControlView;
    UITapGestureRecognizer *_tap;
    UIImageView *_playIcon;
    UIView *_progressView;
    AVPlayerItem *_item;
    CAGradientLayer *_gradient;
    UIView *_tapView;
    UITapGestureRecognizer *_iconTap;
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) UITapGestureRecognizer *iconTap; // @synthesize iconTap=_iconTap;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) BBAProgressControlView *progressControlView; // @synthesize progressControlView=_progressControlView;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(nonatomic) _Bool autoReplay; // @synthesize autoReplay=_autoReplay;
@property(readonly, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)playEnd;
- (void)handleSeekToProgress:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tapAction;
- (void)updatePlayIcon:(_Bool)arg1;
- (void)didClick:(id)arg1;
- (void)showProgressUI:(id)arg1;
- (void)timerFire:(id)arg1;
- (void)showProgressView;
- (void)initPlayIcon;
- (void)setupSubViews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setIsPlaying:(_Bool)arg1;
- (_Bool)isPlayerPlaying;
- (void)stop;
- (void)play;
- (void)playWithFrame:(struct CGRect)arg1 videoUrl:(id)arg2 avAsset:(id)arg3 avPlayerItem:(id)arg4 beginPlayCallBack:(CDUnknownBlockType)arg5;

@end

