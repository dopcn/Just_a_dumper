//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLJSBridgeCoreProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, WDSBridgeHelper;

@interface WDSPushRouter : NSObject <GLJSBridgeCoreProtocol>
{
    _Bool _isFromPushNotification;
    WDSBridgeHelper *_jsbridgeHelper;
    NSDictionary *_bridgeInfo;
    NSMutableDictionary *_processingNofitications;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedRouter;
@property(nonatomic) _Bool isFromPushNotification; // @synthesize isFromPushNotification=_isFromPushNotification;
@property(retain, nonatomic) NSMutableDictionary *processingNofitications; // @synthesize processingNofitications=_processingNofitications;
@property(retain, nonatomic) NSDictionary *bridgeInfo; // @synthesize bridgeInfo=_bridgeInfo;
@property(retain, nonatomic) WDSBridgeHelper *jsbridgeHelper; // @synthesize jsbridgeHelper=_jsbridgeHelper;
- (void).cxx_destruct;
- (void)jsbridgeDidReceiveBridgeData:(id)arg1;
- (_Bool)jsbridgeIsSupport:(id)arg1;
- (void)callBridgeAction:(id)arg1;
- (void)resetNotificationByKey:(id)arg1;
- (_Bool)isProcessingNotificationByKey:(id)arg1;
- (void)addProcessingNotificationsByKey:(id)arg1;
- (void)tryToRouteRemoteNotification:(id)arg1;
- (void)processRemoteNotification:(id)arg1 pType:(long long)arg2;
- (_Bool)routeWithPushProtocol2:(id)arg1;
- (_Bool)shouldRouteWithPushProtocol2:(id)arg1;
- (_Bool)usePushProtocol2:(id)arg1;
- (_Bool)routeWithNotificationInfo_old:(id)arg1;
- (_Bool)routeWithNotificationInfo:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

