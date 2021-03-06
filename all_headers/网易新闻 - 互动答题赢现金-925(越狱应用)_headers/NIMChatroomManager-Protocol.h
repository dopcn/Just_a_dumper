//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIMChatroomEnterRequest, NIMChatroomMemberInfoUpdateRequest, NIMChatroomMemberKickRequest, NIMChatroomMemberRequest, NIMChatroomMemberUpdateRequest, NIMChatroomMembersByIdsRequest, NIMChatroomQueueRemoveRequest, NIMChatroomQueueUpdateRequest, NIMChatroomUpdateRequest, NIMHistoryMessageSearchOption, NSString;
@protocol NIMChatroomManagerDelegate;

@protocol NIMChatroomManager <NSObject>
- (void)removeDelegate:(id <NIMChatroomManagerDelegate>)arg1;
- (void)addDelegate:(id <NIMChatroomManagerDelegate>)arg1;
- (void)dropChatroomQueue:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchChatroomQueue:(NSString *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)removeChatroomQueueObject:(NIMChatroomQueueRemoveRequest *)arg1 completion:(void (^)(NSError *, NSDictionary *))arg2;
- (void)updateChatroomQueueObject:(NIMChatroomQueueUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)kickMember:(NIMChatroomMemberKickRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateMemberTempMute:(NIMChatroomMemberUpdateRequest *)arg1 duration:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateMemberMute:(NIMChatroomMemberUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateMemberBlack:(NIMChatroomMemberUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)markNormalMember:(NIMChatroomMemberUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)markMemberManager:(NIMChatroomMemberUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchChatroomMembersByIds:(NIMChatroomMembersByIdsRequest *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)fetchChatroomMembers:(NIMChatroomMemberRequest *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)updateMyChatroomMemberInfo:(NIMChatroomMemberInfoUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateChatroomInfo:(NIMChatroomUpdateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchChatroomInfo:(NSString *)arg1 completion:(void (^)(NSError *, NIMChatroom *))arg2;
- (void)fetchMessageHistory:(NSString *)arg1 option:(NIMHistoryMessageSearchOption *)arg2 result:(void (^)(NSError *, NSArray *))arg3;
- (void)exitChatroom:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)enterChatroom:(NIMChatroomEnterRequest *)arg1 completion:(void (^)(NSError *, NIMChatroom *, NIMChatroomMember *))arg2;
@end

