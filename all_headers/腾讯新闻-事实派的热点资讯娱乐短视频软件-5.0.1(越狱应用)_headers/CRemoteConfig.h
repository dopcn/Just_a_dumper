//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASIHTTPRequest, NSDictionary, NSSet, QNExtendRemoteConfigure, QNNetworkMD5DataApi;

@interface CRemoteConfig : NSObject
{
    NSSet *_WebPDomains;
    NSSet *_imageLogDomains;
    NSDictionary *_config;
    ASIHTTPRequest *_request;
    QNExtendRemoteConfigure *_extensionInfo;
    QNNetworkMD5DataApi *_patchDownloadApi;
}

+ (id)sharedRemoteConfig;
@property(retain, nonatomic) QNNetworkMD5DataApi *patchDownloadApi; // @synthesize patchDownloadApi=_patchDownloadApi;
@property(retain, nonatomic) QNExtendRemoteConfigure *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(retain) ASIHTTPRequest *request; // @synthesize request=_request;
@property(retain) NSDictionary *config; // @synthesize config=_config;
@property(retain) NSSet *imageLogDomains; // @synthesize imageLogDomains=_imageLogDomains;
@property(retain) NSSet *WebPDomains; // @synthesize WebPDomains=_WebPDomains;
- (void).cxx_destruct;
- (void)_checkPatchInfo;
- (_Bool)isAutoSlideshowRelyRemteConfig;
- (_Bool)isAutoPlayVideoInWifiRelyRemteConfig;
- (unsigned long long)itemExposeMaxNum;
- (unsigned long long)itemExposeSize;
- (_Bool)enableIPV6Mode;
- (_Bool)iResearchSwitch;
- (_Bool)isLiveTabShowDanmaku;
- (_Bool)isLiveTabAutoPlay;
- (_Bool)qzoneShareInFont;
- (_Bool)audioChannelAutoPlayNext;
- (unsigned long long)listCacheExpiredPeriod;
- (long long)subMenuAutoRefreshInterval;
- (_Bool)openMynewsListAd;
- (_Bool)openVideoBulletScreen;
- (_Bool)openVideoEndRecommend;
- (id)adIconStr;
- (id)latestCityListVersion;
- (id)concernEnableVersion;
- (_Bool)openTagSubscribeChannel;
- (unsigned long long)maxChannelCount;
- (id)nonstandardAdVersion;
- (_Bool)supportNonstandardAd;
- (id)likeMarkMsg;
- (id)newsMarkMsg;
- (_Bool)showSortingTabTips;
- (double)rateForSyncDeviceLogToMTA;
- (id)getActivityUrl;
- (_Bool)closeSupportAdvice;
- (_Bool)openActivityEntrance;
- (id)p_getActivity;
- (_Bool)openInterest;
- (double)subscribeNoLoginForbiddenTime;
- (double)subscribeRecommendListRefreshInterval;
- (_Bool)isWxArtUrlOpen;
- (_Bool)urlNeedReferer:(id)arg1;
- (_Bool)isWeixinAppendJsEnable;
- (id)wenxinAppendJsMd5;
- (id)wenxinAppendJsUrl;
- (id)wenxinJsMd5;
- (id)wenxinJsUrl;
- (_Bool)isWeixinFilterJsEnable;
- (_Bool)businessLinkNeedFix:(id)arg1;
- (_Bool)showMypurchase;
- (_Bool)showIcareBlueBar;
- (long long)icareBlueInterval;
- (_Bool)showGuestMessage;
- (id)myPurchaseUrl;
- (id)myLotteryUrl;
- (long long)mypurchaseSubMenuType;
- (long long)p_adWeMediaShowNum;
- (long long)p_adPointShowNum;
- (long long)p_adCommentShowNum;
- (long long)p_adPhotoDetailShowNum;
- (long long)p_gdtAdDetailTextShowNum;
- (long long)p_adDetailTextShowNum;
- (long long)p_adDetailPicShowNum;
- (_Bool)isAdOpenBigFlow;
- (long long)adFrequencyControlForAdTypeString:(id)arg1;
- (long long)adFrequencyControlForAdType:(long long)arg1;
- (long long)msgPromptType;
- (_Bool)useTVKMediaUrlSDK;
- (_Bool)isGDTCommentAdAvailable;
- (_Bool)isGDTSubscribeDetailAdAvailable;
- (_Bool)useMMA;
- (void)p_updateRemoteConfig:(id)arg1;
- (id)launchPageConfigInfo;
- (long long)barBackgroundType;
- (id)watermarkMoreExprVersion;
- (id)watermarkMoreStampVersion;
- (id)watermarkVersion;
- (_Bool)isTagRecommendEnabled;
- (_Bool)isOpenMultiPicShare;
- (_Bool)isReportUserAction;
- (_Bool)isNewsServerSplashAdEnabled;
- (_Bool)enableBlacklist;
- (id)AdUrlBlacklistVersion;
- (_Bool)validAdSdk;
- (_Bool)isShowOM;
- (_Bool)useVideoSdkAds;
- (_Bool)enableShake;
- (_Bool)enableDNS;
- (_Bool)p_shouldForbidDNS;
- (_Bool)showSinaSSO;
- (_Bool)showWeixinSSO;
- (_Bool)showQQSSO;
- (_Bool)isSHowUpdateBox;
- (_Bool)isOpenAppWall;
- (_Bool)weixinFriendsBackgroundShare;
- (id)appRatingGreeting;
- (long long)appRatingLaunchTimes;
- (_Bool)isAppRatingDataValidate;
- (_Bool)isAppRatingEnabled;
- (long long)checkForUpdateInterval;
- (long long)autoUpLogsCommandVersion;
- (id)upLogsURLString;
- (_Bool)isAnonymousSupportEnabled;
- (_Bool)isOpenUpLogsEnabled;
- (id)subscribeVersion;
- (long long)eventReporterType;
- (long long)eventReporterTypeWithConfig:(id)arg1;
- (double)getOfflineUpdateInterval;
- (id)getOfflineTips;
- (_Bool)stockPluginEnabled;
- (_Bool)pluginEnabled:(id)arg1;
- (id)getDiffPlugin:(id)arg1;
- (_Bool)pluginEnabled:(id)arg1 withConfig:(id)arg2;
- (id)getCleanID;
- (id)privatePolicyUrl;
- (id)selectedChannel;
- (id)appModeEx;
- (id)appMode;
- (int)myCommentMode;
- (int)shareMode;
- (int)listMode;
- (_Bool)needAudioInM3u8;
- (id)getQQNewsVersion;
- (id)getSplash;
- (id)getQQADConfig;
- (id)getSubMenuConfig;
- (id)getBoutiqueConfig;
- (void)cancelOfflineDownload;
- (void)performOfflineDownload;
- (id)getHotChannelsConfig;
- (id)getOfflineConfig;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)updateFromNet;
- (void)readFromDisk;
- (void)writeToDisk;
- (id)init;

@end

