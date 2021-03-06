//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MVClickDelegate-Protocol.h"
#import "MVMediaViewFullScreenDelegate-Protocol.h"
#import "MVVideoPlayerDelegate-Protocol.h"
#import "MVViewImpressionTimerDelegate-Protocol.h"

@class MVCampaign, MVCampaignExp, MVMediaViewFullScreenViewController, MVUnitSetting, MVVideoDownloadTask, MVVideoInfo, MVVideoPlayer, MVViewImpressionTimer, NSString, UIImageView, UIViewController;
@protocol MVMediaViewDelegate;

@interface MVMediaView : UIView <MVVideoPlayerDelegate, MVViewImpressionTimerDelegate, MVMediaViewFullScreenDelegate, MVClickDelegate>
{
    _Bool _allowFullscreen;
    id <MVMediaViewDelegate> _delegate;
    NSString *_unitId;
    MVVideoPlayer *_player;
    MVCampaignExp *_campaignExp;
    MVCampaign *_bufferCampaign;
    MVUnitSetting *_unitSetting;
    MVViewImpressionTimer *_timer;
    MVVideoInfo *_videoInfo;
    MVVideoDownloadTask *_task;
    UIView *_playView;
    UIView *_playControlView;
    UIView *_fbMediaView;
    UIImageView *_playImage;
    UIImageView *_backgroundImage;
    NSString *_bufferUnitId;
    UIViewController *_parentViewController;
    MVMediaViewFullScreenViewController *_fullScreenViewController;
}

@property(retain, nonatomic) MVMediaViewFullScreenViewController *fullScreenViewController; // @synthesize fullScreenViewController=_fullScreenViewController;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(copy, nonatomic) NSString *bufferUnitId; // @synthesize bufferUnitId=_bufferUnitId;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImageView *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) UIView *fbMediaView; // @synthesize fbMediaView=_fbMediaView;
@property(retain, nonatomic) UIView *playControlView; // @synthesize playControlView=_playControlView;
@property(retain, nonatomic) UIView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) MVVideoDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) MVVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) MVViewImpressionTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MVUnitSetting *unitSetting; // @synthesize unitSetting=_unitSetting;
@property(retain, nonatomic) MVCampaign *bufferCampaign; // @synthesize bufferCampaign=_bufferCampaign;
@property(retain, nonatomic) MVCampaignExp *campaignExp; // @synthesize campaignExp=_campaignExp;
@property(retain, nonatomic) MVVideoPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *unitId; // @synthesize unitId=_unitId;
@property(nonatomic) _Bool allowFullscreen; // @synthesize allowFullscreen=_allowFullscreen;
@property(nonatomic) __weak id <MVMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storeKitClosed;
- (void)willOpenStoreKit;
- (void)clickUrlDidEndJump:(id)arg1 error:(id)arg2;
- (void)clickUrlDidJumpToUrl:(id)arg1;
- (void)clickUrlWillStartToJump:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)mediaViewDidExitFullscreen:(id)arg1;
- (void)mediaViewWillEnterFullscreen:(id)arg1;
- (void)mvMediaViewDidOnClick:(id)arg1;
- (void)mvMediaViewDidExitFullScreen_v282:(id)arg1;
- (void)mvMediaViewDidExitFullScreen:(id)arg1;
- (void)trackHidden;
- (void)trackImpression;
- (void)videoPlayerPlayBufferTimeOut;
- (void)videoPlayerPlayFailed:(id)arg1;
- (void)videoPlayerPlayStop;
- (void)videoPlayerPlayFinish;
- (void)videoPlayerPlayPause;
- (void)mvMediaViewDidMute:(id)arg1 mute:(_Bool)arg2;
- (void)videoPlayerPlayPlaying;
- (void)videoPlayerPlayProgressChanged:(double)arg1 time:(double)arg2;
- (void)videoPlayerPlayStart;
- (void)dealloc;
- (void)clickWithView:(id)arg1;
- (void)sendAdvImpWithTime:(double)arg1;
- (void)reportOnlyImpressionUrl:(id)arg1;
- (void)sendImpression:(id)arg1;
- (void)showPlayButton;
- (void)setHidden:(_Bool)arg1;
- (void)stop;
- (void)play;
@property(readonly, nonatomic) MVCampaign *campaign;
- (id)createVideoPlayer;
- (void)resetPlayerWithPlaying:(_Bool)arg1;
- (void)hiddenAll;
- (void)createFBMediaView;
- (void)setMediaSourceWithCampaign:(id)arg1 unitId:(id)arg2;
- (void)updateConstraints;
- (void)tapEvent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

