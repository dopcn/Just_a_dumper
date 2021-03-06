//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDPacketBuilder.h"

@interface MDMessagePacketBuilder : MDPacketBuilder
{
}

- (void)configMoodMsg:(id)arg1 msgPacket:(id)arg2;
- (void)didFinishSendReadMsgstOfID:(id)arg1;
- (void)onlineBeginSendAllReadStatus;
- (void)sendReadMsgst:(id)arg1 unread:(unsigned long long)arg2;
- (id)buildReadMsgstPacket:(id)arg1 unread:(unsigned long long)arg2;
- (void)sendShopChatMessage:(id)arg1;
- (void)sendMultiChatMessage:(id)arg1;
- (id)sendGroupMessage:(id)arg1;
- (id)sendSingleMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (_Bool)isDummyMessage:(id)arg1;
- (int)imageSendFileType:(id)arg1;
- (id)scaleImage:(id)arg1 imageType:(unsigned long long)arg2;
- (double)compressWithImageType:(unsigned long long)arg1;
- (id)dataCompressedWithImage:(id)arg1 imageType:(unsigned long long)arg2;
- (id)spanName:(int)arg1;
- (void)uploadChatImageWithMsg:(id)arg1 imageData:(id)arg2 uuid:(id)arg3;
- (void)resendImageMessage:(id)arg1;
- (void)sendMessage:(id)arg1 imageData:(id)arg2;
- (void)sendMessage:(id)arg1 image:(id)arg2;
- (void)uploadChatVideoWithMsg:(id)arg1 filePath:(id)arg2 videoTime:(unsigned long long)arg3 whRatio:(double)arg4 uploadedInfo:(id)arg5;
- (void)resendVideoMessage:(id)arg1;
- (void)sendMessage:(id)arg1 successStorePath:(id)arg2 videoTime:(unsigned long long)arg3 whRatio:(double)arg4 uploadedInfo:(id)arg5;
- (void)resendAudioMessage:(id)arg1;
- (void)sendMessage:(id)arg1 audioTime:(unsigned long long)arg2 audioFileSize:(unsigned long long)arg3;

@end

