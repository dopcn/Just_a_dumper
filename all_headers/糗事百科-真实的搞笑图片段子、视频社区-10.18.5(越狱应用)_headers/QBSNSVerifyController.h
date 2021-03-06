//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBBaseViewController.h"

#import "OAuth2WebAuthorizeDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel;

@interface QBSNSVerifyController : QBBaseViewController <OAuth2WebAuthorizeDelegate>
{
    _Bool _isSsoAuth;
    UILabel *_tipLabel;
    UIButton *_num1Btn;
    UIButton *_num2Btn;
    UIButton *_num3Btn;
    UILabel *_num1Label;
    UILabel *_num2Label;
    UILabel *_num3Label;
    UIButton *_doneBtn;
    long long _index;
    UIImageView *_tagImageView;
    NSMutableArray *_configsArray;
}

@property(nonatomic) _Bool isSsoAuth; // @synthesize isSsoAuth=_isSsoAuth;
@property(retain, nonatomic) NSMutableArray *configsArray; // @synthesize configsArray=_configsArray;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UILabel *num3Label; // @synthesize num3Label=_num3Label;
@property(retain, nonatomic) UILabel *num2Label; // @synthesize num2Label=_num2Label;
@property(retain, nonatomic) UILabel *num1Label; // @synthesize num1Label=_num1Label;
@property(retain, nonatomic) UIButton *num3Btn; // @synthesize num3Btn=_num3Btn;
@property(retain, nonatomic) UIButton *num2Btn; // @synthesize num2Btn=_num2Btn;
@property(retain, nonatomic) UIButton *num1Btn; // @synthesize num1Btn=_num1Btn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (void)receivedOAEngineNotify:(id)arg1;
- (void)verifyTokenWithProvider:(long long)arg1 login:(_Bool)arg2 token:(id)arg3;
- (void)setOAuthView:(id)arg1 OAProvider:(long long)arg2;
- (void)onLoginWithOAProvider:(int)arg1;
- (void)doneBtnPressed;
- (void)snsBtnPressed:(id)arg1;
- (void)backBtnPressed:(id)arg1;
- (void)setupUI;
- (void)loadConfig;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

