//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "IJKEncoderDelegate-Protocol.h"
#import "MLMediaDataConsumer-Protocol.h"
#import "MLPublisherStatisticDelegate-Protocol.h"

@class AudioController, FFRtmpWriter, IJKAACEncoder, IJKAudioFilterPipeline, IJKAudioOutput, IJKAudioPlayerController, IJKVideoEncoder, MLAudioEffectManager, MLMediaViewController, MLPublisherRenderViewsLayout, MLPublisherStatistic, NSArray, NSDictionary, NSLock, NSMutableDictionary, NSOperationQueue, NSString, UIView, X264Encoder;
@protocol GPUImagePublisherDelegate, MLConferenceVideoDelegate, MLPixelBufferDisplay;

@interface MLPublisher : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MLPublisherStatisticDelegate, IJKEncoderDelegate, MLMediaDataConsumer>
{
    int mAudioInterruptFlag;
    _Bool _findFirstKeyFrame;
    _Bool _isEnableDynamicBitrate;
    _Bool _pauseEncoder;
    _Bool _isStartPublish;
    _Bool _isFirstVideoFrame;
    _Bool _isBuffering;
    _Bool _isEnableLoopbackAudio;
    _Bool _isLoopbackAudio;
    _Bool _isAudioRecording;
    _Bool _connectMode;
    _Bool _enableAudioMuted;
    _Bool _isAudioOnlyPublisher;
    _Bool _enableReportAudioVolume;
    _Bool _enableConferenceReconnect;
    _Bool _enableConferenceVideoFrame;
    _Bool _isMusicPlaying;
    _Bool _isMusicPaused;
    _Bool _isSecondPublisher;
    _Bool _isPublisherConnect;
    _Bool _isGetConferenceRecordAudio;
    _Bool _isGamePublisher;
    _Bool _isVideoEncoderReady;
    _Bool _isVideoEncoding;
    int _valueEQ;
    int _valuePitchShift;
    int _valueAEFilter;
    int _enablePushWarning;
    int _enablePushDrop;
    int _enablePushBitrateChange;
    int _pushCacheNormal;
    int _pushCacheWarning;
    int _pushCacheGrowMax;
    int _pushCacheCheckInterval;
    int _currentBitrate;
    int _targetFps;
    int _currentFps;
    int _gopDuration;
    float _micVolume;
    float _musicVolume;
    unsigned long long _lastAudioCalcTime;
    unsigned long long _lastVideoCalcTime;
    unsigned long long _lastFrameCalcTime;
    unsigned long long _lastAudioSentBytes;
    unsigned long long _lastVideoSentBytes;
    unsigned long long _lastFrameSentCount;
    unsigned long long _totalFrameSentCount;
    unsigned long long _valueTS;
    MLMediaViewController *_mediaController;
    IJKAACEncoder *_aacEncoder;
    FFRtmpWriter *_rtmpWriter;
    IJKAudioFilterPipeline *_apipeline;
    long long _codecType;
    long long _bitrateAdapterMaxDuration;
    long long _bitrateAdapterMinDuration;
    unsigned long long _firstKeyFrameTS;
    unsigned long long _lastFrameTimestampInMs;
    unsigned long long _nextFrameTimestampInMs;
    unsigned long long _lastAdjustTime;
    id <GPUImagePublisherDelegate> _delegate;
    id <MLConferenceVideoDelegate> _confDelegate;
    IJKAudioPlayerController *_musicPlayer;
    UIView *_containerView;
    UIView<MLPixelBufferDisplay> *_localView;
    IJKVideoEncoder *_h264Encoder;
    long long _cameraPos;
    long long _videoFramerate;
    long long _videoBitrate;
    long long _audioBitrate;
    double _audioTargetSamplerate;
    long long _audioChannels;
    long long _audioFormat;
    long long _publisherStatus;
    unsigned long long _firstVideoPts;
    NSString *_publishPath;
    IJKAudioOutput *_audioOutput;
    unsigned long long _maxBufferStartTimestampInMs;
    MLPublisherStatistic *_statistic;
    AudioController *_audioController;
    NSDictionary *_audioCodecContext;
    X264Encoder *_encoderForSei;
    NSDictionary *_userInfo;
    NSDictionary *_connectSeiDict;
    NSLock *_connectSeiLock;
    unsigned long long _connectModeType;
    MLPublisherRenderViewsLayout *_renderViewLayout;
    NSArray *_displayRatios;
    NSMutableDictionary *_optionSet;
    MLAudioEffectManager *_audioEffectManager;
    NSMutableDictionary *_audioEffectsDict;
    unsigned long long _fulltimeMode;
    NSString *_conferenceBackgroundImage;
    CDUnknownBlockType _shouldPresentPixelBufferWaitUntilDoneHandler;
    NSOperationQueue *_encodingOperationQueue;
    struct CGSize _videoSize;
    struct CGSize _encodeSize;
    CDStruct_1b6d18a9 _firstVideoClockTime;
    CDStruct_1b6d18a9 _lastVideoPts;
}

