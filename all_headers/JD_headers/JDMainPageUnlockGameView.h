//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, JDMainPageFloorAnimationNetWork, JDMainPageFloorAnimationUserGameStatus, JDMainPageUnlockGameAnimationView, JDMainPageUnlockGameModel, JDMainPageUnlockResultMarkView, JDMainpageUnlockGameLevelModel, UIButton, UIColor, UIImage, UIImageView;

@interface JDMainPageUnlockGameView : UIView
{
    _Bool _isContinueGame;
    _Bool _didTouchHellLevel;
    _Bool _isShowing;
    JDMainPageUnlockGameAnimationView *_lockView;
    JDMainpageUnlockGameLevelModel *_unlockGameLevel;
    JDMainPageUnlockGameModel *_unlockGameModel;
    JDMainPageFloorAnimationUserGameStatus *_userGameStatus;
    UIImageView *_bottomView;
    CDUnknownBlockType _showHighLevel;
    UIView *_parentView;
    UIImage *_defaultDotImage;
    UIImage *_defaultHightlightedDotImage;
    UIImage *_wrongDotImage;
    UIImage *_placeHolderDotImage;
    UIImage *_gameBg;
    UIColor *_wrongLineColor;
    UIColor *_rightLineColor;
    UIColor *_defaultLineColor;
    UIButton *_levelBtn;
    UIButton *_startBtn;
    UIButton *_shareBtn;
    JDImageView *_bottomMaskView;
    JDMainPageFloorAnimationNetWork *_netWork;
    JDMainPageUnlockResultMarkView *_markView;
}

@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) JDMainPageUnlockResultMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) JDMainPageFloorAnimationNetWork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) JDImageView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *startBtn; // @synthesize startBtn=_startBtn;
@property(retain, nonatomic) UIButton *levelBtn; // @synthesize levelBtn=_levelBtn;
@property(retain, nonatomic) UIColor *defaultLineColor; // @synthesize defaultLineColor=_defaultLineColor;
@property(retain, nonatomic) UIColor *rightLineColor; // @synthesize rightLineColor=_rightLineColor;
@property(retain, nonatomic) UIColor *wrongLineColor; // @synthesize wrongLineColor=_wrongLineColor;
@property(retain, nonatomic) UIImage *gameBg; // @synthesize gameBg=_gameBg;
@property(retain, nonatomic) UIImage *placeHolderDotImage; // @synthesize placeHolderDotImage=_placeHolderDotImage;
@property(retain, nonatomic) UIImage *wrongDotImage; // @synthesize wrongDotImage=_wrongDotImage;
@property(retain, nonatomic) UIImage *defaultHightlightedDotImage; // @synthesize defaultHightlightedDotImage=_defaultHightlightedDotImage;
@property(retain, nonatomic) UIImage *defaultDotImage; // @synthesize defaultDotImage=_defaultDotImage;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(copy, nonatomic) CDUnknownBlockType showHighLevel; // @synthesize showHighLevel=_showHighLevel;
@property(nonatomic) _Bool didTouchHellLevel; // @synthesize didTouchHellLevel=_didTouchHellLevel;
@property(retain, nonatomic) UIImageView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isContinueGame; // @synthesize isContinueGame=_isContinueGame;
@property(retain, nonatomic) JDMainPageFloorAnimationUserGameStatus *userGameStatus; // @synthesize userGameStatus=_userGameStatus;
@property(retain, nonatomic) JDMainPageUnlockGameModel *unlockGameModel; // @synthesize unlockGameModel=_unlockGameModel;
@property(retain, nonatomic) JDMainpageUnlockGameLevelModel *unlockGameLevel; // @synthesize unlockGameLevel=_unlockGameLevel;
@property(retain, nonatomic) JDMainPageUnlockGameAnimationView *lockView; // @synthesize lockView=_lockView;
- (void).cxx_destruct;
- (double)heightForCurrentStatu;
- (void)gameResultMATWithResult:(id)arg1;
- (void)startButtonClickMATWithCurrentGameLevel:(long long)arg1;
- (void)showMarkViewAfterGetCoupon:(_Bool)arg1;
- (_Bool)sholudStartGame:(_Bool *)arg1;
- (CDUnknownBlockType)markViewDidClickContinueBtn;
- (void)showMarkViewWithstate:(long long)arg1 animation:(_Bool)arg2;
- (void)configBottomView:(_Bool)arg1;
- (void)resetLockViewToNormarlState;
- (void)delayShowMaskView;
- (void)failCurrentGame;
- (void)completeCurrentGame;
- (void)exitPreGame;
- (void)exitGame;
- (id)getUserCurrentGameLevelModel;
- (void)startGameWithUserGameStatus;
- (void)startGame;
- (void)startShowPath;
- (void)startShowPathAfterAnimation;
- (void)showGameView;
- (void)createShareImage;
- (void)touchShareInMarkView:(_Bool)arg1;
- (void)touchShare;
- (void)touchStart;
- (void)touchLevel;
- (void)configGameModel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

