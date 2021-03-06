//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APIServiceDelegate-Protocol.h"

@class NSString;

@interface MusicController : NSObject <APIServiceDelegate>
{
    _Bool appVersionIsfetching;
    _Bool appVersionIsfetched;
    _Bool _alertViewIsShowing;
}

+ (_Bool)checkValid:(id)arg1 andRespondSel:(SEL)arg2;
+ (_Bool)checkValid:(id)arg1 andType:(Class)arg2;
+ (void)purgeSharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceSynch;
+ (id)sharedInstanceNoSynch;
@property(nonatomic) _Bool alertViewIsShowing; // @synthesize alertViewIsShowing=_alertViewIsShowing;
- (_Bool)appVersionIsFetched;
- (_Bool)carConnected;
- (void)saveCarConnected:(_Bool)arg1;
- (void)musicAlertViewAppStoreVersionWithIndex:(long long)arg1;
- (void)musicAlertViewRateWithIndex:(long long)arg1;
- (_Bool)checkVersionDisplayActivity;
- (_Bool)isLargeThanNativeAppVersionWithVersion:(id)arg1;
- (_Bool)version1IsLargeThanVersion2Withversion1:(id)arg1 version2:(id)arg2;
- (_Bool)checkVersionDisplayNew;
- (void)showUpgrade:(id)arg1;
- (void)needShowUpgrade;
- (void)versionInfoFromAppStore:(id)arg1 manual:(_Bool)arg2;
- (void)fetchPreferenceDataWhenLaunch;
- (void)fetchUserConfig;
- (void)fetchVersionInfoFromAppStoreManual:(_Bool)arg1;
- (void)fetchVersionInfoFromAppStore:(_Bool)arg1;
- (void)showRate;
- (void)checkIfCanShowRate;
- (id)getTrackInfo:(id)arg1 forSender:(id)arg2;
- (void)clearTrackInfoCache:(id)arg1;
- (int)getResourceType:(id)arg1 forSender:(id)arg2;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (_Bool)writeCachesData:(id)arg1 fileName:(id)arg2;
- (id)readCachesData:(id)arg1;
- (int)getRequestTimeout;
- (void)removeRegisterNoticeCenter;
- (void)setRegisterNoticeCenter;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

