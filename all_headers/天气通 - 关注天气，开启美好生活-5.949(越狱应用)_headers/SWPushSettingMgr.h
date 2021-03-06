//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSString, SWCity, SWNetworkOperation, SWPushConfg;

@interface SWPushSettingMgr : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    _Bool _showAlert;
    NSString *_deviceToken;
    SWPushConfg *_config;
    SWNetworkOperation *_registOperation;
    SWCity *_syningCity;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SWCity *syningCity; // @synthesize syningCity=_syningCity;
@property(retain, nonatomic) SWNetworkOperation *registOperation; // @synthesize registOperation=_registOperation;
@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(readonly, nonatomic) SWPushConfg *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (_Bool)enabledRemoteNotification;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dailySynPushSetting;
- (void)checkNeedSynPushSetting;
- (void)onCityChange:(id)arg1;
- (id)pushTypeDescription;
- (void)setSolarTermLocalNotification:(_Bool)arg1;
- (void)restSolarTermLocalNotification;
- (_Bool)syncPushSettingWithErrorAlert:(_Bool)arg1 silent:(_Bool)arg2;
- (void)forceSyncPushSetting;
- (_Bool)syncPushSetting;
@property(readonly, nonatomic) _Bool enable;
- (_Bool)syncPushSettingsWithServer:(_Bool)arg1 alert:(_Bool)arg2 silent:(_Bool)arg3;
- (void)creatDefaultPushSettings:(id)arg1;
- (_Bool)registerPushService:(id)arg1 morningTime:(id)arg2 noonTime:(id)arg3 soundName:(id)arg4 alert:(_Bool)arg5 silent:(_Bool)arg6;
- (id)nilCity;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
- (id)pushTypesStr;
- (id)convertTimeString:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pushCityNameLocalized;
- (id)pushCityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

