//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCUserActivityTraceDelegate-Protocol.h"
#import "UCWoodPeckerValidatorDelegate-Protocol.h"

@class NSString, PandoraSettingAgent, UCAppStateInfo, UCWoodPeckerConfig, UCWoodPeckerValidator;
@protocol UCWoodPeckerCoreDelegate;

@interface UCWoodPeckerCore : NSObject <UCWoodPeckerValidatorDelegate, UCUserActivityTraceDelegate>
{
    _Bool _alreadyInited;
    _Bool _shouldUpdateStateSynchronized;
    _Bool _isSDKValid;
    _Bool _crashHandleStateEnabled;
    UCAppStateInfo *_lastAppStateInfo;
    id <UCWoodPeckerCoreDelegate> _delegate;
    UCWoodPeckerConfig *_baseConfig;
    PandoraSettingAgent *_settingService;
    UCWoodPeckerValidator *_validator;
}

+ (id)sharedInstance;
+ (id)threadBlockCheckerWithDelegate:(id)arg1 dumpStackEnabled:(_Bool)arg2;
+ (id)logUploadUrl;
+ (id)generateZipFileName;
+ (id)logFileNameWithExtension:(id)arg1 isNewSession:(_Bool)arg2;
+ (id)standardLogFileName;
+ (id)getBuildDateForSubapp;
+ (id)getVersionForSubapp;
+ (id)getAppIdForSubapp;
+ (id)getAppBundleVersion;
+ (id)getProcessName;
+ (id)getPackageName;
+ (id)getPlatform;
+ (id)getSN;
+ (id)getDeviceUDID;
+ (id)getBID;
+ (id)getBuildDate;
+ (id)getSubVersion;
+ (id)getVersion;
+ (id)getCurTime;
+ (id)getOSVersion;
+ (id)getAppName;
+ (id)getSDKBuildDate;
+ (id)getSDKVersion;
+ (id)sessionName;
@property(nonatomic) _Bool crashHandleStateEnabled; // @synthesize crashHandleStateEnabled=_crashHandleStateEnabled;
@property(nonatomic) _Bool isSDKValid; // @synthesize isSDKValid=_isSDKValid;
@property(retain, nonatomic) UCWoodPeckerValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) PandoraSettingAgent *settingService; // @synthesize settingService=_settingService;
@property(retain, nonatomic) UCWoodPeckerConfig *baseConfig; // @synthesize baseConfig=_baseConfig;
@property(nonatomic) __weak id <UCWoodPeckerCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUpdateStateSynchronized; // @synthesize shouldUpdateStateSynchronized=_shouldUpdateStateSynchronized;
@property(retain, nonatomic) UCAppStateInfo *lastAppStateInfo; // @synthesize lastAppStateInfo=_lastAppStateInfo;
@property(nonatomic) _Bool alreadyInited; // @synthesize alreadyInited=_alreadyInited;
- (void).cxx_destruct;
- (void)userActivityTrace:(id)arg1 onCorrupt:(long long)arg2;
- (id)checkValidExtension:(id)arg1;
- (void)setCrashReprterInBackground:(_Bool)arg1;
- (void)updateExitStatus:(long long)arg1;
- (void)applicationDidReceiveWillTerminate:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForground:(id)arg1;
- (void)setTraceSavedCount:(long long)arg1;
- (void)enableUserActivityTrace:(_Bool)arg1;
- (_Bool)startWithConfig:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)dumpReportWithCustomExtension:(id)arg1 needsExtraInfo:(_Bool)arg2;
- (void)recoverExceptionHandler;
- (_Bool)checkExceptionHandlerInstalled;
- (struct NSDictionary *)extractCrashHandleStates;
- (void)notifySignalHandleStates:(struct NSDictionary *)arg1;
- (void)collectMemoryCrash:(_Bool)arg1 withHandleStates:(struct NSDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (id)checkCrashStateWithUpgrade:(_Bool)arg1 experienceOff:(_Bool)arg2;
- (void)setCrashHandleStateRecordEnabled:(_Bool)arg1;
- (void)uploadLogFiles;
- (id)dumpExceptionLogWithExtension:(id)arg1 exceptionName:(id)arg2 exceptionCode:(id)arg3 detail:(id)arg4 extraInfo:(id)arg5;
- (id)generateLogFullPathWithExtension:(id)arg1;
- (id)logsRootDirectory;
- (void)onQuit;
- (void)onKeepAliveServiceDidTurnOff;
- (_Bool)isCrashLastTime;
- (_Bool)isBackgroundCrashLastTime;
- (_Bool)isForegroundCrashLastTime;
- (long long)lastAppRunningState2;
- (long long)lastAppRunningState;
- (void)setCurrentAppRunnngState:(long long)arg1 immediately:(_Bool)arg2;
- (void)setCurrentAppRunnngState:(long long)arg1;
- (long long)currentAppRunningState;
- (unsigned long long)percentForCollectingUncapturedCrash;
- (void)onInfoCollectorInited;
- (void)wpValidator:(id)arg1 didFailedWithError:(id)arg2;
- (void)wpValidator:(id)arg1 didResponseWithValid:(_Bool)arg2;
- (void)loadSDKValidState;
- (void)startValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

