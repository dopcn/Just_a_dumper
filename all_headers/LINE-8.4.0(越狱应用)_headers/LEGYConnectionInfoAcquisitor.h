//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class LEGYConnInfoEncryption, LEGYConnectionInfo, NSDate, NSString, NSURLSessionTask;
@protocol LEGYConnectionInfoAcquisitorExternal;

@interface LEGYConnectionInfoAcquisitor : NSObject <NSCopying>
{
    id <LEGYConnectionInfoAcquisitorExternal> _externalAPI;
    NSString *_appVersion;
    LEGYConnectionInfo *_defaultConnectionInfo;
    LEGYConnectionInfo *_connectionInfo;
    NSDate *_expiredTime;
    NSURLSessionTask *_request;
    double _lastSuccessfulLoadTime;
    LEGYConnInfoEncryption *_connInfoEncryption;
    int _lastKnownRevision;
    CDUnknownBlockType _needsReconnectBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _updateInfoBlock;
    NSString *_host;
}

@property(retain) LEGYConnectionInfo *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) int lastKnownRevision; // @synthesize lastKnownRevision=_lastKnownRevision;
@property(copy, nonatomic) CDUnknownBlockType updateInfoBlock; // @synthesize updateInfoBlock=_updateInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType needsReconnectBlock; // @synthesize needsReconnectBlock=_needsReconnectBlock;
- (void).cxx_destruct;
- (id)carrierInfoForConnectionInfo;
- (id)countryCodes;
- (id)countryCode;
- (void)requestToGetHosts;
- (void)requestToGetHostsByLegyClient;
- (id)currentLocaleString;
- (id)requestUrl;
- (id)hardwareModelName;
- (void)start;
- (void)setLastSuccessfulHost:(id)arg1 withPort:(unsigned long long)arg2 sslEnabled:(_Bool)arg3;
- (void)routeWithRequest:(id)arg1 responseCode:(long long)arg2 responseHeaders:(id)arg3;
- (void)routeWithResponse:(id)arg1 responseData:(id)arg2 connInfoEncryptionKey:(id)arg3;
- (void)retryWithDelay:(unsigned long long)arg1;
- (void)notifyUpdateInfoEvent;
- (void)notifyFailedEventWithError:(id)arg1;
- (void)notifyReconnectEvent;
- (unsigned long long)delaySecondsWithResponse:(id)arg1;
- (unsigned long long)delaySecondsWithResponseHeader:(id)arg1;
- (void)parseWithResponse:(id)arg1 dateRetrieved:(id)arg2;
- (_Bool)isValidResponse:(id)arg1;
- (id)keyStringWithServerParameter:(id)arg1;
- (id)keyStringWithClientParameter:(id)arg1;
- (void)resetCachedConnectionInfoDate;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)checkUpdateByCurrentRevision:(int)arg1;
- (_Bool)hasExpiredConnectionInfo;
- (void)checkUptime;
- (void)saveConnectionInfo:(id)arg1;
- (void)loadLastCachedConnectionInfo;
- (void)resetToFallbackHost;
- (void)resetToInitialHost;
- (void)setDefaultConnectionInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userAgent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)secretKey;

@end

