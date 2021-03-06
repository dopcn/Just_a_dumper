//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString, UIView;

@interface VideoCapture : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *captureSession;
    AVCaptureConnection *audioConnection;
    AVCaptureConnection *videoConnection;
    AVCaptureVideoPreviewLayer *captureVideopreviewLayer;
    AVCaptureVideoDataOutput *captureVideoDataOutput;
    long long previewOrientation;
    UIView *preview;
    long long fontID;
    long long backID;
    long long currentCamera;
    int videoFrameRate;
    _Bool videoFrameRateChanged;
    AVCaptureInput *frontCamera;
    AVCaptureInput *backCamera;
    AVCaptureDevice *backDev;
    AVCaptureDevice *frontDev;
    struct ObserverAnchor *iObserver;
    double startms;
    struct MediaMutex m_Lock;
    struct PlatformInfo info;
    _Bool justSwitched;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopPreview;
- (void)startPreview:(id)arg1;
- (void)setup_audio;
- (void)setup_video;
- (void)setCameraOrientation;
- (void)setDemision:(int)arg1 height:(int)arg2;
- (int)do_start;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)setFrameRate:(int)arg1;
- (void)OnDeviceChanged;
- (long long)GetCameraType;
@property float videoZoomFactor;
- (int)GetTorchMode;
- (void)setTorchMode:(int)arg1;
- (void)switchCamera:(int)arg1;
- (void)OnInterrupt:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)stop;
- (int)startWithWidth:(int)arg1 height:(int)arg2 fps:(int)arg3 observer:(struct ObserverAnchor *)arg4 camera:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

