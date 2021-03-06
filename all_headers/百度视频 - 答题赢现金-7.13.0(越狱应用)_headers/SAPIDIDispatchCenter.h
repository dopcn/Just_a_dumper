//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SAPIEventCenterDelegate-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString, NSURLSession, SAPIEventCenter;

@interface SAPIDIDispatchCenter : NSObject <SAPIEventCenterDelegate>
{
    long long _featureMaxLen;
    NSOperationQueue *_diDispatchCenterQueue;
    NSURLSession *_dispatchCenterSession;
    SAPIEventCenter *_eventCenter;
    NSMutableArray *_avaliableDeviceInfos;
}

+ (id)sharedInstance;
+ (double)parseHTTPLastModifiedString:(id)arg1;
+ (id)currentTimestamp;
+ (id)randomStringWithLength:(int)arg1;
+ (id)aesIV;
+ (id)aesKey;
+ (unsigned long long)calculateEncryptedInfoLength:(id)arg1;
+ (id)packageDeviceInfoList:(id)arg1;
@property(retain, nonatomic) NSMutableArray *avaliableDeviceInfos; // @synthesize avaliableDeviceInfos=_avaliableDeviceInfos;
@property(retain, nonatomic) SAPIEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
@property(retain, nonatomic) NSURLSession *dispatchCenterSession; // @synthesize dispatchCenterSession=_dispatchCenterSession;
@property(retain, nonatomic) NSOperationQueue *diDispatchCenterQueue; // @synthesize diDispatchCenterQueue=_diDispatchCenterQueue;
- (void).cxx_destruct;
- (void)handleConfigField:(id)arg1;
- (void)updateDeviceInfoConfig;
- (_Bool)saveHitFeatures:(id)arg1;
- (id)eTagChangedDeviceInfoForOldFeatures:(id)arg1 hitFeatures:(id)arg2;
- (_Bool)checkFeatureIds:(id)arg1 idKey:(id)arg2;
- (_Bool)checkFeatureDevices:(id)arg1;
- (_Bool)checkFeatureProducts:(id)arg1;
- (_Bool)checkFeatureGray:(id)arg1;
- (id)checkFeatures:(id)arg1 idKey:(id)arg2;
- (void)updateUserInfoIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)parseDIFeatures:(id)arg1;
- (id)parseConfigContent:(id)arg1;
- (void)getDIDispatchConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)headDIDispatchConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateDispatchConfigImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateDIDispatchConfigIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)checkDailyConfigNeedUpdate;
@property(nonatomic) long long featureMaxLen; // @synthesize featureMaxLen=_featureMaxLen;
- (void)setupEventCenter;
- (void)generateAvaliableDeviceInfo;
- (void)generateAppGrayIfNeeded;
- (id)init;
- (long long)readFeatureMaxLen;
- (_Bool)saveFeatureMaxLen:(long long)arg1;
- (double)readConfigLastUpdateTimeInterval;
- (_Bool)saveConfigLastUpdateTimeInterval:(double)arg1;
- (_Bool)clearDIFeatures;
- (id)readDIFeatures;
- (_Bool)saveDIFeatures:(id)arg1;
- (_Bool)saveAppGray:(long long)arg1;
- (long long)readAppGray;
- (_Bool)removeDispatchConfigLastModifiedTimeInterval;
- (_Bool)saveDispatchConfigLastModifiedTimeInterval:(double)arg1;
- (double)readDispatchConfigLastModifiedTimeInterval;
- (void)queryCurrentCityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)preventDuplicateReportForFrequencyEvent:(long long)arg1 deviceInfo:(id)arg2;
- (id)divideBigDeviceInfoContent:(id)arg1 piecesCount:(long long)arg2;
- (void)realReportDeviceInfoWithParams:(id)arg1;
- (void)reportDeviceInfo:(id)arg1 infoType:(long long)arg2;
- (void)fetchAndReportDeviceInfos:(id)arg1 event:(long long)arg2;
- (void)reportDeviceInfoForETagChanged:(id)arg1;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)decryptConfigContent:(id)arg1;
- (id)encryptReportDeviceInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

