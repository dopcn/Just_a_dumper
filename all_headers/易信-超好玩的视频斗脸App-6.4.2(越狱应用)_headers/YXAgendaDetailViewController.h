//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "VoicePlayViewDelegate-Protocol.h"

@class KILabel, MBProgressHUD, MessageAvatarImageView, NSLayoutConstraint, NSString, SNSAudioPlayer, UIButton, UILabel, UIScrollView, UIView, VoicePlayView, YXAgendaContent, YXPlayAudioItem;

@interface YXAgendaDetailViewController : YXUIViewController <VoicePlayViewDelegate>
{
    VoicePlayView *voicePlayView;
    NSString *_pasteString;
    MBProgressHUD *_hud;
    _Bool _showGoToListButton;
    _Bool _isMyself;
    YXPlayAudioItem *_audioItem;
    SNSAudioPlayer *_audioPlayer;
    YXAgendaContent *_agendaContent;
    NSString *_sessionID;
    long long _msgTime;
    NSString *_agendaId;
    long long _createTime;
    long long _agendaStatus;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_footerView;
    UIView *_userInfoView;
    KILabel *_descLabel;
    UILabel *_timeLabel;
    UILabel *_ignoreLabel;
    MessageAvatarImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_stateLabel;
    UIView *_audioView;
    UIButton *_completeButton;
    UIButton *_ignoreButton;
    UIButton *_untrackButton;
    NSLayoutConstraint *_contentViewHeightConstraint;
    NSLayoutConstraint *_userInfoViewHeightConstraint;
    NSLayoutConstraint *_audioViewTopConstraint;
    NSLayoutConstraint *_audioViewHeightConstraint;
    NSLayoutConstraint *_deacLabelMaxHeightConstraint;
    NSLayoutConstraint *_footerViewHeightConstraint;
    NSLayoutConstraint *_completeButtonHeightConstraint;
    NSLayoutConstraint *_ignoreButtonHeightConstraint;
    NSLayoutConstraint *_completeButtonTopConstraint;
    NSLayoutConstraint *_ignoreButtonTopConstraint;
    NSLayoutConstraint *_untrackButtonTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *untrackButtonTopConstraint; // @synthesize untrackButtonTopConstraint=_untrackButtonTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *ignoreButtonTopConstraint; // @synthesize ignoreButtonTopConstraint=_ignoreButtonTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *completeButtonTopConstraint; // @synthesize completeButtonTopConstraint=_completeButtonTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *ignoreButtonHeightConstraint; // @synthesize ignoreButtonHeightConstraint=_ignoreButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *completeButtonHeightConstraint; // @synthesize completeButtonHeightConstraint=_completeButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *footerViewHeightConstraint; // @synthesize footerViewHeightConstraint=_footerViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *deacLabelMaxHeightConstraint; // @synthesize deacLabelMaxHeightConstraint=_deacLabelMaxHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *audioViewHeightConstraint; // @synthesize audioViewHeightConstraint=_audioViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *audioViewTopConstraint; // @synthesize audioViewTopConstraint=_audioViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *userInfoViewHeightConstraint; // @synthesize userInfoViewHeightConstraint=_userInfoViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(nonatomic) __weak UIButton *untrackButton; // @synthesize untrackButton=_untrackButton;
@property(nonatomic) __weak UIButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(nonatomic) __weak UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(nonatomic) __weak UIView *audioView; // @synthesize audioView=_audioView;
@property(nonatomic) __weak UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak MessageAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *ignoreLabel; // @synthesize ignoreLabel=_ignoreLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak KILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UIView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long agendaStatus; // @synthesize agendaStatus=_agendaStatus;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *agendaId; // @synthesize agendaId=_agendaId;
@property(nonatomic) _Bool isMyself; // @synthesize isMyself=_isMyself;
@property(nonatomic) long long msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) YXAgendaContent *agendaContent; // @synthesize agendaContent=_agendaContent;
@property(retain, nonatomic) SNSAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) YXPlayAudioItem *audioItem; // @synthesize audioItem=_audioItem;
@property(nonatomic) _Bool showGoToListButton; // @synthesize showGoToListButton=_showGoToListButton;
- (void).cxx_destruct;
- (_Bool)shouldShowGrayMask;
- (void)attributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)openURLByString:(id)arg1;
- (void)voicePlayViewPressed:(id)arg1;
- (void)remoteAgendaStatus:(long long)arg1;
- (void)updateAgendaStateIgnore:(long long)arg1;
- (void)updateAgendaStateComplete:(long long)arg1;
- (void)updataAgendaStatusRead;
- (void)hideProgress;
- (void)showProgress;
- (_Bool)canBecomeFirstResponder;
- (void)copyCollectText:(id)arg1;
- (void)addLongPressGesture;
- (id)stateLabelColor:(long long)arg1;
- (id)statusDesc:(long long)arg1;
- (void)showUserCard:(id)arg1;
- (void)cancelItemPlay;
- (void)showConfirmAlert;
- (void)untrackAgenda;
- (void)longPressedAction:(id)arg1;
- (void)completeButtonPressed:(id)arg1;
- (void)ignoreButtonPressed:(id)arg1;
- (void)goToAgendaList;
- (void)untrackButtonPressed:(id)arg1;
- (void)onMoreButtonPressed:(id)arg1;
- (void)showUserCardViewController:(id)arg1;
- (void)addTapRecognizer;
- (void)renderContentVoice;
- (void)renderFooterViewWithAgenda:(id)arg1;
- (void)renderIgnoreLabelWithAgenda:(id)arg1;
- (void)renderTimeLabelWithAgenda:(id)arg1;
- (void)renderAudioViewWithAgenda:(id)arg1;
- (void)renderDescLabelWithAgenda:(id)arg1;
- (void)renderUserInfoViewWithAgenda:(id)arg1;
- (void)refreshUIConstraintWithAgenda:(id)arg1;
- (void)renderUIWithAgenda:(id)arg1;
- (void)readData;
- (void)resetButtonUI;
- (void)setBarButtonItem;
- (void)initUIComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAgendaId:(id)arg1 fromUid:(id)arg2 toUid:(id)arg3 ctime:(long long)arg4;
- (id)initWithYXAgendaContent:(id)arg1;
- (id)initWithSessionMessageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

