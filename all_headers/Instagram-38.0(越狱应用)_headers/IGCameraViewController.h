//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCameraCaptureControllerDelegate-Protocol.h"
#import "IGCaptureManagerAudioSampleBufferDelegate-Protocol.h"
#import "IGCaptureManagerDelegate-Protocol.h"
#import "IGCaptureManagerVideoSampleBufferDelegate-Protocol.h"
#import "IGCaptureManagerVideoSessionDelegate-Protocol.h"
#import "IGFaceEffectManagerDelegate-Protocol.h"

@class IGCameraCaptureController, IGCameraConfig, IGCameraDynamicPreviewView, IGCameraSettings, IGCaptureManager, IGFaceEffectManager, IGUserSession, NSMutableDictionary, NSString, UIImageView, UIView;
@protocol IGCameraViewControllerDelegate, IGCameraViewControllerFaceEffectDelegate, IGCameraViewControllerPerformanceDelegate, IGCameraViewControllerSampleBufferObserver, IGFaceEffectLoggingUsageEvents;

@interface IGCameraViewController : UIViewController <IGCameraCaptureControllerDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGCaptureManagerVideoSessionDelegate, IGFaceEffectManagerDelegate>
{
    IGCameraConfig *_config;
    IGCaptureManager *_captureManager;
    IGCameraCaptureController *_captureController;
    IGUserSession *_userSession;
    NSMutableDictionary *_lastSavedZoomForCamera;
    UIImageView *_lastFrameImageView;
    UIView *_boomerangBurstView;
    UIImageView *_focusRing;
    IGCameraDynamicPreviewView *_cameraPreviewView;
    UIView *_overlayViewForForegroundingTransition;
    _Bool _isBackgrounded;
    _Bool _isLowLightAvailable;
    _Bool _waitingForFirstFrameAfterCameraSwitched;
    long long _selectedFaceEffectIndex;
    double _initialZoomPercent;
    double _currentZoomPercent;
    long long _lightingMode;
    long long _currentCameraFormat;
    _Bool _isFaceEffectAvailable;
    _Bool _isCaptureAvailable;
    _Bool _hasReceivedFirstFrame;
    _Bool _isInCaptureSession;
    _Bool _isVideoCaptureRunning;
    _Bool _showTapIndicator;
    long long _captureState;
    IGFaceEffectManager *_faceEffectManager;
    long long _deviceOrientation;
    double _maxVideoDuration;
    id <IGFaceEffectLoggingUsageEvents> _loggingContext;
    id <IGCameraViewControllerFaceEffectDelegate> _faceEffectDelegate;
    id <IGCameraViewControllerPerformanceDelegate> _performanceDelegate;
    id <IGCameraViewControllerDelegate> _delegate;
    id <IGCameraViewControllerSampleBufferObserver> _sampleBufferObserver;
    struct opaqueCMSampleBuffer *_lastReceivedBuffer;
}

