//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBCGeneralCameraViewController.h"

@class MBCBeautyMasterDataModel, MBCBeautyMasterVideoGuideViewController, MTPickImageFlowTransferModel, NSLayoutConstraint, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface MBCBeautyMasterCameraViewController : MBCGeneralCameraViewController
{
    _Bool _shouldShowDetectFaceLightTips;
    _Bool _shouldShowFaceAngleTips;
    _Bool _shouldShowNoFacesTips;
    _Bool _inBadLightEnvironment;
    _Bool _didEverTryToAutoShowVideoGuide;
    UIView *_albumView;
    UIImageView *_albumDefaultImageView;
    UIButton *_btnAlbum;
    UIImageView *_thumbPhotoImageView;
    UIView *_topTipsContainerView;
    UIButton *_helpButton;
    UIView *_tipsContainerView;
    NSLayoutConstraint *_promotionLabelHeightConstraint;
    UILabel *_promotionLabel;
    UIImageView *_facePositionTipsImageView;
    UILabel *_faceTipsLabel;
    UIView *_cameraWrapperView;
    NSLayoutConstraint *_cameraWrapperViewTopConstraint;
    NSLayoutConstraint *_cameraWrapperViewBottomConstraint;
    NSLayoutConstraint *_captureButtonBottomConstraint;
    MTPickImageFlowTransferModel *_pickImageFlowTransferModel;
    long long _currentOperationActivityType;
    MBCBeautyMasterDataModel *_dataModel;
    MBCBeautyMasterVideoGuideViewController *_videoGuideViewController;
    UIView *_videoGuideContainerView;
    UIView *_videoGuideBackgroundView;
    UIButton *_videoGuideCloseBtn;
    long long _tipsAnimationShowingLockFlag;
    UIImage *_thumbAlbum;
    long long _photoSource;
}

