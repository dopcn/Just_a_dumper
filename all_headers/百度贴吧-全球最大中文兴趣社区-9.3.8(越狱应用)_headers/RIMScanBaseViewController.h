//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RIMBaseViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CALayer, NSObject, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol OS_dispatch_queue;

@interface RIMScanBaseViewController : RIMBaseViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _isProcessing;
    _Bool _jumpSettings;
    UIButton *_photoButton;
    UIButton *_flashButton;
    CALayer *_flashButtonImageLayer;
    UIButton *_backButton;
    UIImageView *_idCardIcon;
    UILabel *_tipLabel;
    UIImageView *_cornerView;
    UIImageView *_portraitMark;
    UIImageView *_emblemMark;
    UIImageView *_logoIcon;
    UILabel *_logoTextLabel;
    UIView *_bottomView;
    NSObject<OS_dispatch_queue> *_captureQueue;
    NSObject<OS_dispatch_queue> *_processQueue;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_cameraDevice;
    AVCaptureDeviceInput *_cameraInput;
    AVCaptureVideoDataOutput *_cameraVideoDataOutput;
    AVCaptureVideoPreviewLayer *_preLayer;
    UILabel *_titleLabel;
    NSString *_logoText;
}

@property(retain, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(nonatomic) _Bool jumpSettings; // @synthesize jumpSettings=_jumpSettings;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *preLayer; // @synthesize preLayer=_preLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *cameraVideoDataOutput; // @synthesize cameraVideoDataOutput=_cameraVideoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *cameraInput; // @synthesize cameraInput=_cameraInput;
@property(retain, nonatomic) AVCaptureDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *logoTextLabel; // @synthesize logoTextLabel=_logoTextLabel;
@property(retain, nonatomic) UIImageView *logoIcon; // @synthesize logoIcon=_logoIcon;
@property(retain, nonatomic) UIImageView *emblemMark; // @synthesize emblemMark=_emblemMark;
@property(retain, nonatomic) UIImageView *portraitMark; // @synthesize portraitMark=_portraitMark;
@property(retain, nonatomic) UIImageView *cornerView; // @synthesize cornerView=_cornerView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *idCardIcon; // @synthesize idCardIcon=_idCardIcon;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) CALayer *flashButtonImageLayer; // @synthesize flashButtonImageLayer=_flashButtonImageLayer;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UIButton *photoButton; // @synthesize photoButton=_photoButton;
- (void).cxx_destruct;
- (id)getDeviceOfFrontCamera;
- (id)getDeviceOfBackCamera;
- (void)setAVCapturePosition:(long long)arg1;
- (_Bool)hasCamaraType:(long long)arg1;
- (void)videoStatusDenied;
- (void)handleAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setZoomValue:(double)arg1;
- (void)processPhotoFromAlbum:(id)arg1;
- (void)goBack:(id)arg1;
- (void)stopSession;
- (void)sessionHasStarted;
- (void)startSession;
- (_Bool)setupCaptureSession;
- (_Bool)initBasicInfo;
- (double)maxZoomFactor;
- (_Bool)cameraSupportsZoom;
- (void)identifyInfoFromImage:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (struct CGRect)getClipedFrame;
- (_Bool)abandonFrame;
- (_Bool)needClipImage;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)refreshUI;
- (void)removeObjects;
- (void)releaseThirdPartyLib;
- (void)setUpThirdPartyLib;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)becomeActive:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)addNotification;
- (void)dealloc;
- (void)stopInitAnimation;
- (void)startInitAnimation;
- (void)viewDidLoad;
- (void)checkAuthorization;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)closeFlash;
- (void)setFlashBtnCloseImage;
- (void)setFlashBtnOpenImage;
- (void)flashButtonClick:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)pickPhotosFromAlbum;
- (void)photoButtonClick:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)getTitleText;
- (void)addMaskViewsWithFrame:(struct CGRect)arg1;
- (void)initUI;
- (void)initSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

