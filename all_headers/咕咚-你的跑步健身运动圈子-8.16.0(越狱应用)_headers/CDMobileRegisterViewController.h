//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CALayer, CDLoginRegisterShareInfo, MBProgressHUD, NSLayoutConstraint, NSString, NSTimer, TPKeyboardAvoidingScrollView, UIButton, UILabel, UITextField, UIView;

@interface CDMobileRegisterViewController : CDViewController <UITextViewDelegate, UITextFieldDelegate, UIScrollViewDelegate>
{
    _Bool _needsPasswordTextField;
    _Bool _isLoading;
    _Bool _isKeyboardShowed;
    _Bool _isRegisterSuccessed;
    int _secondCount;
    CDLoginRegisterShareInfo *_loginRegisterEngine;
    CDUnknownBlockType _completeCallback;
    long long _controllerType;
    NSString *_bindMobile;
    CDUnknownBlockType _bindCompleteCallback;
    UIView *_phoneLocationView;
    UILabel *_phoneLocationCodeLabel;
    UIView *_phoneContainerView;
    UITextField *_phoneTextField;
    UILabel *_phoneLocationNameLabel;
    UIView *_pwdContainerView;
    UITextField *_pwdTextField;
    UITextField *_verifyCodeTextField;
    UIButton *_sendButton;
    UIButton *_registerButton;
    UILabel *_loginLabel;
    TPKeyboardAvoidingScrollView *_scrollview;
    UIView *_codeView;
    UILabel *_topLabel;
    MBProgressHUD *_hudView;
    NSTimer *_timer;
    NSLayoutConstraint *_layoutWidthOfContentVIew;
    CALayer *_layerPhone;
    CALayer *_layerPassword;
    CALayer *_layerCode;
    struct CGSize _defaultContentSize;
}

@property(retain, nonatomic) CALayer *layerCode; // @synthesize layerCode=_layerCode;
@property(retain, nonatomic) CALayer *layerPassword; // @synthesize layerPassword=_layerPassword;
@property(retain, nonatomic) CALayer *layerPhone; // @synthesize layerPhone=_layerPhone;
@property(nonatomic) __weak NSLayoutConstraint *layoutWidthOfContentVIew; // @synthesize layoutWidthOfContentVIew=_layoutWidthOfContentVIew;
@property(nonatomic) _Bool isRegisterSuccessed; // @synthesize isRegisterSuccessed=_isRegisterSuccessed;
@property(nonatomic) _Bool isKeyboardShowed; // @synthesize isKeyboardShowed=_isKeyboardShowed;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) struct CGSize defaultContentSize; // @synthesize defaultContentSize=_defaultContentSize;
@property(nonatomic) int secondCount; // @synthesize secondCount=_secondCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MBProgressHUD *hudView; // @synthesize hudView=_hudView;
@property(nonatomic) __weak UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) __weak UIView *codeView; // @synthesize codeView=_codeView;
@property(nonatomic) __weak TPKeyboardAvoidingScrollView *scrollview; // @synthesize scrollview=_scrollview;
@property(nonatomic) __weak UILabel *loginLabel; // @synthesize loginLabel=_loginLabel;
@property(nonatomic) __weak UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak UITextField *verifyCodeTextField; // @synthesize verifyCodeTextField=_verifyCodeTextField;
@property(nonatomic) __weak UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(nonatomic) __weak UIView *pwdContainerView; // @synthesize pwdContainerView=_pwdContainerView;
@property(nonatomic) __weak UILabel *phoneLocationNameLabel; // @synthesize phoneLocationNameLabel=_phoneLocationNameLabel;
@property(nonatomic) __weak UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(nonatomic) __weak UIView *phoneContainerView; // @synthesize phoneContainerView=_phoneContainerView;
@property(nonatomic) __weak UILabel *phoneLocationCodeLabel; // @synthesize phoneLocationCodeLabel=_phoneLocationCodeLabel;
@property(nonatomic) __weak UIView *phoneLocationView; // @synthesize phoneLocationView=_phoneLocationView;
@property(copy, nonatomic) CDUnknownBlockType bindCompleteCallback; // @synthesize bindCompleteCallback=_bindCompleteCallback;
@property(retain, nonatomic) NSString *bindMobile; // @synthesize bindMobile=_bindMobile;
@property(nonatomic) _Bool needsPasswordTextField; // @synthesize needsPasswordTextField=_needsPasswordTextField;
@property(nonatomic) long long controllerType; // @synthesize controllerType=_controllerType;
@property(copy, nonatomic) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property(retain, nonatomic) CDLoginRegisterShareInfo *loginRegisterEngine; // @synthesize loginRegisterEngine=_loginRegisterEngine;
- (void).cxx_destruct;
- (id)pageCode;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)checkRegisterFormInfoIsNeedTips:(_Bool)arg1;
- (_Bool)checkBindForm;
- (_Bool)checkCodeIsNeedTips:(_Bool)arg1;
- (_Bool)checkPwdIsNeedTips:(_Bool)arg1;
- (_Bool)checkBindMobile;
- (_Bool)checkPhoneIsNeedTips:(_Bool)arg1;
- (void)checkPhoneRegistered:(CDUnknownBlockType)arg1;
- (_Bool)checkCanRegister;
- (void)navigateToLoginViewController;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showPassword:(id)arg1;
- (void)touchDownRegisterButton:(id)arg1;
- (void)invalidateTimer;
- (void)updateSendButtonTitle;
- (void)touchDownSendButton:(id)arg1;
- (void)popBack;
- (void)postNewModbileBindToServer;
- (void)phoneLocationButtonClicked:(id)arg1;
- (void)didNaviRightButtonClicked;
- (void)updatePhoneTextFiledPlaceHolder;
- (void)updateRegisterButtonState;
- (void)showTextNotify:(id)arg1 on:(id)arg2 in:(int)arg3;
- (void)closeKeyboard;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateUI;
- (void)keyboardNotification:(id)arg1;
- (void)setBindUI;
- (void)addNotification;
- (void)changeFrame:(id)arg1;
- (void)showInput;
- (void)configUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

