//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface QYCMCmdsHelper : NSObject <RCTBridgeModule>
{
}

+ (id)__rct_export__931;
+ (id)__rct_export__790;
+ (id)generateMD5WithUrl:(id)arg1 comicId:(id)arg2;
+ (id)generateMD5WithFullRequest:(id)arg1;
+ (void)load;
+ (id)moduleName;
- (void)passport:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)md5:(id)arg1 server:(id)arg2 authCookie:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

