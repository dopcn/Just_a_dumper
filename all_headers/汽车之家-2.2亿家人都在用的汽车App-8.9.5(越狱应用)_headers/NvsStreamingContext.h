//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NvsAssetPackageManager;
@protocol NvsStreamingContextDelegate;

@interface NvsStreamingContext : NSObject
{
    struct NvsCallbackInterface *m_callbackInterface;
    Class m_liveWindowClass;
    Class m_multiThumbnailSequenceViewClass;
    Class m_thumbnailSequenceViewClass;
    NSLock *m_delegatelock;
    _Bool _defaultCaptionFade;
    float _compileVideoBitrateMultiplier;
    float _recordVideoBitrateMultiplier;
    id <NvsStreamingContextDelegate> _delegate;
    NvsAssetPackageManager *_assetPackageManager;
    NSMutableDictionary *_compileConfigurations;
}

+ (void)destroyInstance;
+ (id)sharedInstanceWithFlags:(int)arg1;
+ (id)sharedInstance;
+ (_Bool)verifySdkLicenseFile:(id)arg1;
+ (void)getSdkVersion:(int *)arg1 minorVersion:(int *)arg2 revisionNumber:(int *)arg3;
@property(retain, nonatomic) NSMutableDictionary *compileConfigurations; // @synthesize compileConfigurations=_compileConfigurations;
@property(nonatomic) _Bool defaultCaptionFade; // @synthesize defaultCaptionFade=_defaultCaptionFade;
@property(nonatomic) float recordVideoBitrateMultiplier; // @synthesize recordVideoBitrateMultiplier=_recordVideoBitrateMultiplier;
@property(nonatomic) float compileVideoBitrateMultiplier; // @synthesize compileVideoBitrateMultiplier=_compileVideoBitrateMultiplier;
@property(readonly) NvsAssetPackageManager *assetPackageManager; // @synthesize assetPackageManager=_assetPackageManager;
- (void).cxx_destruct;
- (_Bool)setThemeEndingEnabled:(_Bool)arg1;
- (id)createVideoFrameRetriever:(id)arg1;
- (id)getAudioFxDescription:(id)arg1;
- (id)getVideoFxDescription:(id)arg1;
- (id)getDefaultVideoTransitionName;
- (id)getBeautyVideoFxName;
- (id)getAllBuiltinCaptureVideoFxNames;
- (id)getAllBuiltinVideoTransitionNames;
- (id)getAllBuiltinAudioFxNames;
- (id)getAllBuiltinVideoFxNames;
- (void)stopRecording;
- (_Bool)startRecordingWithFx:(id)arg1 withFlags:(int)arg2;
- (_Bool)startRecordingWithFx:(id)arg1;
- (_Bool)startRecording:(id)arg1 withFlags:(int)arg2;
- (_Bool)startRecording:(id)arg1;
- (void)removeCurrentCaptureScene;
- (id)getCurrentCaptureSceneId;
- (_Bool)applyCaptureScene:(id)arg1;
- (id)getCaptureVideoFxByIndex:(unsigned int)arg1;
- (unsigned int)getCaptureVideoFxCount;
- (void)removeAllCaptureVideoFx;
- (_Bool)removeCaptureVideoFx:(unsigned int)arg1;
- (id)insertBeautyCaptureVideoFx:(unsigned int)arg1;
- (id)appendBeautyCaptureVideoFx;
- (id)insertCustomCaptureVideoFx:(id)arg1 withInsertPosition:(int)arg2;
- (id)appendCustomCaptureVideoFx:(id)arg1;
- (id)insertPackagedCaptureVideoFx:(id)arg1 withInsertPosition:(unsigned int)arg2;
- (id)appendPackagedCaptureVideoFx:(id)arg1;
- (id)insertBuiltinCaptureVideoFx:(id)arg1 withInsertPosition:(unsigned int)arg2;
- (id)appendBuiltinCaptureVideoFx:(id)arg1;
- (float)getExposureBias;
- (void)setExposureBias:(float)arg1;
- (_Bool)isFlashOn;
- (void)toggleFlash:(_Bool)arg1;
- (float)getZoomFactor;
- (void)setZoomFactor:(float)arg1;
- (void)startAutoExposure:(struct CGPoint)arg1;
- (void)cancelAutoFocus;
- (void)startAutoFocus:(struct CGPoint)arg1;
- (CDStruct_818bb265)sampleColorFromCapturedVideoFrame:(struct CGRect)arg1;
- (CDStruct_1ef3fb1f)getCapturePreviewVideoSize:(unsigned int)arg1;
- (_Bool)startCapturePreviewForLiveStreaming:(unsigned int)arg1 videoResGrade:(int)arg2 flags:(int)arg3 aspectRatio:(const CDStruct_1ef3fb1f *)arg4 liveStreamingEndPoint:(id)arg5;
- (_Bool)startCapturePreview:(unsigned int)arg1 videoResGrade:(int)arg2 flags:(int)arg3 aspectRatio:(const CDStruct_1ef3fb1f *)arg4;
- (_Bool)connectCapturePreviewWithVideoFrameReceiver:(id)arg1;
- (_Bool)connectCapturePreviewWithLiveWindow:(id)arg1;
- (id)getCaptureDeviceCapability:(unsigned int)arg1;
- (_Bool)isCaptureDeviceBackFacing:(unsigned int)arg1;
- (unsigned int)captureDeviceCount;
- (void)clearCachedResources:(_Bool)arg1;
- (void)stop;
- (_Bool)playbackTimeline:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3 proxyScale:(const CDStruct_1ef3fb1f *)arg4 preload:(_Bool)arg5 flags:(int)arg6;
- (_Bool)playbackTimeline:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3 videoSizeMode:(int)arg4 preload:(_Bool)arg5 flags:(int)arg6;
- (id)grabImageFromTimeline:(id)arg1 timestamp:(long long)arg2 proxyScale:(const CDStruct_1ef3fb1f *)arg3;
- (_Bool)seekTimeline:(id)arg1 timestamp:(long long)arg2 proxyScale:(const CDStruct_1ef3fb1f *)arg3 flags:(int)arg4;
- (_Bool)seekTimeline:(id)arg1 timestamp:(long long)arg2 videoSizeMode:(int)arg3 flags:(int)arg4;
- (_Bool)connectTimeline:(id)arg1 withVideoFrameReceiver:(id)arg2;
- (_Bool)connectTimeline:(id)arg1 withLiveWindow:(id)arg2;
- (unsigned int)getCustomCompileVideoHeight;
- (void)setCustomCompileVideoHeight:(unsigned int)arg1;
- (_Bool)compileTimeline:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3 outputFilePath:(id)arg4 videoResolutionGrade:(int)arg5 videoBitrateGrade:(int)arg6 flags:(int)arg7;
- (long long)getTimelineCurrentPosition:(id)arg1;
- (int)getStreamingEngineState;
- (_Bool)removeTimeline:(id)arg1;
- (id)createTimeline:(CDStruct_23cb9ed8 *)arg1 videoFps:(CDStruct_1ef3fb1f *)arg2 audioEditRes:(CDStruct_7db97aa2 *)arg3;
@property(nonatomic) __weak id <NvsStreamingContextDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getDefaultThemeEndingLogoImageFilePath;
- (_Bool)setDefaultThemeEndingLogoImageFilePath:(id)arg1;
- (int)detectVideoFileKeyframeInterval:(id)arg1;
- (id)getAVFileInfo:(id)arg1;
- (void)onUIApplicationStateDidEnterBackgroundNotification:(id)arg1;
- (void)dealloc;
- (id)initInternal:(int)arg1;
- (id)init;
- (id)getEAGLSharegroup;

@end

