//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppsFlyerTrackerDelegate-Protocol.h"

@class NSString, NSURL;
@protocol AppsFlyerTrackerDelegate;

@interface AppsFlyerTracker : NSObject <AppsFlyerTrackerDelegate>
{
    NSString *customerUserID;
    NSString *appsFlyerDevKey;
    NSString *appleAppID;
    NSString *currencyCode;
    _Bool deviceTrackingDisabled;
    _Bool _isDebug;
    _Bool isHTTPS;
    _Bool disableAppleAdSupportTracking;
    _Bool disableIAdTracking;
    double lastLaunchTime;
    NSURL *deeplink;
    _Bool debug;
    id <AppsFlyerTrackerDelegate> _delegate;
    double entryTime;
}

+ (id)URLQueryParameters:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedTracker;
@property double entryTime; // @synthesize entryTime;
@property _Bool disableAppleAdSupportTracking; // @synthesize disableAppleAdSupportTracking;
@property(nonatomic) id <AppsFlyerTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool disableIAdTracking; // @synthesize disableIAdTracking;
@property _Bool isHTTPS; // @synthesize isHTTPS;
@property _Bool deviceTrackingDisabled; // @synthesize deviceTrackingDisabled;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode;
@property(retain, nonatomic) NSString *appleAppID; // @synthesize appleAppID;
@property(retain, nonatomic) NSString *appsFlyerDevKey; // @synthesize appsFlyerDevKey;
@property(nonatomic, setter=setIsDebug:) _Bool isDebug; // @synthesize isDebug=debug;
@property(retain, nonatomic) NSString *customerUserID; // @synthesize customerUserID;
- (void)onConversionDataRequestFailure:(id)arg1;
- (void)onConversionDataReceived:(id)arg1;
- (id)getInstallDate:(id)arg1;
- (id)getFirstLanuchDate:(id)arg1;
- (id)getVersionUpdateDate:(id)arg1 currentUpdateDate:(id)arg2;
- (int)getCounter:(_Bool)arg1;
- (id)createURLFor:(id)arg1 withAppID:(id)arg2;
- (id)getDataString:(id)arg1;
- (void)startConnection:(id)arg1;
- (void)checkCache;
- (void)callServerWithEventName:(id)arg1 value:(id)arg2;
- (void)callServerWithEventName:(id)arg1;
- (id)getDevicePaltform;
- (id)getAppsFlyerUID;
- (id)installDate;
- (void)trackEvent:(id)arg1 withValue:(id)arg2;
- (void)sendLaunchToServer;
- (void)sendIAdTimeToServer:(double)arg1;
- (void)trackAppLaunch;
- (void)handleConversionDataWithDelegate:(id)arg1;
- (void)loadConversionDataWithDelegate:(id)arg1;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)dealloc;
- (void)handleEnteredBackground;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

