//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLSessionTask;

@interface XSTIMChatMessageManager : NSObject
{
    _Bool _isRefreshList;
    NSURLSessionTask *_unReadOperation;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getImageDBInfosWithPeerId:(id)arg1 isGroup:(_Bool)arg2;
- (void)requestUnreadCountWithNeedRequestSysNotic:(_Bool)arg1 needRequestQunNotic:(_Bool)arg2 needConnect:(_Bool)arg3;
- (void)fetchAllFriendListAndUpdateRedBubble;
- (void)setBarNumWithCount:(long long)arg1 preeId:(id)arg2 isGroup:(_Bool)arg3;
- (void)setBarNumWithCount:(long long)arg1 index:(long long)arg2;
- (void)updatBarCount:(id)arg1;
- (void)getQuanChatSystem:(id)arg1;
- (void)updatBarCountWithSystemNotify:(id)arg1;
- (void)setBarNumWithPreeId:(id)arg1 isGroup:(_Bool)arg2;
- (_Bool)inserMessageIntoTableWithName:(id)arg1 msgId:(id)arg2 dbInfo:(id)arg3;
- (void)changeChatStateWithID:(id)arg1 nickname:(id)arg2;
- (void)changeSayHelloListBtnStateWithID:(id)arg1;
- (void)downloadFinishNotification:(id)arg1;
- (void)sendVideoWithOriginVideo:(id)arg1 beginBlock:(CDUnknownBlockType)arg2 processBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendSoundWithOriginSound:(id)arg1 beginBlock:(CDUnknownBlockType)arg2 processBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendImageWithOriginImage:(id)arg1 beginBlock:(CDUnknownBlockType)arg2 processBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendTextWithOriginText:(id)arg1 beginBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendTipWithOriginTip:(id)arg1 beginBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)deleteAllMessageWithPeerId:(id)arg1 isGroup:(_Bool)arg2;
- (_Bool)deleteMessageWithPrimaryKey:(id)arg1 fromPeerId:(id)arg2 isGroup:(_Bool)arg3;
- (_Bool)processChatType:(id)arg1 info:(id)arg2 isNew:(_Bool)arg3;
- (void)modifyLoadTimeWithArr:(id)arg1 withKeyName:(id)arg2 isNew:(_Bool)arg3 maxCount:(long long)arg4;
- (void)getLogMessageWithPeerID:(id)arg1 maxCount:(long long)arg2 startTime:(long long)arg3 endTime:(long long)arg4 isNew:(_Bool)arg5 callBackBlock:(CDUnknownBlockType)arg6 isGroup:(_Bool)arg7;
- (long long)getMessagesFromPeerId:(id)arg1 withMessageBegin:(id)arg2 MessageEnd:(id)arg3 size:(long long)arg4 isGroup:(_Bool)arg5;
- (id)getMessagesFromPeerId:(id)arg1 withMinMessageId:(id)arg2 size:(long long)arg3 isGroup:(_Bool)arg4;
- (id)getMessagesFromPeerId:(id)arg1 withMaxMessageId:(id)arg2 size:(long long)arg3 isGroup:(_Bool)arg4;
- (void)setDraftTextToPeerId:(id)arg1 withText:(id)arg2 isGroup:(_Bool)arg3;
- (void)setPlaySoundReadStatusFromPeerId:(id)arg1 withMessageId:(id)arg2 isGroup:(_Bool)arg3;
- (void)setMessageReadStatusFromPeerId:(id)arg1 withMessageId:(id)arg2 isGroup:(_Bool)arg3;
- (void)setAllReadToPeerId:(id)arg1 isGroup:(_Bool)arg2;
- (void)getUnreadCountFromPeerId:(id)arg1 isGroup:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dropFriendTableWithPeerId:(id)arg1 isGroup:(_Bool)arg2;
- (void)removeSeverFriendListWithUserID:(id)arg1 isGroup:(_Bool)arg2;
- (_Bool)deleteFriendWithPeerId:(id)arg1 isGroup:(_Bool)arg2;
- (void)getIsFriendAtBlockWithPeerId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)setFriendUnBlockWithPeerId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)setFriendAtBlockWithPeerId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)setFriendTopCancelWithPeerId:(id)arg1;
- (void)setFriendTopWithPeerId:(id)arg1;
- (void)setFriendFlagWithPeerId:(id)arg1 flag:(id)arg2;
- (id)getNewMessageFromPeerId:(id)arg1 isGroup:(_Bool)arg2;
- (void)getAllFriends:(CDUnknownBlockType)arg1;
- (void)getNormalFriends:(CDUnknownBlockType)arg1;
- (void)getTopFriends:(CDUnknownBlockType)arg1;
- (void)getSeverFriends;
- (void)dealloc;
- (id)init;

@end

