//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NVEnvironment : NSObject
{
    NSString *sourceTxt;
    NSString *sessionId;
    CDUnknownBlockType _isDebugBlock;
    CDUnknownBlockType _isAdhocBlock;
    CDUnknownBlockType _isDistributionBlock;
    CDUnknownBlockType _buildTimeBlock;
    CDUnknownBlockType _mapiBlock;
    CDUnknownBlockType _normalBlock;
    CDUnknownBlockType _userAgentBlock;
    CDUnknownBlockType _dpidBlock;
    CDUnknownBlockType _unionIdBlock;
    long long _wnsAppId;
}

+ (id)defaultEnvironment;
+ (id)schemeTestServicePath;
+ (id)fullVersion;
+ (id)buildVersion;
- (void).cxx_destruct;
- (void)setupWnsAppId:(long long)arg1;
- (void)setupUnionid:(CDUnknownBlockType)arg1;
- (void)setupDpid:(CDUnknownBlockType)arg1;
- (void)setupUserAgent:(CDUnknownBlockType)arg1;
- (void)setupNormalsHeaders:(CDUnknownBlockType)arg1;
- (void)setupMapiHeaders:(CDUnknownBlockType)arg1;
- (void)setupBuildTime:(CDUnknownBlockType)arg1;
- (void)setupIsDistribution:(CDUnknownBlockType)arg1;
- (void)setupIsAdhoc:(CDUnknownBlockType)arg1;
- (void)setupIsDebug:(CDUnknownBlockType)arg1;
- (long long)wnsAppId;
- (id)deviceName;
- (id)getBSSID:(id)arg1;
- (id)wifiInfoBSSID;
- (id)wifiInfoSSID;
- (id)wifiRawData;
- (id)wifiInfo;
- (id)bundleId;
- (id)appId;
- (id)deviceModel;
- (id)userAgent;
- (id)source;
- (id)version;
- (id)sessionId;
- (id)unionId;
- (id)dpid;
- (id)deviceId6;
- (id)deviceId5;
- (id)deviceId4;
- (id)deviceId3;
- (id)deviceId2;
- (id)deviceId;
- (id)platformString;
- (id)buildTime;
- (_Bool)isDistribution;
- (_Bool)isAdhoc;
- (_Bool)isDebug;
- (id)normalsHeaders;
- (id)mapiHeaders;
- (id)init;

@end

