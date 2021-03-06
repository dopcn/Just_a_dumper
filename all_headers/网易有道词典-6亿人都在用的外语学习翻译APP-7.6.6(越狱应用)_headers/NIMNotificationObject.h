//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NIMMessageObject-Protocol.h"
#import "NIMMessageObject_Private-Protocol.h"

@class NIMMessage, NIMNotificationContent, NSString;

@interface NIMNotificationObject : NSObject <NIMMessageObject_Private, NIMMessageObject>
{
    NIMMessage *_message;
    NIMNotificationContent *_content;
    NSString *_attachContent;
}

@property(copy, nonatomic) NSString *attachContent; // @synthesize attachContent=_attachContent;
@property(readonly, nonatomic) NIMNotificationContent *content; // @synthesize content=_content;
@property(nonatomic) __weak NIMMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)isValidNetCallNotification:(id)arg1;
- (_Bool)isValidChatroomNotification:(id)arg1;
- (_Bool)isValidTeamNotification:(id)arg1;
- (_Bool)shouldIgnoreUnread;
@property(readonly, nonatomic) long long notificationType;
- (void)saveDataAfterReceiving:(_Bool)arg1;
- (void)setContent:(id)arg1;
- (id)prepareForSend;
- (void)decodeWithContent:(id)arg1;
- (id)encodeContent;
@property(readonly, copy) NSString *description;
- (long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

