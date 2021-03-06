//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPlayerControlBase.h"

#import "BDAdPlaceDelegate-Protocol.h"
#import "BDDetailPlayerViewDelegate-Protocol.h"
#import "SmallPlayerDetailViewDelegate-Protocol.h"
#import "UIPopoverViewDelegate-Protocol.h"

@class BDCustomProgressView, BDDetailPlayerView, BDEpisodeData, BDVideoData, BrightnessView, NSArray, NSMutableArray, NSString, NSTimer, SmallPlayerDetailView, SpeedTimeView, UIButton, UIImageView, UILabel, UIPopoverView, UISlider, UIView;
@protocol BDPlayerSmallControlProtocol;

@interface BDPlayerSmallControl : BDPlayerControlBase <BDAdPlaceDelegate, BDDetailPlayerViewDelegate, SmallPlayerDetailViewDelegate, UIPopoverViewDelegate>
{
    UIView *contentView;
    UIView *videoYiView;
    UIView *playerCtlView;
    UIButton *fullScreenBtn;
    UIView *v_top;
    UIView *v_bottom;
    UIView *returnBtnView;
    UIButton *shareBtn;
    UILabel *v_titleLabel;
    UILabel *v_urlLabel;
    UISlider *sli_content;
    UIImageView *airplayBackGroundView;
    _Bool isplaying;
    _Bool isseeking;
    _Bool isbuffering;
    _Bool isfailing;
    _Bool isbegining;
    _Bool isVolumeSliderChangeing;
    _Bool v_bottomshow;
    _Bool isPauseForShare;
    UILabel *lab_time;
    UIButton *btn_play;
    UILabel *lab_source_name;
    UILabel *lab_head;
    UILabel *lab_tail;
    UIView *bufferView;
    UILabel *lab_buffer;
    UIView *failedView;
    UILabel *loadProcessLabel;
    UILabel *lab_begin_name;
    UILabel *lab_begin_src;
    struct CGPoint touchpoint;
    struct CGPoint beginpoint;
    NSString *title;
    NSTimer *theTimer;
    float _progress;
    float volumeValue;
    BDEpisodeData *bdEpisodeData;
    int playerType;
    int videoType;
    struct CGPoint panLastPoint;
    int panType;
    UIView *_panView;
    BrightnessView *_brightnessView;
    UILabel *_adLabel;
    long long _count;
    UIButton *_jumpUrlButton;
    UIImageView *_countDownView;
    _Bool shareBtnEnabled;
    _Bool sharePopupDismissing;
    _Bool _isPlayVideoYi;
    int currentSrcRow;
    int currentEpisode;
    id <BDPlayerSmallControlProtocol> smallDelegate;
    NSMutableArray *episodeList;
    SmallPlayerDetailView *detailView;
    BDVideoData *bdVideoData;
    NSArray *programList;
    UIPopoverView *sharePoperView;
    UIImageView *_beginView;
    BDDetailPlayerView *_playerFaildView;
    UIView *_noticeView;
    SpeedTimeView *_speedView;
    double _totalPlayTime;
    double _lastSliderValue;
    UIView *_network4GTipsView;
    BDCustomProgressView *_smallProgressView;
}

