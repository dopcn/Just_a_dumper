//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLIMDataCache, GLIMWorkflowMessageRoam, NSMutableDictionary;

@interface GLIMMessageManager : NSObject
{
    NSMutableDictionary *_messageSendMap;
    GLIMDataCache *_messageCache;
    GLIMWorkflowMessageRoam *_roamWorkflow;
}

+ (id)sharedManager;
@property(retain, nonatomic) GLIMWorkflowMessageRoam *roamWorkflow; // @synthesize roamWorkflow=_roamWorkflow;
@property(retain, nonatomic) GLIMDataCache *messageCache; // @synthesize messageCache=_messageCache;
@property(retain, nonatomic) NSMutableDictionary *messageSendMap; // @synthesize messageSendMap=_messageSendMap;
- (void).cxx_destruct;
- (void)messageSetMsgStatus:(id)arg1 withUid:(id)arg2 andType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageAckToService:(id)arg1 withUid:(id)arg2 andType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadServerMessages:(id)arg1 lastMsgId:(id)arg2 lastMsgTime:(id)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendWelcomeMessageWithChatID:(id)arg1 withResponse:(CDUnknownBlockType)arg2;
- (void)syncOfflineMessagesWithResponse:(CDUnknownBlockType)arg1;
- (_Bool)deleteRoamsWithChatID:(id)arg1;
- (_Bool)deleteRoamsWithArray:(id)arg1;
- (id)queryRoamsWithChatID:(id)arg1;
- (_Bool)deleteMessageWithChatID:(id)arg1;
- (id)queryMessagesWithContactID:(id)arg1 beforeTimestamp:(unsigned long long)arg2 limit:(long long)arg3;
- (id)queryMessagesWithContactID:(id)arg1 beforeMessageID:(id)arg2 limit:(long long)arg3;
- (_Bool)insertMessagesWithArray:(id)arg1;
- (void)loadMessagesForChatID:(id)arg1 lastMessage:(id)arg2 pageLimit:(long long)arg3 autoRequest:(_Bool)arg4 loadMore:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)receivedSpecialMessageWithString:(id)arg1;
- (id)traceMoreParametersWithMessage:(id)arg1 startInterval:(double)arg2;
- (id)traceParametersWithSpmID:(id)arg1;
- (void)traceSendMessageFailed;
- (void)traceSendMessageSucceedWithWorkflow:(id)arg1;
- (void)sendMessage:(id)arg1 chatType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 withChatID:(id)arg2 chatType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageReceived:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

