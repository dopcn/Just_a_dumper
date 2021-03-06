//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQPimAnimationsHandler, QQPimInformationView, UIButton, UIImageView, UILabel;
@protocol QQPimSyncViewDelegate;

@interface QQPimSyncView : UIView
{
    _Bool _progressBlingAnimating;
    int _circleRotationCount;
    id <QQPimSyncViewDelegate> _delegate;
    UILabel *_lastSyncTitleLabel;
    UILabel *_lastSyncDateLabel;
    UILabel *_lastSyncTipsLabel;
    UIImageView *_backgroundImageView;
    UILabel *_syncProgressLabel;
    QQPimInformationView *_informationView;
    UIButton *_syncButton;
    UIImageView *_rotationArrowImageView;
    UILabel *_percentLabel;
    UIImageView *_backgroundCoverImageView;
    UIView *_backgroundCoverView;
    UIView *_progressBarBackgroundView;
    UIView *_progressBarView;
    UIImageView *_progressBarBlingView;
    UIView *_showingListView;
    QQPimAnimationsHandler *_animationHandler;
    struct CGRect _nomalFrame;
    struct CGRect _fromFrame;
    struct CGRect _toFrame;
}

@property(retain, nonatomic) QQPimAnimationsHandler *animationHandler; // @synthesize animationHandler=_animationHandler;
@property(nonatomic) _Bool progressBlingAnimating; // @synthesize progressBlingAnimating=_progressBlingAnimating;
@property(retain, nonatomic) UIView *showingListView; // @synthesize showingListView=_showingListView;
@property(nonatomic) int circleRotationCount; // @synthesize circleRotationCount=_circleRotationCount;
@property(retain, nonatomic) UIImageView *progressBarBlingView; // @synthesize progressBarBlingView=_progressBarBlingView;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIView *progressBarBackgroundView; // @synthesize progressBarBackgroundView=_progressBarBackgroundView;
@property(retain, nonatomic) UIView *backgroundCoverView; // @synthesize backgroundCoverView=_backgroundCoverView;
@property(retain, nonatomic) UIImageView *backgroundCoverImageView; // @synthesize backgroundCoverImageView=_backgroundCoverImageView;
@property(retain, nonatomic) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(nonatomic) struct CGRect nomalFrame; // @synthesize nomalFrame=_nomalFrame;
@property(retain, nonatomic) UIImageView *rotationArrowImageView; // @synthesize rotationArrowImageView=_rotationArrowImageView;
@property(retain, nonatomic) UIButton *syncButton; // @synthesize syncButton=_syncButton;
@property(retain, nonatomic) QQPimInformationView *informationView; // @synthesize informationView=_informationView;
@property(retain, nonatomic) UILabel *syncProgressLabel; // @synthesize syncProgressLabel=_syncProgressLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *lastSyncTipsLabel; // @synthesize lastSyncTipsLabel=_lastSyncTipsLabel;
@property(retain, nonatomic) UILabel *lastSyncDateLabel; // @synthesize lastSyncDateLabel=_lastSyncDateLabel;
@property(retain, nonatomic) UILabel *lastSyncTitleLabel; // @synthesize lastSyncTitleLabel=_lastSyncTitleLabel;
@property(nonatomic) __weak id <QQPimSyncViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewAbnormalContactsButtonTouch:(id)arg1;
- (void)contactPermissionButtonTouch:(id)arg1;
- (void)serverContactListButtonTouch;
- (void)localContactListButtonTouch;
- (void)contactServerChangeButtonTouch:(id)arg1;
- (void)contactLocalChangeButtonTouch:(id)arg1;
- (void)syncButtonTouch:(id)arg1;
- (void)changeCoverImage;
- (void)resumeAllAnimations;
- (void)pauseAllAnimations;
- (void)stopProgressAnimation;
- (void)startProgressAnimation;
- (void)startProgressBarHideAnimation;
- (void)startBackgroundImageViewAnimation;
- (void)startSyncFinishAnimation;
- (void)stopSyncAnimation;
- (void)startSyncAnimation;
- (void)startPlaySound;
- (double)backgroundImageViewWidth;
- (void)adjustLayout;
- (void)adjustTextLayout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgressBarFrameForProgress:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

