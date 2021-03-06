//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "CCBLaunchViewDelegate-Protocol.h"
#import "CheckVersionDelegate-Protocol.h"
#import "HMApiDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "WXApiDelegate-Protocol.h"
#import "WeiboSDKDelegate-Protocol.h"

@class BMKMapManager, CCBViewController, CCB_14_CheckVersion, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, UIView, UIViewController, UIWindow, UnityAppController;

@interface AppDelegate : UIResponder <CCBLaunchViewDelegate, WXApiDelegate, UIAlertViewDelegate, WeiboSDKDelegate, HMApiDelegate, UIApplicationDelegate, CheckVersionDelegate, UITabBarControllerDelegate>
{
    _Bool _notFirstShow;
    _Bool _isShowing;
    _Bool _isSchemaIn;
    int _outTime;
    UIWindow *_window;
    BMKMapManager *_mapManager;
    CCBViewController *_rootVC;
    NSString *_isSendingSJ1101;
    NSString *_wbtoken;
    NSString *_wbRefreshToken;
    NSString *_wbCurrentUserID;
    UnityAppController *_unityController;
    UIView *_snapshotView;
    NSDate *_comTechParamTime;
    NSDate *_backgroundTime;
    NSDate *_foregroundTime;
    UIViewController *_lastViewController;
    CCB_14_CheckVersion *_checkVersion;
    NSURL *_payUrl;
    NSString *_wherePayUrlFrom;
    NSDictionary *_launchOptions;
    NSMutableDictionary *_relaunchOptions;
}

@property(retain, nonatomic) NSMutableDictionary *relaunchOptions; // @synthesize relaunchOptions=_relaunchOptions;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) NSString *wherePayUrlFrom; // @synthesize wherePayUrlFrom=_wherePayUrlFrom;
@property(retain, nonatomic) NSURL *payUrl; // @synthesize payUrl=_payUrl;
@property(retain, nonatomic) CCB_14_CheckVersion *checkVersion; // @synthesize checkVersion=_checkVersion;
@property(retain, nonatomic) UIViewController *lastViewController; // @synthesize lastViewController=_lastViewController;
@property(nonatomic) int outTime; // @synthesize outTime=_outTime;
@property(retain, nonatomic) NSDate *foregroundTime; // @synthesize foregroundTime=_foregroundTime;
@property(retain, nonatomic) NSDate *backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(retain, nonatomic) NSDate *comTechParamTime; // @synthesize comTechParamTime=_comTechParamTime;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UnityAppController *unityController; // @synthesize unityController=_unityController;
@property(retain, nonatomic) NSString *wbCurrentUserID; // @synthesize wbCurrentUserID=_wbCurrentUserID;
@property(retain, nonatomic) NSString *wbRefreshToken; // @synthesize wbRefreshToken=_wbRefreshToken;
@property(retain, nonatomic) NSString *wbtoken; // @synthesize wbtoken=_wbtoken;
@property(nonatomic) _Bool isSchemaIn; // @synthesize isSchemaIn=_isSchemaIn;
@property(retain, nonatomic) NSString *isSendingSJ1101; // @synthesize isSendingSJ1101=_isSendingSJ1101;
@property(retain, nonatomic) CCBViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) BMKMapManager *mapManager; // @synthesize mapManager=_mapManager;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)hmApiDelegateDidReceiveResponse:(id)arg1;
- (void)keychainSynchronization;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)widgetJumpToAnyWhere:(id)arg1;
- (void)callcenterJumpToAnyWhere:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)CCBMonitorLoginSetup;
- (void)performAutoLoginWithCallback:(CDUnknownBlockType)arg1;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)onResp:(id)arg1;
- (void)getLocationFail;
- (void)onReceiveLoation:(id)arg1;
- (void)showOrder:(id)arg1;
- (void)dragonPayFromAlipay:(id)arg1;
- (void)ForNetBankPay:(id)arg1;
- (void)JumpNetBankPayWithLaunch:(id)arg1;
- (_Bool)isSelectLockView;
- (void)updateAppBadges;
- (void)HMRegister;
- (void)WXRegister;
- (void)animationFinished:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)exitApp;
- (void)failedCheckVersion:(id)arg1;
- (void)finishCheckVersion;
- (void)checkNewVersion;
- (void)initBMKMap;
- (id)getCurrentRootViewController;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)payLaunchViewDidFinishLaunch:(id)arg1;
- (void)launchViewDidFailLaunch:(id)arg1 error:(id)arg2;
- (void)launchViewDidFinishLaunch:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)creatShortcutItem;
- (void)changeToTheme:(id)arg1;
- (void)startRiskControl:(id)arg1;
- (void)setAppGroup;
- (void)startYinxinWichLaunchOption:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)hideUnityWindow;
- (void)showUnityWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

