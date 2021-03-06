//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XMPPAutoPingDelegate-Protocol.h"
#import "XMPPStreamDelegate-Protocol.h"

@class CTIMXMPPChatManager, NSError, NSMutableArray, XMPPAutoPing, XMPPMessageDeliveryReceipts, XMPPStream, XMPPStreamManagement, XMPPStreamManagementMemoryStorage;

@interface CTIMXMPPManager : NSObject <XMPPStreamDelegate, XMPPAutoPingDelegate>
{
    unsigned long long _closeStatus;
    double startCheckTime;
    double endCheckTime;
    _Bool _isBackGround;
    _Bool _loginInSync;
    _Bool _syncLoginProcessing;
    _Bool _isInChatView;
    _Bool _isSyncVersionB;
    NSMutableArray *_messageIdList;
    long long _connectStatus;
    XMPPStream *_xmppStream;
    CTIMXMPPChatManager *_xmppChatManager;
    CDUnknownBlockType _asyncLoginCompletionBlock;
    NSError *_syncLoginError;
    XMPPStreamManagementMemoryStorage *_xmppStreamManagementMemoryStorage;
    XMPPStreamManagement *_xmppStreamManagement;
    XMPPMessageDeliveryReceipts *_xmppMessageDeliveryReceipts;
    XMPPAutoPing *_xmppPing;
}

+ (id)xmppResource;
+ (id)manager;
@property(nonatomic) _Bool isSyncVersionB; // @synthesize isSyncVersionB=_isSyncVersionB;
@property(nonatomic) _Bool isInChatView; // @synthesize isInChatView=_isInChatView;
@property(retain, nonatomic) XMPPAutoPing *xmppPing; // @synthesize xmppPing=_xmppPing;
@property(retain, nonatomic) XMPPMessageDeliveryReceipts *xmppMessageDeliveryReceipts; // @synthesize xmppMessageDeliveryReceipts=_xmppMessageDeliveryReceipts;
@property(retain, nonatomic) XMPPStreamManagement *xmppStreamManagement; // @synthesize xmppStreamManagement=_xmppStreamManagement;
@property(retain, nonatomic) XMPPStreamManagementMemoryStorage *xmppStreamManagementMemoryStorage; // @synthesize xmppStreamManagementMemoryStorage=_xmppStreamManagementMemoryStorage;
@property(retain, nonatomic) NSError *syncLoginError; // @synthesize syncLoginError=_syncLoginError;
@property(nonatomic) _Bool syncLoginProcessing; // @synthesize syncLoginProcessing=_syncLoginProcessing;
@property(copy, nonatomic) CDUnknownBlockType asyncLoginCompletionBlock; // @synthesize asyncLoginCompletionBlock=_asyncLoginCompletionBlock;
@property(nonatomic, getter=isLoginInSync) _Bool loginInSync; // @synthesize loginInSync=_loginInSync;
@property(retain, nonatomic) CTIMXMPPChatManager *xmppChatManager; // @synthesize xmppChatManager=_xmppChatManager;
@property(retain, nonatomic) XMPPStream *xmppStream; // @synthesize xmppStream=_xmppStream;
@property(nonatomic) _Bool isBackGround; // @synthesize isBackGround=_isBackGround;
@property(nonatomic) long long connectStatus; // @synthesize connectStatus=_connectStatus;
@property(retain, nonatomic) NSMutableArray *messageIdList; // @synthesize messageIdList=_messageIdList;
- (void).cxx_destruct;
- (void)reconnect;
- (void)setIMTcpEnvForTest;
- (id)getIMTcpLog;
- (void)xmppStream:(id)arg1 didReceiveError:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (id)xmppStream:(id)arg1 alternativeResourceForConflictingResource:(id)arg2;
- (id)xmppStreamWillBind:(id)arg1;
- (void)xmppStream:(id)arg1 didNotAuthenticate:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStreamConnectDidTimeout:(id)arg1;
- (void)xmppStreamDidSendClosingStreamStanza:(id)arg1;
- (void)xmppStreamWasToldToDisconnect:(id)arg1;
- (void)xmppStreamDidStartNegotiation:(id)arg1;
- (void)xmppStreamDidConnect:(id)arg1;
- (void)xmppStream:(id)arg1 socketDidConnect:(id)arg2;
- (void)xmppStreamWillConnect:(id)arg1;
- (void)xmppAutoPingDidTimeout:(id)arg1;
- (void)xmppAutoPingDidReceivePong:(id)arg1;
- (void)xmppAutoPingDidSendPing:(id)arg1;
- (void)handleLoginFinishWithError:(id)arg1;
- (void)goOffline;
- (void)goOnline;
- (void)teardownStream;
- (void)setupStream;
- (id)JIDwithUseInfo:(id)arg1;
- (void)postNotification_sync:(long long)arg1;
- (void)xmppLogout;
- (void)xmppLogin:(id)arg1;
- (_Bool)connectWithUser:(id)arg1 error:(id *)arg2;
- (void)asyncXmppLoginWithUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)networkDidChanged:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

