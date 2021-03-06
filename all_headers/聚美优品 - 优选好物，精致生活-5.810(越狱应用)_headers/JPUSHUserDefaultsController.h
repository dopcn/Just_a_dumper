//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JPUSHKeychain, NSArray, NSMutableDictionary, NSString, NSTimer;
@protocol JPUSHUserDefaultsControllerDelegate;

@interface JPUSHUserDefaultsController : NSObject
{
    NSMutableDictionary *_infoDictionary;
    JPUSHKeychain *_defaultKeychain;
    NSTimer *_delayVerifyUserDefaultsTimer;
    _Bool _isDelayedVerify;
    _Bool _isFirstStart;
    NSString *_lastSucceedConnectionAddress;
    _Bool _verified;
    unsigned int _sisHostIndex;
    NSString *_appKey;
    NSString *_currentDeviceToken;
    NSString *_oldDeviceToken;
    NSString *_openUdid;
    unsigned long long _uid;
    NSString *_password;
    NSString *_registrationID;
    id <JPUSHUserDefaultsControllerDelegate> _delegate;
}

+ (_Bool)isFirtsStart;
@property(readonly, nonatomic) id <JPUSHUserDefaultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(nonatomic) unsigned int sisHostIndex; // @synthesize sisHostIndex=_sisHostIndex;
@property(readonly, nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(readonly, retain, nonatomic) NSString *registrationID; // @synthesize registrationID=_registrationID;
@property(readonly, retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(readonly, copy, nonatomic) NSString *openUdid; // @synthesize openUdid=_openUdid;
@property(copy, nonatomic) NSString *oldDeviceToken; // @synthesize oldDeviceToken=_oldDeviceToken;
@property(copy, nonatomic) NSString *currentDeviceToken; // @synthesize currentDeviceToken=_currentDeviceToken;
@property(readonly, retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)createDeviceID;
- (id)getDeviceID;
@property(nonatomic, setter=setIMFlag:) unsigned char IMFlag;
- (void)clearAllCache;
- (_Bool)writeToFile;
- (void)readContentFromFile:(id)arg1;
- (id)readFromKeychain;
- (id)readFromFile;
- (unsigned long long)integerFromStringOrNumber:(id)arg1;
- (void)verifyUserDefaults;
- (void)verifyUserDefaultsTimeout:(id)arg1;
- (void)delayVerifyUserDefaults;
- (_Bool)synchronizeTarget:(unsigned long long)arg1;
- (_Bool)synchronize;
- (_Bool)synchronizeCacheFile;
- (_Bool)synchronizeDocumentFile;
@property(retain, nonatomic) NSString *lastSuccessSisIp;
@property(retain, nonatomic) NSArray *sisReportList;
@property(retain, nonatomic) NSArray *sisIpsFromServer;
@property(retain, nonatomic) NSString *defaultSRVRecord; // @dynamic defaultSRVRecord;
@property(retain, nonatomic) NSString *defaultConnHost; // @dynamic defaultConnHost;
@property(retain, nonatomic) NSString *lastSucceedConnectionAddress; // @dynamic lastSucceedConnectionAddress;
@property(retain, nonatomic) NSString *backupUserReportAddress; // @dynamic backupUserReportAddress;
@property(retain, nonatomic) NSString *backupHttpReportAddress; // @dynamic backupHttpReportAddress;
@property(retain, nonatomic) NSString *defaultConAddress; // @dynamic defaultConAddress;
- (_Bool)useDefaultAddress:(id)arg1;
- (id)transferToStringIfNeed:(id)arg1;
- (void)setUid:(unsigned long long)arg1 password:(id)arg2 registrationID:(id)arg3;
- (void)setUploadedDeviceToken:(id)arg1;
- (_Bool)isAppRegistered;
- (void)transFromOldUserDefaults:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appkey:(id)arg2 delegate:(id)arg3;
- (id)initWithBundleIdentifier:(id)arg1 appkey:(id)arg2;

@end

