//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JKWSafariViewControllerDelegate-Protocol.h"
#import "STADBandADViewDelegate-Protocol.h"
#import "STADBannerViewDelegate-Protocol.h"
#import "STADBarrageAdViewDelegate-Protocol.h"
#import "STADDownloaderDelegate-Protocol.h"
#import "STADFlogoADViewDelegate-Protocol.h"
#import "STADFocusLoaderDelegate-Protocol.h"
#import "STADImageBannerViewDelegate-Protocol.h"
#import "STADListDownloaderDelegate-Protocol.h"
#import "STADOpenADViewControllerDelegate-Protocol.h"
#import "STADOpenDownloaderDelegate-Protocol.h"
#import "STADOpenObjectDelegate-Protocol.h"
#import "STADOpenViewDelegate-Protocol.h"
#import "STADOverflyViewDelegate-Protocol.h"
#import "STADPauseViewDelegate-Protocol.h"
#import "STADTVPerdownloaderDelegate-Protocol.h"
#import "STADTvJSONObjectDelegate-Protocol.h"
#import "STADVastDelegate-Protocol.h"
#import "STADVoiceDelegate-Protocol.h"
#import "STADWebViewDelegate-Protocol.h"
#import "STADWrapframeAdViewDelegate-Protocol.h"

@class AdMasterMobileTracking, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, STADBandADView, STADBarrageAdView, STADFlogoADView, STADFocusLoader, STADJKWSafariViewController, STADOADManager, STADOpenADViewController, STADOpenDownloader, STADOpenObject, STADOpenView, STADOverflyView, STADPauseView, STADTVPerdownloader, STADTvJSONObject, STADVastObject, STADWrapframeAdView, UIView;
@protocol STADManagerDelegate;

