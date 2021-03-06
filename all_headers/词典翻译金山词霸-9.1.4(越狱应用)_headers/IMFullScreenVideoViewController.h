//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerLayer, IMAdCloseButton, IMAdReplayButton, IMUISlider, IMUIVideoView, UIButton, UITapGestureRecognizer, UIView;
@protocol IMFullScreenVideoViewControllerDelegate;

@interface IMFullScreenVideoViewController : UIViewController
{
    _Bool _isMuted;
    AVPlayer *_player;
    AVPlayerLayer *_layer;
    UIView *_playerView;
    IMUIVideoView *_videoView;
    IMAdCloseButton *_closeButton;
    IMAdReplayButton *_replayButton;
    IMUISlider *_progressSlider;
    id _timeObserver;
    UIButton *_volumeCtrlButton;
    UIButton *_ctaButton;
    UIView *_endScreenOverlay;
    UITapGestureRecognizer *_ctaTapGesture;
    id <IMFullScreenVideoViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IMFullScreenVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *ctaTapGesture; // @synthesize ctaTapGesture=_ctaTapGesture;
@property(retain, nonatomic) UIView *endScreenOverlay; // @synthesize endScreenOverlay=_endScreenOverlay;
@property(retain, nonatomic) UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) UIButton *volumeCtrlButton; // @synthesize volumeCtrlButton=_volumeCtrlButton;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) IMUISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) IMAdReplayButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) IMAdCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IMUIVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayerLayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)ctaButtonClicked;
- (void)replayVideo;
- (void)closeFullScreen:(id)arg1;
- (void)toggleMuteState;
- (void)mediaHasEnded;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithView:(id)arg1;

@end

