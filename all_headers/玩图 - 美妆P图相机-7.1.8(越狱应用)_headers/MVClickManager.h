//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MVLoadingHUDDelegate-Protocol.h"
#import "MVURLResolverDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class MVURLResolver, NSLock, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, UIView;
@protocol MVClickDelegate;

@interface MVClickManager : NSObject <MVURLResolverDelegate, SKStoreProductViewControllerDelegate, MVLoadingHUDDelegate>
{
    _Bool _isVBACFResolver;
    _Bool _loadingViewUserInteractionEnabled;
    _Bool _clicking;
    id <MVClickDelegate> _delegate;
    MVURLResolver *_currentResolver;
    NSMutableArray *_runningResolvers;
    NSMutableDictionary *_vbaingResolvers;
    NSOperationQueue *_vbaQueue;
    NSMutableDictionary *_advVBALastTimestampDic;
    NSLock *_lock;
    UIView *_loadingView;
    unsigned long long _mvBackgroundTask;
}

+ (void)networkRequestThreadEntryPoint:(id)arg1;
+ (id)networkRequestThread;
+ (id)sharedInstance;
@property unsigned long long mvBackgroundTask; // @synthesize mvBackgroundTask=_mvBackgroundTask;
@property _Bool clicking; // @synthesize clicking=_clicking;
@property(nonatomic) _Bool loadingViewUserInteractionEnabled; // @synthesize loadingViewUserInteractionEnabled=_loadingViewUserInteractionEnabled;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *advVBALastTimestampDic; // @synthesize advVBALastTimestampDic=_advVBALastTimestampDic;
@property(retain, nonatomic) NSOperationQueue *vbaQueue; // @synthesize vbaQueue=_vbaQueue;
@property(retain, nonatomic) NSMutableDictionary *vbaingResolvers; // @synthesize vbaingResolvers=_vbaingResolvers;
@property(retain, nonatomic) NSMutableArray *runningResolvers; // @synthesize runningResolvers=_runningResolvers;
@property(retain, nonatomic) MVURLResolver *currentResolver; // @synthesize currentResolver=_currentResolver;
@property(nonatomic) _Bool isVBACFResolver; // @synthesize isVBACFResolver=_isVBACFResolver;
@property(nonatomic) __weak id <MVClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)vertifyUrl:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)saveToClickDBIfOfferWall:(id)arg1 unitId:(id)arg2;
- (void)openWithURL:(id)arg1 viewController:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)openAPPStoreWithURL:(id)arg1 viewController:(id)arg2 Campaign:(id)arg3 unitId:(id)arg4;
- (void)openWithCampaign_v272:(id)arg1 unitId:(id)arg2 viewController:(id)arg3 error:(id)arg4;
- (void)openWithCampaign:(id)arg1 unitId:(id)arg2 viewController:(id)arg3 error:(id)arg4;
- (void)clickUrlDidJumpToUrl:(id)arg1;
- (void)getClickUrl_v272:(id)arg1 unitId:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)getClickUrl:(id)arg1 unitId:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)clickLoadingHUDView:(id)arg1;
- (void)removeLoadingHUDView;
- (void)showLoadingHUDView:(id)arg1;
- (void)clickWithCampaign:(id)arg1 unitId:(id)arg2 viewController:(id)arg3 showLoading:(_Bool)arg4 loadingView:(id)arg5;
- (void)clickWithCampaign_v272:(id)arg1 unitId:(id)arg2 viewController:(id)arg3 showLoading:(_Bool)arg4 loadingView:(id)arg5;
- (_Bool)preloadStoreWithCampaign:(id)arg1 unitId:(id)arg2;
- (id)noNeedVBACampaignIdsWithUnitId:(id)arg1;
- (void)startVBA:(id)arg1 unitId:(id)arg2 afterDelay:(double)arg3;
- (void)optimizeVBAWhitCampaign:(id)arg1 unitId:(id)arg2;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (void)handleVBAWithCampaigns_v272:(id)arg1 unitId:(id)arg2 isShow:(_Bool)arg3 unitTtcType:(long long)arg4;
- (void)handleVBAWithCampaigns:(id)arg1 unitId:(id)arg2 isShow:(_Bool)arg3 unitTtcType:(long long)arg4;
- (void)cancelCurrentResolver;
- (void)cancelAllResolver;
- (unsigned long long)startBackGroundTask_v272;
- (unsigned long long)startBackGroundTask;
- (id)init_v272;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

