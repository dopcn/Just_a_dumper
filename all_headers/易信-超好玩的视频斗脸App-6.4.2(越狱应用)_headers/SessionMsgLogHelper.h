//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SessionMsgLogHelper : NSObject
{
}

+ (struct MsgLog)saveTeam2ConfigInfo:(id)arg1;
+ (void)notifyOtherUpdateMobile:(id)arg1 inTeam:(id)arg2;
+ (void)saveTimetagForRoaming:(const struct Property *)arg1;
+ (void)updateMsglogReceiptStatus:(id)arg1 clientMsgID:(id)arg2;
+ (void)replaceMessageBodyByURL:(id)arg1 Msglog:(struct MsgLog *)arg2;
+ (struct MsgLog)saveFileAssistantTip:(id)arg1 messageBody:(id)arg2;
+ (long long)saveTeamSecurityTip:(id)arg1 commondType:(long long)arg2 sender:(id)arg3 userList:(id)arg4;
+ (long long)savePublicTeamCreateTip:(id)arg1 commondType:(long long)arg2;
+ (id)getTeamTip:(id)arg1 commondType:(long long)arg2 sender:(id)arg3 teamID:(id)arg4;
+ (long long)saveTeamCommandLog:(id)arg1 commondType:(long long)arg2 sender:(id)arg3 userList:(id)arg4 timeTag:(unsigned int)arg5;
+ (long long)saveTeamCommandInviteUserNotify:(id)arg1 invitor:(id)arg2 timeTag:(int)arg3;
+ (id)getTeamCommandMessageBody:(id)arg1 commondType:(long long)arg2 sender:(id)arg3 teamID:(id)arg4;
+ (struct MsgLog)saveP2PTips:(id)arg1 messageBody:(id)arg2;
+ (struct MsgLog)saveTeamTip:(id)arg1 messageBody:(id)arg2 timeTag:(unsigned int)arg3;
+ (struct MsgLog)saveTeamTip:(id)arg1 messageBody:(id)arg2;
+ (id)getUserNickNameList:(id)arg1 teamID:(id)arg2;
+ (_Bool)isSelfInUserlist:(id)arg1;
+ (struct MsgLog)replaceSessionMessageToMsglogBySessionMessageData:(id)arg1;
+ (struct MsgLog)saveSessionMessageToMsglogBySessionMessageData:(id)arg1;
+ (struct MsgLog)saveMemberMuteNotify:(struct SetMemberMuteNotifyParam *)arg1;
+ (struct MsgLog)saveMemberMuteAck:(struct SetMemberMuteParam *)arg1;
+ (struct MsgLog)saveTeamAdminNotify:(struct SetTeamAdminParam *)arg1;
+ (struct MsgLog)saveTeamMuteNotify:(struct SetTeamMuteNotifyParam *)arg1;
+ (struct MsgLog)saveTeamMuteAck:(struct SetTeamMuteParam *)arg1;
+ (void)setTimetagForRedPacketFeedback:(unsigned int)arg1;
+ (struct MsgLog)saveTeamCrowdfundingRedPacketGetFeedback:(struct CrowdfundingRedPacketGetNotifyParam *)arg1;
+ (struct MsgLog)saveTeamCrowdfundingRedPacketSuccessFeedback:(struct CrowdfundingRedPacketSuccessNotifyParam *)arg1;
+ (struct MsgLog)saveTeamRedPacketFeedback:(struct GetRedPacketFeedbackParam *)arg1;
+ (void)replaceVideoChatState:(long long)arg1 videoChatContent:(id)arg2;
+ (long long)saveMeetingTipMsg:(id)arg1 chatType:(long long)arg2 channelID:(long long)arg3 fromUserID:(id)arg4 toTeamID:(id)arg5 time:(long long)arg6;
+ (long long)saveVideChatMsg:(id)arg1 chatType:(long long)arg2 channelID:(long long)arg3 fromUserID:(id)arg4 toUserID:(id)arg5 time:(int)arg6 peerUserType:(long long)arg7;
+ (_Bool)needSaveRoamingMsg:(const struct Property *)arg1;
+ (_Bool)isRevokeMsg:(const struct Property *)arg1;
+ (struct MsgLog)saveMsglog:(const struct Property *)arg1 msgLogType:(int)arg2 gateType:(long long)arg3 isRoamingMsg:(_Bool)arg4;

@end

