//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YFBCommonViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SNFCLCalculagraph, UIButton, UITextField, YFBBankInformationDTO, YFBModifyBoundPhoneVerifyModeDto;

@interface YFBNewBankCardVerifyViewController : YFBCommonViewController <UITextFieldDelegate>
{
    YFBBankInformationDTO *_bankInformationDto;
    YFBModifyBoundPhoneVerifyModeDto *_modeDto;
    UITextField *_verifyCodeTextFld;
    UIButton *_verifyBtn;
    UIButton *_nextBtn;
    SNFCLCalculagraph *_codeTimer;
}

@property(retain, nonatomic) SNFCLCalculagraph *codeTimer; // @synthesize codeTimer=_codeTimer;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIButton *verifyBtn; // @synthesize verifyBtn=_verifyBtn;
@property(retain, nonatomic) UITextField *verifyCodeTextFld; // @synthesize verifyCodeTextFld=_verifyCodeTextFld;
@property(retain, nonatomic) YFBModifyBoundPhoneVerifyModeDto *modeDto; // @synthesize modeDto=_modeDto;
@property(retain, nonatomic) YFBBankInformationDTO *bankInformationDto; // @synthesize bankInformationDto=_bankInformationDto;
- (void).cxx_destruct;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)doneButtonPressed;
- (void)getVerifyBtnPressed:(id)arg1;
- (void)helpPressed:(id)arg1;
- (void)footerView;
- (void)verifyBtnPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setEbuyDataCollection:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

