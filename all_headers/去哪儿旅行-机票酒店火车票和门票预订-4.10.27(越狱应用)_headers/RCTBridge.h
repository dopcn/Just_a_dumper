//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTInvalidating-Protocol.h"
#import "RCTReloadListener-Protocol.h"

@class ALAssetsLibrary, NSArray, NSDictionary, NSLock, NSString, NSURL, QRCTNativeCallbackManager, RCTAccessibilityManager, RCTDevMenu, RCTDevSettings, RCTIconFontManager, RCTImageLoader, RCTImageStoreManager, RCTNetworking, RCTPerformanceLogger, RCTRedBox, RCTUIManager;
@protocol RCTBridgeDelegate, RCTExceptionsManagerDelegate;

@interface RCTBridge : NSObject <RCTReloadListener, RCTInvalidating>
{
    NSURL *_delegateBundleURL;
    _Bool _isCachedCommonBridge;
    _Bool _isCachedDirtyBridge;
    _Bool _isUnbundlePackage;
    double _bundleJSLoadedTime;
    double _bundleTTITime;
    double _bundleBridgeTime;
    double _bundleJSExecuteTime;
    NSDictionary *_moduleIdConfig;
    NSURL *_businessURL;
    id <RCTExceptionsManagerDelegate> _exceptionDelegate;
    NSURL *_bundleURL;
    Class _executorClass;
    id <RCTBridgeDelegate> _delegate;
    NSDictionary *_launchOptions;
    RCTPerformanceLogger *_performanceLogger;
    long long _flowID;
    struct __CFDictionary *_flowIDMap;
    NSLock *_flowIDMapLock;
    RCTBridge *_batchedBridge;
    CDUnknownBlockType _moduleProvider;
}

+ (void)notifyBridgeExecuteError:(id)arg1 code:(int)arg2;
+ (void)setCurrentBridge:(id)arg1;
+ (id)currentBridge;
+ (void)initialize;
@property(readonly, copy, nonatomic) CDUnknownBlockType moduleProvider; // @synthesize moduleProvider=_moduleProvider;
@property(retain) RCTBridge *batchedBridge; // @synthesize batchedBridge=_batchedBridge;
@property(retain, nonatomic) NSLock *flowIDMapLock; // @synthesize flowIDMapLock=_flowIDMapLock;
@property(nonatomic) struct __CFDictionary *flowIDMap; // @synthesize flowIDMap=_flowIDMap;
@property(nonatomic) long long flowID; // @synthesize flowID=_flowID;
@property(readonly, nonatomic) RCTPerformanceLogger *performanceLogger; // @synthesize performanceLogger=_performanceLogger;
@property(readonly, copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(readonly, nonatomic) __weak id <RCTBridgeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Class executorClass; // @synthesize executorClass=_executorClass;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(nonatomic) __weak id <RCTExceptionsManagerDelegate> exceptionDelegate; // @synthesize exceptionDelegate=_exceptionDelegate;
@property(nonatomic) _Bool isUnbundlePackage; // @synthesize isUnbundlePackage=_isUnbundlePackage;
@property(retain, nonatomic) NSURL *businessURL; // @synthesize businessURL=_businessURL;
@property(retain, nonatomic) NSDictionary *moduleIdConfig; // @synthesize moduleIdConfig=_moduleIdConfig;
@property(nonatomic) double bundleJSExecuteTime; // @synthesize bundleJSExecuteTime=_bundleJSExecuteTime;
@property(nonatomic) double bundleBridgeTime; // @synthesize bundleBridgeTime=_bundleBridgeTime;
@property(nonatomic) double bundleTTITime; // @synthesize bundleTTITime=_bundleTTITime;
@property(nonatomic) double bundleJSLoadedTime; // @synthesize bundleJSLoadedTime=_bundleJSLoadedTime;
@property(nonatomic) _Bool isCachedDirtyBridge; // @synthesize isCachedDirtyBridge=_isCachedDirtyBridge;
@property(nonatomic) _Bool isCachedCommonBridge; // @synthesize isCachedCommonBridge=_isCachedCommonBridge;
- (void).cxx_destruct;
- (id)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
- (void)enqueueCallback:(id)arg1 args:(id)arg2;
- (void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enqueueJSCall:(id)arg1 args:(id)arg2;
- (void)invalidate;
- (_Bool)isBatchActive;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)setUp;
- (Class)bridgeClass;
- (void)requestReload;
- (void)reload;
- (void)whitelistedModulesDidChange;
- (_Bool)moduleIsInitialized:(Class)arg1;
- (id)modulesConformingToProtocol:(id)arg1;
- (id)moduleForClass:(Class)arg1;
- (id)moduleForName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *moduleClasses;
- (void)didReceiveReloadCommand;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(CDUnknownBlockType)arg3 launchOptions:(id)arg4;
- (id)initWithBundleURL:(id)arg1 moduleProvider:(CDUnknownBlockType)arg2 launchOptions:(id)arg3;
- (id)initWithDelegate:(id)arg1 launchOptions:(id)arg2;
- (void)setBridgeDelegate:(id)arg1;
- (void)initBridgeRecordTime;
@property(nonatomic) _Bool qrct_platformJSLoaded;
@property(retain, nonatomic) NSString *qrct_hybridId;
@property(readonly, nonatomic) RCTIconFontManager *iconFontManager;
- (id)schemeHandle;
@property(readonly, nonatomic) RCTDevMenu *devMenu;
@property(readonly, nonatomic) QRCTNativeCallbackManager *nativeCallBackManager;
- (struct OpaqueJSContext *)jsContextRef;
- (id)jsContext;
@property(readonly, nonatomic) RCTNetworking *networking;
@property(readonly, nonatomic) RCTDevSettings *devSettings;
- (id)eventDispatcher;
@property(readonly, nonatomic) RCTRedBox *redBox;
@property(readonly, nonatomic) ALAssetsLibrary *assetsLibrary;
@property(readonly, nonatomic) RCTImageStoreManager *imageStoreManager;
@property(readonly, nonatomic) RCTUIManager *uiManager;
@property(readonly, nonatomic) RCTImageLoader *imageLoader;
- (id)webSocketModule;
@property(readonly, nonatomic) RCTAccessibilityManager *accessibilityManager;
- (void)directCallWithModules:(id)arg1 methods:(id)arg2 arguments:(id)arg3;
- (id)qavManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

