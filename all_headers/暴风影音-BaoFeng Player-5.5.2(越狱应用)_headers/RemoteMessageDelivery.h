//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "GeTuiSdkDelegate-Protocol.h"

@class BFAlertView, NSData, NSString;

@interface RemoteMessageDelivery : UIResponder <GeTuiSdkDelegate>
{
    NSString *_deviceToken;
    NSData *_tokenData;
    int _sdkStatus;
    int _lastPaylodIndex;
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_appID;
    NSString *_clientId;
    NSString *_payloadId;
    BFAlertView *_notificationAlertView;
}

+ (id)shareRemoteMessageDelivery;
@property(retain, nonatomic) BFAlertView *notificationAlertView; // @synthesize notificationAlertView=_notificationAlertView;
@property(retain, nonatomic) NSString *payloadId; // @synthesize payloadId=_payloadId;
@property(nonatomic) int lastPayloadIndex; // @synthesize lastPayloadIndex=_lastPaylodIndex;
@property(nonatomic) int sdkStatus; // @synthesize sdkStatus=_sdkStatus;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (_Bool)isTVLiveViewControllerDisplaying;
- (_Bool)isPrivacyProtectedViewControllerDisplaying;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)userNotificationHandlerWithInfo:(id)arg1;
- (id)formateTime:(id)arg1;
- (void)GeTuiSDkDidNotifySdkState:(int)arg1;
- (void)GeTuiSdkDidOccurError:(id)arg1;
- (void)GeTuiSdkDidSendMessage:(id)arg1 result:(int)arg2;
- (void)GeTuiSdkDidReceivePayload:(id)arg1 andTaskId:(id)arg2 andMessageId:(id)arg3 fromApplication:(id)arg4;
- (void)GeTuiSdkDidRegisterClient:(id)arg1;
- (void)unbindAlias:(id)arg1;
- (void)bindAlias:(id)arg1;
- (id)sendMessage:(id)arg1 error:(id *)arg2;
- (_Bool)setTags:(id)arg1 error:(id *)arg2;
- (void)startSdkWith:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3;
- (_Bool)isDeviceTokenChanged:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)unregisterDeviceTokenForBaofeng;
- (void)registerDeviceTokenForBaofeng:(id)arg1;
- (void)becomeActive;
- (void)performFetch;
- (void)setDeviceToken:(id)arg1;
- (void)setPushModeForOff:(_Bool)arg1;
- (void)registerRemoteNotificationFailed:(id)arg1;
- (void)registerAppleRemoteNotification;
- (void)registerRemoteNotification;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

