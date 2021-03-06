//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CTIMChatManagerProtocol-Protocol.h"
#import "CTIMConversationManagerProtocol-Protocol.h"
#import "CTIMGroupManagerProtocol-Protocol.h"
#import "CTIMLoginManagerProtocol-Protocol.h"
#import "CTIMUserManagerProtocol-Protocol.h"

@class CTIMChatManager, CTIMConversationManager, CTIMGroupManager, CTIMLoginManager, CTIMUserManager, NSString;
@protocol CTIMChatManagerProtocol, CTIMConversationManagerProtocol, CTIMGroupManagerProtocol, CTIMLoginManagerProtocol, CTIMUserManagerProtocol;

@interface CTIMSDK : NSObject <CTIMConversationManagerProtocol, CTIMChatManagerProtocol, CTIMGroupManagerProtocol, CTIMLoginManagerProtocol, CTIMUserManagerProtocol>
{
    id <CTIMLoginManagerProtocol> _loginManager;
    id <CTIMConversationManagerProtocol> _conversationManager;
    id <CTIMChatManagerProtocol> _chatManager;
    id <CTIMGroupManagerProtocol> _groupManager;
    id <CTIMUserManagerProtocol> _userManager;
    NSString *_bizCode;
    CTIMLoginManager *_imLoginManager;
    CTIMConversationManager *_imConverManager;
    CTIMChatManager *_imChatManager;
    CTIMGroupManager *_imGroupManager;
    CTIMUserManager *_imUserManager;
}

+ (id)sharedSDK;
@property(retain, nonatomic) CTIMUserManager *imUserManager; // @synthesize imUserManager=_imUserManager;
@property(retain, nonatomic) CTIMGroupManager *imGroupManager; // @synthesize imGroupManager=_imGroupManager;
@property(retain, nonatomic) CTIMChatManager *imChatManager; // @synthesize imChatManager=_imChatManager;
@property(retain, nonatomic) CTIMConversationManager *imConverManager; // @synthesize imConverManager=_imConverManager;
@property(retain, nonatomic) CTIMLoginManager *imLoginManager; // @synthesize imLoginManager=_imLoginManager;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) id <CTIMUserManagerProtocol> userManager; // @synthesize userManager=_userManager;
@property(retain, nonatomic) id <CTIMGroupManagerProtocol> groupManager; // @synthesize groupManager=_groupManager;
@property(retain, nonatomic) id <CTIMChatManagerProtocol> chatManager; // @synthesize chatManager=_chatManager;
@property(retain, nonatomic) id <CTIMConversationManagerProtocol> conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain, nonatomic) id <CTIMLoginManagerProtocol> loginManager; // @synthesize loginManager=_loginManager;
- (void).cxx_destruct;
- (void)removeUserDelegate:(id)arg1;
- (void)addUserDelegate:(id)arg1;
- (void)updateContactsMemoName:(id)arg1 userId:(id)arg2 memoNote:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)fetchContactsInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)muteUser:(id)arg1 isMute:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (void)updateUserInfo:(id)arg1 sync:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (void)fetchUserInfos:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)userInfo:(id)arg1;
- (void)fetchGroupExistedMembers:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchGroupActiveMembers:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchGroupMember:(id)arg1 inGroup:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)groupMember:(id)arg1 inGroup:(id)arg2;
- (id)allMembersInGroup:(id)arg1 acitive:(_Bool)arg2;
- (void)fetchGroupSettingInfos:(id)arg1 memberCount:(int)arg2 result:(CDUnknownBlockType)arg3;
- (void)fetchGroupInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)updateUserNick:(id)arg1 newNick:(id)arg2 inGroup:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)muteGroup:(id)arg1 isMute:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (void)quitGroup:(id)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)isInGroup:(id)arg1 userId:(id)arg2;
- (id)groupInfoById:(id)arg1;
- (void)removeChatDelegate:(id)arg1 conversationId:(id)arg2;
- (void)addChatDelegate:(id)arg1 conversationId:(id)arg2;
- (void)sendPresenceMessage:(int)arg1;
- (void)sendTypingStatus:(long long)arg1 targetId:(id)arg2;
- (void)resendMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)createThread:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)searchMessagesByUid:(id)arg1 conversation:(id)arg2 startMsg:(id)arg3 count:(unsigned long long)arg4 result:(CDUnknownBlockType)arg5;
- (void)removeConversationDelegate:(id)arg1 conversationId:(id)arg2;
- (void)addConversationDelegate:(id)arg1 conversationId:(id)arg2;
- (void)deleteRemoteConversation:(id)arg1 removeAllMessages:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)deleteLocalConversation:(id)arg1 removeAllMessages:(_Bool)arg2;
- (void)fetchConversationInfo:(id)arg1 sync:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (id)converstaionInfo:(id)arg1 recent:(_Bool)arg2;
- (void)fetchConversationList:(long long)arg1 sync:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (long long)allConversationCount;
- (id)allConversations:(_Bool)arg1;
- (long long)allUnreadMessageCountWithoutBlock:(id)arg1 limit:(int)arg2;
- (long long)allUnreadMessageCount:(_Bool)arg1;
- (long long)allUnreadMessageCountWithBizType:(id)arg1;
- (void)hasMessagesInConversation:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchHistoryMessagesInConversation:(id)arg1 message:(id)arg2 limit:(long long)arg3 result:(CDUnknownBlockType)arg4;
- (void)fetchLatestMessagesInConversation:(id)arg1 limit:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)latestMessagesInConversation:(id)arg1 limit:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)markAllMessagesReadInConversation:(id)arg1 result:(CDUnknownBlockType)arg2;
- (long long)unReadMessageCountInConversation:(id)arg1;
- (void)fetchThreadInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)latestMessageThreadInfoInConversation:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)messagesInConversation:(id)arg1 message:(id)arg2 limit:(long long)arg3;
- (_Bool)updateMessageLocalExtStatusInConversation:(id)arg1 message:(id)arg2 status:(long long)arg3;
- (_Bool)hasAtMeMessageInConversation:(id)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)isLogined;
- (id)currentUserId;
- (id)currentAccountInfo;
- (void)logout:(CDUnknownBlockType)arg1;
- (void)login:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

