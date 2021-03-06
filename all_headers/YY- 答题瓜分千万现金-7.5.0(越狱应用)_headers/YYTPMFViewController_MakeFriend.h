//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYTPMakeFriendViewController.h"

#import "IYYTPMFChannelFightLogicDelegate-Protocol.h"

@class MFGuestViewExtSeat, MFProgressFullScreenView, NSMutableArray, NSString, UIButton, UILabel, UIView, YYTPMFTailLightSetting;

@interface YYTPMFViewController_MakeFriend : YYTPMakeFriendViewController <IYYTPMFChannelFightLogicDelegate>
{
    UILabel *_progressLabel;
    MFProgressFullScreenView *_progressFullScreenView;
    NSMutableArray *_matchDealedList;
    NSString *_lastProgressText;
    MFGuestViewExtSeat *_richManSeatView;
    YYTPMFTailLightSetting *_tailLightSetting;
    UIView *noCompereBgView;
    UIButton *_progressButton;
}

@property(retain, nonatomic) UIButton *progressButton; // @synthesize progressButton=_progressButton;
- (void).cxx_destruct;
- (void)hiddenRichManSeat;
- (void)onMFFightMatchBroadCastTeam1:(id)arg1 team2:(id)arg2 countDown:(unsigned long long)arg3;
- (void)candidateButton:(id)arg1;
- (void)onJSCallShowGiftView;
- (void)onLeaveLoveActivity:(int)arg1;
- (void)resetGuestViewLoveState;
- (void)moduleDidLoad:(id)arg1;
- (void)seatInfoToSeatView:(id)arg1 seatView:(id)arg2 info:(id)arg3;
- (void)onKeyInfoNotice:(id)arg1;
- (void)onLoveActInfoBroadcast:(unsigned long long)arg1 guestLeave:(id)arg2 publishLover:(id)arg3 clientShowLove:(id)arg4;
- (int)isMatch:(id)arg1 guestSeatInfo:(id)arg2 showLoveMatch:(_Bool)arg3;
- (void)showMatchResult:(id)arg1 guestSeatInfo:(id)arg2;
- (void)_onPublishLove:(id)arg1 guestSeatInfo:(id)arg2 guestView:(id)arg3 showLoveMatch:(_Bool)arg4;
- (void)onSelectLoveGuest:(int)arg1 guestUid:(unsigned long long)arg2;
- (void)onProgressButtonPressed;
- (void)initVideoView;
- (void)showProgress:(id)arg1;
- (void)updateCurrentGameStatus:(id)arg1;
- (void)keyboardWillHideWithFrameBegin:(id)arg1 frameEnd:(id)arg2 animationDuration:(id)arg3 animationCurve:(id)arg4;
- (void)keyboardWillShowWithFrameBegin:(id)arg1 frameEnd:(id)arg2 animationDuration:(id)arg3 animationCurve:(id)arg4;
- (void)setupView;
- (void)destroyView;
- (void)dealloc;

@end