@property(readonly, nonatomic) struct opaqueCMSampleBuffer *lastReceivedBuffer; // @synthesize lastReceivedBuffer=_lastReceivedBuffer;
@property(nonatomic) __weak id <IGCameraViewControllerSampleBufferObserver> sampleBufferObserver; // @synthesize sampleBufferObserver=_sampleBufferObserver;
@property(nonatomic) __weak id <IGCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGCameraViewControllerPerformanceDelegate> performanceDelegate; // @synthesize performanceDelegate=_performanceDelegate;
@property(nonatomic) __weak id <IGCameraViewControllerFaceEffectDelegate> faceEffectDelegate; // @synthesize faceEffectDelegate=_faceEffectDelegate;
@property(nonatomic) __weak id <IGFaceEffectLoggingUsageEvents> loggingContext; // @synthesize loggingContext=_loggingContext;
@property(nonatomic) _Bool showTapIndicator; // @synthesize showTapIndicator=_showTapIndicator;
@property(nonatomic) double maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly, nonatomic) IGFaceEffectManager *faceEffectManager; // @synthesize faceEffectManager=_faceEffectManager;
@property(readonly, nonatomic) long long captureState; // @synthesize captureState=_captureState;
@property(readonly, nonatomic) IGCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(readonly, nonatomic) _Bool isVideoCaptureRunning; // @synthesize isVideoCaptureRunning=_isVideoCaptureRunning;
@property(readonly, nonatomic) _Bool isInCaptureSession; // @synthesize isInCaptureSession=_isInCaptureSession;
@property(readonly, nonatomic) _Bool hasReceivedFirstFrame; // @synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame;
@property(readonly, nonatomic) _Bool isCaptureAvailable; // @synthesize isCaptureAvailable=_isCaptureAvailable;
@property(readonly, nonatomic) _Bool isFaceEffectAvailable; // @synthesize isFaceEffectAvailable=_isFaceEffectAvailable;
@property(nonatomic) long long lightingMode; // @synthesize lightingMode=_lightingMode;
- (void).cxx_destruct;
- (void)faceEffectManagerDidUpdateFaceEffects:(id)arg1;
- (void)faceEffectManager:(id)arg1 didUpdateFaceFilterTouchSupportedStatus:(_Bool)arg2;
- (void)faceEffectManagerUserDidTurnOffFaceEffect:(id)arg1;
- (void)faceEffectManager:(id)arg1 didApplyFaceEffectAtIndex:(long long)arg2 withType:(long long)arg3;
- (void)faceEffectManager:(id)arg1 willUnApplyFaceEffectAtIndex:(long long)arg2 withType:(long long)arg3;
- (void)faceEffectManager:(id)arg1 willApplyFaceEffectAtIndex:(long long)arg2 withType:(long long)arg3;
- (void)faceEffectManager:(id)arg1 isSegmentationAvailable:(_Bool)arg2;
- (void)faceEffectManager:(id)arg1 isFaceEffectAvailable:(_Bool)arg2;
- (void)hideAREffectInstructions;
- (void)showAREffectInstructions:(id)arg1 forDuration:(double)arg2;
- (void)captureManagerVideoSessionInterruptionEnded:(id)arg1;
- (void)captureManagerVideoSessionWasInterrupted:(id)arg1;
- (void)captureManagerVideoSessionDidStartRunning:(id)arg1;
- (void)cameraCaptureControllerFailedToCapturePhoto:(id)arg1;
- (void)cameraCaptureControllerSuccessfullyCapturedPhoto:(id)arg1;
- (void)cameraCaptureControllerDidStartRecording:(id)arg1;
- (void)cameraCaptureControllerDidStopRecording:(id)arg1;
- (void)cameraCaptureControllerWillStopRecording:(id)arg1;
- (void)cameraCaptureController:(id)arg1 didFinishWithQRCode:(id)arg2;
- (void)cameraCaptureController:(id)arg1 didFinishWithBoomerangManager:(id)arg2;
- (void)cameraCaptureController:(id)arg1 didFinishWithInputAsset:(id)arg2;
- (void)cameraCaptureController:(id)arg1 didUpdateRecordProgress:(double)arg2;
- (void)captureManagerDidReceiveUnhandledError:(id)arg1;
- (void)captureManagerDidSatisfyFocusRequest;
- (void)captureManagerNeedsResume:(_Bool)arg1;
- (void)captureManagerWillTakePhoto;
- (void)captureManagerIsReadyToProcessNewFaceEffect;
- (void)captureManagerDidCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureManagerDidDropVideoBuffer;
- (void)captureManagerDidCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureManagerDidDropAudioBuffer;
- (void)focusToPoint:(struct CGPoint)arg1;
- (void)tapToFocus:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)stopBoomerangBurstFrames;
- (void)showBoomerangBurstFrames;
- (void)updateTorchLight;
- (void)updateLightingModeIfNeeded;
- (void)toggleLightingMode;
- (_Bool)canHandleFlash;
- (void)switchCameras;
- (void)setZoomPercent:(double)arg1;
- (void)setZoomDelta:(double)arg1;
- (_Bool)canStopRecording;
- (void)stopRecording;
- (void)beginRecordingWithFormat:(long long)arg1;
- (void)capturePhoto;
- (void)resumeVideoCaptureForVideoCall;
- (void)pauseVideoCaptureForVideoCall;
- (void)resumeCaptureSessionForLive;
- (void)pauseCaptureSessionForLive;
- (void)stopCaptureSessionAndCleanup;
- (void)startCaptureSession;
- (void)stopMaskApplicationAnimation;
- (void)lastDisplayedFrameWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long cameraPosition;
@property(readonly, nonatomic) IGCameraSettings *currentCameraSettings;
- (void)setIsCaptureAvailable:(_Bool)arg1;
- (void)hideForegroundTransitionOverlayIfNeeded;
- (void)showAndBlurLastFrame;
- (void)setCaptureState:(long long)arg1;
- (void)setLastReceivedBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConfig:(id)arg1 userSession:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