@property _Bool isVideoEncoding; // @synthesize isVideoEncoding=_isVideoEncoding;
@property _Bool isVideoEncoderReady; // @synthesize isVideoEncoderReady=_isVideoEncoderReady;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoPts; // @synthesize lastVideoPts=_lastVideoPts;
@property(retain, nonatomic) NSOperationQueue *encodingOperationQueue; // @synthesize encodingOperationQueue=_encodingOperationQueue;
@property(copy, nonatomic) CDUnknownBlockType shouldPresentPixelBufferWaitUntilDoneHandler; // @synthesize shouldPresentPixelBufferWaitUntilDoneHandler=_shouldPresentPixelBufferWaitUntilDoneHandler;
@property(nonatomic) _Bool isGamePublisher; // @synthesize isGamePublisher=_isGamePublisher;
@property(copy, nonatomic) NSString *conferenceBackgroundImage; // @synthesize conferenceBackgroundImage=_conferenceBackgroundImage;
@property(nonatomic) unsigned long long fulltimeMode; // @synthesize fulltimeMode=_fulltimeMode;
@property(nonatomic) _Bool isGetConferenceRecordAudio; // @synthesize isGetConferenceRecordAudio=_isGetConferenceRecordAudio;
@property(nonatomic) _Bool isPublisherConnect; // @synthesize isPublisherConnect=_isPublisherConnect;
@property(nonatomic) _Bool isSecondPublisher; // @synthesize isSecondPublisher=_isSecondPublisher;
@property(nonatomic) _Bool isMusicPaused; // @synthesize isMusicPaused=_isMusicPaused;
@property(nonatomic) _Bool isMusicPlaying; // @synthesize isMusicPlaying=_isMusicPlaying;
@property(retain, nonatomic) NSMutableDictionary *audioEffectsDict; // @synthesize audioEffectsDict=_audioEffectsDict;
@property(retain, nonatomic) MLAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
@property(nonatomic) _Bool enableConferenceVideoFrame; // @synthesize enableConferenceVideoFrame=_enableConferenceVideoFrame;
@property(nonatomic) _Bool enableConferenceReconnect; // @synthesize enableConferenceReconnect=_enableConferenceReconnect;
@property(retain, nonatomic) NSMutableDictionary *optionSet; // @synthesize optionSet=_optionSet;
@property(nonatomic) _Bool enableReportAudioVolume; // @synthesize enableReportAudioVolume=_enableReportAudioVolume;
@property(nonatomic) _Bool isAudioOnlyPublisher; // @synthesize isAudioOnlyPublisher=_isAudioOnlyPublisher;
@property(nonatomic) _Bool enableAudioMuted; // @synthesize enableAudioMuted=_enableAudioMuted;
@property(retain, nonatomic) NSArray *displayRatios; // @synthesize displayRatios=_displayRatios;
@property(retain, nonatomic) MLPublisherRenderViewsLayout *renderViewLayout; // @synthesize renderViewLayout=_renderViewLayout;
@property(nonatomic) unsigned long long connectModeType; // @synthesize connectModeType=_connectModeType;
@property(nonatomic, getter=isConnectMode) _Bool connectMode; // @synthesize connectMode=_connectMode;
@property(retain, nonatomic) NSLock *connectSeiLock; // @synthesize connectSeiLock=_connectSeiLock;
@property(copy, nonatomic) NSDictionary *connectSeiDict; // @synthesize connectSeiDict=_connectSeiDict;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) X264Encoder *encoderForSei; // @synthesize encoderForSei=_encoderForSei;
@property(copy, nonatomic) NSDictionary *audioCodecContext; // @synthesize audioCodecContext=_audioCodecContext;
@property(nonatomic) _Bool isAudioRecording; // @synthesize isAudioRecording=_isAudioRecording;
@property(retain, nonatomic) AudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) MLPublisherStatistic *statistic; // @synthesize statistic=_statistic;
@property(nonatomic, getter=isLoopbackAudio, setter=setIsLoopbackAudio:) _Bool isLoopbackAudio; // @synthesize isLoopbackAudio=_isLoopbackAudio;
@property(nonatomic) _Bool isEnableLoopbackAudio; // @synthesize isEnableLoopbackAudio=_isEnableLoopbackAudio;
@property(nonatomic) unsigned long long maxBufferStartTimestampInMs; // @synthesize maxBufferStartTimestampInMs=_maxBufferStartTimestampInMs;
@property(retain, nonatomic) IJKAudioOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(copy, nonatomic) NSString *publishPath; // @synthesize publishPath=_publishPath;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(nonatomic) CDStruct_1b6d18a9 firstVideoClockTime; // @synthesize firstVideoClockTime=_firstVideoClockTime;
@property(nonatomic) unsigned long long firstVideoPts; // @synthesize firstVideoPts=_firstVideoPts;
@property(nonatomic) _Bool isFirstVideoFrame; // @synthesize isFirstVideoFrame=_isFirstVideoFrame;
@property(nonatomic) _Bool isStartPublish; // @synthesize isStartPublish=_isStartPublish;
@property long long publisherStatus; // @synthesize publisherStatus=_publisherStatus;
@property(nonatomic) long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) long long audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) double audioTargetSamplerate; // @synthesize audioTargetSamplerate=_audioTargetSamplerate;
@property(nonatomic) long long audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) long long videoFramerate; // @synthesize videoFramerate=_videoFramerate;
@property(nonatomic) long long cameraPos; // @synthesize cameraPos=_cameraPos;
@property(retain, nonatomic) IJKVideoEncoder *h264Encoder; // @synthesize h264Encoder=_h264Encoder;
@property(retain, nonatomic) UIView<MLPixelBufferDisplay> *localView; // @synthesize localView=_localView;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) float musicVolume; // @synthesize musicVolume=_musicVolume;
@property(nonatomic) float micVolume; // @synthesize micVolume=_micVolume;
@property(retain) IJKAudioPlayerController *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(nonatomic) __weak id <MLConferenceVideoDelegate> confDelegate; // @synthesize confDelegate=_confDelegate;
@property(nonatomic) __weak id <GPUImagePublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool pauseEncoder; // @synthesize pauseEncoder=_pauseEncoder;
@property(nonatomic) unsigned long long lastAdjustTime; // @synthesize lastAdjustTime=_lastAdjustTime;
@property(nonatomic) unsigned long long nextFrameTimestampInMs; // @synthesize nextFrameTimestampInMs=_nextFrameTimestampInMs;
@property(nonatomic) unsigned long long lastFrameTimestampInMs; // @synthesize lastFrameTimestampInMs=_lastFrameTimestampInMs;
@property(nonatomic) unsigned long long firstKeyFrameTS; // @synthesize firstKeyFrameTS=_firstKeyFrameTS;
@property(nonatomic) int gopDuration; // @synthesize gopDuration=_gopDuration;
@property(nonatomic) int currentFps; // @synthesize currentFps=_currentFps;
@property(nonatomic) int targetFps; // @synthesize targetFps=_targetFps;
@property(nonatomic) int currentBitrate; // @synthesize currentBitrate=_currentBitrate;
@property(nonatomic) long long bitrateAdapterMinDuration; // @synthesize bitrateAdapterMinDuration=_bitrateAdapterMinDuration;
@property(nonatomic) long long bitrateAdapterMaxDuration; // @synthesize bitrateAdapterMaxDuration=_bitrateAdapterMaxDuration;
@property(nonatomic) _Bool isEnableDynamicBitrate; // @synthesize isEnableDynamicBitrate=_isEnableDynamicBitrate;
@property(nonatomic) _Bool findFirstKeyFrame; // @synthesize findFirstKeyFrame=_findFirstKeyFrame;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(retain, nonatomic) IJKAudioFilterPipeline *apipeline; // @synthesize apipeline=_apipeline;
@property(retain, nonatomic) FFRtmpWriter *rtmpWriter; // @synthesize rtmpWriter=_rtmpWriter;
@property(retain, nonatomic) IJKAACEncoder *aacEncoder; // @synthesize aacEncoder=_aacEncoder;
@property(nonatomic) __weak MLMediaViewController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) struct CGSize encodeSize; // @synthesize encodeSize=_encodeSize;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long valueTS; // @synthesize valueTS=_valueTS;
@property(nonatomic) unsigned long long totalFrameSentCount; // @synthesize totalFrameSentCount=_totalFrameSentCount;
@property(nonatomic) unsigned long long lastFrameSentCount; // @synthesize lastFrameSentCount=_lastFrameSentCount;
@property(nonatomic) unsigned long long lastVideoSentBytes; // @synthesize lastVideoSentBytes=_lastVideoSentBytes;
@property(nonatomic) unsigned long long lastAudioSentBytes; // @synthesize lastAudioSentBytes=_lastAudioSentBytes;
@property(nonatomic) unsigned long long lastFrameCalcTime; // @synthesize lastFrameCalcTime=_lastFrameCalcTime;
@property(nonatomic) unsigned long long lastVideoCalcTime; // @synthesize lastVideoCalcTime=_lastVideoCalcTime;
@property(nonatomic) unsigned long long lastAudioCalcTime; // @synthesize lastAudioCalcTime=_lastAudioCalcTime;
@property(nonatomic) int pushCacheCheckInterval; // @synthesize pushCacheCheckInterval=_pushCacheCheckInterval;
@property(nonatomic) int pushCacheGrowMax; // @synthesize pushCacheGrowMax=_pushCacheGrowMax;
@property(nonatomic) int pushCacheWarning; // @synthesize pushCacheWarning=_pushCacheWarning;
@property(nonatomic) int pushCacheNormal; // @synthesize pushCacheNormal=_pushCacheNormal;
@property(nonatomic) int enablePushBitrateChange; // @synthesize enablePushBitrateChange=_enablePushBitrateChange;
@property(nonatomic) int enablePushDrop; // @synthesize enablePushDrop=_enablePushDrop;
@property(nonatomic) int enablePushWarning; // @synthesize enablePushWarning=_enablePushWarning;
@property(nonatomic) int valueAEFilter; // @synthesize valueAEFilter=_valueAEFilter;
@property(nonatomic) int valuePitchShift; // @synthesize valuePitchShift=_valuePitchShift;
@property(nonatomic) int valueEQ; // @synthesize valueEQ=_valueEQ;
- (void).cxx_destruct;
- (int)setConferencePlaybackSpeakerphone:(_Bool)arg1;
- (void)setEffectsVolume:(double)arg1;
- (void)setEffectVolumeWithId:(int)arg1 withVolume:(double)arg2;
- (void)stopAllEffect;
- (void)stopEffectWithId:(int)arg1;
- (void)playEffectWithId:(int)arg1 url:(id)arg2 loop:(_Bool)arg3;
- (void)playEffectWithId:(int)arg1 url:(id)arg2 loop:(_Bool)arg3 pitch:(double)arg4 pan:(double)arg5 gain:(double)arg6;
- (void)enableSoftAEC:(_Bool)arg1;
- (void)enableCommMode:(_Bool)arg1;
- (void)renewChannelKey:(id)arg1;
- (void)setSdkAppID:(id)arg1 withChannelKey:(id)arg2;
- (void)setAgoraSdkAppID:(id)arg1 withChannelKey:(id)arg2;
- (void)setEncryptionSecret:(id)arg1 withMode:(id)arg2;
- (void)setClientAsAudience:(_Bool)arg1;
- (void)muteRemoteVideoStream:(unsigned long long)arg1 mute:(_Bool)arg2;
- (void)muteRemoteAudioStream:(unsigned long long)arg1 mute:(_Bool)arg2;
- (void)muteAllRemoteVideo:(_Bool)arg1;
- (void)muteAllRemoteAudio:(_Bool)arg1;
- (void)muteLocalVideo:(_Bool)arg1;
- (void)muteLocalAudio:(_Bool)arg1;
- (void)updateSeiDataForConnectWithSeiDict:(id)arg1;
- (void)updateCameraExtensionFrameDictionary:(id)arg1;
- (void)pushConferenceAudioPacket:(id)arg1 audioInfo:(id)arg2;
- (void)setZOrderWithUserId:(id)arg1 zOrder:(int)arg2;
- (void)setSeiUserInfo:(id)arg1;
- (void)appendSeiDataToH264StreamData:(id)arg1 encryptUserId:(id)arg2;
- (id)getExtraSeiDataWithEncryptUserId:(id)arg1;
- (id)gernerateSeiStr:(id)arg1 info:(id)arg2;
- (id)seiStrToSeiData:(id)arg1;
- (void)mixMusicSampleInPlace:(id)arg1 slaverSamples:(id)arg2;
- (void)mixAudioSampleInPlace:(id)arg1 slaverSamples:(id)arg2;
- (void)publisherStatisticSentDataAbnormal:(id)arg1;
- (void)setSlavesFrameRatioInVideo:(id)arg1;
- (void)setSubVideoPos:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 margin:(double)arg5;
- (void)conferenceResume;
- (void)enterForeground;
- (void)enterBackground;
- (void)appWillEnterForeground;
- (void)removeAudioNotificationObservers;
- (void)installAudioNotificationObservers;
- (void)removeMusicNotificationObservers;
- (void)musicPlaybackEnded;
- (double)musicDuration;
- (double)musicCurrentPosition;
- (void)resumeMusic;
- (void)pauseMusic;
- (void)stopMusic;
- (void)createMusicPlayerWithUrl:(id)arg1;
- (void)playMusicWithUrl:(id)arg1 loopback:(_Bool)arg2;
- (void)playMusicWithUrl:(id)arg1;
- (void)mediaSource:(id)arg1 didRenderAudioData:(id)arg2;
- (void)mediaSource:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)mediaSource:(id)arg1 didOutputVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@property(readonly, nonatomic) NSString *publisherType;
- (void)setSabineAudioEffectToDefault;
- (void)setSabineAudioEffect:(int)arg1 index:(int)arg2 value:(float)arg3;
- (id)getPushWatch;
- (void)updateAudioLoopbackSetting;
- (id)initWithContentView:(id)arg1 inputVideoSize:(struct CGSize)arg2 isHost:(_Bool)arg3;
- (void)encoder:(id)arg1 encodedFrame:(id)arg2;
- (void)adjustBitrate;
- (void)setupChaseDelay:(id)arg1;
- (void)startPublishingWithOptions:(id)arg1;
- (void)setPublisherOptions:(id)arg1;
- (void)pushBufferingStop;
- (void)pushBufferingStartWithDurationMs:(unsigned long long)arg1;
- (void)updateQueueBufferState;
- (void)setVideoParamsAndResetVideoEncoder:(id)arg1;
- (void)setVideoBitrateAndResetVideoEncoder:(long long)arg1;
- (void)destroyVideoEncoder;
- (void)createVideoEncoder;
- (void)resetVideoEncoder;
- (void)encodeVideoFrame:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (void)processVideoBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) unsigned long long pushType;
- (_Bool)isDropFrame;
- (void)processRenderAudioBuffer:(id)arg1;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)printASBD:(const struct AudioStreamBasicDescription *)arg1;
- (double)sessionSampleRate;
- (_Bool)isEncodingVideo;
- (_Bool)isReadyToPublish;
- (void)stopPublishingWithCompletionCode:(long long)arg1;
- (void)releasePublisher;
- (void)stopPublishing:(long long)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)clearViews;
- (void)dealloc;
- (unsigned long long)getEncodedVideoBufferDurationInMs;
- (void)updateSeiInfo:(id)arg1 forKey:(id)arg2;
- (void)removeSeiInfoWithKey:(id)arg1;
- (void)updateCameraExtensionInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

