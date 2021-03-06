//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString, NSTimer, ReportLogger;

@interface EnterConfApi : NSObject
{
    _Bool sdk_setup_;
    long long userId_;
    _Bool isHost_;
    long long _remainSeconds;
    _Bool _isKeyReminded;
    NSTimer *_channelKeyTimer;
    int _renewRetryTimes;
    _Bool time_out_flag_;
    NSTimer *timer_;
    long long confID_;
    long long sessionId_;
    _Bool bExitConf_;
    NSLock *lockExitConf_;
    NSString *appID_;
    ReportLogger *logger_;
    _Bool isOnlyAudio_;
    int roomMode_;
    _Bool bRecordMp4_;
    NSLock *lockInRoom_;
    _Bool inRoom_;
    _Bool muteVideo_;
    _Bool muteAudio_;
    id _enterConfApiDelegate;
}

+ (id)encodeString:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setVideoMixerBackgroundImgUrl:(id)arg1;
- (void)openVideoDevice:(_Bool)arg1 userID:(long long)arg2 deviceID:(id)arg3;
- (void)grantSpeakPermission:(long long)arg1;
- (void)applySpeakPermission:(_Bool)arg1;
- (void)unlinkOtherAnchor:(long long)arg1 userId:(long long)arg2 devId:(id)arg3;
- (void)linkOtherAnchor:(long long)arg1 userId:(long long)arg2;
- (void)kickUser:(long long)arg1;
- (_Bool)mixGuestVideo:(long long)arg1 devId:(id)arg2 enabled:(_Bool)arg3 andSetPosRation:(struct CGRect)arg4;
- (_Bool)mixGuestVideo:(long long)arg1 devId:(id)arg2 enabled:(_Bool)arg3;
- (void)setSei:(id)arg1 seiExt:(id)arg2;
- (void)setSubVideoPosRation:(id)arg1 videoPosRation:(struct CGRect)arg2;
- (_Bool)mixGuestVideo:(long long)arg1 devId:(id)arg2 enable:(_Bool)arg3;
- (_Bool)uploadMyVideo:(_Bool)arg1;
- (void)uploadLocalVideo:(_Bool)arg1;
- (void)dealloc;
- (void)exitRoom;
- (void)exitRoom:(_Bool)arg1 errorCode:(int)arg2;
- (void)onStopSendAudio:(id)arg1;
- (void)onStartSendAudio:(id)arg1;
- (void)onStopSendVideo:(id)arg1;
- (void)onStartSendVideo:(id)arg1;
- (void)onRecvCustomizedVideoMsg:(id)arg1;
- (void)onRecvCustomizedAudioMsg:(id)arg1;
- (void)onReportAuidoLevel:(id)arg1;
- (void)onUpdateVideoDev:(id)arg1;
- (void)onReportReconnect:(id)arg1;
- (void)onReportMediaAddr:(id)arg1;
- (void)onNativeLog:(id)arg1;
- (void)onChairChanged:(id)arg1;
- (void)onApplyChair:(id)arg1;
- (void)onUpdateLogConfig:(id)arg1;
- (void)onRecvCmdMsg:(id)arg1;
- (void)onAnchorUnlinked:(id)arg1;
- (void)onAnchorLinked:(id)arg1;
- (void)onAnchorUnlinkResponse:(id)arg1;
- (void)onAnchorLinkResponse:(id)arg1;
- (void)onAudioMuted:(id)arg1;
- (void)onGrantPermission:(id)arg1;
- (void)onApplyPermission:(id)arg1;
- (void)onLogMsg:(id)arg1;
- (void)onUpdateRtmpStatus:(id)arg1;
- (void)onUpdateDevParam:(id)arg1;
- (void)onVerifyFailed:(id)arg1;
- (void)onConnectWrongServer:(id)arg1;
- (void)onConnectFail:(id)arg1;
- (void)onKickConf:(id)arg1;
- (void)onSetSei:(id)arg1;
- (void)onSetSubVideoPosRation:(id)arg1;
- (void)onDisconnect:(id)arg1;
- (void)onConfMemberExit:(id)arg1;
- (void)onConfMemberEnter:(id)arg1;
- (void)stopTimer:(id)arg1;
- (void)enterConf:(id)arg1;
- (void)enableDualVideoStream:(_Bool)arg1;
- (void)useHighQualityAudio:(_Bool)arg1;
- (void)setAudioLevelReportInterval:(int)arg1;
- (void)sendCustomizedVideoMsg:(id)arg1;
- (void)sendCustomizedAudioMsg:(id)arg1;
- (void)sendCustomizedMsg:(id)arg1 toUser:(long long)arg2;
- (void)muteRemoteAuido:(_Bool)arg1 userid:(long long)arg2;
- (void)muteAllRemoteVideo:(_Bool)arg1;
- (void)muteAllRemoteAudio:(_Bool)arg1;
- (void)muteLocalVideo:(_Bool)arg1;
- (void)muteLocalAudio:(_Bool)arg1;
- (void)recordAudio:(long long)arg1 enable:(_Bool)arg2;
- (void)applyConfChairman:(id)arg1;
- (void)changeConfChairman:(long long)arg1;
- (_Bool)enterConfByKey:(id)arg1 userId:(long long)arg2 sessionId:(long long)arg3 password:(id)arg4 mixVideo:(_Bool)arg5 rtmpUrl:(id)arg6;
- (_Bool)enterAudioRoomByKey:(id)arg1 userId:(long long)arg2 sessionId:(long long)arg3 isHost:(_Bool)arg4 rtmpUrl:(id)arg5;
- (_Bool)enterRoomByKey:(id)arg1 userId:(long long)arg2 sessionId:(long long)arg3 isHost:(_Bool)arg4 rtmpUrl:(id)arg5;
- (void)doRenewChannelKey:(id)arg1;
- (void)renewChannelKey:(id)arg1;
- (void)channelKeyTimerFired:(id)arg1;
- (void)getChannelKeyWithUserID:(long long)arg1 andChannelID:(long long)arg2 appKey:(id)arg3;
- (void)verifyChannelKey:(id)arg1 userID:(long long)arg2 channelID:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (_Bool)doEnter:(long long)arg1 channelKey:(id)arg2 userId:(long long)arg3 sessionId:(long long)arg4 isHost:(_Bool)arg5 password:(id)arg6 mixVideo:(_Bool)arg7 rtmpUrl:(id)arg8;
- (id)init;
- (void)setRecordMp4Flag:(_Bool)arg1;
- (int)getRoomMode;
- (void)useServerAudioMixer:(_Bool)arg1;
- (void)setVideoMixerBitrate:(int)arg1;
- (void)setRoomMode:(int)arg1 useAudioServerMixer:(_Bool)arg2;
- (void)setRoomMode:(int)arg1;
- (void)setServerIp:(id)arg1 port:(int)arg2;
- (id)getVersion;
- (void)teardown;
- (void)setup:(id)arg1 enableChat:(_Bool)arg2;
- (void)setup:(id)arg1;
@property(nonatomic) id enterConfApiDelegate; // @synthesize enterConfApiDelegate=_enterConfApiDelegate;

@end

