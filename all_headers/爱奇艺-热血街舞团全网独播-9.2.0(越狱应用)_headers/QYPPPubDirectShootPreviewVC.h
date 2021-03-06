//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QYPPPubAudioRouteNotificationObserver-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, NSURL, QYPPPubAudioRouteNotification, QYPPPubModel, QYShootVarietyPromptView, UIButton, UILabel;

@interface QYPPPubDirectShootPreviewVC : UIViewController <QYPPPubAudioRouteNotificationObserver>
{
    id _playbackTimeObserver;
    double _totalTime;
    QYPPPubModel *_pubModel;
    NSString *_filepath;
    double _currentPlaybackTime;
    AVPlayer *_player;
    AVPlayerItem *_item;
    AVPlayerLayer *_playerLayer;
    NSURL *_videoUrl;
    QYShootVarietyPromptView *_processPromptView;
    UIButton *_okButton;
    UILabel *_timeLabel;
    QYPPPubAudioRouteNotification *_audioRouteNotification;
}

@property(retain, nonatomic) QYPPPubAudioRouteNotification *audioRouteNotification; // @synthesize audioRouteNotification=_audioRouteNotification;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) QYShootVarietyPromptView *processPromptView; // @synthesize processPromptView=_processPromptView;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(copy, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(retain, nonatomic) QYPPPubModel *pubModel; // @synthesize pubModel=_pubModel;
- (void).cxx_destruct;
- (void)audioRouteNotification:(id)arg1 isHeadsetPlugin:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeVideoKVO;
- (void)updateProgress;
- (void)doneAction;
- (void)goback;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)backAction;
- (void)loadNavbar;
- (void)playbackFinished:(id)arg1;
- (void)addtimeObserver;
- (void)configPlayView;
- (void)addTotalTimeLabel;
- (void)addDoneBtn;
- (void)configProgressView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

