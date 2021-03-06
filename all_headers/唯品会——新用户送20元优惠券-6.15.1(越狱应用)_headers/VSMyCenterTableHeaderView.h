//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, VSAnnouncementView, VSBadgeView;

@interface VSMyCenterTableHeaderView : UIView
{
    _Bool _isLoginedState;
    _Bool _isPayFee;
    UIButton *_avatarButton;
    UIImageView *_avatarImageView;
    UIButton *_loginButton;
    UIButton *_registerButton;
    UIButton *_gradeButton;
    UIButton *_payFeeVIPButton;
    UILabel *_gradeLabel;
    UIButton *_waitToPayOrdersButton;
    UIButton *_waitToReceiveOrdersButton;
    UIButton *_waitToCommentOrdersButton;
    UIButton *_returnGoodsOrdersButton;
    UIButton *_viewAllOrdersButton;
    UIImageView *_orderInfoBackgroundImg;
    UIImageView *_vipClubLevelImageView;
    UIButton *_creditButton;
    UIView *_headerView;
    UIView *_visitorView;
    UILabel *_accountLable;
    UILabel *_integralTitleLbl;
    UILabel *_integralLable;
    VSBadgeView *_repayBadgeView;
    VSBadgeView *_recieveBadgeView;
    VSBadgeView *_afterSaleBadgeView;
    VSAnnouncementView *_announcementView;
    CDUnknownBlockType _noticeClickedCallBack;
    UIView *_loginBtnSeperator;
    UIImageView *_payingImgV;
    UIImageView *_redDotImageView;
    UIImageView *_headerViewBg;
    NSString *_grade;
    UIImageView *_creditIcon;
    UILabel *_creditLabel;
}

@property(retain, nonatomic) UILabel *creditLabel; // @synthesize creditLabel=_creditLabel;
@property(retain, nonatomic) UIImageView *creditIcon; // @synthesize creditIcon=_creditIcon;
@property(nonatomic) _Bool isPayFee; // @synthesize isPayFee=_isPayFee;
@property(retain, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(retain, nonatomic) UIImageView *headerViewBg; // @synthesize headerViewBg=_headerViewBg;
@property(retain, nonatomic) UIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) UIImageView *payingImgV; // @synthesize payingImgV=_payingImgV;
@property(retain, nonatomic) UIView *loginBtnSeperator; // @synthesize loginBtnSeperator=_loginBtnSeperator;
@property(copy, nonatomic) CDUnknownBlockType noticeClickedCallBack; // @synthesize noticeClickedCallBack=_noticeClickedCallBack;
@property(retain, nonatomic) VSAnnouncementView *announcementView; // @synthesize announcementView=_announcementView;
@property(retain, nonatomic) VSBadgeView *afterSaleBadgeView; // @synthesize afterSaleBadgeView=_afterSaleBadgeView;
@property(retain, nonatomic) VSBadgeView *recieveBadgeView; // @synthesize recieveBadgeView=_recieveBadgeView;
@property(retain, nonatomic) VSBadgeView *repayBadgeView; // @synthesize repayBadgeView=_repayBadgeView;
@property(retain, nonatomic) UILabel *integralLable; // @synthesize integralLable=_integralLable;
@property(retain, nonatomic) UILabel *integralTitleLbl; // @synthesize integralTitleLbl=_integralTitleLbl;
@property(retain, nonatomic) UILabel *accountLable; // @synthesize accountLable=_accountLable;
@property(retain, nonatomic) UIView *visitorView; // @synthesize visitorView=_visitorView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isLoginedState; // @synthesize isLoginedState=_isLoginedState;
@property(retain, nonatomic) UIButton *creditButton; // @synthesize creditButton=_creditButton;
@property(readonly, nonatomic) UIImageView *vipClubLevelImageView; // @synthesize vipClubLevelImageView=_vipClubLevelImageView;
@property(readonly, nonatomic) UIImageView *orderInfoBackgroundImg; // @synthesize orderInfoBackgroundImg=_orderInfoBackgroundImg;
@property(readonly, nonatomic) UIButton *viewAllOrdersButton; // @synthesize viewAllOrdersButton=_viewAllOrdersButton;
@property(readonly, nonatomic) UIButton *returnGoodsOrdersButton; // @synthesize returnGoodsOrdersButton=_returnGoodsOrdersButton;
@property(readonly, nonatomic) UIButton *waitToCommentOrdersButton; // @synthesize waitToCommentOrdersButton=_waitToCommentOrdersButton;
@property(readonly, nonatomic) UIButton *waitToReceiveOrdersButton; // @synthesize waitToReceiveOrdersButton=_waitToReceiveOrdersButton;
@property(readonly, nonatomic) UIButton *waitToPayOrdersButton; // @synthesize waitToPayOrdersButton=_waitToPayOrdersButton;
@property(readonly, nonatomic) UILabel *gradeLabel; // @synthesize gradeLabel=_gradeLabel;
@property(readonly, nonatomic) UIButton *payFeeVIPButton; // @synthesize payFeeVIPButton=_payFeeVIPButton;
@property(readonly, nonatomic) UIButton *gradeButton; // @synthesize gradeButton=_gradeButton;
@property(readonly, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(readonly, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
- (void).cxx_destruct;
- (void)showCreditViewWithCreditScore:(id)arg1 defaultText:(id)arg2 creditStatus:(id)arg3;
- (void)updateCreditViewPosition;
- (void)noticeClicked:(id)arg1;
- (void)setRedDotInAvatarHidden:(_Bool)arg1;
- (void)updateHeightView:(long long)arg1;
- (void)setNotice:(id)arg1 clickedEvent:(CDUnknownBlockType)arg2;
- (void)setAccountName:(id)arg1;
- (void)setIntegral:(id)arg1;
- (void)setAfterSaleOrdersCount:(unsigned long long)arg1;
- (void)setWaitToReceiveOrderCount:(unsigned long long)arg1;
- (void)setWaitToPayOrdersCount:(unsigned long long)arg1;
- (void)setGradeText:(id)arg1;
- (void)setPayFeeVIPButtonHidden:(_Bool)arg1;
- (void)normalViewType;
- (void)logoutView;
- (void)updateViewType;
- (id)initWithFrame:(struct CGRect)arg1;

@end

