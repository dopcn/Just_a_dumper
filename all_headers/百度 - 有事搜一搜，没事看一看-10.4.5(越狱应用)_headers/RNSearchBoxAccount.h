//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RNSearchBoxAccount : NSObject <RCTBridgeModule>
{
}

+ (id)__rct_export__logout1063;
+ (id)__rct_export__login782;
+ (id)__rct_export__getAccountInfo521;
+ (id)__rct_export__isLogin370;
+ (id)sharedInstance;
+ (void)load;
+ (id)moduleName;
- (void)logoutParameter:(id)arg1 resolver:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)parameter:(id)arg1 resolver:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)parameter:(id)arg1 resolver:(CDUnknownBlockType)arg2 inforejecter:(CDUnknownBlockType)arg3;
- (void)resolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

