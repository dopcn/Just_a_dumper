//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "FlashScreenContentDelegate-Protocol.h"
#import "UCStatusbarControllerProtocol-Protocol.h"

@class FlashContentView, FlashScreenData, FlashSkipButton, NSString, UIButton, UIImageView, UILabel;
@protocol FlashScreenViewDelegate;

@interface FlashScreenView : UIView <UCStatusbarControllerProtocol, FlashScreenContentDelegate, CAAnimationDelegate>
{
    _Bool _hasUrlOpen;
    _Bool _isLaunch;
    _Bool _isOriginNormalScreen;
    FlashScreenData *_data;
    id <FlashScreenViewDelegate> _delegate;
    long long _sceneType;
    double _showTimeStamp;
    UIImageView *_bgView;
    UIView *_containerView;
    UIImageView *_topContainerView;
    FlashContentView *_contentView;
    UILabel *_wifiTipLabel;
    UIButton *_clickButton;
    FlashSkipButton *_skipBtn;
    long long _showInterval;
    long long _showState;
}

@property(nonatomic) _Bool isOriginNormalScreen; // @synthesize isOriginNormalScreen=_isOriginNormalScreen;
@property(nonatomic) long long showState; // @synthesize showState=_showState;
@property(nonatomic) long long showInterval; // @synthesize showInterval=_showInterval;
@property(nonatomic) _Bool isLaunch; // @synthesize isLaunch=_isLaunch;
@property(retain, nonatomic) FlashSkipButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UILabel *wifiTipLabel; // @synthesize wifiTipLabel=_wifiTipLabel;
@property(retain, nonatomic) FlashContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool hasUrlOpen; // @synthesize hasUrlOpen=_hasUrlOpen;
@property(nonatomic) double showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) id <FlashScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FlashScreenData *data; // @synthesize data=_data;
- (void)notifyDismissWithType:(long long)arg1;
- (long long)statusBarAnimation;
- (_Bool)animateToCurrentStyle;
- (_Bool)statusbarHidden;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)flashContentViewDidErrorHappens:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setDismissAnimationProperty:(id)arg1 dismissType:(long long)arg2;
- (void)doWaveDismissAnimationWithType:(long long)arg1 dismissType:(long long)arg2;
- (void)doDefaultDismissAnimationWithDismissType:(long long)arg1;
- (void)doDismissAnimationWithDismissType:(long long)arg1;
- (void)doTopComponentsShowAnimation;
- (void)doShowAndScaleAnimation;
- (void)doShowAnimation;
- (void)doBackgroundHideAnimation;
- (id)scaleAnimation;
- (id)showAnimation;
- (void)startAnimation;
- (void)didEnterBackground;
- (void)dismissWithType:(id)arg1;
- (void)willDissmissInSeconds;
- (_Bool)showOnView:(id)arg1;
- (void)onFlashDismissedWithType:(long long)arg1;
- (void)onFlashStartDismissWithType:(long long)arg1;
- (void)onFlashShown;
- (void)onFlashStartShow;
- (void)onToggleHighlighted;
- (void)onSkipClick;
- (void)onFlashScreenClick:(id)arg1 forEvent:(id)arg2;
- (void)layoutContent;
- (void)setupSkipButton;
- (void)setupClickButton;
- (void)setupTopViews;
- (void)setupContent;
- (void)setupBackground;
- (id)initWithData:(id)arg1 scene:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

