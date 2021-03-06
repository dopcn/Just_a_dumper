//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SessionViewControllerProxyProtocol><SessionFindMessageProtocol><SessionTableViewProxyProtocol><SessionAddMessageProtocol><SessionReadReceiptMessageProtocol><SessionTypingMessageProtocol><SessionLastMessageTipProtocol><SessionAnimationOverlayViewProtocol><SessionSendMessageProtocol><SessionUpdateMessageProtocol;

@interface SessionReceiveMessageHandler : NSObject
{
    id <SessionViewControllerProxyProtocol><SessionFindMessageProtocol><SessionTableViewProxyProtocol><SessionAddMessageProtocol><SessionReadReceiptMessageProtocol><SessionTypingMessageProtocol><SessionLastMessageTipProtocol><SessionAnimationOverlayViewProtocol><SessionSendMessageProtocol><SessionUpdateMessageProtocol> _receiveMessageHandlerObj;
}

@property(retain, nonatomic) id <SessionViewControllerProxyProtocol><SessionFindMessageProtocol><SessionTableViewProxyProtocol><SessionAddMessageProtocol><SessionReadReceiptMessageProtocol><SessionTypingMessageProtocol><SessionLastMessageTipProtocol><SessionAnimationOverlayViewProtocol><SessionSendMessageProtocol><SessionUpdateMessageProtocol> receiveMessageHandlerObj; // @synthesize receiveMessageHandlerObj=_receiveMessageHandlerObj;
- (void).cxx_destruct;
- (void)receiveVoiceMsgFeedBack:(id)arg1 msgSubStatus:(int)arg2;
- (void)receiveTeamTipMsg:(struct MsgLog *)arg1;
- (void)receiveSessionMsg:(id)arg1;
- (void)receiveSessionMsgs:(id)arg1;
- (id)initSessionReceiveMessageHandler:(id)arg1;

@end

