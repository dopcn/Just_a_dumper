//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class ResetConversationUnreadRequest;

@interface ResetConversationUnreadRequest_Builder : PBGeneratedMessage_Builder
{
    ResetConversationUnreadRequest *result;
}

@property(retain) ResetConversationUnreadRequest *result; // @synthesize result;
- (id)clearConversationIdList;
- (id)addAllConversationId:(id)arg1;
- (id)addConversationId:(id)arg1;
- (id)replaceConversationIdAtIndex:(int)arg1 with:(id)arg2;
- (id)conversationIdAtIndex:(int)arg1;
- (id)conversationIdList;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

