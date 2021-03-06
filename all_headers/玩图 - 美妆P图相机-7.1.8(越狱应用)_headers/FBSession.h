//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLoginDialogDelegate-Protocol.h"

@class FBAccessTokenData, FBLoginDialog, FBSessionAppEventsState, FBSessionAuthLogger, FBSessionTokenCachingStrategy, NSArray, NSDate, NSMutableArray, NSString, NSThread;

@interface FBSession : NSObject <FBLoginDialogDelegate>
{
    NSString *_urlSchemeSuffix;
    _Bool _isInStateTransition;
    int _loginTypeOfPendingOpenUrlCallback;
    int _defaultDefaultAudience;
    int _loginBehavior;
    NSMutableArray *_declinedPermissions;
    NSArray *_requestedReauthPermissions;
    _Bool _isRepairing;
    int _state;
    int _lastRequestedSystemAudience;
    NSString *_appID;
    FBAccessTokenData *_accessTokenData;
    NSArray *_initializedPermissions;
    FBSessionTokenCachingStrategy *_tokenCachingStrategy;
    NSDate *_attemptedRefreshDate;
    NSDate *_attemptedPermissionsRefreshDate;
    CDUnknownBlockType _loginHandler;
    CDUnknownBlockType _reauthorizeHandler;
    FBLoginDialog *_loginDialog;
    NSThread *_affinitizedThread;
    FBSessionAppEventsState *_appEventsState;
    FBSessionAuthLogger *_authLogger;
}

