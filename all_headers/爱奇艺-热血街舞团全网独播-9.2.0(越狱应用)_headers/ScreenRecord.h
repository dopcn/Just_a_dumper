//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RPScreenRecorderDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, CADisplayLink, NSDictionary, NSLock, NSString, NSURL, UIView;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, ScreenRecordDelegate;

@interface ScreenRecord : NSObject <RPScreenRecorderDelegate>
{
    CDStruct_1b6d18a9 startTime;
    _Bool useRP2;
    double currentFrameTime;
    double nextFrameTime;
    double timePerFrame;
    int mFrames;
    NSObject<OS_dispatch_queue> *_render_queue;
    NSObject<OS_dispatch_queue> *_append_pixelBuffer_queue;
    NSObject<OS_dispatch_queue> *_append_audioBuffer_queue;
    NSObject<OS_dispatch_queue> *_encode_audioBuffer_queue;
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
    NSObject<OS_dispatch_semaphore> *_pixelAppendSemaphore;
    struct CGSize _viewSize;
    double _scale;
    struct CGSize outputSize;
    double newHeightScale;
    double newWidthScale;
    double bitRate;
    struct CGColorSpace *_rgbColorSpace;
    struct __CVPixelBufferPool *_outputBufferPool;
    long long sentinelCnt;
    double sentialSt;
    double sentialMax;
    int audioEncodeLength;
    char *audioZeroData;
    double kQYDefaultAudioDurationPerSample;
    double kQYDefaultVideoPtsStepWhenFillZero;
    _Bool _isRecording;
    _Bool _hasAudioTrack;
    _Bool _degreefps;
    _Bool _frameIsReady;
    _Bool _recordingFirstCallback;
    id <ScreenRecordDelegate> _delegate;
    NSURL *_videoURL;
    UIView *_drewView;
    AVAssetWriter *_srOutputWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    AVAssetWriterInput *_audioInput;
    CADisplayLink *_displayLink;
    NSDictionary *_outputBufferPoolAuxAttributes;
    double _firstTimeStamp;
    double _previousAudioFrameTime;
    double _audioPtsSentinel;
    double _previousVideoFrameTime;
    NSLock *_srOutputWriterLock;
}

+ (unsigned long long)machTime;
+ (double)get_machTimeToSecs:(unsigned long long)arg1;
+ (int)swInterleavingEncapsule:(id)arg1 outPut:(id)arg2;
+ (struct opaqueCMSampleBuffer *)createAudioSample:(void *)arg1 frames:(unsigned int)arg2;
+ (struct AudioStreamBasicDescription)getAudioFormat;
@property(nonatomic) _Bool recordingFirstCallback; // @synthesize recordingFirstCallback=_recordingFirstCallback;
@property(retain, nonatomic) NSLock *srOutputWriterLock; // @synthesize srOutputWriterLock=_srOutputWriterLock;
@property(nonatomic) _Bool frameIsReady; // @synthesize frameIsReady=_frameIsReady;
@property(nonatomic) double previousVideoFrameTime; // @synthesize previousVideoFrameTime=_previousVideoFrameTime;
@property(nonatomic) double audioPtsSentinel; // @synthesize audioPtsSentinel=_audioPtsSentinel;
@property(nonatomic) double previousAudioFrameTime; // @synthesize previousAudioFrameTime=_previousAudioFrameTime;
@property(nonatomic) double firstTimeStamp; // @synthesize firstTimeStamp=_firstTimeStamp;
@property(retain, nonatomic) NSDictionary *outputBufferPoolAuxAttributes; // @synthesize outputBufferPoolAuxAttributes=_outputBufferPoolAuxAttributes;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *avAdaptor; // @synthesize avAdaptor=_avAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *srOutputWriter; // @synthesize srOutputWriter=_srOutputWriter;
@property(nonatomic) _Bool degreefps; // @synthesize degreefps=_degreefps;
@property(nonatomic) _Bool hasAudioTrack; // @synthesize hasAudioTrack=_hasAudioTrack;
@property(retain, nonatomic) UIView *drewView; // @synthesize drewView=_drewView;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) __weak id <ScreenRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;
- (void)setupWriterInRP:(CDStruct_1b6d18a9)arg1;
- (void)stopRecordByRP:(CDUnknownBlockType)arg1;
- (void)startRecordWithRP;
- (void)screenRecorder:(id)arg1 didStopRecordingWithPreviewViewController:(id)arg2 error:(id)arg3;
- (_Bool)dropFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)getAudioData:(int)arg1 data:(void *)arg2 length:(int)arg3 pts:(double)arg4 video_pts:(double)arg5;
- (struct CGContext *)createPixelBufferAndBitmapContext:(struct __CVBuffer **)arg1;
- (void)writeVideoFrame;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cleanup;
- (void)generateOutput:(CDUnknownBlockType)arg1;
- (void)completeRecordingSession:(CDUnknownBlockType)arg1;
- (void)stopOutputWriter:(CDUnknownBlockType)arg1;
- (void)removeTempFilePath:(id)arg1;
- (id)tempFileURL;
- (struct CGAffineTransform)videoTransformForDeviceOrientation;
- (void)setUpWriter;
- (void)stopRecordingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)startRecording;
- (void)onDispatchAfterTimeout;
- (void)runDispatchAfterTimerIfNeeded;
- (id)initWithSize:(struct CGSize)arg1 bitRate:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

