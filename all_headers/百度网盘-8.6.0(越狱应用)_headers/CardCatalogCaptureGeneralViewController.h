//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CutImageDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class CMMotionManager, CameraController, CameraPreviewView, CropImageView, CutImageView, NSLayoutConstraint, NSString, UIButton, UIView;

@interface CardCatalogCaptureGeneralViewController : UIViewController <UIAlertViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CutImageDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIButton *_captureButton;
    UIButton *_closeButton;
    UIButton *_albumButton;
    UIButton *_lightButton;
    UIButton *_checkCloseBtn;
    UIButton *_checkChooseBtn;
    UIButton *_transformButton;
    UIView *_checkView;
    UIView *_toolsView;
    NSLayoutConstraint *_toolViewBoom;
    NSLayoutConstraint *_checkViewBoom;
    NSLayoutConstraint *_closeButtonTop;
    CameraPreviewView *_previewView;
    CutImageView *_cutImageView;
    CropImageView *_maskImageView;
    CameraController *_cameraController;
    CMMotionManager *_cmmotionManager;
    long long _curDeviceOrientation;
    long long _imageDeviceOrientation;
    long long _imageOrientation;
    struct CGSize _size;
}

+ (id)viewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (double)speScale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) long long imageDeviceOrientation; // @synthesize imageDeviceOrientation=_imageDeviceOrientation;
@property(nonatomic) long long curDeviceOrientation; // @synthesize curDeviceOrientation=_curDeviceOrientation;
@property(retain, nonatomic) CMMotionManager *cmmotionManager; // @synthesize cmmotionManager=_cmmotionManager;
@property(retain, nonatomic) CameraController *cameraController; // @synthesize cameraController=_cameraController;
@property(nonatomic) __weak CropImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(nonatomic) __weak CutImageView *cutImageView; // @synthesize cutImageView=_cutImageView;
@property(nonatomic) __weak CameraPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonTop; // @synthesize closeButtonTop=_closeButtonTop;
@property(nonatomic) __weak NSLayoutConstraint *checkViewBoom; // @synthesize checkViewBoom=_checkViewBoom;
@property(nonatomic) __weak NSLayoutConstraint *toolViewBoom; // @synthesize toolViewBoom=_toolViewBoom;
@property(nonatomic) __weak UIView *toolsView; // @synthesize toolsView=_toolsView;
@property(nonatomic) __weak UIView *checkView; // @synthesize checkView=_checkView;
@property(nonatomic) __weak UIButton *transformButton; // @synthesize transformButton=_transformButton;
@property(nonatomic) __weak UIButton *checkChooseBtn; // @synthesize checkChooseBtn=_checkChooseBtn;
@property(nonatomic) __weak UIButton *checkCloseBtn; // @synthesize checkCloseBtn=_checkCloseBtn;
@property(nonatomic) __weak UIButton *lightButton; // @synthesize lightButton=_lightButton;
@property(nonatomic) __weak UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIButton *captureButton; // @synthesize captureButton=_captureButton;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)cutImageEndPaint;
- (void)cutImageMove;
- (void)cutImageScale;
- (void)cutImageBeginPaint;
- (void)OffLight;
- (struct CGRect)TransformTheRect;
- (void)orientationChanged;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)pressBackButton:(id)arg1;
- (void)captureIDCard:(id)arg1;
- (void)pressCheckBack:(id)arg1;
- (void)pressCheckChoose:(id)arg1;
- (void)pressTransform:(id)arg1;
- (void)turnLight:(id)arg1;
- (void)setupCutImageView:(id)arg1 fromPhotoLib:(_Bool)arg2;
- (void)setUpMaskImageView;
- (void)setupViews;
- (void)reset;
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

