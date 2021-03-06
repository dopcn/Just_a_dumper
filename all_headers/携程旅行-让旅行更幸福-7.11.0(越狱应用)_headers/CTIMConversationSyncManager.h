//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CTIMConversationSyncManager : NSObject
{
    int queueNum;
    int syncConversationQueueTag;
    _Bool _isSyncingConversationsAndMessages;
    NSDate *_lastSyncDate;
    double _syncConversationBeginTime;
    NSString *_lastMessageTime;
}

+ (id)syncManager;
@property(copy, nonatomic) NSString *lastMessageTime; // @synthesize lastMessageTime=_lastMessageTime;
@property(nonatomic) double syncConversationBeginTime; // @synthesize syncConversationBeginTime=_syncConversationBeginTime;
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) _Bool isSyncingConversationsAndMessages; // @synthesize isSyncingConversationsAndMessages=_isSyncingConversationsAndMessages;
- (void).cxx_destruct;
- (id)cachePath;
- (void)downLoadAudioFileWithMsg:(id)arg1 preload:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (void)updateConversationInfo:(id)arg1;
- (void)updateConversationInfo:(id)arg1 andTimestampToNow:(id)arg2;
- (_Bool)isValidMineSingleChatmessage:(id)arg1;
- (void)downLoadAudioFiles:(id)arg1;
- (id)parseMessages:(id)arg1 receiptMsgs:(id)arg2 localIdDict:(id)arg3 inConver:(id)arg4 isSyncOne:(_Bool)arg5 endMsgId:(long long)arg6 shouldRefreshWhenFinished:(_Bool)arg7;
- (void)syncLatestMessagesForOneConversation:(id)arg1 startMsgId:(long long)arg2 endMsgId:(long long)arg3 withType:(long long)arg4 result:(CDUnknownBlockType)arg5 shouldRefreshWhenFinished:(_Bool)arg6;
- (void)parseUserInfos:(id)arg1 conversation:(id)arg2;
- (id)checkMessageHasLocalID:(id)arg1 localIdDict:(id)arg2;
- (id)checkMessageHasReceiptsFlag:(id)arg1 receiptsDict:(id)arg2;
- (id)parseLocalIdMappingWithMsgId:(id)arg1;
- (id)parseReceiptsMessages:(id)arg1;
- (void)syncLatestMessagesForConversationList:(id)arg1 andTag:(int)arg2 withType:(long long)arg3 needRetryed:(_Bool)arg4;
- (void)syncConversationsAndMessagesFinish;
- (id)conversationListSortDescByLastActivityTime:(id)arg1;
- (id)activeConversationsFromDB;
- (void)getLatestConversationsWithLastMessageTime:(long long)arg1 andOwnerjid:(id)arg2 andTag:(int)arg3 withType:(long long)arg4 isRetry:(_Bool)arg5 isFirstPage:(_Bool)arg6 isForceRefresh:(_Bool)arg7;
- (_Bool)isNeedSendRequest:(_Bool)arg1;
- (void)syncAllConversationsInfoAndMessages:(id)arg1 withType:(long long)arg2;
- (_Bool)isSyncConversationNewVersion;
- (id)init;

@end

