//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMImageCacheManager, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, SSStatusBar;
@protocol ISSCAccount, ISSShareActionSheet;

@interface SSFacade : NSObject
{
    id <ISSCAccount> _account;
    NSMutableDictionary *_platformConfig;
    NSMutableDictionary *_connectedPlatforms;
    NSMutableArray *_connectedPlatformTypes;
    SSStatusBar *_statusBar;
    CMImageCacheManager *_imageCacheManager;
    id <ISSShareActionSheet> _popover;
    int _interfaceOrientationMask;
    _Bool _initializedPlatInfo;
    _Bool _getingPlatInfo;
    struct dispatch_queue_s *_waitingQueue;
    struct dispatch_semaphore_s *_getAppSettingSema;
    int _uiStyle;
    _Bool useAppTrusteeship;
}

+ (id)sharedInstance;
@property(nonatomic) int uiStyle; // @synthesize uiStyle=_uiStyle;
@property(readonly, nonatomic) NSArray *connectedPlatformTypes; // @synthesize connectedPlatformTypes=_connectedPlatformTypes;
@property(readonly, nonatomic) NSDictionary *connectedPlatforms; // @synthesize connectedPlatforms=_connectedPlatforms;
@property(readonly, nonatomic) CMImageCacheManager *imageCacheManager; // @synthesize imageCacheManager=_imageCacheManager;
@property(nonatomic) int interfaceOrientationMask; // @synthesize interfaceOrientationMask=_interfaceOrientationMask;
@property(readonly, nonatomic) id <ISSCAccount> account; // @synthesize account=_account;
- (id)getContainerViewControllerWithViewController:(id)arg1;
- (void)initPlatformConfig;
- (void)clientShareContent:(id)arg1 shareType:(int)arg2 resutl:(CDUnknownBlockType)arg3;
- (void)shareContent:(id)arg1 shareType:(int)arg2 shareOptions:(id)arg3 resutl:(CDUnknownBlockType)arg4;
- (void)getMyFriends:(int)arg1 page:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)followUser:(int)arg1 field:(id)arg2 fieldType:(int)arg3 viewDelegate:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)getUserInfo:(int)arg1 field:(id)arg2 fieldType:(int)arg3 result:(CDUnknownBlockType)arg4;
- (void)getDefaultUserInfo:(int)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)checkUnauthWithType:(int)arg1 error:(id)arg2;
- (void)cancelAuthWithType:(int)arg1;
- (_Bool)hasAuthorizedWithType:(int)arg1;
- (id)authorizeController:(int)arg1;
- (void)setCredential:(id)arg1 type:(int)arg2;
- (id)getCredentialType:(int)arg1;
- (_Bool)isClientInstalledWithType:(int)arg1;
- (void)waitGetAppSetting:(CDUnknownBlockType)arg1;
- (id)getPlatformAppWithType:(int)arg1;
- (id)credentialWithType:(int)arg1 uid:(id)arg2 token:(id)arg3 secret:(id)arg4 expired:(id)arg5 extInfo:(id)arg6;
- (id)popoverWithContainer:(id)arg1 ShareList:(id)arg2 clickHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
- (id)defaultUserInfoWithType:(int)arg1;
- (id)getErrorTips:(id)arg1 shareType:(int)arg2;
- (void)hideStatusBarAlwaysMessage;
- (void)showStatusBarAlwaysMessage:(id)arg1 icon:(id)arg2 loading:(_Bool)arg3;
- (void)addStatusBarImmediMessage:(id)arg1 icon:(id)arg2 loading:(_Bool)arg3;
- (id)getContainerViewController;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)getOpenAppIconWithType:(int)arg1;
- (id)getOpenAppNameWithType:(int)arg1;
- (void)updateAppSetting;
@property(nonatomic) _Bool useAppTrusteeship; // @synthesize useAppTrusteeship;
- (void)dealloc;
- (id)init;

@end