@property(retain, nonatomic) BDCustomProgressView *smallProgressView; // @synthesize smallProgressView=_smallProgressView;
@property(nonatomic) _Bool isPlayVideoYi; // @synthesize isPlayVideoYi=_isPlayVideoYi;
@property(retain, nonatomic) UIView *network4GTipsView; // @synthesize network4GTipsView=_network4GTipsView;
@property(nonatomic) double lastSliderValue; // @synthesize lastSliderValue=_lastSliderValue;
@property(nonatomic) double totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;
@property(nonatomic) __weak SpeedTimeView *speedView; // @synthesize speedView=_speedView;
@property(nonatomic) __weak UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) BDDetailPlayerView *playerFaildView; // @synthesize playerFaildView=_playerFaildView;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIImageView *beginView; // @synthesize beginView=_beginView;
@property(retain, nonatomic) UIPopoverView *sharePoperView; // @synthesize sharePoperView;
@property(retain, nonatomic) NSArray *programList; // @synthesize programList;
@property(nonatomic) int currentEpisode; // @synthesize currentEpisode;
@property(nonatomic) int currentSrcRow; // @synthesize currentSrcRow;
@property(retain, nonatomic) BDVideoData *bdVideoData; // @synthesize bdVideoData;
@property(retain, nonatomic) SmallPlayerDetailView *detailView; // @synthesize detailView;
@property(retain, nonatomic) NSMutableArray *episodeList; // @synthesize episodeList;
@property(nonatomic) __weak id <BDPlayerSmallControlProtocol> smallDelegate; // @synthesize smallDelegate;
- (void).cxx_destruct;
- (void)detailPlayerView:(id)arg1 didTappedButtonActionWithType:(unsigned long long)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)popoverViewWillDismiss;
- (void)socialShareFinished;
- (void)logPlayCount;
- (void)dealloc;
- (void)refreshLiveData;
- (void)playShortVideo:(int)arg1;
- (void)_drawViews4Ads:(_Bool)arg1;
- (void)jumpURLwebSite;
- (void)setAdView;
- (id)getValidAndFiltWebPlayEpisode:(id)arg1;
- (int)getCurrentEpisodeIndex;
- (int)getCurrentSrcRowByEpisode;
- (void)requestEpisodeListForSwitchingSourceFail;
- (void)requestEpisodeListForSwitchingSourceSuccess:(id)arg1;
- (void)requestVideoDataFail;
- (void)requestVideoDataSuccess:(id)arg1;
- (id)filterLiveEpisodeData;
- (void)requestLiveProgramDataFail;
- (void)requestLiveProgramDataSuccess:(id)arg1 programs:(id)arg2;
- (void)playerCurrentEpisodeChanged:(id)arg1;
- (void)removeTimer;
- (void)removePlayerControl;
- (void)volumeChanged:(id)arg1;
- (void)fullScreenBtnClick:(id)arg1;
- (void)hiddenAll;
- (id)timeToString:(float)arg1;
- (void)theTimerReset;
- (void)controlshow;
- (void)controlshow:(_Bool)arg1;
- (void)doubleTaps;
- (void)singleTap;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isAttachedSmallWindowMode;
- (_Bool)isAirPlayActive;
- (void)handlePanFrom:(id)arg1;
- (_Bool)isPanLeft:(struct CGPoint)arg1 pointEnd:(struct CGPoint)arg2;
- (_Bool)isPanHorizontal:(struct CGPoint)arg1 pointEnd:(struct CGPoint)arg2;
- (void)showToastMessage:(id)arg1;
- (void)undraw3GNetWorkTipsView;
- (void)draw3GNetWorkTipsView;
- (id)getContentView;
- (void)addGyroControl;
- (void)addSDKAdsView:(id)arg1;
- (void)hideStatusView;
- (void)showStatusView;
- (void)handlePlayerCoreReady:(id)arg1;
- (void)hideControlsForLive;
- (id)_getWebURLLink;
- (_Bool)_shouldShowPageURLLink;
- (void)_refreshSourceLabel;
- (void)refreshTitleAndSource;
- (void)volumesliderChanged:(float)arg1;
- (void)brightnessChanged:(double)arg1;
- (void)startPlayer;
- (void)stopPlayer;
- (void)playVideo;
- (void)reloadMovie;
- (void)refreshAirPlayStatus;
- (void)undrawBufferView;
- (void)drawBufferView;
- (void)undrawFaileview;
- (void)drawErrorView:(id)arg1 isReloadable:(_Bool)arg2;
- (void)_undrawBeginview;
- (void)undrawBeginview;
- (void)drawBeginview;
- (void)setBufferValue:(float)arg1;
- (void)setTime;
- (void)setVideoYiAdView;
- (void)refreshVideoYi:(_Bool)arg1;
- (void)refreshSmallProgessView:(float)arg1 total:(float)arg2;
- (void)updatePlayerTime:(float)arg1 playTime:(float)arg2;
- (void)endSeeking;
- (void)updateContentslider:(float)arg1;
- (void)contentsliderChanged:(id)arg1;
- (void)contentsliderbeginChanged:(id)arg1;
- (void)contentsliderendChanged:(id)arg1;
- (void)refreshPlayControlWithPlayUrlData:(id)arg1 clarityCollection:(id)arg2;
- (void)syncPlayPauseButtons:(_Bool)arg1;
- (_Bool)statusBarHidden;
- (long long)defaultOrientation;
- (unsigned int)preferredOrientationMask;
- (void)continuePlayClicked:(id)arg1;
- (void)dismiss4GNetworkTips;
- (void)show4GNetworkTips;
- (void)startPlayerForResumeActive;
- (void)storPlayerForInactive;
- (void)addSplashView;
- (void)goToShare:(id)arg1;
- (void)undrawPortraitNoticeView;
- (struct CGSize)sizeWithFont:(id)arg1 maxSize:(struct CGSize)arg2 InputString:(id)arg3;
- (void)drawPortraitNoticeView;
- (void)bulidSmallControl;
- (void)returnToPreviousView:(id)arg1;
- (void)tryToRefreshVideoData:(id)arg1;
- (void)layoutSubviews;
- (void)bulidDetailView;
- (id)initWithFrame:(struct CGRect)arg1 episodeData:(id)arg2 playURLData:(id)arg3 playerOption:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

