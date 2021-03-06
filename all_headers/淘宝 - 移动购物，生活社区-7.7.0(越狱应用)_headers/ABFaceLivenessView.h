//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ABViewDelegate-Protocol.h"

@class ABAudio, ABFaceLivenessTitleBarView, ABFacePromptView, ABScrollLabel, CMMotionManager, NSString, UIImageView, UILabel;

@interface ABFaceLivenessView : UIView <ABViewDelegate>
{
    _Bool _actionMaskAnimating;
    _Bool _processingShowing;
    _Bool _circleScaleAnimating;
    UIView *_mainView;
    ABFaceLivenessTitleBarView *_titelBarView;
    ABFacePromptView *_promptView;
    ABScrollLabel *_actionPromptLabel;
    UIImageView *_actionPromptImageView;
    UILabel *_tipLabel;
    UIView *_tipView;
    UIView *_actionMaskTop;
    UIImageView *_actionMask;
    UIImageView *_actionMaskCenter;
    UIView *_actionMaskBottom;
    UIImageView *_startIcon;
    UIImageView *_startCircleInner;
    UIImageView *_startCircleRadius;
    UIImageView *_startCircleHalf;
    UIImageView *_circleInnerBackground;
    UIImageView *_resultIconBackground;
    UIImageView *_actionFinishPrompt;
    CMMotionManager *_motionManager;
    ABAudio *_audio;
    UIView *_waitingView;
    UIImageView *_waitingImageView;
    UILabel *_waitingLabel;
    struct CGPoint _circleCenter;
    struct CGRect _circleInnerFrame;
}

@property(retain, nonatomic) UILabel *waitingLabel; // @synthesize waitingLabel=_waitingLabel;
@property(retain, nonatomic) UIImageView *waitingImageView; // @synthesize waitingImageView=_waitingImageView;
@property(retain, nonatomic) UIView *waitingView; // @synthesize waitingView=_waitingView;
@property(retain, nonatomic) ABAudio *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) UIImageView *actionFinishPrompt; // @synthesize actionFinishPrompt=_actionFinishPrompt;
@property(retain, nonatomic) UIImageView *resultIconBackground; // @synthesize resultIconBackground=_resultIconBackground;
@property(nonatomic) _Bool circleScaleAnimating; // @synthesize circleScaleAnimating=_circleScaleAnimating;
@property(nonatomic) struct CGRect circleInnerFrame; // @synthesize circleInnerFrame=_circleInnerFrame;
@property(retain, nonatomic) UIImageView *circleInnerBackground; // @synthesize circleInnerBackground=_circleInnerBackground;
@property(retain, nonatomic) UIImageView *startCircleHalf; // @synthesize startCircleHalf=_startCircleHalf;
@property(retain, nonatomic) UIImageView *startCircleRadius; // @synthesize startCircleRadius=_startCircleRadius;
@property(retain, nonatomic) UIImageView *startCircleInner; // @synthesize startCircleInner=_startCircleInner;
@property(retain, nonatomic) UIImageView *startIcon; // @synthesize startIcon=_startIcon;
@property(nonatomic) _Bool processingShowing; // @synthesize processingShowing=_processingShowing;
@property(nonatomic) _Bool actionMaskAnimating; // @synthesize actionMaskAnimating=_actionMaskAnimating;
@property(retain, nonatomic) UIView *actionMaskBottom; // @synthesize actionMaskBottom=_actionMaskBottom;
@property(retain, nonatomic) UIImageView *actionMaskCenter; // @synthesize actionMaskCenter=_actionMaskCenter;
@property(retain, nonatomic) UIImageView *actionMask; // @synthesize actionMask=_actionMask;
@property(retain, nonatomic) UIView *actionMaskTop; // @synthesize actionMaskTop=_actionMaskTop;
@property(nonatomic) struct CGPoint circleCenter; // @synthesize circleCenter=_circleCenter;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *actionPromptImageView; // @synthesize actionPromptImageView=_actionPromptImageView;
@property(retain, nonatomic) ABScrollLabel *actionPromptLabel; // @synthesize actionPromptLabel=_actionPromptLabel;
@property(retain, nonatomic) ABFacePromptView *promptView; // @synthesize promptView=_promptView;
@property(retain, nonatomic) ABFaceLivenessTitleBarView *titelBarView; // @synthesize titelBarView=_titelBarView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)showStartAnimation:(CDUnknownBlockType)arg1;
- (struct CGRect)getScaleFrame:(struct CGRect)arg1 withScale:(float)arg2;
- (void)resetDarkView;
- (void)showDarkView;
- (void)hideAnimation;
- (_Bool)isErrorPromptShowed;
- (void)showErrorPrompt:(int)arg1 withTitle:(id)arg2 withMsg:(id)arg3 withPositiveText:(id)arg4 withPositiveDelegate:(id)arg5 withNegativeText:(id)arg6 withNegativeDelegate:(id)arg7 showOtherButton:(_Bool)arg8;
- (void)showResultIconView:(_Bool)arg1;
- (void)hideResultIconView;
- (void)showProcessingView:(id)arg1;
- (void)showFaceDetectedCircleAnimation;
- (void)onError:(int)arg1 withData:(id)arg2;
- (void)onMessage:(int)arg1 withData:(id)arg2;
- (struct CGAffineTransform)transformForOrientation;
- (void)cancelActionPrompt;
- (void)actionPromptAfter:(double)arg1;
- (void)actionPromptAni;
- (void)actionPrompt:(id)arg1;
- (void)cancelShowtimeoutAlertView;
- (void)showtimeoutAlertViewafter:(double)arg1;
- (void)showtimeoutAlertView:(int)arg1;
- (_Bool)isDetectReady;
- (_Bool)isFinishedPhase;
- (void)stopCaptureVideo;
- (void)showEnvironmentView:(id)arg1;
- (_Bool)setEnvironmentTip:(id)arg1;
- (_Bool)faceInRectRange:(id)arg1;
- (int)detectDistance:(struct CGRect)arg1;
- (_Bool)isFacePitchInRange:(float)arg1;
- (void)onFaceDetectReady;
- (_Bool)capturedFaceIsRight:(struct CGRect)arg1 in:(struct CGRect)arg2;
- (struct CGRect)convertVideoRectToScreenRect:(struct CGRect)arg1;
- (void)playPhaseSound;
- (void)audioPlay:(int)arg1;
- (void)starAnimation:(id)arg1;
- (void)showPhaseView;
- (void)bringTopButtonToFront;
- (void)showFinishIcon;
- (void)thinBlink;
- (void)hideTipsView;
- (void)showDetectTypeView;
- (void)onVolumeNotify:(float)arg1;
- (void)onRestartDetect;
- (void)showStep:(int)arg1;
- (void)hideStep;
- (void)showStep;
- (void)onLivenessSuccess;
- (void)onGoBack;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)onGoBackClick;
- (void)addPromptView;
- (void)addTitleBarView;
- (void)resetCircles;
- (void)addMainView;
- (void)addTipView;
- (void)setMaskAlphaAnimation:(float)arg1 withDuration:(double)arg2;
- (void)resetMask;
- (void)setMaskAlpha:(float)arg1;
- (void)addStartAnimationView;
- (void)addMaskView;
- (void)stopMotionUpdate;
- (void)startMotionUpdate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

