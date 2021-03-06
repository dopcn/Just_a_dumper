//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;
@protocol IObjectStore, IPrivateMessageBlockRequest, PrivateMessageConversationDelegate;

@interface PrivateMessageConversation : NSObject
{
    long long _userId;
    long long _strangerId;
    NSString *_conversationKey;
    id <PrivateMessageConversationDelegate> _delegate;
    NSMutableArray *_messageList;
    id <IObjectStore> _userObjectStore;
    id <IPrivateMessageBlockRequest> _privateMessageCore;
}

+ (void)getUserId:(long long *)arg1 strangerId:(long long *)arg2 withconversationKey:(id)arg3;
+ (id)conversationWithKey:(id)arg1;
@property(retain, nonatomic) id <IPrivateMessageBlockRequest> privateMessageCore; // @synthesize privateMessageCore=_privateMessageCore;
@property(retain, nonatomic) id <IObjectStore> userObjectStore; // @synthesize userObjectStore=_userObjectStore;
@property(retain, nonatomic) NSMutableArray *messageList; // @synthesize messageList=_messageList;
@property(nonatomic) __weak id <PrivateMessageConversationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *conversationKey; // @synthesize conversationKey=_conversationKey;
@property(nonatomic) long long strangerId; // @synthesize strangerId=_strangerId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)deleteMessage:(id)arg1;
@property(readonly, nonatomic) unsigned long long unReadCount;
- (void)saveMessageList;
- (void)markAllMessageReaded;
- (void)clearAllMessages;
- (void)sendText:(id)arg1;
- (void)_handleError:(unsigned int)arg1 errorMsg:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)appendMessageIfNeed:(id)arg1;
- (void)appendMessageInfo:(id)arg1;
- (id)initWithUserId:(long long)arg1 strangerId:(long long)arg2;

@end

