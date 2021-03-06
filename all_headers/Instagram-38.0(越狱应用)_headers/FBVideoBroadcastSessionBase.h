//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoBroadcastSession-Protocol.h"

@class FBVideoBroadcastSessionTimingDataModel, NSSet, NSString;
@protocol FBVideoBroadcastSessionConnectionSetupDelegate, FBVideoBroadcastSessionDelegate;

@interface FBVideoBroadcastSessionBase : NSObject <FBVideoBroadcastSession>
{
    struct shared_ptr<FB::Functional::PromiseEither<NSError *, FBDiskVideoRecorderDiskResults *>> _dvrFinishRecordingPromise;
    // Error parsing type: {atomic<FBVideoBroadcastSessionReadyState>="__a_"Aq}, name: _readyState
    long long _preInterruptionReadyState;
    // Error parsing type: {atomic<int>="__a_"Ai}, name: _connectedToServer
    // Error parsing type: {atomic<int>="__a_"Ai}, name: _reportedFinishedResult
    // Error parsing type: {atomic<CMTime>="__a_"A{?}}, name: _lastAudioSampleBufferPts
    // Error parsing type: {atomic<CMTime>="__a_"A{?}}, name: _lastVideoSampleBufferPts
    struct FBVideoBroadcastSessionTimestampConfig _timestampConfig;
    FBVideoBroadcastSessionTimingDataModel *_timingDataModel;
    struct FBVideoBroadcastStreamTimestampGapDetector _gapDetector;
    CDStruct_1b6d18a9 _baseTimestampAdjustment;
    id <FBVideoBroadcastSessionDelegate> delegate;
    id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate;
}

+ (CDStruct_1b6d18a9)convertDeviceTimestamp:(CDStruct_1b6d18a9)arg1 toStreamTimestampWithBaseTimestamp:(CDStruct_1b6d18a9)arg2;
@property __weak id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate; // @synthesize connectionSetupDelegate;
@property __weak id <FBVideoBroadcastSessionDelegate> delegate; // @synthesize delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)broadcastSessionDidConnectWithSpeedTestStatus:(struct FBNetworkSpeedTestStatus)arg1;
- (void)broadcastSessionDidFail:(struct FBVideoBroadcastSessionLoggingInfo)arg1;
- (void)broadcastSessionDidLoseConnection:(id)arg1;
- (void)broadcastSessionDidDisconnectNetwork:(id)arg1 withEndOfStreamError:(id)arg2;
- (void)broadcastSessionDidFinishRecording:(id)arg1 loggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg2;
- (struct DiskVideoRecorderConfig)diskVideoRecorderConfig;
- (id)diskRecorder;
- (id)newDiskRecorder;
- (PromiseEither_ab4a425c)_finishDiskRecording:(id)arg1;
- (struct CMSampleBufferSmartPtr)_adjustSampleBufferTimestamps:(struct opaqueCMSampleBuffer *)arg1 isAudio:(_Bool)arg2;
- (void)switchToRTMP;
- (CDStruct_1b6d18a9)lastRecordedAudioTimestamp;
- (CDStruct_1b6d18a9)convertDeviceTimestampToStreamTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)lastVideoSampleBufferPts;
- (CDStruct_1b6d18a9)lastAudioSampleBufferPts;
- (CDStruct_1b6d18a9)baseTimestamp;
- (void)setBaseTimestamp:(CDStruct_1b6d18a9)arg1;
- (Class)videoEncoderClass;
- (struct FBVideoBroadcastSessionStats)stats;
- (void)setDiskRecorder:(id)arg1;
- (_Bool)hasSentMediaDataToServer;
- (_Bool)isConnectedToServer;
- (long long)readyState;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
- (void)removeForceDisableGuestInviteReason:(unsigned long long)arg1;
- (void)addForceDisableGuestInviteReason:(unsigned long long)arg1;
- (_Bool)isBroadcastFull;
- (_Bool)isInvitable:(id)arg1 byBroadcasterID:(id)arg2;
- (void)declineInvitation;
- (void)leave;
- (void)join;
- (void)cancelInvitationForGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ringUsers:(id)arg1 withLayout:(unsigned long long)arg2;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (struct CMSampleBufferSmartPtr)processVideoForDiskRecordingAndTimestampAdjustment:(struct opaqueCMSampleBuffer *)arg1;
- (struct CMSampleBufferSmartPtr)processAudioForDiskRecordingAndTimestampAdjustment:(struct opaqueCMSampleBuffer *)arg1;
- (void)resumeAndUpload:(_Bool)arg1;
- (void)pause:(_Bool)arg1;
- (void)onInterruptionEnded;
- (void)onInterruption;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)stop:(_Bool)arg1;
- (void)_returnSessionResultWithLoggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg1;
- (void)readyToStream;
- (void)updateRtmpConfig:(CDStruct_bdc2dcf0)arg1;
- (void)finallyFetchedBroadcastID:(id)arg1 withWebRTCSessionConfig:(CDStruct_8b75df4c)arg2 rtmpConfig:(CDStruct_bdc2dcf0)arg3 rtmpMessageChannel:(id)arg4;
- (void)startOffline;
- (void)connectAndImmediatelyAllowStreaming:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
- (id)initWithBaseParams:(struct FBVideoBroadcastBaseSessionParameters)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

