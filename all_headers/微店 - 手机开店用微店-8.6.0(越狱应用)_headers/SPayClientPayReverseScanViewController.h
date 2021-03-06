//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBllBaseViewController.h"

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"

@class AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSLayoutConstraint, NSNumber, NSString, SPayClientPayServiceModel, UIImageView, UILabel, UIView;

@interface SPayClientPayReverseScanViewController : SPBllBaseViewController <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureVideoPreviewLayer *preview;
    SPayClientPayServiceModel *_payServiceModel;
    NSString *_spayTokenIDString;
    NSNumber *_amount;
    AVCaptureSession *_session;
    AVCaptureMetadataOutput *_output;
    NSLayoutConstraint *_reverseScanStateTop;
    UIImageView *_reverseScanStateImageView;
    UIView *_cameraApertureView;
    UILabel *_amountLable;
    UIView *_titleView;
    UIView *_contextView;
}

@property(nonatomic) __weak UIView *contextView; // @synthesize contextView=_contextView;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UILabel *amountLable; // @synthesize amountLable=_amountLable;
@property(nonatomic) __weak UIView *cameraApertureView; // @synthesize cameraApertureView=_cameraApertureView;
@property(nonatomic) __weak UIImageView *reverseScanStateImageView; // @synthesize reverseScanStateImageView=_reverseScanStateImageView;
@property(nonatomic) __weak NSLayoutConstraint *reverseScanStateTop; // @synthesize reverseScanStateTop=_reverseScanStateTop;
@property(retain, nonatomic) AVCaptureMetadataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *spayTokenIDString; // @synthesize spayTokenIDString=_spayTokenIDString;
@property(retain, nonatomic) SPayClientPayServiceModel *payServiceModel; // @synthesize payServiceModel=_payServiceModel;
- (void).cxx_destruct;
- (void)payFinishBlockAction:(id)arg1 paySuccessDetailModel:(id)arg2;
- (void)inputCodeAction:(id)arg1;
- (void)stopReverseScanStateAnimation;
- (void)startReverseScanStateAnimation;
- (void)play:(id)arg1;
- (void)backFinish;
- (void)backAction;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)setupCamera;
- (void)customUIConfig;
- (void)setupWithAction;
- (void)setupWithViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)statusBarOrientationChange;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

