//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSecondLevelViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class KSUserInfoModel, NSDictionary, NSLayoutConstraint, NSString, TencentOAuth, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface KSUserLoginViewController : KSSecondLevelViewController <UITextFieldDelegate, TencentSessionDelegate, MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate>
{
    _Bool _isUpLogin;
    long long _loginStyle;
    NSString *_messageLabelTip;
    UIImageView *_loginCibaImageView;
    UIImageView *_loginIphoneImageView;
    UIImageView *_loginCheckImageView;
    UIImageView *_loginNameImageView;
    UIImageView *_loginPassImageView;
    UIView *_lineViewUp;
    UIView *_lineViewDown;
    UILabel *_otherLoginLabel;
    UILabel *_qqLabel;
    UILabel *_weiboLabel;
    UITextField *_nameTextField;
    UITextField *_passTextField;
    UIView *_nameView;
    UIView *_iPhoneView;
    UITextField *_phoneTextField;
    UITextField *_checkTextField;
    UIView *_thirdPartyView;
    UIButton *_loginButton;
    UIButton *_loginPatternButton;
    UIView *_QQView;
    UIView *_weiboView;
    UIButton *_verifyCodeButton;
    NSLayoutConstraint *_weiboViewCenterXLayoutConstraint;
    UILabel *_countDownLabel;
    UIButton *_receiveVerifyCodeButton;
    UILabel *_showUpLabel;
    NSLayoutConstraint *_nameLineLayoutConstraint;
    NSLayoutConstraint *_passLineLayoutConstraint;
    UILabel *_messageLabel;
    UIView *_showUpView;
    long long _pattonButtonSyle;
    TencentOAuth *_loginTencentOauth;
    NSDictionary *_combineDic;
    NSString *_downPhoneNum;
    KSUserInfoModel *_model;
}

@property(retain, nonatomic) KSUserInfoModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *downPhoneNum; // @synthesize downPhoneNum=_downPhoneNum;
@property(retain, nonatomic) NSDictionary *combineDic; // @synthesize combineDic=_combineDic;
@property(retain, nonatomic) TencentOAuth *loginTencentOauth; // @synthesize loginTencentOauth=_loginTencentOauth;
@property(nonatomic) long long pattonButtonSyle; // @synthesize pattonButtonSyle=_pattonButtonSyle;
@property(retain, nonatomic) UIView *showUpView; // @synthesize showUpView=_showUpView;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak NSLayoutConstraint *passLineLayoutConstraint; // @synthesize passLineLayoutConstraint=_passLineLayoutConstraint;
@property(nonatomic) __weak NSLayoutConstraint *nameLineLayoutConstraint; // @synthesize nameLineLayoutConstraint=_nameLineLayoutConstraint;
@property(nonatomic) __weak UILabel *showUpLabel; // @synthesize showUpLabel=_showUpLabel;
@property(nonatomic) __weak UIButton *receiveVerifyCodeButton; // @synthesize receiveVerifyCodeButton=_receiveVerifyCodeButton;
@property(nonatomic) __weak UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(nonatomic) __weak NSLayoutConstraint *weiboViewCenterXLayoutConstraint; // @synthesize weiboViewCenterXLayoutConstraint=_weiboViewCenterXLayoutConstraint;
@property(nonatomic) __weak UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(nonatomic) __weak UIView *weiboView; // @synthesize weiboView=_weiboView;
@property(nonatomic) __weak UIView *QQView; // @synthesize QQView=_QQView;
@property(nonatomic) __weak UIButton *loginPatternButton; // @synthesize loginPatternButton=_loginPatternButton;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak UIView *thirdPartyView; // @synthesize thirdPartyView=_thirdPartyView;
@property(nonatomic) __weak UITextField *checkTextField; // @synthesize checkTextField=_checkTextField;
@property(nonatomic) __weak UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(nonatomic) __weak UIView *iPhoneView; // @synthesize iPhoneView=_iPhoneView;
@property(nonatomic) __weak UIView *nameView; // @synthesize nameView=_nameView;
@property(nonatomic) __weak UITextField *passTextField; // @synthesize passTextField=_passTextField;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) __weak UILabel *weiboLabel; // @synthesize weiboLabel=_weiboLabel;
@property(nonatomic) __weak UILabel *qqLabel; // @synthesize qqLabel=_qqLabel;
@property(nonatomic) __weak UILabel *otherLoginLabel; // @synthesize otherLoginLabel=_otherLoginLabel;
@property(nonatomic) __weak UIView *lineViewDown; // @synthesize lineViewDown=_lineViewDown;
@property(nonatomic) __weak UIView *lineViewUp; // @synthesize lineViewUp=_lineViewUp;
@property(nonatomic) __weak UIImageView *loginPassImageView; // @synthesize loginPassImageView=_loginPassImageView;
@property(nonatomic) __weak UIImageView *loginNameImageView; // @synthesize loginNameImageView=_loginNameImageView;
@property(nonatomic) __weak UIImageView *loginCheckImageView; // @synthesize loginCheckImageView=_loginCheckImageView;
@property(nonatomic) __weak UIImageView *loginIphoneImageView; // @synthesize loginIphoneImageView=_loginIphoneImageView;
@property(nonatomic) __weak UIImageView *loginCibaImageView; // @synthesize loginCibaImageView=_loginCibaImageView;
@property(copy, nonatomic) NSString *messageLabelTip; // @synthesize messageLabelTip=_messageLabelTip;
@property(nonatomic) long long loginStyle; // @synthesize loginStyle=_loginStyle;
- (void).cxx_destruct;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hiddeKeyBoard;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidLogin;
- (void)weiboCombineAction;
- (void)phoneNumCombineAction;
- (void)combine;
- (void)verifyCodeButtonClick:(id)arg1;
- (void)buttonActionStyleClick:(id)arg1;
- (void)buttonClickWithPatternStyle:(id)arg1;
- (void)buttonClickWithVerifyCode:(id)arg1;
- (void)buttonClickWithWeiboLogin:(id)arg1;
- (void)buttonClickWithQQLogin:(id)arg1;
- (void)buttonClickWithLogin:(id)arg1;
- (void)qqLoginVerifyWithToken;
- (void)accountLoginAction;
- (void)phoneNumLoginAction;
- (void)startCountDown:(int)arg1 isShowUp:(_Bool)arg2;
- (void)getVerifyCodeRequest:(id)arg1;
- (void)showInviteView;
- (void)storeData:(id)arg1;
- (void)showResultMsg:(id)arg1;
- (void)isShowQQView;
- (void)addTapGestureRecognizer;
- (void)setTheme;
- (void)adjustSubviewsWithLoginStyle:(long long)arg1;
- (void)customSubviews;
- (void)popViewController;
- (void)back:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

