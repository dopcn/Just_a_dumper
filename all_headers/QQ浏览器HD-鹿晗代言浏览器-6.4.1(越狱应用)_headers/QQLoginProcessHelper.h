//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WloginCallbackProtocol_v2-Protocol.h"

@class NSString, QQAccount;
@protocol QQLoginProcessCallBack;

@interface QQLoginProcessHelper : NSObject <WloginCallbackProtocol_v2>
{
    id <QQLoginProcessCallBack> _delegate;
    QQAccount *_accountForRefresh;
    CDUnknownBlockType _refreshTokenBlock;
}

@property(copy, nonatomic) CDUnknownBlockType refreshTokenBlock; // @synthesize refreshTokenBlock=_refreshTokenBlock;
@property(retain, nonatomic) QQAccount *accountForRefresh; // @synthesize accountForRefresh=_accountForRefresh;
@property __weak id <QQLoginProcessCallBack> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showWebVerify:(id)arg1 andUrl:(id)arg2 tag:(long long)arg3;
- (void)quickLoginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3 tag:(long long)arg4;
- (void)loginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3;
- (void)loginSuccessSig_v2:(id)arg1 andSig:(id)arg2 andBaseInfo:(id)arg3;
- (void)showPicture_v2:(id)arg1 andPicData:(id)arg2;
- (void)showPicture_v2:(id)arg1 andPicData:(id)arg2 andWording:(id)arg3;
- (void)SmsCodeSuccessBySmsVerifyLogin_V2:(id)arg1 tag:(long long)arg2;
- (void)SmsVerifyLoginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3 tag:(long long)arg4;
- (void)inputSmsCodeErrorBySmsVerifyLogin_V2:(id)arg1 andErrInfo:(id)arg2 tag:(long long)arg3;
- (void)inputSmsCodeBySmsVerifyLogin_V2:(id)arg1 andMsgCnt:(unsigned short)arg2 andTimeout:(unsigned short)arg3 andMsg:(id)arg4 tag:(long long)arg5;
- (void)inputSmsCodeError_v2:(id)arg1 andErrInfo:(id)arg2 tag:(long long)arg3;
- (void)inputSmsCode_v2:(id)arg1 andMbPhoneInfo:(id)arg2 tag:(long long)arg3;
- (void)closeWebView:(int)arg1;
- (void)quickLoginEnd_v2:(id)arg1 andUrl:(id)arg2 tag:(long long)arg3;
- (void)loginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3 tag:(long long)arg4;
- (void)loginSuccessSig_v2:(id)arg1 andSig:(id)arg2 andBaseInfo:(id)arg3 tag:(long long)arg4;
- (void)inputSmsCodeError_v2:(id)arg1 errMsg:(id)arg2 tag:(long long)arg3;
- (void)inputSmsCode_v2:(id)arg1 andNextTime:(unsigned int)arg2 andTimeout:(unsigned int)arg3 andPhoneNo:(id)arg4 tag:(long long)arg5;
- (void)showPicture_v2:(id)arg1 andPicData:(id)arg2 andWording:(id)arg3 tag:(long long)arg4;
- (void)inputPassword_v2:(id)arg1 andAccount:(id)arg2 tag:(long long)arg3;
- (id)lastRefreshTimestampKeyForAccount:(id)arg1;
- (_Bool)isJustRefreshedForAccount:(id)arg1;
- (void)innerRefreshTokenForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTokenForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wtQuickLogin:(id)arg1;
- (void)doLoginSuccessLogicWithData:(id)arg1;
- (void)refreshValidPic;
- (void)doLoginWithValidPicTextInput:(id)arg1;
- (void)doLogin;
- (void)showNormalError;
- (id)getValidLoginUsers;
- (void)callQQForQuickLogin;
- (void)dealloc;
- (void)createWTLoginSDKInstance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

