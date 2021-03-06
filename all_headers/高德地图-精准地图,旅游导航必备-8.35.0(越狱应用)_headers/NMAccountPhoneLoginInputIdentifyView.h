//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

#import "CheckBoxDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NMAccountTaoBaoLoginBackView, NMCheckBox, NSString, NSTimer, UIButton, UIImageView, UILabel, UITextField, UIView;
@protocol NMAccountLoginViewDelegate><NMPhoneVerifyAuthorizeViewDelegate, NMPhoneVerifyAuthorizeViewDatasource;

@interface NMAccountPhoneLoginInputIdentifyView : LTMBaseView <CheckBoxDelegate, UITextFieldDelegate>
{
    UIImageView *_backgroudView;
    UILabel *_labelTips;
    UITextField *_txtVerifyCode;
    UIButton *_btnResendVerify;
    UIButton *_btnConfirm;
    NMCheckBox *_checkboxAgree;
    UILabel *_labelAgree;
    UIButton *_clauseBtn;
    NSTimer *_countDownTimer;
    long long _countDownNum;
    NMAccountTaoBaoLoginBackView *_textFieldBackView;
    UIView *_verticalLine;
    id <NMAccountLoginViewDelegate><NMPhoneVerifyAuthorizeViewDelegate> _delegate;
    id <NMPhoneVerifyAuthorizeViewDatasource> _datasource;
}

@property(nonatomic) __weak id <NMPhoneVerifyAuthorizeViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <NMAccountLoginViewDelegate><NMPhoneVerifyAuthorizeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)NMCheckBox:(id)arg1 didSelected:(_Bool)arg2;
- (void)textFieldChanged:(id)arg1;
- (void)refreshConfirmBtnStatus;
- (void)quitView;
- (void)updateNaviBar:(id)arg1;
- (void)cancelKeyboard;
- (void)setCheckboxHidden:(_Bool)arg1;
- (void)reloadNMData;
- (void)resetText;
- (void)updateNMTheme;
- (void)updateToPortraitSize;
- (void)clauseBottonClicked:(id)arg1;
- (void)btnConfirmClick:(id)arg1;
- (void)abortCountDown;
- (void)countDownCompleted;
- (void)countDownInvoke;
- (void)setCountDownNumber:(long long)arg1;
- (void)stopTimer;
- (void)startCountDown;
- (void)btnResendClick:(id)arg1;
- (void)dealloc;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

