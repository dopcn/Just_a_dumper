//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "YXCameraHelpDelegate-Protocol.h"
#import "YXImageEditViewControllerDelegate-Protocol.h"

@class AVSampleBufferDisplayLayer, NSLayoutConstraint, NSString, UIButton, YXCameraHelp, YXImagePickerConfig;
@protocol YXCameraViewControllerDelegate;

@interface YXCameraViewController : YXUIViewController <YXCameraHelpDelegate, YXImageEditViewControllerDelegate>
{
    _Bool _isFront;
    id <YXCameraViewControllerDelegate> _delegate;
    YXImagePickerConfig *_pickerConfig;
    AVSampleBufferDisplayLayer *_bufferDisplayLayer;
    YXCameraHelp *_cameraHelp;
    UIButton *_changeCamera;
    UIButton *_cancelBtn;
    UIButton *_takePhoto;
    NSLayoutConstraint *_backHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *backHeightConstraint; // @synthesize backHeightConstraint=_backHeightConstraint;
@property(nonatomic) _Bool isFront; // @synthesize isFront=_isFront;
@property(nonatomic) __weak UIButton *takePhoto; // @synthesize takePhoto=_takePhoto;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UIButton *changeCamera; // @synthesize changeCamera=_changeCamera;
@property(retain, nonatomic) YXCameraHelp *cameraHelp; // @synthesize cameraHelp=_cameraHelp;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *bufferDisplayLayer; // @synthesize bufferDisplayLayer=_bufferDisplayLayer;
@property(retain, nonatomic) YXImagePickerConfig *pickerConfig; // @synthesize pickerConfig=_pickerConfig;
@property(nonatomic) id <YXCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)takePhotoWithImage:(id)arg1 error:(id)arg2;
- (void)didOutputVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)yxImageEditViewController:(id)arg1 didFinishPickingImages:(id)arg2;
- (void)changeCameraAction:(id)arg1;
- (void)takePhotoAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldShowBarBottomLine;
- (_Bool)shouldShowNavigationBar;
- (_Bool)extendedLayoutNone;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

