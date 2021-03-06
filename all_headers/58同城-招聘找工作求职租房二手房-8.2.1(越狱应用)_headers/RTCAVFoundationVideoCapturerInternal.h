//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString;
@protocol OS_dispatch_queue;

@interface RTCAVFoundationVideoCapturerInternal : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureDeviceInput *_frontCameraInput;
    AVCaptureDeviceInput *_backCameraInput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    struct AVFoundationVideoCapturer *_capturer;
    int _rotation;
    _Bool _hasRetriedOnFatalError;
    _Bool _isRunning;
    _Bool _hasStarted;
    struct CriticalSection _crit;
    _Bool _useBackCamera;
    AVCaptureSession *_captureSession;
    NSObject<OS_dispatch_queue> *_frameQueue;
}

@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateSessionInputForUseBackCamera:(_Bool)arg1;
- (void)updateOrientation;
- (void)setMinFrameDuration:(CDStruct_1b6d18a9)arg1 forDevice:(id)arg2;
- (id)backCameraInput;
- (id)frontCameraInput;
- (id)videoCaptureDeviceForPosition:(long long)arg1;
- (id)videoDataOutput;
- (_Bool)setupCaptureSession;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleNonFatalError;
- (void)handleFatalError;
- (void)handleCaptureSessionDidStopRunning:(id)arg1;
- (void)handleCaptureSessionDidStartRunning:(id)arg1;
- (void)handleCaptureSessionRuntimeError:(id)arg1;
- (void)handleCaptureSessionInterruptionEnded:(id)arg1;
- (void)handleCaptureSessionInterruption:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)stop;
- (void)start;
@property(nonatomic) _Bool isRunning;
@property(nonatomic) _Bool useBackCamera; // @synthesize useBackCamera=_useBackCamera;
@property(readonly, nonatomic) _Bool canUseBackCamera;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *frameQueue; // @synthesize frameQueue=_frameQueue;
- (id)getActiveCaptureDevice;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)dealloc;
- (id)initWithCapturer:(struct AVFoundationVideoCapturer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