+ (id)defaultStoryBoardName;
+ (id)viewControllerFromStoryBoardWithHairStyle:(id)arg1 hairColor:(id)arg2;
@property(nonatomic) long long photoSource; // @synthesize photoSource=_photoSource;
@property(retain, nonatomic) UIImage *thumbAlbum; // @synthesize thumbAlbum=_thumbAlbum;
@property long long tipsAnimationShowingLockFlag; // @synthesize tipsAnimationShowingLockFlag=_tipsAnimationShowingLockFlag;
@property(nonatomic) _Bool didEverTryToAutoShowVideoGuide; // @synthesize didEverTryToAutoShowVideoGuide=_didEverTryToAutoShowVideoGuide;
@property(retain, nonatomic) UIButton *videoGuideCloseBtn; // @synthesize videoGuideCloseBtn=_videoGuideCloseBtn;
@property(retain, nonatomic) UIView *videoGuideBackgroundView; // @synthesize videoGuideBackgroundView=_videoGuideBackgroundView;
@property(retain, nonatomic) UIView *videoGuideContainerView; // @synthesize videoGuideContainerView=_videoGuideContainerView;
@property(nonatomic) __weak MBCBeautyMasterVideoGuideViewController *videoGuideViewController; // @synthesize videoGuideViewController=_videoGuideViewController;
@property(nonatomic, getter=isInBadLightEnvironment) _Bool inBadLightEnvironment; // @synthesize inBadLightEnvironment=_inBadLightEnvironment;
@property(nonatomic) _Bool shouldShowNoFacesTips; // @synthesize shouldShowNoFacesTips=_shouldShowNoFacesTips;
@property(nonatomic) _Bool shouldShowFaceAngleTips; // @synthesize shouldShowFaceAngleTips=_shouldShowFaceAngleTips;
@property(nonatomic) _Bool shouldShowDetectFaceLightTips; // @synthesize shouldShowDetectFaceLightTips=_shouldShowDetectFaceLightTips;
@property(retain, nonatomic) MBCBeautyMasterDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) long long currentOperationActivityType; // @synthesize currentOperationActivityType=_currentOperationActivityType;
@property(retain, nonatomic) MTPickImageFlowTransferModel *pickImageFlowTransferModel; // @synthesize pickImageFlowTransferModel=_pickImageFlowTransferModel;
@property(nonatomic) __weak NSLayoutConstraint *captureButtonBottomConstraint; // @synthesize captureButtonBottomConstraint=_captureButtonBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cameraWrapperViewBottomConstraint; // @synthesize cameraWrapperViewBottomConstraint=_cameraWrapperViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cameraWrapperViewTopConstraint; // @synthesize cameraWrapperViewTopConstraint=_cameraWrapperViewTopConstraint;
@property(nonatomic) __weak UIView *cameraWrapperView; // @synthesize cameraWrapperView=_cameraWrapperView;
@property(nonatomic) __weak UILabel *faceTipsLabel; // @synthesize faceTipsLabel=_faceTipsLabel;
@property(nonatomic) __weak UIImageView *facePositionTipsImageView; // @synthesize facePositionTipsImageView=_facePositionTipsImageView;
@property(nonatomic) __weak UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(nonatomic) __weak NSLayoutConstraint *promotionLabelHeightConstraint; // @synthesize promotionLabelHeightConstraint=_promotionLabelHeightConstraint;
@property(nonatomic) __weak UIView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
@property(nonatomic) __weak UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak UIView *topTipsContainerView; // @synthesize topTipsContainerView=_topTipsContainerView;
@property(nonatomic) __weak UIImageView *thumbPhotoImageView; // @synthesize thumbPhotoImageView=_thumbPhotoImageView;
@property(nonatomic) __weak UIButton *btnAlbum; // @synthesize btnAlbum=_btnAlbum;
@property(nonatomic) __weak UIImageView *albumDefaultImageView; // @synthesize albumDefaultImageView=_albumDefaultImageView;
@property(nonatomic) __weak UIView *albumView; // @synthesize albumView=_albumView;
- (void).cxx_destruct;
- (void)updateThumbPhotoImageViewMaskLayer;
- (void)volumeDidChanged;
- (void)setupCamera;
- (void)getIntoImageConfirmWithDataModel:(id)arg1;
- (id)createDataModelWithOriginalImage:(id)arg1 originalImageFacePoints106:(id)arg2 processedImage:(id)arg3 faceImage:(id)arg4 faceImagePoints106:(id)arg5;
- (id)createDataModelWithOriginalImage:(id)arg1 exifData:(id)arg2;
- (id)createDataModelWithOriginalImage:(id)arg1 exifData:(id)arg2 faceObjects:(id)arg3 faceInfo:(id)arg4;
- (id)createDataModelWithOriginalImage:(id)arg1 exifData:(id)arg2 faceObjects:(id)arg3 originalImageFacePoints106:(id)arg4 processedImage:(id)arg5 faceImage:(id)arg6 faceImagePoints106:(id)arg7 faceInfo:(id)arg8 filterControl:(id)arg9 imageSource:(long long)arg10;
- (void)setupDataModel:(id)arg1;
- (void)hideNoFacesTips;
- (void)showNoFacesTips;
- (void)hideTips;
- (void)showTips;
- (_Bool)isTipsShowing;
- (_Bool)shouldShowTips;
- (void)updateTips;
- (void)showFaceAngleTips;
- (void)detectAngleOnFace:(id)arg1;
- (_Bool)isWrongAngleOnFace:(id)arg1;
- (void)didReceiveLastBeautyImageChangedNotification:(id)arg1;
- (void)stopNotificationsObserve;
- (void)startNotificationsObserve;
- (void)addTextShadowToLabel:(id)arg1;
- (_Bool)shouldShowAppCommentAlertView;
- (void)takePhotoViaTriggerAction:(long long)arg1 withBuff:(long long)arg2;
- (void)actionBack:(id)arg1;
- (void)forceEndFaceTipsAnimation;
- (void)forceEndTopTipsAnimation;
- (void)flashStateDidChange;
- (void)actionCaptureCamera:(id)arg1;
- (void)actionFilpCamera:(id)arg1;
- (void)actionSwitchFlashStateToNext:(id)arg1;
- (void)hideAllViewsIfNeed;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)flipCameraFinished;
- (void)flipCamera;
- (_Bool)shouldSaveOriginalImage:(id)arg1 withEXIFData:(id)arg2;
- (_Bool)autoSaveOriginalImage;
- (void)noFacesDetected;
- (void)didDetectedFaces:(id)arg1;
- (void)detectFaceLight:(unsigned char)arg1;
- (void)showDetectFaceLightTips;
- (id)detectFaceLightTipsText;
- (_Bool)shouldShowDetectFaceLightTipsWithLevel:(unsigned char)arg1;
- (void)didFinishTakePhotoWithImage:(id)arg1 exifData:(id)arg2 error:(id)arg3 viaTriggerAction:(long long)arg4 useBuff:(long long)arg5;
- (void)requestPermissionDidFinish;
- (void)photoAlbumsPermissionDidGrant;
- (void)cameraPermissionDidGrant;
- (void)setAllUIElementsEnabled:(_Bool)arg1;
- (void)setupViews;
- (id)createDefaultBeautyModeConfiguration;
- (id)createDefaultCameraCapturingConfiguration;
- (_Bool)isLastImageExisted;
- (_Bool)isLastOriginalImageFacePointExisted;
- (_Bool)isLastFaceImagePointExisted;
- (_Bool)isLastBeautyImageExisted;
- (_Bool)isLastOriginalImageExisted;
- (_Bool)isLastFaceImageExisted;
- (void)showFaceTipsIfNeed;
- (void)assetsDetailViewController:(id)arg1 didSelectPhotoAsset:(id)arg2;
- (void)useLastImage;
- (id)createImagePickerController;
- (void)actionAlbum:(id)arg1;
- (void)helpButtonDidTouchUpInside:(id)arg1;
- (void)hideContentController:(id)arg1;
- (void)hideContentController;
- (void)displayContentController:(id)arg1;
- (_Bool)isDisplayingContent;
- (void)getIntoVideoGuide;
- (id)createVideoGuideViewController;
- (void)autoShowVideoGuideIfNeed;
- (_Bool)autoShowVideoGuide;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

