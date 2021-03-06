//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCore.h"

#import "ChannelCoreClient-Protocol.h"
#import "IImFriendCore-Protocol.h"
#import "ImFriendWrapperDelegate-Protocol.h"
#import "ImLoginCoreClient-Protocol.h"

@class ImDb, ImFriendWrapper, NSMutableArray, NSMutableDictionary, NSNumber, NSString, YYFriendList;

@interface ImFriendCore : BaseCore <ImLoginCoreClient, ImFriendWrapperDelegate, ChannelCoreClient, IImFriendCore>
{
    ImDb *_db;
    ImFriendWrapper *_wrapper;
    YYFriendList *_friendList;
    NSMutableDictionary *_friendOnlineState;
    NSMutableDictionary *_friendRemark;
    NSMutableArray *_friendChannelList;
    NSNumber *_myImId;
}

@property(retain, nonatomic) NSNumber *myImId; // @synthesize myImId=_myImId;
@property(retain, nonatomic) NSMutableArray *friendChannelList; // @synthesize friendChannelList=_friendChannelList;
@property(retain, nonatomic) NSMutableDictionary *friendRemark; // @synthesize friendRemark=_friendRemark;
@property(retain, nonatomic) NSMutableDictionary *friendOnlineState; // @synthesize friendOnlineState=_friendOnlineState;
@property(retain, nonatomic) YYFriendList *friendList; // @synthesize friendList=_friendList;
@property(retain, nonatomic) ImFriendWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) __weak ImDb *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)onGetAddFriendTactics:(id)arg1;
- (void)onSetAddFriendTactics:(id)arg1;
- (void)updateChannelInfo:(id)arg1 userInfo:(id)arg2;
- (void)onChannelChanged:(id)arg1;
- (void)onUpdateFriendChannelInfo:(id)arg1;
- (void)onUpdateSelfChannelInfo:(id)arg1;
- (void)onRequestFriendChannalInfoList:(id)arg1;
- (void)onFriendRemarkChange:(id)arg1 newRemark:(id)arg2;
- (void)onRequestFriendRemark:(id)arg1;
- (void)onRequestDetailUserInfoWithUid:(long long)arg1 success:(_Bool)arg2;
- (void)onUserInfoListQueried:(id)arg1;
- (void)onAddFriendScore:(id)arg1 success:(_Bool)arg2 verifyKey:(id)arg3 verifyData:(id)arg4 score:(id)arg5;
- (void)onAddFriendQuestion:(id)arg1 success:(_Bool)arg2 waitOp:(_Bool)arg3;
- (void)onAddFriendVerify:(id)arg1 success:(_Bool)arg2 folderId:(id)arg3 leftMsg:(id)arg4 verifyKey:(id)arg5 verifyData:(id)arg6;
- (void)onSearchUIDByImIdBanned:(id)arg1 peer:(id)arg2 error:(id)arg3;
- (void)onSearchUIDByImIdFailedAsSearchMySelf:(id)arg1;
- (void)onAccountAddFriendDisabled:(id)arg1;
- (void)onAccountAddFriendRestricted:(id)arg1;
- (void)onAccountNeeedBindPhoneNumber:(id)arg1;
- (void)onAddFriend:(id)arg1 smsCodeVerifySuccess:(_Bool)arg2;
- (void)onSearchUIDByImId:(id)arg1 success:(_Bool)arg2 userId:(id)arg3 verifyKey:(id)arg4 verifyData:(id)arg5;
- (void)onAddFriendButTooMuchFriendForBuddy:(id)arg1;
- (void)onAddFriendButInBlackList:(id)arg1;
- (void)onAddFriendQuestionTactics:(id)arg1 question:(id)arg2 questionId:(id)arg3;
- (void)onAddFriendScoreTactics:(id)arg1 verifyKey:(id)arg2 verifyData:(id)arg3;
- (void)onAddFriendRejectTactics:(id)arg1;
- (void)onAddFriendVerifyTactics:(id)arg1 verifyKey:(id)arg2 verifyData:(id)arg3;
- (void)onFriendStateChange:(id)arg1 state:(unsigned long long)arg2;
- (void)onAcceptAddFriendAction:(id)arg1 success:(_Bool)arg2;
- (void)onAddFriendResp:(id)arg1 success:(_Bool)arg2;
- (void)onDeleteFriend:(id)arg1 success:(_Bool)arg2;
- (void)onRequestFriendOnlineState:(id)arg1;
- (void)onUserInfoUpdate:(id)arg1;
- (void)onRequestMyImId:(id)arg1;
- (void)onRequestFriendList:(id)arg1;
- (void)onCurrentAccountChanged:(long long)arg1;
- (void)onAutoLoginSucced;
- (void)onImLoginSucceed;
- (void)modifyAddFriendTacticsWithScore:(unsigned long long)arg1;
- (void)modifyAddFriendTacticsWithQuestion:(id)arg1 answer:(id)arg2 verify:(_Bool)arg3;
- (void)modifyAddFriendTacticsRejectAll;
- (void)modifyAddFriendTacticsNeedVerify;
- (void)requestSMSVerifyCode;
- (void)requestMyTactics;
- (void)p_queryRemarkFromFile;
- (void)modifyFriendRemark:(id)arg1 remark:(id)arg2;
- (id)cachedFriendRemark:(long long)arg1;
- (void)requestFriendRemark;
- (void)sortFriendListOrderByOnlineState:(id)arg1;
- (unsigned long long)cachedFolderOnlineCount:(id)arg1;
- (id)cachedFriendChannelInfo:(long long)arg1;
- (unsigned long long)cachedFriendOnlineState:(long long)arg1;
- (void)requestUIDByImId:(long long)arg1 verifyKey:(id)arg2 verify:(id)arg3;
- (void)requestAddFriendTactics:(long long)arg1;
- (void)requestImChannelInfoList;
- (void)requestFriendOnlineState;
- (void)requestMyImId;
- (void)requestFriendList;
- (void)queryFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (id)cachedMyImId;
- (id)cachedFriendList;
- (_Bool)isMyFriend:(long long)arg1;
- (void)updateSelfChannelWithTopSid:(unsigned int)arg1 subSid:(unsigned int)arg2 topASid:(unsigned int)arg3 appendData1:(id)arg4 appendData2:(id)arg5 appendData3:(id)arg6;
- (void)requestDetailUserInfo:(id)arg1;
- (void)requestImSimpleUserInfo:(id)arg1;
- (void)requestImSimpleUserInfoAndOnlineState:(id)arg1;
- (void)addFriend:(long long)arg1 folderId:(id)arg2 leftMsg:(id)arg3 verifyKey:(id)arg4 verifyValue:(id)arg5 isBind:(_Bool)arg6 smsCode:(id)arg7;
- (void)addFriend:(long long)arg1 verifyKey:(id)arg2 verify:(id)arg3;
- (void)addFriend:(long long)arg1 answer:(id)arg2 questionId:(id)arg3;
- (void)addFriend:(long long)arg1 lefyMessage:(id)arg2 folderId:(id)arg3 verifyKey:(id)arg4 verify:(id)arg5;
- (void)deleteFriend:(long long)arg1;
- (void)cancelAddFriend:(long long)arg1;
- (void)rejectAddFriend:(long long)arg1;
- (void)acceptAddFriend:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

