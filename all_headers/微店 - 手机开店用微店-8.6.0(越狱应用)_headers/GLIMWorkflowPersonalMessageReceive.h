//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLIMWorkflowMessageReceive.h"

@interface GLIMWorkflowPersonalMessageReceive : GLIMWorkflowMessageReceive
{
}

- (void)handleTemMessage:(id)arg1 withOldIsFriend:(_Bool)arg2;
- (void)handleMessageForTemChat:(id)arg1 withOldIsFriend:(_Bool)arg2;
- (_Bool)isFriendWithMessage:(id)arg1;
- (void)updateChatWithID:(id)arg1 message:(id)arg2 chatSource:(id)arg3;
- (void)updateChatWithLastMessage:(id)arg1;
- (void)sendMessageNotifyAck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)persistMessage:(id)arg1;

@end

