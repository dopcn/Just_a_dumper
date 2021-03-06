//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBCBaseAfterCameraViewController.h"

#import "MBCAfterCameraBeautyBarViewDelagete-Protocol.h"
#import "MTChangeBeautyLevelViewDelegate-Protocol.h"
#import "_TtP4MYXJ33MoviePortraitOperationBarDelegate_-Protocol.h"

@class BCADProxy, BlockbusterMode, MBCAfterCameraBeautyBarView, MBCBaseSlider, MBCSpecificMovie, MTFilterControl, MTFilterRealMakeupBase, MTImageScrollView, MTMDFilterProcessTool, MTProgressTipView, NSString, UIImage, UILabel, UISlider, UIView, _TtC4MYXJ14FilterNameView, _TtC4MYXJ18MovieBarDataSource, _TtC4MYXJ25MoviePortraitOperationBar, _TtC4MYXJ5Movie;

@interface MBCImageAfterCameraViewController : MBCBaseAfterCameraViewController <MTChangeBeautyLevelViewDelegate, MBCAfterCameraBeautyBarViewDelagete, _TtP4MYXJ33MoviePortraitOperationBarDelegate_>
{
    _Bool _isHasProcessed;
    _Bool _isShowingProgressView;
    _Bool _didShowAnimation;
    _Bool _isBeautySliderAB;
    MTImageScrollView *_zoomScrollView;
    MBCSpecificMovie *_specificMovieModel;
    BCADProxy *_adProxy;
    UIView *_afterTakeADViewContainer;
    MBCAfterCameraBeautyBarView *_bottomContainerView;
    MBCBaseSlider *_beautyLevelSlider;
    UIView *_sliderContainerView;
    UILabel *_sliderValueTipsLabel;
    _TtC4MYXJ14FilterNameView *_filterNameView;
    unsigned long long _beautySkinLevel;
    double _beautySkinAlpha;
    MTFilterRealMakeupBase *_faceLiftFilter;
    MTFilterControl *_filterControl;
    MTMDFilterProcessTool *_filterProcessTool;
    _TtC4MYXJ25MoviePortraitOperationBar *_moviePortraitBar;
    BlockbusterMode *_bustermode;
    UIImage *_bodyMask;
    UIImage *_movieBenchmark;
    _TtC4MYXJ5Movie *_currentMovie;
    _TtC4MYXJ18MovieBarDataSource *_barDataSource;
    UISlider *_emptinessSlider;
    CDUnknownBlockType _worksAfterImageDidProcess;
    MTProgressTipView *_progressTipView;
}

