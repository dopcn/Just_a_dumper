//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJUIViewController.h"

#import "GJFindPasswordViewControllerDelegate-Protocol.h"
#import "GJGCloginViewControllerProtocol-Protocol.h"
#import "GJNavigationViewDelegate-Protocol.h"
#import "GJUserRegisterControllerDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UserQuickLoginViewControllerDelegate-Protocol.h"
#import "WBHttpRequestDelegate-Protocol.h"

@class GJNavigationView, NSLayoutConstraint, NSString, SAMLoadingView, TencentOAuth, UIButton, UIImageView, UILabel, UIScrollView, UITextField, UIView, UserQuickLoginViewController;

@interface UserLogonViewController : GJUIViewController <GJGCloginViewControllerProtocol, GJNavigationViewDelegate, GJUserRegisterControllerDelegate, UITextFieldDelegate, TencentSessionDelegate, UIAlertViewDelegate, GJFindPasswordViewControllerDelegate, WBHttpRequestDelegate, UserQuickLoginViewControllerDelegate>
{
    _Bool _inQuickProfileProcess;
    _Bool _hideThirdPartyLogin;
    _Bool _isShowTip;
    _Bool _isCancel;
    _Bool _userNameLoginViewLoaded;
    _Bool _showingQuickLogin;
    _Bool _zhuanzhuanLogin;
    id _target;
    SEL _logonSuccessAction;
    SEL _registerSuccessAction;
    UITextField *_nameTextField;
    UITextField *_passwordTextField;
    UIButton *_registerButton;
    UITextField *_captchaTextField;
    UIView *_captchaView;
    UIButton *_logonButton;
    SAMLoadingView *_loadingView;
    UIScrollView *_mainScrollView;
    UIImageView *_captchaImage;
    UIButton *_wechatButton;
    UILabel *_wechatLabel;
    UIView *_backView;
    UIView *_mainView;
    SEL _cancelAction;
    GJNavigationView *_navigationView;
    UserQuickLoginViewController *_quickLoginViewController;
    TencentOAuth *_tencentOAuth;
    NSLayoutConstraint *_loginButtonTopConstraint;
    NSLayoutConstraint *_lineHeightConstraint;
    NSLayoutConstraint *_lineHeightConstraint1;
    NSLayoutConstraint *_lineHeightConstraint2;
    NSLayoutConstraint *_lineHeightConstraint3;
    NSLayoutConstraint *_lineHeightConstraint4;
    NSLayoutConstraint *_weiboTrailingConstraint;
    NSLayoutConstraint *_qqLeadingConstraint;
    NSLayoutConstraint *_mainViewheightConstraint;
    NSLayoutConstraint *_mainScrollViewHeightConstraint;
    UIView *_thirdPartyView;
}