@interface STADManager : NSObject <STADVastDelegate, STADPauseViewDelegate, STADOpenViewDelegate, STADDownloaderDelegate, STADListDownloaderDelegate, STADWebViewDelegate, STADVoiceDelegate, STADFlogoADViewDelegate, JKWSafariViewControllerDelegate, STADBannerViewDelegate, STADTvJSONObjectDelegate, STADOpenObjectDelegate, STADTVPerdownloaderDelegate, STADOpenDownloaderDelegate, STADBarrageAdViewDelegate, STADBandADViewDelegate, STADWrapframeAdViewDelegate, STADImageBannerViewDelegate, STADOpenADViewControllerDelegate, STADOverflyViewDelegate, STADFocusLoaderDelegate>
{
    STADPauseView *_pauseView;
    STADOpenView *_openView;
    STADFlogoADView *_flogoADView;
    STADBarrageAdView *_barrageADView;
    STADWrapframeAdView *wrapframeAdView;
    STADBandADView *_bandADView;
    STADOverflyView *_overflyView;
    UIView *_webContentView;
    _Bool _oadShouldDismiss;
    int _delay_times;
    NSString *_playingOADMediaURL;
    long long _playing_index;
    long long _need_play_oad_count;
    double _current_time;
    double _summery_time;
    double _target_time;
    double _oad_time;
    double _progress;
    NSString *_oadClickInfo;
    NSString *_padClickInfo;
    NSMutableArray *_downloaderArr;
    int _downloaderCount;
    NSMutableArray *_vastObjArr;
    _Bool _canOADHandleClickAction;
    _Bool _isOffline;
    _Bool _changingOADAsset;
    _Bool _videoPlayIsFullScreen;
    Class _admasterOriginalClass;
    AdMasterMobileTracking *mobileTracking;
    STADTVPerdownloader *_perDownloader;
    STADOpenDownloader *_openDownloader;
    STADFocusLoader *_focusLoader;
    NSDictionary *_focusDict;
    NSMutableArray *delegates;
    NSMutableArray *objSafeArr;
    _Bool oadOfflineAsync;
    _Bool padOfflineAsync;
    NSString *OfflineVid;
    STADVastObject *_downloadOadVastObject;
    STADVastObject *_downloadPadVastObject;
    double madAndFlogotimeoutInterval;
    int oadInxRecord;
    NSString *flogoHostURL;
    NSString *bandHostURL;
    NSMutableArray *bandTicksArr;
    struct CGRect flogoFrame;
    NSString *flogoAdViewDuration;
    NSString *_adType;
    STADJKWSafariViewController *loadingPageController;
    struct CGRect bannerSuperViewFrame;
    NSMutableArray *brandZoneBannerArr;
    long long mraidWidth;
    long long mraidHeight;
    long long homepageBannerCount;
    long long brandZoneBannerCount;
    long long tvBannerCount;
    long long movieBannerCount;
    long long varietyBannerCount;
    long long sportsBannerCount;
    long long memberBannerCount;
    long long comicBannerCount;
    long long AmericaTVBannerCount;
    long long KoreanTVBannerCount;
    long long DocumentoryBannerCount;
    long long classroomBannerCount;
    long long entertainmentBannerCount;
    long long selfmediaBannerCount;
    long long selfmediaTabBannerCount;
    long long homepageBannerCountMax;
    long long brandZoneBannerCountMax;
    long long tvBannerCountMax;
    long long movieBannerCountMax;
    long long varietyBannerCountMax;
    long long sportsBannerCountMax;
    long long memberBannerCountMax;
    long long comicBannerCountMax;
    long long AmericaTVBannerCountMax;
    long long KoreanTVBannerCountMax;
    long long DocumentoryBannerCountMax;
    long long classroomBannerCountMax;
    long long entertainmentBannerCountMax;
    long long selfmediaBannerCountMax;
    long long selfmediaTabBannerCountMax;
    long long _screenType;
    STADTvJSONObject *TvJsonObj;
    long long loadingpageInitOrientation;
    STADOpenObject *openObject;
    float needPlayingFlogoTime;
    float needPlayingBarrageTime;
    _Bool isBarrageOn;
    _Bool isFullTimeFlogo;
    UIView *barrageAdSuperView;
    UIView *wrapframeAdSuperView;
    NSString *barrageAdHost;
    _Bool isWrapFrameSHow;
    long long lastFlogoShowTime;
    long long lastBandShowTime;
    long long lastBarrageShowTime;
    _Bool fullScreenMode;
    _Bool isFisrtBarrageReq;
    NSMutableDictionary *_homepageBannerDict;
    NSMutableDictionary *_tvBannerDict;
    NSMutableDictionary *_varityBannerDict;
    NSMutableDictionary *_movieBannerDict;
    NSMutableDictionary *_sportsBannerDict;
    NSMutableDictionary *_memberBannerDict;
    NSMutableDictionary *_comicBannerDict;
    NSMutableDictionary *_AmericaTVBannerDict;
    NSMutableDictionary *_KoreanTVBannerDict;
    NSMutableDictionary *_BannerDict;
    NSMutableDictionary *_documentaryBannerDict;
    NSMutableDictionary *_classroomBannerDict;
    NSMutableDictionary *_entertainmentBannerDict;
    NSMutableDictionary *_selfmediaBannerDict;
    NSMutableDictionary *_selfmediaTabBannerDict;
    STADBarrageAdView *barrageView;
    NSMutableArray *serialBannerArray;
    NSMutableArray *bannerViewArr;
    STADOADManager *_sTADOADManager;
    _Bool _oadPlaying;
    _Bool _isNonepicMode;
    _Bool _isNightMode;
    id <STADManagerDelegate> _delegate;
    NSDictionary *_debugConfig;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_UUID;
    UIView *_oadParentView;
    STADOpenADViewController *_openController;
}

