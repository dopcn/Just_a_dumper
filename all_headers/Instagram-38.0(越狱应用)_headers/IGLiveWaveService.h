//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRealtimeServerPayloadHandler-Protocol.h"

@class IGUserSession, NSString;

@interface IGLiveWaveService : NSObject <IGRealtimeServerPayloadHandler>
{
    NSString *_broadcastId;
    IGUserSession *_userSession;
    CDUnknownBlockType _callback;
    NSString *_currentSubscription;
}

@property(copy, nonatomic) NSString *currentSubscription; // @synthesize currentSubscription=_currentSubscription;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
- (void).cxx_destruct;
- (void)handlePayload:(id)arg1;
- (void)dealloc;
- (void)unsubscribeFromWave;
- (void)subscribeToWaveMessage:(CDUnknownBlockType)arg1;
- (void)waveToUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBroadcastId:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

