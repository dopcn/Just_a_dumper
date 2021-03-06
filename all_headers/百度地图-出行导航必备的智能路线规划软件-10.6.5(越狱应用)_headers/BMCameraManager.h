//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer;
@protocol BMCameraManagerDelegate;

@interface BMCameraManager : NSObject
{
    id <BMCameraManagerDelegate> _delegate;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInput *_input;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <BMCameraManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopReading;
- (_Bool)startReading:(id)arg1;
- (id)init;

@end

