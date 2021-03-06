//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class MSASubmitButton, NSString, NSTimer, UIButton, UIImageViewR, UILabel, UITextField, UITextView, UIViewController, smsManger;
@protocol MSAuthMethodDelegate, MSAuthProtocol;

@interface MSAMobileAuthView : UIView <UIAlertViewDelegate, UITextViewDelegate>
{
    _Bool bShowKb;
    double backMoment;
    _Bool _bCodeRequested;
    _Bool _acceptCall;
    int _retry;
    UIViewController<MSAuthMethodDelegate> *_rootVC;
    unsigned long long _type;
    UILabel *_titleLable;
    UILabel *_subTitleLabel;
    UILabel *_phoneLabel;
    UILabel *_numberLabel;
    UIView *_cellLineView1;
    UIView *_cellLineView2;
    UILabel *_veriCodeLabel;
    UITextField *_veriCodeField;
    UIButton *_sendSmsButton;
    UILabel *_tipLabel1;
    UILabel *_tipLabel2;
    UIImageViewR *_logoView;
    smsManger *_manger;
    MSASubmitButton *_submitButton;
    UITextView *_switchAuthButton;
    NSTimer *_timer;
    long long _count;
    NSString *_phoneNumber;
    NSString *_infoToken;
    id <MSAuthProtocol> _delegate;
}

@property(nonatomic) __weak id <MSAuthProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *infoToken; // @synthesize infoToken=_infoToken;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool acceptCall; // @synthesize acceptCall=_acceptCall;
@property(nonatomic) _Bool bCodeRequested; // @synthesize bCodeRequested=_bCodeRequested;
@property(nonatomic) int retry; // @synthesize retry=_retry;
@property(retain, nonatomic) UITextView *switchAuthButton; // @synthesize switchAuthButton=_switchAuthButton;
@property(retain, nonatomic) MSASubmitButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) smsManger *manger; // @synthesize manger=_manger;
@property(retain, nonatomic) UIImageViewR *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *tipLabel2; // @synthesize tipLabel2=_tipLabel2;
@property(retain, nonatomic) UILabel *tipLabel1; // @synthesize tipLabel1=_tipLabel1;
@property(retain, nonatomic) UIButton *sendSmsButton; // @synthesize sendSmsButton=_sendSmsButton;
@property(retain, nonatomic) UITextField *veriCodeField; // @synthesize veriCodeField=_veriCodeField;
@property(retain, nonatomic) UILabel *veriCodeLabel; // @synthesize veriCodeLabel=_veriCodeLabel;
@property(retain, nonatomic) UIView *cellLineView2; // @synthesize cellLineView2=_cellLineView2;
@property(retain, nonatomic) UIView *cellLineView1; // @synthesize cellLineView1=_cellLineView1;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIViewController<MSAuthMethodDelegate> *rootVC; // @synthesize rootVC=_rootVC;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCall;
- (void)requestCaptchaToPhoneNumber:(id)arg1 ByType:(unsigned long long)arg2;
- (void)abort;
- (_Bool)canRetry;
- (void)enanbleSMSButton:(_Bool)arg1;
- (void)verifyDidFinishedWithResult:(id)arg1 SessionId:(id)arg2 case:(int)arg3;
- (void)resetSmsButton;
- (void)onSwitchAuth;
- (void)requestAuthCodeByCall;
- (void)onSubmitCode;
- (void)onCountDown;
- (void)requestAuthCodeBySms;
- (void)onSendCode;
- (void)initLogo;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldShouldReturn:(id)arg1;
- (void)dismissKeyboard;
- (id)insensitivePhoneNumber:(id)arg1;
- (void)updateText;
- (void)initUIWithPhoneNumber:(id)arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)stopTimer;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardHide:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)didEnterForground:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 Frame:(struct CGRect)arg2 PhoneNumber:(id)arg3 infoToken:(id)arg4 Delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

