//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XMPPMUCDelegate-Protocol.h"

@interface CTIMRecvMessageManager : NSObject <XMPPMUCDelegate>
{
}

+ (id)manager;
- (void)dealloc;
- (void)localPushMessageWithTitle:(id)arg1 andContent:(id)arg2 Url:(id)arg3 type:(long long)arg4;
- (id)pushCategry:(long long)arg1;
- (id)pageList:(long long)arg1;
- (void)onlinePushSendMessageWithTitle:(id)arg1 andContent:(id)arg2 Type:(int)arg3 Url:(id)arg4 bizType:(long long)arg5;
- (id)prePushBody:(id)arg1;
- (void)onlinePushSendTcpMessages:(id)arg1;
- (void)logTraceMessage:(id)arg1;
- (void)updateConversationWithGroupInfo:(id)arg1;
- (void)notifyConversationInfoChanged:(id)arg1;
- (void)vibratePhone;
- (void)downLoadAudioFiles:(id)arg1;
- (void)handleTCPStream:(id)arg1 didReceiveMessage:(id)arg2;
- (id)init;

@end

