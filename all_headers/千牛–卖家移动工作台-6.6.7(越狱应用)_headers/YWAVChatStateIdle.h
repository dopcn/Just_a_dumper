//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWAVChatState.h"

@interface YWAVChatStateIdle : YWAVChatState
{
}

- (unsigned long long)networkStatus;
- (unsigned long long)state;
- (id)getChatInfoWithRoomID:(id)arg1 withConversation:(id)arg2 receiver:(id)arg3 withInvitInfo:(id)arg4 withIMCore:(id)arg5;
- (void)changeToStateBeingCalledWithChatInfo:(id)arg1 andIMCore:(id)arg2;
- (void)changeToStateCallingWithChatInfo:(id)arg1 andIMCore:(id)arg2;
- (void)handleNewMessages:(id)arg1 withIMCore:(id)arg2;
- (void)startAudioChat:(id)arg1 withConversation:(id)arg2 receiver:(id)arg3 imCore:(id)arg4;
- (void)startVideoChat:(id)arg1 withConversation:(id)arg2 receiver:(id)arg3 imCore:(id)arg4;
- (void)didSetToContext;

@end

