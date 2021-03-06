//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "DecoderDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, Decoder, NSMutableSet, NSString;

@interface SQRCodeWidgetController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, DecoderDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    AVCaptureDevice *device;
    AVCaptureDeviceInput *input;
    AVCaptureMetadataOutput *metaOutput;
    AVCaptureVideoDataOutput *captureOutput;
    AVCaptureSession *session;
    AVCaptureVideoPreviewLayer *preview;
    NSMutableSet *readers;
    Decoder *decoder;
    struct CGRect rectOfInterest;
    id thisDelegate;
    _Bool iOS7Flag;
    _Bool decoding;
    _Bool cameraOpenChecked;
    long long i_count;
    struct CGRect arect;
    _Bool _isStatusHideEnabled;
    NSString *_defaultWarningIfCameraUnpermitted;
}

@property(retain, nonatomic) NSString *defaultWarningIfCameraUnpermitted; // @synthesize defaultWarningIfCameraUnpermitted=_defaultWarningIfCameraUnpermitted;
@property(nonatomic) _Bool isStatusHideEnabled; // @synthesize isStatusHideEnabled=_isStatusHideEnabled;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)decoder:(id)arg1 failedToDecodeImage:(id)arg2 usingSubset:(id)arg3 reason:(id)arg4;
- (void)decoder:(id)arg1 didDecodeImage:(id)arg2 usingSubset:(id)arg3 withResult:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (_Bool)getCaptureState;
- (void)resumeCapture;
- (void)pauseCapture;
- (void)cancelled;
- (void)setTorch:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initCapture;
- (void)viewDidLoad;
- (id)getICBCQRCodeWidget;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

