//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseMediaPlayerWidget.h"

#import "TBCProgressBarDelegate-Protocol.h"

@class NSString, NSTimer, TBCAudioVisualizer, TBCImageView, TBCProgressBar, TBCUploadVideoInfoModel, UILabel, UIView;

@interface TBCVideoView : TBCBaseMediaPlayerWidget <TBCProgressBarDelegate>
{
    _Bool _isPlayBeforeDragProgressbar;
    NSString *_strPlayCount;
    TBCImageView *_playCountIcon;
    UILabel *_playCountLabel;
    TBCAudioVisualizer *_audioVisualizer;
    TBCProgressBar *_progressBar;
    NSTimer *_timer;
    UIView *_videoBottomProgressBar;
    UIView *_videoBottomProgressBgBar;
    TBCUploadVideoInfoModel *_uploadModel;
}

@property(retain, nonatomic) TBCUploadVideoInfoModel *uploadModel; // @synthesize uploadModel=_uploadModel;
@property(retain, nonatomic) UIView *videoBottomProgressBgBar; // @synthesize videoBottomProgressBgBar=_videoBottomProgressBgBar;
@property(retain, nonatomic) UIView *videoBottomProgressBar; // @synthesize videoBottomProgressBar=_videoBottomProgressBar;
@property(nonatomic) _Bool isPlayBeforeDragProgressbar; // @synthesize isPlayBeforeDragProgressbar=_isPlayBeforeDragProgressbar;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TBCProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) TBCAudioVisualizer *audioVisualizer; // @synthesize audioVisualizer=_audioVisualizer;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) TBCImageView *playCountIcon; // @synthesize playCountIcon=_playCountIcon;
@property(copy, nonatomic) NSString *strPlayCount; // @synthesize strPlayCount=_strPlayCount;
- (void).cxx_destruct;
- (void)updateVideoBottomProgressBarProgress:(float)arg1 total:(float)arg2;
- (void)hideVideoBottomProgressBar;
- (void)showVideoBottomProgressBar;
- (void)setShowVideoBottomProgressBar:(_Bool)arg1;
- (void)showPlayButtonOfControlOverlayView:(_Bool)arg1;
- (void)resetColorForVideoView;
- (void)videoViewdidAudioRouteChangeNotification:(id)arg1;
- (void)addNotification;
- (void)uploadVideoPlayDuration:(long long)arg1;
- (void)uploadVideoPlayDurationIfNeed;
- (void)videoViewTapped:(id)arg1;
- (void)overlayControlLoadFailed;
- (void)overlayControlPause;
- (void)overlayControlPlay;
- (void)controlBtnClick:(id)arg1;
- (void)appInterruptEnd;
- (void)appInterruptBegin;
- (void)appEnterForegroundMonitor;
- (void)appEnterBackgroundMonitor;
- (void)deviceRotateMonitor;
- (id)videoSizeForCurrentPlayEnd;
- (void)playerTimerObserver:(int)arg1;
- (void)videoPlayFinished;
- (_Bool)addAssetAuthorityRules:(id)arg1;
- (void)playerError:(id)arg1 hint:(id)arg2;
- (void)videoAssetLoadFailed:(id)arg1;
- (void)videoAssetLoaded;
- (void)dismissPlayer;
- (void)resumePlayer;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)playerLoading;
- (void)play;
- (id)currentOverlayView:(struct CGRect)arg1 overlayerViewType:(long long)arg2;
- (void)continueToPlay;
- (void)assetLoadFailed;
- (void)assetLoadSuccess;
- (void)synchronizedWidgetStatus;
- (void)resetAudioVisualizerHidden:(_Bool)arg1;
- (void)refreshPlayingStatus;
- (void)progressSlideEnd:(id)arg1;
- (void)progressSlide:(double)arg1 ofTotal:(double)arg2;
- (void)dismissProgressbar;
- (void)resetDimissTimer;
- (_Bool)isProgressBarShow;
- (void)showProgressBar:(_Bool)arg1 ofSimple:(_Bool)arg2;
- (void)startAutoPlay;
- (void)dismissVideo;
- (void)bindData:(id)arg1;
- (void)bindVideoInfoDicWhenUrlEqual:(id)arg1;
- (void)bindVideoInfoDic:(id)arg1;
- (void)bindVideoInfoData:(id)arg1;
- (void)bindURLAndPlay;
- (void)forcePlay;
- (void)autoPlay;
- (void)muteIfNecessary;
- (id)getCurrentViewController;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 overlayViewType:(long long)arg2 timePeriodForCallback:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