+ (void)setupDebugConfigInfo;
+ (_Bool)debugModelIsEnabled;
+ (void)enableDebugModel:(_Bool)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSTADManager;
@property(retain, nonatomic) STADOpenADViewController *openController; // @synthesize openController=_openController;
@property(retain, nonatomic) UIView *oadParentView; // @synthesize oadParentView=_oadParentView;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
@property(nonatomic) _Bool isNonepicMode; // @synthesize isNonepicMode=_isNonepicMode;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) double summery_time; // @synthesize summery_time=_summery_time;
@property(readonly, nonatomic) double oad_time; // @synthesize oad_time=_oad_time;
@property(readonly, nonatomic) _Bool oadPlaying; // @synthesize oadPlaying=_oadPlaying;
@property(nonatomic) __weak id <STADManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callDelegateSyncWithActionBlock:(CDUnknownBlockType)arg1;
- (void)callDelegateWithActionBlock:(CDUnknownBlockType)arg1;
- (void)adVoiceMuteAction:(id)arg1;
@property(retain, nonatomic) NSDictionary *debugConfig; // @synthesize debugConfig=_debugConfig;
- (id)getSDKSettingViewController;
- (void)stadErrorTrackingWithInx:(long long)arg1 andUrl:(id)arg2;
- (_Bool)handleWithURLString:(id)arg1 multiClickthrough:(id)arg2 supportDeeplink:(_Bool)arg3;
- (id)flowRecords;
- (void)videoPlayerIsFullScreen:(_Bool)arg1;
- (void)videoPlayerDidExitToFullScreenOfImageBannerView:(id)arg1;
- (void)videoPlayerDidEnterToFullScreenOfImageBannerView:(id)arg1;
- (void)videoPlayerDidFinishToPlayOfImageBannerView:(id)arg1;
- (void)videoPlayerDidStopToPlayOfImageBannerView:(id)arg1;
- (void)videoPlayerDidStartToPlayOfImageBannerView:(id)arg1;
- (void)imageBannerViewSingleTap:(id)arg1;
- (void)imageBannerViewLoadError:(id)arg1;
- (void)automicOption:(CDUnknownBlockType)arg1;
- (id)p_brandZoneViewWithBannerArray:(id)arg1;
- (void)imageBannerViewDidFinishLoad:(id)arg1;
- (void)bannerADViewSingleTap:(id)arg1 andClickUrl:(id)arg2;
- (void)bannerADViewDismiss:(id)arg1;
- (void)bannerADViewLoadError:(id)arg1;
- (void)bannerADViewDidFinishLoad:(id)arg1;
- (void)wrapframeADViewLoadError:(id)arg1;
- (void)wrapframeADViewDidFinishLoad:(id)arg1;
- (void)barrageADViewLoadError:(id)arg1;
- (void)barrageADViewDidFinishLoad:(id)arg1;
- (void)barrageADViewDidStartLoad:(id)arg1;
- (void)barrageADsingleTap:(id)arg1;
- (void)openADViewCtrler:(id)arg1 failedWithLocalPath:(id)arg2;
- (void)openADViewCtrler:(id)arg1 finishedWithLocalPath:(id)arg2;
- (void)openObjectLoadError:(id)arg1;
- (void)openObjectDidFinishLoad:(id)arg1 imgLoaclPath:(id)arg2 interval:(double)arg3;
- (void)downloaderError:(id)arg1;
- (void)downloaderIsFailed:(id)arg1;
- (void)downloaderIsSuccessed:(id)arg1;
- (void)flogoADViewDismiss:(id)arg1;
- (void)flogoADViewSingleTap:(id)arg1;
- (void)flogoADViewLoadError:(id)arg1;
- (void)flogoADViewDidFinishLoad:(id)arg1;
- (void)flogoADViewDidStartLoad:(id)arg1;
- (void)bandADViewSingleTap:(id)arg1;
- (void)bandADViewDismiss:(id)arg1;
- (void)bandADViewLoadError:(id)arg1;
- (void)bandADViewDidFinishLoad:(id)arg1;
- (void)bandADViewDidStartLoad:(id)arg1;
- (void)pauseViewOpenURL:(id)arg1;
- (void)pauseViewDismiss:(id)arg1;
- (void)pauseViewSingleTap:(id)arg1;
- (void)pauseViewLoadError:(id)arg1;
- (void)pauseViewDidFinishLoad:(id)arg1;
- (void)pauseViewDidStartLoad:(id)arg1;
- (void)getJSONDataFail:(id)arg1;
- (void)getJSONDataSucc:(id)arg1;
- (void)callBackWithEventID:(id)arg1 guid:(id)arg2 infoDictionary:(id)arg3;
- (void)errorGetData:(id)arg1 andErrorDescription:(id)arg2;
- (void)endGetData:(id)arg1 andAdType:(id)arg2;
- (_Bool)isImageBannerWithPoscode:(id)arg1;
- (void)startGetData:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)nonLinearClickHandle:(id)arg1 andMultiClickThrough:(id)arg2 supportDeeplink:(_Bool)arg3;
- (void)getImageBannerViewWithSTADADParam:(id)arg1 andServerHost:(id)arg2 bannerId:(long long)arg3;
- (void)getBADViewWithADURLString:(id)arg1 guid:(id)arg2 poscode:(id)arg3 andSuperviewFrame:(struct CGRect)arg4 andPageId:(id)arg5 andTimeout:(double)arg6;
- (void)getBADViewWithSTADADParam:(id)arg1 andServerHost:(id)arg2 andSuperviewFrame:(struct CGRect)arg3 andPageId:(id)arg4 andTimeout:(double)arg5;
- (void)stadAdTrack:(id)arg1 andTrackType:(long long)arg2;
- (void)setAppId:(long long)arg1;
- (void)stadLoginTrackWithPassport:(id)arg1;
- (void)JKWSafariViewControllerDidAppear:(id)arg1;
- (void)STADJKWSafariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)JKWSafariViewControllerDidFinish:(id)arg1;
- (void)setLoadingPageInitOrientation:(long long)arg1;
- (void)stadCloseLoadingPage;
- (void)stadOpenLoadingPageWithUrl:(id)arg1 andCurrentViewController:(id)arg2 supportDeeplink:(_Bool)arg3;
- (id)stadSafariControllerWithURL:(id)arg1 supportDeeplink:(_Bool)arg2;
- (void)webViewOpenAppStoreLink:(id)arg1;
- (void)webViewDidMissed:(_Bool)arg1 andWebView:(id)arg2;
- (void)presentWebViewControllerWithURLStirng:(id)arg1 andURLType:(long long)arg2 isOad:(_Bool)arg3 supportDeeplink:(_Bool)arg4;
- (void)stadSkipAdPlayedSec:(long long)arg1;
- (void)stadOptionalAdSoundStop;
- (void)stadOptionalAdSoundPlay;
- (id)getOptionalAdClickThroughWithPoint:(struct CGPoint)arg1;
- (void)stadOptionalAdCompletedWithIsSkiped:(_Bool)arg1;
- (void)playOptionalAdProgressWithCurrentInterval:(float)arg1 andSummeryInterval:(float)arg2;
- (void)stadOptionalAdPlayWithInx:(long long)arg1 userSelectedSec:(long long)arg2;
- (void)removeOnlineADCache;
- (void)removeOfflineAsset:(id)arg1;
- (void)removeOfflineADWithSTADADParam:(id)arg1 andServerHost:(id)arg2;
- (void)downloadOfflineADWithSTADADParam:(id)arg1 andServerHost:(id)arg2;
- (id)getOfflinePADViewWithVideoID:(id)arg1 andSuperviewFrame:(struct CGRect)arg2;
- (void)openAd:(_Bool)arg1;
- (void)getOpenAdWithADParam:(id)arg1 andServerHost:(id)arg2;
- (void)stadOpenTrackWithURL:(id)arg1 andTrackType:(long long)arg2;
- (id)getWrapFrameAdClickThrough;
- (void)stadWrapFrameAdDidShow;
- (void)exitWrapFrameAdView;
- (void)closeWrapFrameAdView;
- (void)playWrapFrameAdViewWithSTADADParam:(id)arg1 serverHost:(id)arg2 superView:(id)arg3 andTimeout:(double)arg4;
- (long long)getBarrageLineHeight;
- (void)getBarrageViewWithADURLString:(id)arg1 superView:(id)arg2 andTimeout:(double)arg3;
- (void)stadBarrageStatus:(_Bool)arg1;
- (void)barrageAdSuperViewFrameChanged:(struct CGRect)arg1;
- (void)stadBarrageSwitch:(_Bool)arg1;
- (void)private_getBarrageViewWithSTADADParam:(id)arg1 serverHost:(id)arg2 superView:(id)arg3 timeout:(double)arg4 isFullScreen:(_Bool)arg5 isFisrtReq:(_Bool)arg6;
- (void)getBarrageViewWithSTADADParam:(id)arg1 serverHost:(id)arg2 superView:(id)arg3 timeout:(double)arg4 isFullScreen:(_Bool)arg5;
- (void)getFlogoViewWithADURLString:(id)arg1 andFrame:(struct CGRect)arg2 andTimeout:(double)arg3;
- (void)getFlogoViewWithSTADADParam:(id)arg1 andServerHost:(id)arg2 andFrame:(struct CGRect)arg3 andTimeout:(double)arg4;
- (void)getBandViewWithADURLString:(id)arg1 andTimeout:(double)arg2;
- (void)getBandViewWithSTADParam:(id)arg1 index:(long long)arg2 andServerHost:(id)arg3 andTimeout:(double)arg4;
- (id)getPADViewWithADURLString:(id)arg1 andSuperviewFrame:(struct CGRect)arg2 canClick:(_Bool)arg3 andTimeout:(double)arg4 andParaDict:(id)arg5;
- (id)getPADViewWithADURLString:(id)arg1 andSuperviewFrame:(struct CGRect)arg2 andTimeout:(double)arg3;
- (id)getPADViewWithSTADADParam:(id)arg1 andServerHost:(id)arg2 andSuperviewFrame:(struct CGRect)arg3 andTimeout:(double)arg4;
- (void)startMADPlayWithIndex:(int)arg1;
- (void)trackFailed:(id)arg1;
- (void)trackSuccessed:(id)arg1;
- (void)didEnterForegroundForSTAD;
- (void)didEnterBackgroundForSTAD;
- (void)didFinishedLaunchingForSTAD;
- (void)stadMadPlayFinishRecordSysTime;
- (void)stadFlogoTrackWithAdView:(id)arg1;
- (void)stadVideoTicksWithCurrentInterval:(float)arg1 andSummeryInterval:(float)arg2 andIsFullScreen:(_Bool)arg3;
- (void)stadGetMadAndFlogoInfosWithSTADADParam:(id)arg1 andParamHost:(id)arg2 andMadHost:(id)arg3 andFlogoHost:(id)arg4 andBandHost:(id)arg5 andFlogoFrame:(struct CGRect)arg6 andTimeout:(double)arg7 andIsMadNeedSkip:(_Bool)arg8;
- (void)stadOpenPerdownloaderFinish:(_Bool)arg1;
- (void)stadTVPerdownloaderFinish:(_Bool)arg1;
- (void)stadStartPerdonwload;
- (void)stadStandByPlayingSwitchWithInx:(id)arg1;
- (void)stadStopOADRequest;
- (void)stadOpenUrlWithURLString:(id)arg1;
- (id)getOadAdCachePath;
- (id)getOadClickThroughWithoutTracking;
- (id)getOadClickThroughWithPoint:(struct CGPoint)arg1;
- (void)closeWebContentView:(id)arg1;
- (void)setWebContentView:(id)arg1;
- (_Bool)playOfflineOADWithVideoID:(id)arg1;
- (void)playOptionalOadStateChanged:(long long)arg1;
- (void)playOadStateChanged:(long long)arg1;
- (void)playOADProgressWithCurrentInterval:(float)arg1 andSummeryInterval:(float)arg2;
- (void)startPlayOad;
- (void)playOadTimeout;
- (void)stadOptionalOadParentView:(id)arg1;
- (void)stadOadParentView:(id)arg1;
- (void)destoryOadParentView:(id)arg1;
- (void)playOADWithSTADADParam:(id)arg1 andServerHost:(id)arg2 andTimeout:(double)arg3;
- (void)playOADWithADParam:(id)arg1 andServerHost:(id)arg2 andTimeout:(double)arg3;
- (void)playOADWithADURLString:(id)arg1 andTimeout:(double)arg2;
- (void)switchMode:(_Bool)arg1;
- (void)overflyView:(id)arg1 didClickedWithURLString:(id)arg2;
- (void)overflyViewdidFailedToPlayVideo:(id)arg1;
- (void)overflyViewDidSucceed:(id)arg1;
- (void)overflyViewDidFailed:(id)arg1;
- (void)overflyViewdidFinishToPlayVideo:(id)arg1;
- (void)getOverflyAdWithADParam:(id)arg1 andServerHost:(id)arg2;
- (void)focusSingleTap:(id)arg1;
- (void)focusLoaderLoadError:(id)arg1;
- (void)focusLoaderDidFinishLoad:(id)arg1 dict:(id)arg2;
- (void)focusViewActiveImpressionWithKeys:(id)arg1;
- (void)getFocusAdWithADParam:(id)arg1 catecode:(id)arg2 andServerHost:(id)arg3;
- (id)getLocalMediaFilePathWithCachedKey:(id)arg1;
- (_Bool)isAdmasterSafe;
- (void)setAdParam:(id)arg1;
- (void)removeObjectFromeSafeArr:(id)arg1;
- (void)addObjectToSafeArr:(id)arg1;
- (void)removeDelegateObject:(id)arg1;
- (id)getDetegates;
- (void)setDelegateObject:(id)arg1;
- (void)updateVideoPlayerScreenType:(long long)arg1;
- (id)getOADManager;
- (id)init;
- (id)madIndexHost;
- (id)advertHost;
- (void)clearOfflineAdvert:(id)arg1;
- (void)storeOfflineAdvert:(id)arg1;
- (id)getCornerAdvertWithRequestItem:(id)arg1 withSize:(struct CGSize)arg2 timeout:(double)arg3;
- (void)loadMiddleAdvertIndexsWithRequestItem:(id)arg1;
- (void)loadBADViewWithSTADRequestItem:(id)arg1 andSuperviewFrame:(struct CGRect)arg2 andPageId:(id)arg3 andTimeout:(double)arg4;
- (void)skipAdvertPlayerSeconds:(long long)arg1;
- (void)optAdvertCompletedWithIsSkiped:(_Bool)arg1;
- (void)optAdvertProgressWithCurrentInterval:(float)arg1 andSummeryInterval:(float)arg2;
- (void)optAdvertPlayWithInx:(long long)arg1 userSelectedSec:(long long)arg2;
- (void)loadCADTrackForAdvertSDKWithView:(id)arg1;
- (void)reportMadAdvertPlaybackFinished;
- (void)reportVideoTicksWithCurrentInterval:(float)arg1 totalInterval:(float)arg2 andIsFullScreen:(_Bool)arg3;
- (void)loadMiddleAdvertAndFlogoAdvertWithRequestItem:(id)arg1 flogoFrame:(struct CGRect)arg2 timeOut:(double)arg3 skipMad:(_Bool)arg4;
- (void)loadAdvertWithRequestItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

