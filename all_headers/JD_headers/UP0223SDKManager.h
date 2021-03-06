//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UP0223NetWorkManagerDelegate-Protocol.h"

@class NSString, UP0223DataBaseManager, UP0223DataSource, UP0223SDKConfig, UP0223UtilManager;

@interface UP0223SDKManager : NSObject <UP0223NetWorkManagerDelegate>
{
    UP0223SDKConfig *_sdkConfig;
    _Bool _isSending;
    UP0223DataBaseManager *_db;
    UP0223UtilManager *_managerUtil;
    UP0223DataSource *_dataSource;
}

+ (id)pinnedCertificates:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) UP0223DataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UP0223UtilManager *managerUtil; // @synthesize managerUtil=_managerUtil;
@property(retain, nonatomic) UP0223DataBaseManager *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)responseFaildData:(id)arg1 code:(long long)arg2 flag:(long long)arg3;
- (void)responseSuccessData:(id)arg1 code:(long long)arg2 flag:(long long)arg3;
- (void)sendMessageWithLabel:(id)arg1 withType:(long long)arg2;
- (void)sendMessageRightNow:(long long)arg1;
- (void)sendMessageRightNowWithLabel:(id)arg1;
- (void)exceptionFormKVO:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)storeOnOrigThreadMessage:(id)arg1 withType:(long long)arg2;
- (id)dbInManagerWithType:(long long)arg1;
- (void)storeMessage:(id)arg1 withType:(long long)arg2;
- (void)dealloc;
- (void)addDataWorkObserver;
- (id)getURLForsubmoduleType:(long long)arg1;
- (id)getDataBaseForsubmoduleType:(long long)arg1;
- (id)pinnedCertificates:(id)arg1;
- (void)addAppId:(id)arg1 channelId:(id)arg2 withSDKConfig:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

