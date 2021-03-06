//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "Wtlogin64_SocketNetworkAdapterProtocol-Protocol.h"

@class NSMutableDictionary, NSString, Wtlogin64_SocketNetworkAdapter, Wtlogin64_WloginPkgHead;
@protocol OS_dispatch_queue;

@interface Wtlogin64_WloginProtocol : NSObject <UIAlertViewDelegate, Wtlogin64_SocketNetworkAdapterProtocol>
{
    Wtlogin64_WloginPkgHead *pkgHead;
    unsigned char cReplyCode;
    int replyCodeActionType;
    NSMutableDictionary *basicInfoTlvList;
    unsigned int dwSrcSigAppid;
    unsigned int dwSrcSigSubAppid;
    unsigned int dwDstSigAppid;
    unsigned int dwDstSigSubAppid;
    NSMutableDictionary *reslutSigTlvList;
    Wtlogin64_SocketNetworkAdapter *socketAdapter;
    double timeOut;
    char sKey[16];
    char A1_Key[16];
    id protocolDelegate;
    NSObject<OS_dispatch_queue> *processQueue;
    id retryPara;
    id retryPara2;
    unsigned short retryTimes;
    BOOL cRetryFlag;
    int nowFunction;
    NSString *nowHost;
    unsigned short nowPort;
    struct timeval startTime;
    CDStruct_34f44c17 stInfo;
}

@property(readonly) int replyCodeActionType; // @synthesize replyCodeActionType;
@property(readonly) NSMutableDictionary *reslutSigTlvList; // @synthesize reslutSigTlvList;
@property BOOL cRetryFlag; // @synthesize cRetryFlag;
@property(readonly) unsigned char cReplyCode; // @synthesize cReplyCode;
- (void).cxx_destruct;
- (void)printAppid;
- (void)doNothing;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setProtocolDispatchQueue:(id)arg1;
- (void)setOtherAppidList:(unsigned int *)arg1 andOtherAppidNum:(unsigned int)arg2 andBitmap:(unsigned int)arg3;
- (unsigned long long)pkgHeadUin;
- (void)setPkgHeadUin:(unsigned long long)arg1;
- (id)sigTlvDictByTag:(unsigned short)arg1;
- (id)basicTlvByTag:(unsigned short)arg1;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 didDisconnectWithError:(id)arg2;
- (_Bool)addBasicTlv:(id)arg1;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)recvPkgError:(id)arg1;
- (void)networkInfoReport:(short)arg1 andErrorStr:(id)arg2;
- (_Bool)decodeTlvList:(const char *)arg1 andLeftLen:(int *)arg2;
- (int)refreshSmsVerifyLoginCode;
- (int)checkSmsVerifyLoginCode;
- (int)checkSmsVerifyLoginAccount;
- (int)exchangeSig:(id)arg1 withNoPicSig:(id)arg2;
- (int)getRandSalt;
- (int)refreshSmsCode;
- (int)refreshPic;
- (int)checkPic;
- (int)loginWithPasswd:(id)arg1 withNoPicSig:(id)arg2 andLoginFlag:(unsigned char)arg3;
- (int)geneECDHReqPkg:(id)arg1 withSendPkg:(id)arg2;
- (_Bool)genEncryptBody_0x144:(id)arg1 subCmd:(unsigned short)arg2;
- (_Bool)addEcdhBackSig;
- (_Bool)genTGTGTbyPasswd:(const char *)arg1 andFlag:(int)arg2 outTGTGT:(id)arg3 andSigSrc:(unsigned int)arg4 andMUin:(unsigned long long)arg5 andUserId:(id)arg6 and:(unsigned int)arg7;
- (int)connectToRemortServer;
- (void)setSrcAppid:(unsigned int)arg1 andSrcSubAppid:(unsigned int)arg2 andDstAppid:(unsigned int)arg3 andDstSubAppid:(unsigned int)arg4;
- (void)dealloc;
- (_Bool)resetProtocol;
- (id)initWithClientVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3 andDelegate:(id)arg4;
- (id)paramDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