@property(nonatomic) __weak MTProgressTipView *progressTipView; // @synthesize progressTipView=_progressTipView;
@property(nonatomic) _Bool isBeautySliderAB; // @synthesize isBeautySliderAB=_isBeautySliderAB;
@property(copy, nonatomic) CDUnknownBlockType worksAfterImageDidProcess; // @synthesize worksAfterImageDidProcess=_worksAfterImageDidProcess;
@property(nonatomic) _Bool didShowAnimation; // @synthesize didShowAnimation=_didShowAnimation;
@property(nonatomic) _Bool isShowingProgressView; // @synthesize isShowingProgressView=_isShowingProgressView;
@property(nonatomic) __weak UISlider *emptinessSlider; // @synthesize emptinessSlider=_emptinessSlider;
@property(nonatomic) __weak _TtC4MYXJ18MovieBarDataSource *barDataSource; // @synthesize barDataSource=_barDataSource;
@property(retain, nonatomic) _TtC4MYXJ5Movie *currentMovie; // @synthesize currentMovie=_currentMovie;
@property(retain, nonatomic) UIImage *movieBenchmark; // @synthesize movieBenchmark=_movieBenchmark;
@property(retain, nonatomic) UIImage *bodyMask; // @synthesize bodyMask=_bodyMask;
@property(retain, nonatomic) BlockbusterMode *bustermode; // @synthesize bustermode=_bustermode;
@property(retain, nonatomic) _TtC4MYXJ25MoviePortraitOperationBar *moviePortraitBar; // @synthesize moviePortraitBar=_moviePortraitBar;
@property(retain, nonatomic) MTMDFilterProcessTool *filterProcessTool; // @synthesize filterProcessTool=_filterProcessTool;
@property(retain, nonatomic) MTFilterControl *filterControl; // @synthesize filterControl=_filterControl;
@property(retain, nonatomic) MTFilterRealMakeupBase *faceLiftFilter; // @synthesize faceLiftFilter=_faceLiftFilter;
@property(nonatomic) double beautySkinAlpha; // @synthesize beautySkinAlpha=_beautySkinAlpha;
@property(nonatomic) unsigned long long beautySkinLevel; // @synthesize beautySkinLevel=_beautySkinLevel;
@property(retain, nonatomic) _TtC4MYXJ14FilterNameView *filterNameView; // @synthesize filterNameView=_filterNameView;
@property(nonatomic) __weak UILabel *sliderValueTipsLabel; // @synthesize sliderValueTipsLabel=_sliderValueTipsLabel;
@property(retain, nonatomic) UIView *sliderContainerView; // @synthesize sliderContainerView=_sliderContainerView;
@property(retain, nonatomic) MBCBaseSlider *beautyLevelSlider; // @synthesize beautyLevelSlider=_beautyLevelSlider;
@property(retain, nonatomic) MBCAfterCameraBeautyBarView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIView *afterTakeADViewContainer; // @synthesize afterTakeADViewContainer=_afterTakeADViewContainer;
@property(retain, nonatomic) BCADProxy *adProxy; // @synthesize adProxy=_adProxy;
@property(retain, nonatomic) MBCSpecificMovie *specificMovieModel; // @synthesize specificMovieModel=_specificMovieModel;
@property(nonatomic) _Bool isHasProcessed; // @synthesize isHasProcessed=_isHasProcessed;
@property(retain, nonatomic) MTImageScrollView *zoomScrollView; // @synthesize zoomScrollView=_zoomScrollView;
- (void).cxx_destruct;
- (void)showRetryDownloadActionAlertViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showRetryDownloadActionAlertViewWithMaterial:(id)arg1;
- (void)immediatelyDownloadMaterial:(id)arg1;
- (id)createDefaultProgressTipView;
- (void)dismissDownloadMaterialProgressTipView;
- (void)updateProgressTipViewLabelTextWithProgress:(double)arg1;
- (void)showDownloadMaterialProgressTipView;
- (id)progressTipViewLabelTextWithProgress:(long long)arg1;
- (void)setupFilterNameView;
- (void)hideProcessTip;
- (void)showProcessTip;
- (_Bool)isInExperiment;
- (void)setupMoviePortraitBar;
- (double)bustDegree:(double)arg1;
- (void)downloadMovie:(id)arg1;
- (void)movieBar:(id)arg1 didSelectMovie:(id)arg2;
- (id)movieBarShouldSelectMovieAtBeginnig;
- (void)applyMovie:(id)arg1;
- (void)movieBarDidRefreshUI;
- (id)movieEmptinessForAnalytics:(double)arg1;
- (double)beautyAlphaFromBeautyLevel:(unsigned long long)arg1;
- (unsigned long long)beautyLevelFromBeautyAlpha:(double)arg1;
- (void)emptinessSliderValueDidTouchUp:(id)arg1;
- (void)emptinessSliderValueChanged:(id)arg1;
- (id)strSliderValueForDisplaying:(double)arg1;
- (void)actionBeautySliderValueDidTouchUp:(id)arg1;
- (void)actionBeautySliderValueChanged:(id)arg1;
- (void)movieBeautySliderValueDidChangeEnd:(id)arg1;
- (void)changeBeautyLevelViewWillHide:(id)arg1;
- (void)changeBeautyLevelViewWillShow:(id)arg1;
- (void)changeBeautyLevelView:(id)arg1 didChangeSelectionToLevel:(long long)arg2;
- (void)didChangeBeautySliderValue:(double)arg1;
- (void)updateSkinFeatureIfNeed;
- (void)beautyBarView:(id)arg1 sliderValueChangeEnd:(double)arg2;
- (void)beautyBarView:(id)arg1 blackCornerStateChanged:(_Bool)arg2;
- (void)beautyBarView:(id)arg1 blurStateChanged:(_Bool)arg2;
- (void)beautyBarView:(id)arg1 didSelectMaterial:(id)arg2 indexComparisonResult:(long long)arg3;
- (void)beautyBarViewDidHide:(id)arg1;
- (void)beautyBarViewWillShow:(id)arg1;
- (void)changeBeautyBarType:(id)arg1 toType:(unsigned long long)arg2;
- (void)setupAdView;
- (void)processBeauty:(double)arg1 filterAlpha:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processMakeupWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupBeautySkinArguments;
- (void)processBeautyWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleNoFaceAlertIfNeed;
- (id)fixOrientation:(id)arg1;
- (long long)ratioOfImage:(id)arg1;
- (void)refreshScreenWithMovie:(id)arg1 isNeedDefocus:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContainerViewForRatio:(long long)arg1;
- (void)updateBeautyLevelSliderAlpha;
- (void)showMovieBar;
- (_Bool)isLandscapeImage;
- (double)materialLevelValue;
- (void)handleContrastLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)openMaterialDetailPage;
- (void)didReceiveUseMaterialNotification:(id)arg1;
- (void)didReceiveOpenMaterialDetailNotification:(id)arg1;
- (void)adjustAnalyticsDictForPhoto:(_Bool)arg1;
- (void)logEvent:(_Bool)arg1;
- (void)shareButtonDidPressed:(id)arg1;
- (void)realShareButtonDidPressed:(id)arg1;
- (void)confirmButtonDidPressed:(id)arg1;
- (void)forceHideProcessTip;
- (void)forceShowProcessTip;
- (void)cleanSpecificMovieModelAfterUsed;
- (void)backButtonDidPressed:(id)arg1;
- (void)realConfirmButtonDidPressed:(id)arg1;
- (void)beautyLevelButtonDidPressed:(id)arg1;
- (void)loadAdViewsIfNeed;
- (void)setupSubviews;
- (void)processImage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)removeSnapshotViewIfNeed;
- (void)removeSnapshotView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

