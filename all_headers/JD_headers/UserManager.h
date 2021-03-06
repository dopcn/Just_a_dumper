//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDBaseToastViewDelegate-Protocol.h"
#import "WJLoginBackToAppProtocol-Protocol.h"
#import "WJLoginH5BackToAppProtocol-Protocol.h"
#import "WJLoginJDQQLoginProtocol-Protocol.h"
#import "WJLoginJDWXLoginProtocol-Protocol.h"
#import "WJLoginNeedMRegisterProtocol-Protocol.h"
#import "WJLoginRefreshAuthCodeProtocol-Protocol.h"
#import "WJLoginVerificationProtocol-Protocol.h"

@class NSDate, NSString, NSUndoManager, UserModel, WJLoginClientService, WJLoginCustomInfo;

@interface UserManager : NSObject <WJLoginVerificationProtocol, WJLoginRefreshAuthCodeProtocol, WJLoginJDWXLoginProtocol, WJLoginJDQQLoginProtocol, WJLoginBackToAppProtocol, JDBaseToastViewDelegate, WJLoginH5BackToAppProtocol, WJLoginNeedMRegisterProtocol>
{
    int _passwordErrorCount;
    NSUndoManager *_undoManager;
    WJLoginClientService *_loginService;
    NSString *_thirdPartyScheme;
    NSString *_browserlogin_fromurl;
    NSString *_authlogin_returnurl;
    WJLoginCustomInfo *_customInfo;
    UserModel *_loginedUserModel;
    NSString *_h5URLString;
    NSString *_encryptKey;
    NSDate *_passwordErrorTime;
    NSString *_inputAccount;
    NSString *_lastAccount;
    NSString *_currentAccount;
    long long _launchType;
}

+ (id)loginCookieOnlyForSafeMode;
+ (id)sharedUserManager;
@property(nonatomic) long long launchType; // @synthesize launchType=_launchType;
@property(retain, nonatomic) NSString *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(retain, nonatomic) NSString *lastAccount; // @synthesize lastAccount=_lastAccount;
@property(retain, nonatomic) NSString *inputAccount; // @synthesize inputAccount=_inputAccount;
@property(retain, nonatomic) NSDate *passwordErrorTime; // @synthesize passwordErrorTime=_passwordErrorTime;
@property(nonatomic) int passwordErrorCount; // @synthesize passwordErrorCount=_passwordErrorCount;
@property(retain, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(retain, nonatomic) NSString *h5URLString; // @synthesize h5URLString=_h5URLString;
@property(retain, nonatomic) UserModel *loginedUserModel; // @synthesize loginedUserModel=_loginedUserModel;
@property(retain, nonatomic) WJLoginCustomInfo *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSString *authlogin_returnurl; // @synthesize authlogin_returnurl=_authlogin_returnurl;
@property(retain, nonatomic) NSString *browserlogin_fromurl; // @synthesize browserlogin_fromurl=_browserlogin_fromurl;
@property(retain, nonatomic) NSString *thirdPartyScheme; // @synthesize thirdPartyScheme=_thirdPartyScheme;
@property(nonatomic) __weak WJLoginClientService *loginService; // @synthesize loginService=_loginService;
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (id)currentNavigationController;
- (_Bool)needFindPassword;
- (void)killLivenessDetectionVCinFinish;
- (void)killLivenessDetectionVCinCancel;
- (void)jumpToFindPassword;
- (void)jumpToRegisterWithURL:(id)arg1;
- (void)jumpToWithURL;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)onNeedMRegisterEnterPriseRegisterWithJumpurl:(id)arg1;
- (void)onNeedMRegisterError:(id)arg1;
- (void)onNeedMRegisterfail;
- (void)onNeedMRegisterSuccessWithJumpurl:(id)arg1;
- (void)onH5BackToAppError:(id)arg1;
- (void)onH5BackToAppFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onH5BackToAppSuccess;
- (void)onBackToAppError:(id)arg1;
- (void)onBackToAppFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onBackToAppSuccess;
- (void)onJDQQJumpBind:(id)arg1 url:(id)arg2;
- (void)onJDQQLoginError:(id)arg1;
- (void)onJDQQLoginFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onJDQQLoginSuccess;
- (void)onJDWXJumpBind:(id)arg1 url:(id)arg2;
- (void)onJDWXLoginError:(id)arg1;
- (void)onJDWXLoginFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onJDWXLoginSuccess;
- (void)refreshRequestAuthCodeTooFast:(id)arg1;
- (void)onRefreshAuthCodeError:(id)arg1;
- (void)onRefreshAuthCodeFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onRefreshAuthCodeSuccessWithEncryptKey:(id)arg1 picData:(id)arg2;
- (void)verificationAccountLockedFindbackPwd:(id)arg1 errorMessage:(id)arg2;
- (void)verificationRiskWithBindedPhone:(id)arg1 jumpUrl:(id)arg2 errorMessage:(id)arg3 errorNumber:(unsigned long long)arg4;
- (void)verificationLimitTime:(int)arg1 errorMessage:(id)arg2;
- (void)verificationSingleButtonWithErrorMessage:(id)arg1 errorNumber:(unsigned long long)arg2;
- (void)verificaitonRequestAuthCodeTooFast:(id)arg1;
- (void)showVerificationPicData:(id)arg1 encryptKey:(id)arg2 errorCode:(int)arg3;
- (void)onVerificationFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onVerificationError:(id)arg1;
- (void)onVerificationSuccess;
- (void)checkFaceRealNameRegistrationStatus;
- (void)faceRecognitionLoginWithInfo:(id)arg1 picData:(id)arg2 picKey:(id)arg3;
- (void)faceLoginShowOrNotWithAccount:(id)arg1;
- (void)checkFaceLoginStatus;
- (void)closeFaceLogin;
- (void)openFaceLoginWithInfo:(id)arg1 picData:(id)arg2 picKey:(id)arg3;
- (void)goToFaceLoginSetting;
- (void)thirdPartyLoginWithURL:(id)arg1;
- (void)thirdPartyLoginWithURL:(id)arg1 andScheme:(id)arg2 andbroswer:(id)arg3;
- (void)needMRegister;
- (void)handleloginSdkWithScannedPcTvToken:(id)arg1;
- (void)loginSdkWithScannedPcTvToken:(id)arg1 fromNative:(_Bool)arg2;
- (void)loginSdkRefreshAuthCode;
- (void)loginSdkWithQQOpenId:(id)arg1 accessToken:(id)arg2;
- (void)loginSdkwithWXCode:(id)arg1;
- (void)loginSdkWithAccount:(id)arg1 password:(id)arg2 authCode:(id)arg3;
- (void)loginSuccess;
- (void)undoDispatch:(id)arg1;
- (void)needLoginWithRegisterUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)needLoginAnimation:(_Bool)arg1;
- (_Bool)inAuthLoginWorkFlow;
- (void)outAuthLoginWorkFlow;
- (void)launchWithOptions:(id)arg1;
- (id)getLoginCookieString;
- (id)getUserA2String;
- (id)getUserPin;
- (id)getUserEnPin;
- (void)showLoginViewController:(_Bool)arg1 afterTime:(float)arg2;
- (_Bool)checkUserLogin;
- (_Bool)hasUserLogined;
- (void)clearWebViewCookie;
- (void)logout;
- (void)cancelHandle;
- (id)getCurrentLoginUser;
- (void)checkSdkAutoLogin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

