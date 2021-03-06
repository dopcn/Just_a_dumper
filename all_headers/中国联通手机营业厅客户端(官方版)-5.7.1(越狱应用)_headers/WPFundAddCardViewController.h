//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WoPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WoPayTimerDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITableView, UIView, WPButton, WoPayFundContract, WoPayTextField;

@interface WPFundAddCardViewController : WoPayBaseViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WoPayTimerDelegate>
{
    _Bool isChecked;
    _Bool isSendVerify;
    int requestIndex;
    struct CGPoint center;
    struct CGPoint center2;
    _Bool searchcard;
    _Bool gonext;
    _Bool isValidCard;
    _Bool ischeckAgreenment;
    UIScrollView *_view1;
    UIView *_errorView;
    WoPayTextField *_name;
    WoPayTextField *_bankcard;
    WoPayTextField *_idcard;
    UILabel *_errorLabel;
    UIButton *_nextBtn;
    UIButton *_limitBtn;
    UIButton *_cardListBtn;
    WoPayTextField *_phone;
    WoPayTextField *_code;
    WPButton *_verifyBtn;
    UILabel *_errorLabel2;
    UIButton *_selectBtn;
    UIButton *_nextBtn2;
    UIScrollView *_backView;
    UIImageView *_selectImg;
    UIImageView *_bankimg;
    UILabel *_bankNameLabel;
    UILabel *_bankTypeLabel;
    UIImageView *_woPayArrowImgView;
    NSString *_cardType;
    NSString *_coBankId;
    NSString *_bankProductId;
    NSString *_bankname;
    NSString *_bankLogo;
    NSString *_bankLimit;
    NSMutableArray *_bankcards;
    UITableView *_tableView;
    NSString *_dueNumer;
    NSString *_verifycode;
    WoPayFundContract *_fund;
    NSString *_inviteCode;
    NSLayoutConstraint *_tableViewHeightLC;
    UIView *_bgView;
}

@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak NSLayoutConstraint *tableViewHeightLC; // @synthesize tableViewHeightLC=_tableViewHeightLC;
@property(retain, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(retain, nonatomic) WoPayFundContract *fund; // @synthesize fund=_fund;
@property(retain, nonatomic) NSString *verifycode; // @synthesize verifycode=_verifycode;
@property(retain, nonatomic) NSString *dueNumer; // @synthesize dueNumer=_dueNumer;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *bankcards; // @synthesize bankcards=_bankcards;
@property(retain, nonatomic) NSString *bankLimit; // @synthesize bankLimit=_bankLimit;
@property(retain, nonatomic) NSString *bankLogo; // @synthesize bankLogo=_bankLogo;
@property(retain, nonatomic) NSString *bankname; // @synthesize bankname=_bankname;
@property(retain, nonatomic) NSString *bankProductId; // @synthesize bankProductId=_bankProductId;
@property(retain, nonatomic) NSString *coBankId; // @synthesize coBankId=_coBankId;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) UIImageView *woPayArrowImgView; // @synthesize woPayArrowImgView=_woPayArrowImgView;
@property(retain, nonatomic) UILabel *bankTypeLabel; // @synthesize bankTypeLabel=_bankTypeLabel;
@property(retain, nonatomic) UILabel *bankNameLabel; // @synthesize bankNameLabel=_bankNameLabel;
@property(retain, nonatomic) UIImageView *bankimg; // @synthesize bankimg=_bankimg;
@property(retain, nonatomic) UIImageView *selectImg; // @synthesize selectImg=_selectImg;
@property(retain, nonatomic) UIScrollView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *nextBtn2; // @synthesize nextBtn2=_nextBtn2;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UILabel *errorLabel2; // @synthesize errorLabel2=_errorLabel2;
@property(retain, nonatomic) WPButton *verifyBtn; // @synthesize verifyBtn=_verifyBtn;
@property(retain, nonatomic) WoPayTextField *code; // @synthesize code=_code;
@property(retain, nonatomic) WoPayTextField *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) UIButton *cardListBtn; // @synthesize cardListBtn=_cardListBtn;
@property(retain, nonatomic) UIButton *limitBtn; // @synthesize limitBtn=_limitBtn;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) WoPayTextField *idcard; // @synthesize idcard=_idcard;
@property(retain, nonatomic) WoPayTextField *bankcard; // @synthesize bankcard=_bankcard;
@property(retain, nonatomic) WoPayTextField *name; // @synthesize name=_name;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIScrollView *view1; // @synthesize view1=_view1;
- (void).cxx_destruct;
- (void)textFiledEditChanged:(id)arg1;
- (void)touchBg:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)fitTo9ChineseInput:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTimerStop;
- (void)onTimerExcute:(long long)arg1;
- (void)Verificationcode:(id)arg1;
- (void)requestYZA01;
- (void)requestCXA05;
- (void)requestCXA03;
- (void)dueDetailBtnPressed:(id)arg1;
- (void)checkBtnPressed:(id)arg1;
- (void)nextBtn2Pressed:(id)arg1;
- (void)listBtnPressed:(id)arg1;
- (void)limitBtnPressed:(id)arg1;
- (void)nextBtnPressed:(id)arg1;
- (void)backToHome;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