+ (id)sdkSurfacedErrorForNativeLoginError:(id)arg1;
+ (id)activeSessionIfOpen;
+ (id)activeSessionIfExists;
+ (_Bool)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(_Bool)arg2 loginBehavior:(int)arg3 isRead:(_Bool)arg4 defaultAudience:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (_Bool)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(_Bool)arg2 allowSystemAccount:(_Bool)arg3 isRead:(_Bool)arg4 defaultAudience:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)renewSystemCredentials:(CDUnknownBlockType)arg1;
+ (id)defaultUrlSchemeSuffix;
+ (void)setDefaultUrlSchemeSuffix:(id)arg1;
+ (id)defaultAppID;
+ (void)setDefaultAppID:(id)arg1;
+ (id)setActiveSession:(id)arg1 userInfo:(id)arg2;
+ (id)setActiveSession:(id)arg1;
+ (id)activeSession;
+ (_Bool)openActiveSessionWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 allowLoginUI:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)openActiveSessionWithReadPermissions:(id)arg1 allowLoginUI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)openActiveSessionWithPermissions:(id)arg1 loginBehavior:(int)arg2 isRead:(_Bool)arg3 defaultAudience:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(_Bool)arg2 defaultAudience:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)openActiveSessionWithAllowLoginUI:(_Bool)arg1;
@property(retain) FBSessionAuthLogger *authLogger; // @synthesize authLogger=_authLogger;
@property(retain) FBSessionAppEventsState *appEventsState; // @synthesize appEventsState=_appEventsState;
@property(retain) NSThread *affinitizedThread; // @synthesize affinitizedThread=_affinitizedThread;
@property(retain) FBLoginDialog *loginDialog; // @synthesize loginDialog=_loginDialog;
@property(copy) CDUnknownBlockType reauthorizeHandler; // @synthesize reauthorizeHandler=_reauthorizeHandler;
@property(copy) CDUnknownBlockType loginHandler; // @synthesize loginHandler=_loginHandler;
@property(copy) NSDate *attemptedPermissionsRefreshDate; // @synthesize attemptedPermissionsRefreshDate=_attemptedPermissionsRefreshDate;
@property(copy) NSDate *attemptedRefreshDate; // @synthesize attemptedRefreshDate=_attemptedRefreshDate;
@property(retain) FBSessionTokenCachingStrategy *tokenCachingStrategy; // @synthesize tokenCachingStrategy=_tokenCachingStrategy;
@property _Bool isRepairing; // @synthesize isRepairing=_isRepairing;
@property int lastRequestedSystemAudience; // @synthesize lastRequestedSystemAudience=_lastRequestedSystemAudience;
@property(copy) NSArray *initializedPermissions; // @synthesize initializedPermissions=_initializedPermissions;
@property(copy) FBAccessTokenData *accessTokenData; // @synthesize accessTokenData=_accessTokenData;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property int state; // @synthesize state=_state;
- (id)description;
- (void)closeAndClearTokenInformation:(id)arg1;
- (_Bool)openFromAccessTokenData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 raiseExceptionIfInvalidState:(_Bool)arg3;
- (void)updateDeclinedPermissionsForRequestedPermissions:(id)arg1 grantedPermissions:(id)arg2;
- (id)jsonClientStateWithDictionary:(id)arg1;
- (id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 localizedDescription:(id)arg4;
- (id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3;
@property(readonly) NSString *appBaseUrl;
- (void)callReauthorizeHandlerAndClearState:(id)arg1 updateDeclinedPermissions:(_Bool)arg2;
- (void)transitionAndCallHandlerWithState:(int)arg1 error:(id)arg2 tokenData:(id)arg3 shouldCache:(_Bool)arg4;
- (void)fbDialogNotLogin:(_Bool)arg1;
- (void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2 params:(id)arg3;
- (void)checkThreadAffinity;
- (void)clearAffinitizedThread;
- (void)handleRefreshPermissions:(id)arg1;
- (_Bool)shouldRefreshPermissions;
- (_Bool)shouldExtendAccessToken;
- (void)refreshAccessToken:(id)arg1 expirationDate:(id)arg2;
- (void)authorizeRequestWasImplicitlyCancelled;
- (void)completeReauthorizeWithAccessToken:(id)arg1 expirationDate:(id)arg2 permissions:(id)arg3;
- (void)repairWithHandler:(CDUnknownBlockType)arg1;
- (void)reauthorizeWithPermissions:(id)arg1 isRead:(_Bool)arg2 behavior:(int)arg3 defaultAudience:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)validateReauthorizedAccessToken:(id)arg1 expirationDate:(id)arg2;
- (_Bool)handleReauthorize:(id)arg1 accessToken:(id)arg2;
- (_Bool)handleAuthorizationOpen:(id)arg1 accessToken:(id)arg2 loginType:(int)arg3;
- (void)authorizeUsingLoginDialog:(id)arg1;
- (_Bool)tryOpenURL:(id)arg1;
- (_Bool)authorizeUsingSafari:(id)arg1;
- (_Bool)authorizeUsingFacebookApplication:(id)arg1;
- (_Bool)isURLSchemeRegistered;
- (void)handleDidCompleteNativeLoginForAppCall:(id)arg1;
- (id)getSystemAccountStoreAdapter;
- (void)authorizeUsingSystemAccountStore:(id)arg1 defaultAudience:(int)arg2 isReauthorize:(_Bool)arg3;
- (void)logIntegratedAuthAppEvent:(id)arg1 permissions:(id)arg2;
- (void)setLoginTypeOfPendingOpenUrlCallback:(int)arg1;
- (void)retryableAuthorizeWithPermissions:(id)arg1 defaultAudience:(int)arg2 integratedAuth:(_Bool)arg3 FBAppAuth:(_Bool)arg4 safariAuth:(_Bool)arg5 fallback:(_Bool)arg6 isReauthorize:(_Bool)arg7 canFetchAppSettings:(_Bool)arg8;
- (void)authorizeWithPermissions:(id)arg1 defaultAudience:(int)arg2 integratedAuth:(_Bool)arg3 FBAppAuth:(_Bool)arg4 safariAuth:(_Bool)arg5 fallback:(_Bool)arg6 isReauthorize:(_Bool)arg7 canFetchAppSettings:(_Bool)arg8;
- (void)authorizeWithPermissions:(id)arg1 behavior:(int)arg2 defaultAudience:(int)arg3 isReauthorize:(_Bool)arg4;
- (_Bool)transitionToState:(int)arg1 withAccessTokenData:(id)arg2 shouldCache:(_Bool)arg3;
- (_Bool)hasGranted:(id)arg1;
- (void)setStateChangeHandler:(CDUnknownBlockType)arg1;
@property(copy) NSString *urlSchemeSuffix;
@property(readonly) _Bool isOpen;
- (void)handleDidBecomeActive;
- (_Bool)openFromAccessTokenData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)handleAuthorizationCallbacks:(id)arg1 params:(id)arg2 loginType:(int)arg3;
- (void)closeAndClearTokenInformation;
- (void)close;
- (void)refreshPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestNewPublishPermissions:(id)arg1 defaultAudience:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestNewReadPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reauthorizeWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reauthorizeWithReadPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reauthorizeWithPermissions:(id)arg1 behavior:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openWithBehavior:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *declinedPermissions;
@property(readonly) int loginType;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSString *accessToken;
- (id)refreshDate;
@property(readonly) NSArray *permissions;
- (void)dealloc;
- (_Bool)initializeFromCachedToken:(id)arg1 withPermissions:(id)arg2;
- (id)initWithAppID:(id)arg1 permissions:(id)arg2 defaultAudience:(int)arg3 urlSchemeSuffix:(id)arg4 tokenCacheStrategy:(id)arg5;
- (id)initWithAppID:(id)arg1 permissions:(id)arg2 urlSchemeSuffix:(id)arg3 tokenCacheStrategy:(id)arg4;
- (id)initWithPermissions:(id)arg1;
- (id)init;

@end

