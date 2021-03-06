//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSURL, UIImageView;

@interface QYPPPubSightView : UIView
{
    _Bool _isFullScreenModel;
    _Bool _isLocalVideo;
    _Bool _isPlaying;
    _Bool _isPlayManual;
    CDUnknownBlockType _blockClickPlay;
    CDUnknownBlockType _blockBeginPlay;
    UIImageView *_imageViewCover;
    NSURL *_urlSight;
    UIImageView *_imageViewPlayIcon;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_moviePlayeView;
    NSURL *_localVideoPath;
}

@property(nonatomic) _Bool isPlayManual; // @synthesize isPlayManual=_isPlayManual;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSURL *localVideoPath; // @synthesize localVideoPath=_localVideoPath;
@property(nonatomic) _Bool isLocalVideo; // @synthesize isLocalVideo=_isLocalVideo;
@property(retain, nonatomic) AVPlayerLayer *moviePlayeView; // @synthesize moviePlayeView=_moviePlayeView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImageView *imageViewPlayIcon; // @synthesize imageViewPlayIcon=_imageViewPlayIcon;
@property(retain, nonatomic) NSURL *urlSight; // @synthesize urlSight=_urlSight;
@property(retain, nonatomic) UIImageView *imageViewCover; // @synthesize imageViewCover=_imageViewCover;
@property(copy, nonatomic) CDUnknownBlockType blockBeginPlay; // @synthesize blockBeginPlay=_blockBeginPlay;
@property(copy, nonatomic) CDUnknownBlockType blockClickPlay; // @synthesize blockClickPlay=_blockClickPlay;
@property(nonatomic) _Bool isFullScreenModel; // @synthesize isFullScreenModel=_isFullScreenModel;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)moviePlayTimeJump:(id)arg1;
- (void)moviePlayDidEnd:(id)arg1;
- (void)playVideoWithPath:(id)arg1;
- (void)clickPlay:(id)arg1;
- (void)playLocalVideo:(id)arg1;
- (void)resetPlayer;
- (void)setSightWithVideoPath:(id)arg1;
- (id)init;
- (void)stop;
- (void)removeFromSuperview;
- (void)dealloc;

@end