@property(nonatomic) __weak UIView *thirdPartyView; // @synthesize thirdPartyView=_thirdPartyView;
@property(nonatomic) __weak NSLayoutConstraint *mainScrollViewHeightConstraint; // @synthesize mainScrollViewHeightConstraint=_mainScrollViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *mainViewheightConstraint; // @synthesize mainViewheightConstraint=_mainViewheightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *qqLeadingConstraint; // @synthesize qqLeadingConstraint=_qqLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *weiboTrailingConstraint; // @synthesize weiboTrailingConstraint=_weiboTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *lineHeightConstraint4; // @synthesize lineHeightConstraint4=_lineHeightConstraint4;
@property(nonatomic) __weak NSLayoutConstraint *lineHeightConstraint3; // @synthesize lineHeightConstraint3=_lineHeightConstraint3;
@property(nonatomic) __weak NSLayoutConstraint *lineHeightConstraint2; // @synthesize lineHeightConstraint2=_lineHeightConstraint2;
@property(nonatomic) __weak NSLayoutConstraint *lineHeightConstraint1; // @synthesize lineHeightConstraint1=_lineHeightConstraint1;
@property(nonatomic) __weak NSLayoutConstraint *lineHeightConstraint; // @synthesize lineHeightConstraint=_lineHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *loginButtonTopConstraint; // @synthesize loginButtonTopConstraint=_loginButtonTopConstraint;
@property(nonatomic) _Bool zhuanzhuanLogin; // @synthesize zhuanzhuanLogin=_zhuanzhuanLogin;
@property(nonatomic) _Bool showingQuickLogin; // @synthesize showingQuickLogin=_showingQuickLogin;
@property(nonatomic) _Bool userNameLoginViewLoaded; // @synthesize userNameLoginViewLoaded=_userNameLoginViewLoaded;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isShowTip; // @synthesize isShowTip=_isShowTip;
@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
@property(retain, nonatomic) UserQuickLoginViewController *quickLoginViewController; // @synthesize quickLoginViewController=_quickLoginViewController;
@property(retain, nonatomic) GJNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) SEL cancelAction; // @synthesize cancelAction=_cancelAction;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UILabel *wechatLabel; // @synthesize wechatLabel=_wechatLabel;
@property(nonatomic) __weak UIButton *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(nonatomic) __weak UIImageView *captchaImage; // @synthesize captchaImage=_captchaImage;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) SAMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIButton *logonButton; // @synthesize logonButton=_logonButton;
@property(nonatomic) __weak UIView *captchaView; // @synthesize captchaView=_captchaView;
@property(nonatomic) __weak UITextField *captchaTextField; // @synthesize captchaTextField=_captchaTextField;
@property(nonatomic) __weak UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) SEL registerSuccessAction; // @synthesize registerSuccessAction=_registerSuccessAction;
@property(nonatomic) SEL logonSuccessAction; // @synthesize logonSuccessAction=_logonSuccessAction;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) _Bool hideThirdPartyLogin; // @synthesize hideThirdPartyLogin=_hideThirdPartyLogin;
@property(nonatomic) _Bool inQuickProfileProcess; // @synthesize inQuickProfileProcess=_inQuickProfileProcess;
- (void).cxx_destruct;
- (void)foodAccountActivation:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)fieldChanged;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)directLoginFailed:(id)arg1;
- (void)thirdLogin:(unsigned long long)arg1 accessToken:(id)arg2 openID:(id)arg3 nickName:(id)arg4 unionID:(id)arg5 avatarUrl:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;
- (void)dismissVC;
- (void)responseLogSuccessData:(id)arg1 isThirdParty:(_Bool)arg2;
- (void)removeLoadingView;
- (void)addLoadingView;
- (void)resignResponder:(id)arg1;
- (void)loadUserNameLoginView;
- (void)loginForZhuanzhuan;
- (void)setTarget:(id)arg1 withCancelAction:(SEL)arg2;
- (void)setTarget:(id)arg1 withSuccessAction:(SEL)arg2 withRegisterAction:(SEL)arg3;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)getUserInfoResponse:(id)arg1;
- (void)tencentDidLogin;
- (void)loginByQQ:(id)arg1;
- (void)addErrorTipViewWithErrorMsg:(id)arg1;
- (void)loginByWX;
- (void)loginBySina:(id)arg1;
- (void)request:(id)arg1 didFinishLoadingWithDataResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)weiboRegeister:(id)arg1;
- (void)userRegisterControllerWillGoToQuickLogin:(id)arg1;
- (void)quickLoginViewController:(id)arg1 willLoginOfType:(int)arg2;
- (void)quickLoginViewController:(id)arg1 willRegister:(id)arg2;
- (void)goback;
- (void)autoLoginDidFinish:(_Bool)arg1;
- (void)navigationViewDidSelectLeftItem:(id)arg1;
- (void)phoneLogin:(id)arg1;
- (void)visualizePassword:(id)arg1;
- (void)weiboAction:(id)arg1;
- (void)wechatAction:(id)arg1;
- (void)qqAction:(id)arg1;
- (void)userRegisterPressed:(id)arg1;
- (void)logonPressed:(id)arg1;
- (void)quickLoginPressed:(id)arg1;
- (void)getPassword:(id)arg1;
- (void)getTheCaptchaImage:(id)arg1;
- (void)showCaptchaView;
- (void)dealloc;
- (void)viewDidUnload;
- (void)showPhoneLoginViewWithAnimation:(_Bool)arg1;
- (void)switchToPhoneLogin:(id)arg1;
- (void)showNormalLoginViewWithAnimation:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)actionLogForLogonSuccess:(id)arg1;
- (_Bool)presentInGroupChat;
@property(nonatomic) _Bool isNeadNav; // @dynamic isNeadNav;
@property(copy, nonatomic) CDUnknownBlockType registBlock; // @dynamic registBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @dynamic failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @dynamic successBlock;
- (void)registerForGroupChat;
- (void)cancelActionForGroupChat;
- (void)successActionForGroupChat;
- (void)setupActionForGroupChat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

