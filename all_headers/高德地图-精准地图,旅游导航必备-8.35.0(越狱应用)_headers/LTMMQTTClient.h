//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQTTSessionDelegate-Protocol.h"
#import "NMNetworkStatusChangeDelegate-Protocol.h"

@class LTMPersistentConnectionConfig, MQTTSession, NSString, NSTimer;
@protocol LTMPersistentConnectionDelegate;

@interface LTMMQTTClient : NSObject <MQTTSessionDelegate, NMNetworkStatusChangeDelegate>
{
    id <LTMPersistentConnectionDelegate> _delegate;
    LTMPersistentConnectionConfig *_config;
    unsigned long long _runState;
    MQTTSession *_session;
    double _reconnectInterval;
    NSTimer *_reconnectTimer;
    long long _lostCount;
}

+ (id)createWithConfig:(id)arg1;
@property(nonatomic) long long lostCount; // @synthesize lostCount=_lostCount;
@property(retain, nonatomic) NSTimer *reconnectTimer; // @synthesize reconnectTimer=_reconnectTimer;
@property(nonatomic) double reconnectInterval; // @synthesize reconnectInterval=_reconnectInterval;
@property(retain, nonatomic) MQTTSession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long runState; // @synthesize runState=_runState;
@property(retain, nonatomic) LTMPersistentConnectionConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <LTMPersistentConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageDelivered:(id)arg1 msgID:(unsigned short)arg2 topic:(id)arg3 data:(id)arg4 qos:(unsigned char)arg5 retainFlag:(_Bool)arg6;
- (void)newMessage:(id)arg1 data:(id)arg2 onTopic:(id)arg3 qos:(unsigned char)arg4 retained:(_Bool)arg5 mid:(unsigned int)arg6;
- (void)handleEvent:(id)arg1 event:(long long)arg2 error:(id)arg3;
- (void)appDidBecomeActive;
- (void)networkStatusChanged:(long long)arg1 newStatus:(long long)arg2;
- (void)triggerDelayedReconnect;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)destory;
- (void)resume;
- (void)pause;
- (void)publishMessage:(id)arg1 topic:(id)arg2 retain:(_Bool)arg3 qos:(int)arg4;
- (void)unsubscribeTopic:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)manualReconnect;
- (void)autoReconnect;
- (void)connectToInternal;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

