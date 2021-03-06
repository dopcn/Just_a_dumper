//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "HelloKugouDelegate-Protocol.h"
#import "KGStartUpTaskManagerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class KGLocationStartTask, KGStartUpTaskManager, NSDictionary, NSString, UIWindow;

@interface AppDelegate : UIResponder <HelloKugouDelegate, KGStartUpTaskManagerDelegate, UIApplicationDelegate>
{
    _Bool isActive;
    _Bool _everBackground;
    _Bool _isUpdateDB;
    _Bool _isFirstRun;
    int _startType;
    UIWindow *_window;
    double _startTime;
    double _endTime;
    NSDictionary *_keepLaunchOptions;
    KGLocationStartTask *_gdMaplocation;
    KGStartUpTaskManager *_startUpManager;
}

@property(retain, nonatomic) KGStartUpTaskManager *startUpManager; // @synthesize startUpManager=_startUpManager;
@property(retain, nonatomic) KGLocationStartTask *gdMaplocation; // @synthesize gdMaplocation=_gdMaplocation;
@property(retain, nonatomic) NSDictionary *keepLaunchOptions; // @synthesize keepLaunchOptions=_keepLaunchOptions;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int startType; // @synthesize startType=_startType;
@property(nonatomic) _Bool isFirstRun; // @synthesize isFirstRun=_isFirstRun;
@property(nonatomic) _Bool isUpdateDB; // @synthesize isUpdateDB=_isUpdateDB;
@property(nonatomic) _Bool everBackground; // @synthesize everBackground=_everBackground;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)printMarkTask:(id)arg1;
- (void)finishStartUp:(id)arg1;
- (void)endStartDelay;
- (void)startDelay;
- (void)endStartAPM;
- (void)beginStartAPMWithLaunchOptions:(id)arg1;
- (void)backupDataBase;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)cleanUnusedAllMusicRecords;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)registerRemoteNotificationThreadProc;
- (void)pushNotificationAction:(id)arg1;
- (void)checkAndShowAPNSPushAction;
- (_Bool)handleApplication:(id)arg1 openURL:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (_Bool)checkIsTopWebView;
- (void)sendLaunchTime;
- (void)whenHomePageIsReady;
- (void)showHomeViewController;
- (void)makeTaskNotBeforeDataUpdate:(id)arg1;
- (void)configIfFirstRun;
- (void)makeKeyWindow;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

