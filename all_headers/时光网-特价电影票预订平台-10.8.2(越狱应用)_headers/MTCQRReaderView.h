//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "MTDQRViewDelegate-Protocol.h"

@class AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, MTCQRView, NSString;

@interface MTCQRReaderView : UIView <AVCaptureMetadataOutputObjectsDelegate, MTDQRViewDelegate>
{
    AVCaptureSession *session;
    AVCaptureVideoPreviewLayer *preViewLayer;
    AVCaptureStillImageOutput *stillImageOutput;
    long long _readerStatus;
    CDUnknownBlockType _blockQRScanText;
    CDUnknownBlockType _blockQRScanImg;
    MTCQRView *_viewQRScan;
    struct CGRect _frameCQReaderView;
}

@property(retain, nonatomic) MTCQRView *viewQRScan; // @synthesize viewQRScan=_viewQRScan;
@property(copy, nonatomic) CDUnknownBlockType blockQRScanImg; // @synthesize blockQRScanImg=_blockQRScanImg;
@property(copy, nonatomic) CDUnknownBlockType blockQRScanText; // @synthesize blockQRScanText=_blockQRScanText;
@property(nonatomic) long long readerStatus; // @synthesize readerStatus=_readerStatus;
@property(nonatomic) struct CGRect frameCQReaderView; // @synthesize frameCQReaderView=_frameCQReaderView;
- (void).cxx_destruct;
- (void)showAppTip:(_Bool)arg1 showFlashLight:(_Bool)arg2;
- (void)stop;
- (void)start;
- (void)turnTorchOn:(_Bool)arg1;
- (void)shutterCameraCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGRect)getScanCrop:(struct CGRect)arg1 readerViewBounds:(struct CGRect)arg2;
- (void)mtd_ooptionalQRViewFlashLightBtnClickAction:(_Bool)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (void)instanceDevice;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

