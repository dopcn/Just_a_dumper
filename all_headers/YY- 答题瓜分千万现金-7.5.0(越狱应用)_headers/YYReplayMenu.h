//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTemplateModuleView.h"

@class NSLayoutConstraint, NSTimer, UIButton, UILabel, UIProgressView, YYReplaySlider;
@protocol YYReplayMenuDelegate;

@interface YYReplayMenu : YTemplateModuleView
{
    _Bool _sliderTouched;
    _Bool _isDanmuOn;
    NSTimer *_timer;
    _Bool _isVrVideo;
    CDUnknownBlockType _songShareActionBlock;
    id <YYReplayMenuDelegate> _delegate;
    UIButton *_sharBtn;
    UIButton *_rotateBtn;
    UIButton *_playBtn;
    UIButton *_moreBtn;
    UIButton *_vrButton;
    YYReplaySlider *_playSlider;
    UIProgressView *_playLoadProgress;
    UILabel *_totalTime;
    UILabel *_currentTime;
    NSLayoutConstraint *_centerAlignConstraint;
    NSLayoutConstraint *_curTimeConstraint;
    NSLayoutConstraint *_totalTimeConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *totalTimeConstraint; // @synthesize totalTimeConstraint=_totalTimeConstraint;
@property(nonatomic) __weak NSLayoutConstraint *curTimeConstraint; // @synthesize curTimeConstraint=_curTimeConstraint;
@property(nonatomic) __weak NSLayoutConstraint *centerAlignConstraint; // @synthesize centerAlignConstraint=_centerAlignConstraint;
@property(nonatomic) __weak UILabel *currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) __weak UILabel *totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) __weak UIProgressView *playLoadProgress; // @synthesize playLoadProgress=_playLoadProgress;
@property(nonatomic) __weak YYReplaySlider *playSlider; // @synthesize playSlider=_playSlider;
@property(nonatomic) __weak UIButton *vrButton; // @synthesize vrButton=_vrButton;
@property(nonatomic) __weak UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(nonatomic) __weak UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) __weak UIButton *rotateBtn; // @synthesize rotateBtn=_rotateBtn;
@property(nonatomic) __weak UIButton *sharBtn; // @synthesize sharBtn=_sharBtn;
@property(nonatomic) _Bool isVrVideo; // @synthesize isVrVideo=_isVrVideo;
@property(nonatomic) __weak id <YYReplayMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType songShareActionBlock; // @synthesize songShareActionBlock=_songShareActionBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bIsSliderVisible;
- (void)timeOut:(id)arg1;
- (void)stopSliderHidingTimer;
- (void)startSliderHidingTimer;
- (void)hideSlider:(_Bool)arg1;
- (void)showOrHideSlider:(_Bool)arg1;
- (void)handleSliderChangeAction:(id)arg1;
- (void)handleSliderTouchOutSideAction:(id)arg1;
- (void)handleSliderTouchInSideAction:(id)arg1;
- (void)handleSliderTouchCancelAction:(id)arg1;
- (void)handleSliderTouchDownAction:(id)arg1;
- (void)handleRotateBtnAction:(id)arg1;
- (void)changeTimeBarAlpha;
- (void)hideTimeBar;
- (void)changeRotateBtnStatusTo:(unsigned long long)arg1;
- (void)changePlayBtnStatusTo:(unsigned long long)arg1;
- (void)handleMoreAction:(id)arg1;
- (void)handlePlayAction:(id)arg1;
- (void)handleShareAction:(id)arg1;
- (void)handleVrControl:(id)arg1;
- (void)configAction;
- (void)configView;
- (void)updatePlayBtnStatus:(_Bool)arg1;
- (void)updateCurrentTime:(id)arg1 totalTime:(id)arg2;
- (void)updateLoadProgress:(double)arg1;
- (void)resetSlider;
- (void)giveSliderValue:(double)arg1;
- (void)eventPlayAction;
- (void)dealloc;
- (void)awakeFromNib;

@end

