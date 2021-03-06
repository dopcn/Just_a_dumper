//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WCSessionDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WCSession;

@interface QMWatchConnectionUitl : NSObject <WCSessionDelegate>
{
    WCSession *_session;
    NSMutableDictionary *_responderBlocksDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareConnection;
+ (_Bool)canStartListen;
@property(retain, nonatomic) NSMutableDictionary *responderBlocksDict; // @synthesize responderBlocksDict=_responderBlocksDict;
@property(retain, nonatomic) WCSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)reportWatchStatus:(id)arg1;
- (void)handleReceivedMessage:(id)arg1;
- (void)clearAllResponderBlocksWithObserver:(id)arg1;
- (id)responderBlocksForIdentifier:(id)arg1;
- (long long)activationState;
- (void)activeSession;
- (void)initSession;
- (void)sessionDidDeactivate:(id)arg1;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)addObserver:(id)arg1 toMonitorMessageWithIdentifier:(id)arg2 responder:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)sendCommandIdentifier:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)sendCommandIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)isReachable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

