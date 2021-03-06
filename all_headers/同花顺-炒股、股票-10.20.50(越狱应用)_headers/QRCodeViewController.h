//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXBaseViewController.h"

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"

@class AVAudioPlayer, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, CALayer, NSLayoutConstraint, NSString, UIImageView, UIView;

@interface QRCodeViewController : HXBaseViewController <AVCaptureMetadataOutputObjectsDelegate>
{
    NSLayoutConstraint *_containerHeightCons;
    UIImageView *_scanLineView;
    UIView *_scanView;
    NSLayoutConstraint *_scanLineCons;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureMetadataOutput *_output;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CALayer *_drawLayer;
    AVAudioPlayer *_dingPlayer;
}

@property(retain, nonatomic) AVAudioPlayer *dingPlayer; // @synthesize dingPlayer=_dingPlayer;
@property(retain, nonatomic) CALayer *drawLayer; // @synthesize drawLayer=_drawLayer;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureMetadataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak NSLayoutConstraint *scanLineCons; // @synthesize scanLineCons=_scanLineCons;
@property(nonatomic) __weak UIView *scanView; // @synthesize scanView=_scanView;
@property(nonatomic) __weak UIImageView *scanLineView; // @synthesize scanLineView=_scanLineView;
@property(nonatomic) __weak NSLayoutConstraint *containerHeightCons; // @synthesize containerHeightCons=_containerHeightCons;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)doQRCodeLoginForPCWithID:(id)arg1;
- (_Bool)isQRCodeToLoginPC:(id)arg1 getQrid:(id *)arg2;
- (_Bool)parseURlActionWith:(id)arg1;
- (void)dealWithScanResult:(id)arg1;
- (void)clearCorners;
- (void)drawCorners:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)stopQRCodeScanSession;
- (void)runQRCodeScanSession;
- (void)stopQRCodeScan;
- (void)finishQRCodeScan;
- (void)startQRCodeScan;
- (void)checkCameraPermissionsWithcompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBackViewColor:(id)arg1;
- (void)showPermissionsAlert;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

