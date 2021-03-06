//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPRefactorBaseTableViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SPFindComplexPwdInputView, UIButton, UILabel, UISwitch;

@interface SPFindPasswordComplexKeyboardViewController : SPRefactorBaseTableViewController <UITextFieldDelegate>
{
    SPFindComplexPwdInputView *_complexPwdTextField;
    UISwitch *_switchButton;
    UILabel *_hintLabel;
    UILabel *_tipDetailsLabel;
    UIButton *_nextButton;
}

@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *tipDetailsLabel; // @synthesize tipDetailsLabel=_tipDetailsLabel;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) SPFindComplexPwdInputView *complexPwdTextField; // @synthesize complexPwdTextField=_complexPwdTextField;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setNextButtonStaus:(id)arg1;
- (void)switchButtonTapped:(id)arg1;
- (void)doneButtonPressed;
- (void)nextStepAction;
- (void)backAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

