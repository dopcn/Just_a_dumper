//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ABConditionProtocol-Protocol.h"

@class NSString;

@interface JHSAppConfiguration : NSObject <ABConditionProtocol>
{
}

+ (id)ttid;
+ (id)sharedAppConfiguration;
- (void)setupAppTTID;
- (void)prepareCommonConst;
- (void)prepareAppConfiguration;
- (void)adjustABConditionContext:(id)arg1;
- (void)setupAliABTest;
- (void)configurationSetup;
- (void)setupBox;
- (void)setupInteractiveSDK;
- (void)setupWeex;
- (void)setupOrange;
- (void)setupPoplayer;
- (void)setupEnvService;
- (void)setupUserInfoService;
- (void)registerAppURLProtocol;
- (void)registerTaobaoURLProtocol;
- (void)registerMiscDataService;
- (void)setupJHSUserTrackConfiguration;
- (void)setupDependencyServiceAdapterClass;
- (void)setupAliUniversalAccount;
- (void)setupJoyMapsKitConfiguration;
- (void)setupTBNetworkSDKConfiguration;
- (void)setupWindWaneConfiguration;
- (void)setupCrashReporterConfiguration;
- (void)setupUserTrackConfiguration;
- (void)setupTBSecurityConfiguration;
- (id)signedUserNickname;
- (void)updateUserInfo;
- (void)refreshCookies;
- (void)localNotification;
- (void)didChangeUserSession:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

