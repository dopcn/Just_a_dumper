//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, CIContext, CIFilter, NSMutableArray, NSURL, OpenGLContext;
@protocol OS_dispatch_group, OS_dispatch_queue, ZMLMovieWriterDelegate;

@interface ZMLMovieWriter : NSObject
{
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    unsigned int movieFrameBuffer;
    struct __CVOpenGLESTextureCache *videoTextureCache;
    struct __CVBuffer *rgbTexture;
    struct SimpleShader simpleShader;
    struct VertexRotateShader vertexRotateShader;
    _Bool _audioFinished;
    _Bool _videoFinished;
    _Bool _cancelled;
    _Bool _isOpenGLInitial;
    id <ZMLMovieWriterDelegate> _delegate;
    double _progress;
    NSObject<OS_dispatch_queue> *_mainSerializationQueue;
    NSObject<OS_dispatch_queue> *_rwAudioSerializationQueue;
    NSObject<OS_dispatch_queue> *_rwVideoSerializationQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterAudioInput;
    AVAssetWriterInput *_assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *_assetWriterInputPixelBufferAdaptor;
    double _totalDuration;
    NSMutableArray *_videoSizeArray;
    NSMutableArray *_videoTransformArray;
    double _audioProgress;
    double _videoProgress;
    NSURL *_outputURL;
    CIContext *_ciContext;
    struct CGColorSpace *_colorSpace;
    CIFilter *_activeFilter;
    OpenGLContext *_movieWriterContext;
    struct CGSize _outputSize;
    struct CGSize _videoSize;
    struct CGAffineTransform _preferredTransform;
}

@property(nonatomic) _Bool isOpenGLInitial; // @synthesize isOpenGLInitial=_isOpenGLInitial;
@property(retain, nonatomic) OpenGLContext *movieWriterContext; // @synthesize movieWriterContext=_movieWriterContext;
@property(retain, nonatomic) CIFilter *activeFilter; // @synthesize activeFilter=_activeFilter;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) __weak CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) _Bool videoFinished; // @synthesize videoFinished=_videoFinished;
@property(nonatomic) _Bool audioFinished; // @synthesize audioFinished=_audioFinished;
@property(nonatomic) double videoProgress; // @synthesize videoProgress=_videoProgress;
@property(nonatomic) double audioProgress; // @synthesize audioProgress=_audioProgress;
@property(retain, nonatomic) NSMutableArray *videoTransformArray; // @synthesize videoTransformArray=_videoTransformArray;
@property(retain, nonatomic) NSMutableArray *videoSizeArray; // @synthesize videoSizeArray=_videoSizeArray;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *assetWriterInputPixelBufferAdaptor; // @synthesize assetWriterInputPixelBufferAdaptor=_assetWriterInputPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterVideoInput; // @synthesize assetWriterVideoInput=_assetWriterVideoInput;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterAudioInput; // @synthesize assetWriterAudioInput=_assetWriterAudioInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rwVideoSerializationQueue; // @synthesize rwVideoSerializationQueue=_rwVideoSerializationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rwAudioSerializationQueue; // @synthesize rwAudioSerializationQueue=_rwAudioSerializationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mainSerializationQueue; // @synthesize mainSerializationQueue=_mainSerializationQueue;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <ZMLMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (struct opaqueCMSampleBuffer *)adjustTime:(struct opaqueCMSampleBuffer *)arg1 by:(CDStruct_1b6d18a9)arg2;
- (void)writingDidFinishSuccessfully:(_Bool)arg1 withError:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)renderToCVPixelBufferWithTexture:(unsigned int)arg1 withBoundingRect:(struct CGRect)arg2 withVideoSize:(struct CGSize)arg3 withRotation:(double)arg4;
- (void)createDataFBO;
- (void)convertPixelBufferToTexture:(struct __CVBuffer *)arg1;
- (void)cleanupTexture;
- (void)setupGL;
- (_Bool)startAssetWriter:(id *)arg1 withAudioOutputs:(id)arg2 withVideoOutputs:(id)arg3 withStartTimeOfTimeRange:(id)arg4 withStartTimes:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (_Bool)setupAssetWriter:(id *)arg1;
- (void)initializeWithVideoPaths:(id)arg1;
- (void)initialSetupWithOutputPath:(id)arg1 withVideoPaths:(id)arg2 withTotalDuration:(double)arg3 withAudioOutputs:(id)arg4 withVideoOutputs:(id)arg5 withStartTimeOfTimeRange:(id)arg6 withAssetStartTimes:(id)arg7 withCompletionHandler:(CDUnknownBlockType)arg8;

@end

