//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTSender.h"

#import "RCTBridgeModule-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface CRNSOTPClient : CTSender <RCTBridgeModule>
{
    NSMutableDictionary *_requestHistory;
    RCTBridge *_currentBridge;
}

+ (id)sendCRNSOTPWithReqArray:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (const struct RCTMethodInfo *)__rct_export__cancel1641;
+ (const struct RCTMethodInfo *)__rct_export__send620;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) RCTBridge *currentBridge; // @synthesize currentBridge=_currentBridge;
@property(retain, nonatomic) NSMutableDictionary *requestHistory; // @synthesize requestHistory=_requestHistory;
- (void).cxx_destruct;
- (void)cancel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)request:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

