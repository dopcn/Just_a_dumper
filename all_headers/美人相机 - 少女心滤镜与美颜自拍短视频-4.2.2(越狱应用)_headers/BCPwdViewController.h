//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BCAccountBaseViewController.h"

#import "BCAccountInputViewDelegate-Protocol.h"

@class BCAccountInputView, BCButton, NSString, UIButton, UILabel, UIView;
@protocol BCPwdViewControllerDelegate;

@interface BCPwdViewController : BCAccountBaseViewController <BCAccountInputViewDelegate>
{
    _Bool _isBindPhone;
    _Bool _isShowText;
    id <BCPwdViewControllerDelegate> _delegate;
    UILabel *_titleLabel;
    BCAccountInputView *_codeView;
    BCAccountInputView *_phoneView;
    BCAccountInputView *_passwordView;
    BCButton *_registerBtn;
    UIView *_codeBGView;
    UIView *_passwordBaseView;
    UIView *_alert;
    UIButton *_cancelBtn;
    BCButton *_finishBtn;
}

@property(retain, nonatomic) BCButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) UIView *passwordBaseView; // @synthesize passwordBaseView=_passwordBaseView;
@property(retain, nonatomic) UIView *codeBGView; // @synthesize codeBGView=_codeBGView;
@property(retain, nonatomic) BCButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(nonatomic) _Bool isShowText; // @synthesize isShowText=_isShowText;
@property(nonatomic) _Bool isBindPhone; // @synthesize isBindPhone=_isBindPhone;
@property(retain, nonatomic) BCAccountInputView *passwordView; // @synthesize passwordView=_passwordView;
@property(retain, nonatomic) BCAccountInputView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) BCAccountInputView *codeView; // @synthesize codeView=_codeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <BCPwdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAlertView;
- (void)showReErrorWithMessage:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setLoginButtonStateWithPhoneLength:(long long)arg1 codeLength:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)cancelBtnPressed:(id)arg1;
- (void)cipherBtnPressed:(id)arg1;
- (void)resetSurePressed:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)registerBtnPressed:(id)arg1;
- (void)showResetView;
- (void)codeBtnPressed:(id)arg1;
- (void)setAreaEnName:(id)arg1 zoneNum:(id)arg2;
- (void)selectCountry;
- (void)loginLoadingAniamtionStop;
- (void)loginLoadingAnimationStart;
- (void)configureResetView;
- (void)configureCodeView;
- (void)configureUI;
- (void)showViewAnimation;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

