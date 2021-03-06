//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PCDelegateData.h"

#import "JumpHandleResponsePrt-Protocol.h"
#import "SearchNetDealPtc-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSNumber, NSString, PCLoginPopPlugIn, PCUnionLoginNetResult;

@interface PCWeixinLoginManager : PCDelegateData <SearchNetDealPtc, UIAlertViewDelegate, JumpHandleResponsePrt>
{
    int _loginType;
    int _pCVerifyVcodeType;
    NSString *_paramJson;
    NSString *_from;
    NSString *_weixinCode;
    PCUnionLoginNetResult *_unionLoginNetResult;
    NSString *_paramData;
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_mobile;
    NSString *_unionLoginVCName;
    PCLoginPopPlugIn *_pCLoginPopPlugIn;
    NSString *_localVcode;
    long long _unionLoginType;
    long long _verifyCodeType;
    NSNumber *_code;
    NSString *_unionId;
    NSString *_des;
    NSString *_token;
}

+ (id)weixinLoginInstance;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
@property(nonatomic) int pCVerifyVcodeType; // @synthesize pCVerifyVcodeType=_pCVerifyVcodeType;
@property(nonatomic) long long verifyCodeType; // @synthesize verifyCodeType=_verifyCodeType;
@property(nonatomic) long long unionLoginType; // @synthesize unionLoginType=_unionLoginType;
@property(retain, nonatomic) NSString *localVcode; // @synthesize localVcode=_localVcode;
@property(retain, nonatomic) PCLoginPopPlugIn *pCLoginPopPlugIn; // @synthesize pCLoginPopPlugIn=_pCLoginPopPlugIn;
@property(retain, nonatomic) NSString *unionLoginVCName; // @synthesize unionLoginVCName=_unionLoginVCName;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *paramData; // @synthesize paramData=_paramData;
@property(retain, nonatomic) PCUnionLoginNetResult *unionLoginNetResult; // @synthesize unionLoginNetResult=_unionLoginNetResult;
@property(retain, nonatomic) NSString *weixinCode; // @synthesize weixinCode=_weixinCode;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *paramJson; // @synthesize paramJson=_paramJson;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
- (void).cxx_destruct;
- (void)processBindQunarAccountResult:(id)arg1;
- (void)bindQunarAccount;
- (void)processCheckVcodeSccess:(id)arg1;
- (void)gotoVerifyVcodeVC:(id)arg1 saveBaseInfo:(_Bool)arg2;
- (void)gotoUnionLoginVC;
- (void)jumpHandleResponseData:(id)arg1 withOpenURL:(id)arg2 urlData:(id)arg3 userInfo:(id)arg4;
- (void)converterDataFromRN:(id)arg1;
- (void)checkVcodeFor3drLogin;
- (void)goDirectLogin;
- (void)saveUserCountryInfo;
- (void)getVcode;
- (void)saveVcode:(id)arg1;
- (void)checkUnionLoginResult:(id)arg1;
- (void)getAlipayLoginParamBack:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getSearch:(id)arg1 forResult:(id)arg2 forInfo:(id)arg3;
- (void)requestUnionLoginForWeiXin:(id)arg1 encode:(_Bool)arg2;
- (void)checkweixininstalled;
- (id)platform;
- (void)dealAlipayLoginBack:(id)arg1;
- (void)dealWeixinLoginBack:(id)arg1;
- (_Bool)isWeixinInstalled;
- (void)setDefault;
- (void)gotoAlipayLogin;
- (void)gotoRealWeixinLogin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

