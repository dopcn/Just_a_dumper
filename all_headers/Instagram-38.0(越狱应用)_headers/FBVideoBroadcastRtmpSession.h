//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBVideoBroadcastSessionBase.h"

#import "FBVideoBroadcastRtmpSession-Protocol.h"

@class FBTimer, NSObject, NSSet, NSString;
@protocol FBVideoBroadcastOutOfBandMessageChannel, FBVideoBroadcastSessionConnectionSetupDelegate, FBVideoBroadcastSessionDelegate, FBVideoStreamingLogger, OS_dispatch_queue;

@interface FBVideoBroadcastRtmpSession : FBVideoBroadcastSessionBase <FBVideoBroadcastRtmpSession>
{
    NSString *_broadcastID;
    struct VideoConfig _originalVideoConfig;
    struct FBVideoBroadcastPipelineHolder _pipeline;
    CDStruct_bdc2dcf0 _config;
    struct AdaptiveBitrateConfig _abrConfig;
    struct SpeedTestConfig _speedTestConfig;
    NSObject<OS_dispatch_queue> *_videoEncodingQueue;
    NSObject<OS_dispatch_queue> *_audioEncodingQueue;
    struct mutex _pipelineMutex;
    struct unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double>>> _adaptiveBitrateStats;
    unsigned long long _lastBitrateChangeTimestamp;
    unsigned long long _lastBitrateIncreaseTimestamp;
    unsigned long long _lastBitrateDecreaseTimestamp;
    unsigned long long _numberOfVideoFrames;
    struct NetworkSpeedTestStatus _speedTestStatus;
    FBTimer *_sendStreamInterruptedTimer;
    shared_ptr_f32f4099 _sslFactory;
    shared_ptr_d61e43bb _reachabilityAnnouner;
    id <FBVideoBroadcastOutOfBandMessageChannel> _messageChannel;
    id <FBVideoStreamingLogger> _logger;
    struct TimeSeriesStreamWrapper _tslog;
    shared_ptr_ec24f4c4 _encoderTslogStream;
    shared_ptr_8dc028ac _abrAlgorithm;
    shared_ptr_de4e634a _adaptiveBitrateInputParameterProcessor;
    Class _adaptiveBitrateResolutionAlgorithmClass;
    struct shared_ptr<RtmpSessionCallback> _rtmpSessionCallback;
    shared_ptr_75e1c217 _networkSessionFactory;
    shared_ptr_b7837d35 _audioPacketizerFactory;
    shared_ptr_0a7db57b _videoPacketizerFactory;
    _Bool _hasSentMediaDataToServer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logTimeSeriesForStats:(struct FBVideoBroadcastSessionStatsInternal)arg1;
- (_Bool)_shouldDoResolutionScaling;
- (void)updateVideoEncoderConfig:(struct VideoConfig)arg1 withStats:(struct FBVideoBroadcastSessionStats)arg2;
- (void)computeNewBitate;
- (struct CGSize)currentRtmpResolutionToSendToCS;
- (id)diskRecorder;
- (struct DiskVideoRecorderConfig)diskVideoRecorderConfig;
- (void)rtmpSessionDidUpdateStreamingInfo:(const struct Info *)arg1;
- (void)rtmpSessionDidDropPackets:(shared_ptr_3f407d03)arg1 dropReason:(const basic_string_a490aa4c *)arg2;
- (void)rtmpSessionDidSendPackets;
- (void)rtmpSessionWriteDidTimeout;
- (void)rtmpSessionWillReconnectDueToError:(const shared_ptr_0529d599 *)arg1;
- (void)rtmpSessionDidFailWithError:(const shared_ptr_0529d599 *)arg1;
- (void)rtmpSessionDidFinish;
- (void)rtmpSessionCompletedSpeedTestWithStatus:(const struct NetworkSpeedTestStatus *)arg1;
- (void)rtmpSessionDidConnectWithSpeedTestStatus:(const struct NetworkSpeedTestStatus *)arg1;
- (Class)videoEncoderClass;
- (id)createEncoder:(id)arg1;
- (void)setPipelineSafe:(struct FBVideoBroadcastPipelineHolder)arg1;
- (void)setupPipeline;
- (void)_flush;
- (CDStruct_1b6d18a9)networkLatencyForNetworkSession:(const shared_ptr_c386cb19 *)arg1;
- (CDStruct_1b6d18a9)networkLatency;
- (CDStruct_1b6d18a9)pipelineLatencyForNetworkSession:(const shared_ptr_c386cb19 *)arg1;
- (CDStruct_1b6d18a9)pipelineLatency;
- (struct FBVideoBroadcastSessionStatsInternal)statsImpl;
- (struct FBVideoBroadcastSessionStats)stats;
- (struct FBVideoBroadcastPipelineHolder)pipeline;
- (void)setDiskRecorder:(id)arg1;
- (CDStruct_1b6d18a9)baseTimestamp;
- (void)setBaseTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)lastSentVideoPts;
- (CDStruct_1b6d18a9)lastSentAudioPts;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)_sendStreamInterrupted;
- (void)_onStreamInterruption;
- (void)disableSpeedTest;
- (void)pause:(_Bool)arg1;
- (void)onInterruptionEnded;
- (void)onInterruption;
- (_Bool)hasSentMediaDataToServer;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
- (struct FBVideoBroadcastRtmpSwapStats)swapStats;
- (void)disconnectWithoutSealing:(_Bool)arg1 skipFlush:(_Bool)arg2;
- (void)stop:(_Bool)arg1;
- (void)connectAndImmediatelyAllowStreaming:(_Bool)arg1;
- (void)startOffline;
- (void)updateRtmpConfig:(CDStruct_bdc2dcf0)arg1;
- (void)finallyFetchedBroadcastID:(id)arg1 withWebRTCSessionConfig:(CDStruct_8b75df4c)arg2 rtmpConfig:(CDStruct_bdc2dcf0)arg3 rtmpMessageChannel:(id)arg4;
- (id)initWithConfig:(CDStruct_bdc2dcf0)arg1 broadcastID:(id)arg2 adaptiveBitrateAlgorithm:(shared_ptr_8dc028ac)arg3 adaptiveBitrateResolutionClass:(Class)arg4 adaptiveBitrateInputParameterProcessor:(shared_ptr_de4e634a)arg5 audioEncodingQueue:(id)arg6 videoEncodingQueue:(id)arg7 messageChannel:(id)arg8 sslFactory:(shared_ptr_f32f4099)arg9 reachabilityAnnouncer:(shared_ptr_d61e43bb)arg10 networkSessionFactory:(shared_ptr_75e1c217)arg11 audioPacketizerFactory:(shared_ptr_b7837d35)arg12 videoPacketizerFactory:(shared_ptr_0a7db57b)arg13 baseParams:(struct FBVideoBroadcastBaseSessionParameters)arg14 logger:(id)arg15;
- (id)initWithConfig:(CDStruct_bdc2dcf0)arg1 broadcastID:(id)arg2 audioEncodingQueue:(id)arg3 videoEncodingQueue:(id)arg4 messageChannel:(id)arg5 sslFactory:(shared_ptr_f32f4099)arg6 reachabilityAnnouncer:(shared_ptr_d61e43bb)arg7 networkSessionFactory:(shared_ptr_75e1c217)arg8 audioPacketizerFactory:(shared_ptr_b7837d35)arg9 videoPacketizerFactory:(shared_ptr_0a7db57b)arg10 abrAlgorithmFactory:(shared_ptr_0cdddaf5)arg11 baseParams:(struct FBVideoBroadcastBaseSessionParameters)arg12 logger:(id)arg13;
- (id)initWithParams:(struct FBVideoBroadcastRtmpSessionParameters)arg1 logger:(id)arg2;

// Remaining properties
@property __weak id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate;
@property(readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
@property(readonly, copy) NSString *debugDescription;
@property __weak id <FBVideoBroadcastSessionDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

