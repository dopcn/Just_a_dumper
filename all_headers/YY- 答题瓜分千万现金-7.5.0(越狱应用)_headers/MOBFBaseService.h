//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MOBFLogServiceDelegate-Protocol.h"

@class MOBFLogService, MOBFReachability, NSDictionary, NSString;

@interface MOBFBaseService : NSObject <MOBFLogServiceDelegate>
{
    _Bool _isTriggerSend;
    _Bool _needUpdateConfig;
    _Bool _needGetLocation;
    MOBFLogService *_logService;
    NSDictionary *_config;
    NSString *_asimSeed;
    double _startLogTime;
    unsigned long long _startTime;
    long long _retryCount;
    MOBFReachability *_reachability;
    NSString *_currentBSSID;
    NSString *_currentSSID;
    double _prevLocTime;
    double _becomeActiveTime;
    double _enterBackgroundTime;
}

+ (void)_getLocalConfig:(CDUnknownBlockType)arg1;
+ (id)_deviceKey;
+ (void)_locInit;
+ (void)getDuid:(CDUnknownBlockType)arg1;
+ (id)userIdentity;
+ (void)setProductId:(id)arg1 version:(long long)arg2;
+ (void)startupWithAppKey:(id)arg1 product:(id)arg2 sdkVer:(long long)arg3 result:(CDUnknownBlockType)arg4;
+ (void)getDUIDWithAppKey:(id)arg1 product:(id)arg2 sdkVer:(long long)arg3 result:(CDUnknownBlockType)arg4;
+ (void)getDUIDWithAppKey:(id)arg1 product:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)mustBeUsedFrameworkWithIdfa;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) double enterBackgroundTime; // @synthesize enterBackgroundTime=_enterBackgroundTime;
@property(nonatomic) double becomeActiveTime; // @synthesize becomeActiveTime=_becomeActiveTime;
@property(nonatomic) double prevLocTime; // @synthesize prevLocTime=_prevLocTime;
@property(retain, nonatomic) NSString *currentSSID; // @synthesize currentSSID=_currentSSID;
@property(retain, nonatomic) NSString *currentBSSID; // @synthesize currentBSSID=_currentBSSID;
@property(nonatomic) _Bool needGetLocation; // @synthesize needGetLocation=_needGetLocation;
@property(retain, nonatomic) MOBFReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool needUpdateConfig; // @synthesize needUpdateConfig=_needUpdateConfig;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double startLogTime; // @synthesize startLogTime=_startLogTime;
@property(copy, nonatomic) NSString *asimSeed; // @synthesize asimSeed=_asimSeed;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) _Bool isTriggerSend; // @synthesize isTriggerSend=_isTriggerSend;
@property(retain, nonatomic) MOBFLogService *logService; // @synthesize logService=_logService;
- (void).cxx_destruct;
- (void)_linkProduct:(id)arg1 type:(id)arg2 sdkVer:(long long)arg3 duid:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)_uploadDeviceInfo:(CDUnknownBlockType)arg1;
- (id)_fullDeviceInfo:(id)arg1;
- (id)_baseDeviceInfo;
- (void)_lockEnabled:(_Bool)arg1;
- (id)_baseServiceOperatorQueue;
- (id)_baseServiceQueue;
- (id)_requestPath:(id)arg1;
- (id)_currentNetworkType;
- (void)_applicationDidBecomeActiveByWifi:(id)arg1;
- (void)_applicationDidBecomeActiveByLocation:(id)arg1;
- (id)_getUserIdentityRequestHead;
- (long long)_convertVersion:(id)arg1;
- (void)_linkAllProducts;
- (void)_getDuidOnResult:(CDUnknownBlockType)arg1;
- (void)_updateConfig:(CDUnknownBlockType)arg1;
- (id)_defaultConfig;
- (void)_getConfig:(CDUnknownBlockType)arg1;
- (void)_setupUploadDeviceExtService;
- (void)_startupOnResult:(CDUnknownBlockType)arg1;
- (id)_asim;
- (id)_localDuid;
- (void)_willEnterForegroundHandler:(id)arg1;
- (void)_appActiveEvent;
- (void)_getImageInfo;
- (void)_setupImageService;
- (void)_didEnterBackgroundHandlerByRuntimes:(id)arg1;
- (void)_applicationDidBecomeActiveByRuntimes:(id)arg1;
- (void)_networkStateChange:(id)arg1;
- (void)_getWifiInfo:(_Bool)arg1;
- (void)_setupWifiService;
- (id)_getAdRequestPath:(id)arg1;
- (void)_putAd;
- (void)_setupAdService;
- (void)_stopLoc;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_getLocation;
- (void)_writeLocationLog:(id)arg1 isAuto:(_Bool)arg2;
- (void)_locs:(id)arg1 isAuto:(_Bool)arg2;
- (void)_locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)_locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_locationManager:(id)arg1 didUpdateLocationsPlaceholder:(id)arg2;
- (void)_setLocationDelegate:(id)arg1;
- (void)_setupLocationService;
- (void)logService:(id)arg1 didSendLogs:(id)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)logService:(id)arg1 needsSendLogs:(id)arg2;
- (void)_sendLogWithData:(id)arg1 onResult:(CDUnknownBlockType)arg2;
- (void)_writeLog:(id)arg1;
- (void)_setupLogService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

