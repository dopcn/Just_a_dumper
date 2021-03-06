//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, QYLiveChatMessage;

@protocol ChatMessageManagerDelegate <NSObject>
- (void)redPacketMessageReceive:(NSDictionary *)arg1;
- (void)shutDownChatRoom;
- (void)updateNoticeByStr:(NSString *)arg1;
- (void)chatRoomNotificationWarnning:(NSString *)arg1;
- (void)chatRoomNotificationToLiveController:(NSString *)arg1;
- (void)showPropMessage:(QYLiveChatMessage *)arg1;
- (void)sendMsgFailed:(NSString *)arg1 withMsg:(NSString *)arg2;
- (void)sendMsgSucceedWithMsgDic:(NSDictionary *)arg1;
- (void)updateOnlineNumber:(long long)arg1;
- (void)deleteMessage:(QYLiveChatMessage *)arg1;
- (void)updateChatMessage:(QYLiveChatMessage *)arg1;
- (void)ConnectRoomFailed:(NSString *)arg1;
- (void)ConnectRoomSucceed;
@end

