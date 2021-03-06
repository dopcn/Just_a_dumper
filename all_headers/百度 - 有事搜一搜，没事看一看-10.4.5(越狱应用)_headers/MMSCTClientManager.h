//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MMSCTClientManager : NSObject
{
    unsigned int _currentStatus;
    _Bool _needReStartPlay;
    NSString *_changtingBaseUrl;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *changtingBaseUrl; // @synthesize changtingBaseUrl=_changtingBaseUrl;
- (void).cxx_destruct;
- (void)reStartPlayNotification:(id)arg1;
- (void)voiceRecognitionStartedNotification:(id)arg1;
- (void)removeVoiceRecognitionNotification;
- (void)registerVoiceRecognitionNotification;
- (void)openVoiceRecognitionWithUrl:(id)arg1 sourceWebview:(id)arg2;
- (void)openFeedBack;
- (long long)changTingBrowserControllerNumberInNavStack;
- (long long)changTingDownloadControllerNumberInNavStack;
- (_Bool)isUseWKWebView;
- (void)reachabilityChanged:(id)arg1;
- (void)registerNetworkDetection;
- (void)loginStatusChanged:(id)arg1;
- (void)registerLoginNotification;
- (void)showLoginViewWithConfirmAlert:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)goBackChangTingWebHome;
- (void)checkIfGoBackToNotNeedLoginSafePage;
- (void)openWithUrlPath:(id)arg1 isRegisterNotification:(_Bool)arg2;
- (void)openAudioPurchaseManagement;
- (void)openPurchasedAudioResource;
- (void)openRechargeRule;
- (void)openAbout;
- (void)openSetting;
- (void)openMyWallet;
- (void)openRecentPlayRecord;
- (void)openPersonCenter;
- (void)openMyCollection;
- (void)openDownloadCenterAndShowDownlading;
- (void)changTingDidClosed;
- (void)openChangTing;
- (id)init;
- (void)dealloc;
- (void)addUserStatisticsForThirdPartyWithPCode:(id)arg1 detailedID:(id)arg2 userInfo:(id)arg3;
- (void)loginWithType:(id)arg1 src:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeTransactionObserver:(id)arg1 forProductIdentifiers:(id)arg2;
- (void)addTransactionObserver:(id)arg1 forProductIdentifiers:(id)arg2;
- (void)bba_syncWebInfo;
- (id)getSharedWKProcessPool;
- (void)syncWKLoginInfo:(id)arg1;
- (id)getABTestResultForKey:(id)arg1 defaultValue:(id)arg2;
- (void)stopVoiceBroadcast;
- (unsigned int)currentNetworkStatus;
- (void)getPortraitImage:(CDUnknownBlockType)arg1;
- (id)getUsername;
- (id)getPassportUID;
- (_Bool)isLoggedIn;
- (void)shareTitle:(id)arg1 description:(id)arg2 thumbImage:(id)arg3 URL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)mainNavigationViewController;
- (id)currentUserAgent;
- (_Bool)executeCommandWithDic:(id)arg1;
- (id)getPassportBDUSS;
- (id)cuid;

@end

