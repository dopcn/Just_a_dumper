//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Wtlogin64_ProcessCallback-Protocol.h"
#import "Wtlogin64_WloginSelfCallBackProcotol-Protocol.h"

@class NSData, NSMutableDictionary, NSString, Wtlogin64_MemSig, Wtlogin64_WloginProtocol, Wtlogin64_WtloginCustomDataForV2;

@interface Wtlogin64_UserLoginProcess : NSObject <Wtlogin64_WloginSelfCallBackProcotol, Wtlogin64_ProcessCallback>
{
    NSString *tmpUserAccount;
    _Bool hasNewTGTGT;
    Wtlogin64_MemSig *tmpTGTGT;
    NSData *tmpNoPicSig;
    id tmpUserPasswd;
    unsigned int dwTmpBitmap;
    unsigned int tmpflag;
    unsigned int dwTmpAppid;
    unsigned int dwTmpSubAppid;
    unsigned int dwTmpByAppid;
    Wtlogin64_MemSig *tmpD2;
    Wtlogin64_MemSig *tmpTGT;
    id sdkDelegate;
    int iLoginState;
    int iInProcess;
    Wtlogin64_WloginProtocol *wloginProtocol;
    id theDelegate;
    short nowRst;
    struct timeval nowStartTime;
    NSMutableDictionary *nowLoginDic;
    struct timeval nextStartTime;
    NSMutableDictionary *nextLoginDic;
    int dwProcessIndex;
    _Bool isInUse;
    Wtlogin64_WtloginCustomDataForV2 *customUserData;
    id retryPara;
    id retryPara2;
    id retryPara3;
    BOOL cRetryFlag;
    unsigned int isEcdhBack;
    NSData *ecdhBackSig;
    unsigned short retryTimes;
    int nowCltFunction;
    unsigned int _dwAccType;
}

@property unsigned int dwAccType; // @synthesize dwAccType=_dwAccType;
@property(readonly) NSData *ecdhBackSig; // @synthesize ecdhBackSig;
@property unsigned int isEcdhBack; // @synthesize isEcdhBack;
@property(retain) Wtlogin64_WtloginCustomDataForV2 *customUserData; // @synthesize customUserData;
@property(readonly) int dwProcessIndex; // @synthesize dwProcessIndex;
@property _Bool isInUse; // @synthesize isInUse;
@property(readonly) Wtlogin64_WloginProtocol *wloginProtocol; // @synthesize wloginProtocol;
@property unsigned int dwTmpByAppid; // @synthesize dwTmpByAppid;
@property unsigned int dwTmpSubAppid; // @synthesize dwTmpSubAppid;
@property unsigned int dwTmpAppid; // @synthesize dwTmpAppid;
@property unsigned int tmpflag; // @synthesize tmpflag;
@property unsigned int dwTmpBitmap; // @synthesize dwTmpBitmap;
@property(retain) Wtlogin64_MemSig *tmpTGT; // @synthesize tmpTGT;
@property(retain) Wtlogin64_MemSig *tmpD2; // @synthesize tmpD2;
@property(retain) id tmpUserPasswd; // @synthesize tmpUserPasswd;
@property(retain) Wtlogin64_MemSig *tmpTGTGT; // @synthesize tmpTGTGT;
@property(retain) NSString *tmpUserAccount; // @synthesize tmpUserAccount;
@property(retain) NSData *tmpNoPicSig; // @synthesize tmpNoPicSig;
@property _Bool hasNewTGTGT; // @synthesize hasNewTGTGT;
@property BOOL cRetryFlag; // @synthesize cRetryFlag;
@property int iInProcess; // @synthesize iInProcess;
@property int iLoginState; // @synthesize iLoginState;
@property id sdkDelegate; // @synthesize sdkDelegate;
- (void).cxx_destruct;
- (int)refreshSmsVerifyLoginCode;
- (int)checkSmsVerifyLoginCode;
- (int)checkSmsVerifyLoginAccount;
- (void)resetEcdhBackSig;
- (void)setEcdhBackSig:(id)arg1;
- (void)networkInfo:(CDStruct_34f44c17 *)arg1;
- (void)protocolSetPwdFlag:(id)arg1 andPwdFlag:(BOOL)arg2;
- (void)protocolInputSmsCodeBySmsVerifyLogin:(id)arg1 andRefreshFlag:(int)arg2;
- (void)protocolSmsCodeError:(id)arg1;
- (void)protocolInputSmsCode:(id)arg1 andMbPhone:(id)arg2;
- (void)protocolRefreshPictureSucc:(id)arg1 picData:(id)arg2 wording:(id)arg3;
- (void)protocolShowPicture:(id)arg1 picData:(id)arg2 wording:(id)arg3;
- (void)protocolLoginError:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolLoginFailed:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolLoginSuccessSig:(id)arg1 sig:(id)arg2 andBaseInfo:(id)arg3 andPasswdSig:(id)arg4;
- (id)reslutSigTlvList;
- (void)setOtherAppidList:(unsigned int *)arg1 andOtherAppidNum:(unsigned int)arg2 andBitmap:(unsigned int)arg3;
- (id)sigTlvDictByTag:(unsigned short)arg1;
- (id)basicTlvByTag:(unsigned short)arg1;
- (_Bool)addBasicTlv:(id)arg1;
- (_Bool)genTGTGTbyPasswd:(const char *)arg1 andFlag:(int)arg2 outTGTGT:(id)arg3 andSigSrc:(unsigned int)arg4 andMUin:(unsigned long long)arg5 andUserId:(id)arg6 and:(unsigned int)arg7;
- (unsigned long long)pkgHeadUin;
- (void)setSrcAppid:(unsigned int)arg1 andSrcSubAppid:(unsigned int)arg2 andDstAppid:(unsigned int)arg3 andDstSubAppid:(unsigned int)arg4;
- (void)setPkgHeadUin:(unsigned long long)arg1;
- (int)exchangeSig:(id)arg1 withNoPicSig:(id)arg2;
- (int)getRandSalt;
- (int)refreshPic;
- (int)checkPic;
- (int)loginWithPasswd:(id)arg1 withNoPicSig:(id)arg2 andLoginFlag:(unsigned char)arg3;
- (_Bool)setProcessStep:(id)arg1 andResult:(short)arg2;
- (_Bool)setProcessEnd:(id)arg1 andResult:(short)arg2;
- (_Bool)setProcessBegin:(id)arg1 andType:(int)arg2 andName:(id)arg3;
- (_Bool)setProcessBegin:(id)arg1;
- (void)resetLoginProcess;
- (void)dealloc;
- (id)initWithClientVer:(unsigned short)arg1 andAppVer:(id)arg2 andPubNo:(unsigned int)arg3 andClientType:(unsigned int)arg4 andDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

