//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLSBetaControllerDelegate-Protocol.h"
#import "CLSCrashReportingControllerDelegate-Protocol.h"
#import "FABKit-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class CLSBetaController, CLSCrashReportingController, NSString;
@protocol CrashlyticsDelegate;

@interface Crashlytics : NSObject <FABKit, CLSCrashReportingControllerDelegate, CLSBetaControllerDelegate, WKScriptMessageHandler>
{
    id <CrashlyticsDelegate> _delegate;
    CLSCrashReportingController *_crashReportingController;
    CLSBetaController *_betaController;
}

+ (void)logEvent:(id)arg1 attributes:(id)arg2;
+ (void)logEvent:(id)arg1;
+ (void)setDevelopmentPlatformVersion:(id)arg1;
+ (void)setDevelopmentPlatformName:(id)arg1;
+ (void)setFloatValue:(float)arg1 forKey:(id)arg2;
+ (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
+ (void)setIntValue:(int)arg1 forKey:(id)arg2;
+ (void)setObjectValue:(id)arg1 forKey:(id)arg2;
+ (void)setUserEmail:(id)arg1;
+ (void)setUserName:(id)arg1;
+ (void)setUserIdentifier:(id)arg1;
+ (id)startWithAPIKey:(id)arg1 delegate:(id)arg2 afterDelay:(double)arg3;
+ (id)startWithAPIKey:(id)arg1 afterDelay:(double)arg2;
+ (id)startWithAPIKey:(id)arg1 delegate:(id)arg2;
+ (id)startWithAPIKey:(id)arg1;
+ (void)initializeIfNeeded;
+ (id)kitBuildVersion;
+ (id)kitDisplayVersion;
+ (id)bundleIdentifier;
+ (id)sharedInstance;
@property(readonly, nonatomic) CLSBetaController *betaController; // @synthesize betaController=_betaController;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 attributes:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)settingsForBetaController:(id)arg1;
- (id)APIKeyForBetaController:(id)arg1;
- (id)settingsForCrashReportingController:(id)arg1;
- (_Bool)isFirstInstallForCrashReportingController:(id)arg1;
- (id)installIDForCrashReportingController:(id)arg1;
- (id)APIKeyForCrashReportingController:(id)arg1;
- (_Bool)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2;
- (void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2;
- (void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)reportingControllerMustInformDelegateOfReports:(id)arg1;
- (_Bool)reportingControllerCanUseBackgroundSessions:(id)arg1;
- (void)detectedCrash;
- (_Bool)shouldInstallCrashCallback;
- (void)warnDelegateAboutMethods;
- (_Bool)delegateRespondsToLegacyMethods;
- (void)monitorErrorsForWKWebViewConfiguration:(id)arg1;
- (_Bool)handleWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)monitorErrorsForUIWebView:(id)arg1;
- (void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 frameArray:(id)arg3;
- (void)recordError:(id)arg1 withAdditionalUserInfo:(id)arg2;
- (void)recordError:(id)arg1;
- (void)setDevelopmentPlatformVersion:(id)arg1;
- (id)developmentPlatformVersion;
- (void)setDevelopmentPlatformName:(id)arg1;
- (id)developmentPlatformName;
- (void)setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)setIntValue:(int)arg1 forKey:(id)arg2;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
- (void)setUserEmail:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)throwException;
- (void)crash;
@property(nonatomic) id <CrashlyticsDelegate> delegate;
@property(nonatomic) _Bool debugMode;
- (_Bool)isCrashlyticsStarted;
- (id)settingsDictionary;
- (_Bool)isFirstInstall;
- (id)installID;
@property(readonly, copy, nonatomic) NSString *APIKey;
- (void)setKitInfo:(id)arg1;
- (id)kitInfo;
- (id)bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *version;
- (void)start;
- (id)initWithSuper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

