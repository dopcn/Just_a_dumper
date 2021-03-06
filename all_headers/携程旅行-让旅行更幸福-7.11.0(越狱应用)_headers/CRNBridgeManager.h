//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeDelegate-Protocol.h"
#import "RCTExceptionsManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, RCTSource;

@interface CRNBridgeManager : NSObject <RCTExceptionsManagerDelegate, RCTBridgeDelegate>
{
    NSMutableArray *_cachedBridgeList;
    RCTSource *_commonJSSource;
}

+ (void)notifyCRNViewLoadFailedForBridge:(id)arg1 code:(int)arg2;
+ (void)handleCRNError:(id)arg1 stack:(id)arg2 bridge:(id)arg3 tag:(id)arg4;
+ (void)invalidateDirtyBridgeForURL:(id)arg1;
+ (_Bool)hasCachedDirtyBridgeForURL:(id)arg1;
+ (id)sharedCRNBridgeManager;
@property(retain, nonatomic) RCTSource *commonJSSource; // @synthesize commonJSSource=_commonJSSource;
@property(retain, nonatomic) NSMutableArray *cachedBridgeList; // @synthesize cachedBridgeList=_cachedBridgeList;
- (void).cxx_destruct;
- (void)handleJSExceptionForBridge:(id)arg1 message:(id)arg2 stack:(id)arg3 tag:(id)arg4;
- (void)dealloc;
- (void)loadSourceForBridge:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)sourceURLForBridge:(id)arg1;
- (_Bool)isCRNUnbundlePackage:(id)arg1;
- (void)CRNViewControllerDidUsed:(id)arg1;
- (void)CRNViewControllerDidReleased:(id)arg1;
- (void)removeBridgeFromCacheList:(id)arg1;
- (void)cleanBridge:(id)arg1;
- (_Bool)isOldVersionClean;
- (void)performLRUCheck;
- (int)getMaxIdealDirtyBridgeCount;
- (void)bridgeDidLoadSuccess:(id)arg1;
- (void)bridgeDidLoadFailed:(id)arg1;
- (id)bridgeFormCachedList:(id)arg1;
- (id)bridgeForURL:(id)arg1 viewCreateTime:(double)arg2 moduleProvider:(CDUnknownBlockType)arg3 launchOption:(id)arg4;
- (int)emitToggleLoadModuleMessage:(id)arg1 isFromCacheBridge:(_Bool)arg2;
- (id)createNewUnbundleBridge;
- (void)prepareBridgeIfNeed;
- (void)prepareBridgeIfNeedAfterDelay:(double)arg1;
- (void)cacheBridge:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

