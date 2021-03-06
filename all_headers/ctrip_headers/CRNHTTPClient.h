//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSMutableDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface CRNHTTPClient : NSObject <RCTBridgeModule>
{
    NSMutableDictionary *_httpClientDict;
    NSMutableDictionary *_isCanceledDict;
}

+ (const struct RCTMethodInfo *)__rct_export__cancelFetch1501;
+ (const struct RCTMethodInfo *)__rct_export__fetch430;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) NSMutableDictionary *isCanceledDict; // @synthesize isCanceledDict=_isCanceledDict;
@property(retain, nonatomic) NSMutableDictionary *httpClientDict; // @synthesize httpClientDict=_httpClientDict;
- (void).cxx_destruct;
- (_Bool)sotpSendHttpRequest:(id)arg1 params:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (id)sequenceIdFromClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addNewClient:(id)arg1 sequenceId:(id)arg2;
- (void)setupCanceledFor:(id)arg1;
- (void)url:(id)arg1 data:(id)arg2;
- (void)url:(id)arg1 data:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

