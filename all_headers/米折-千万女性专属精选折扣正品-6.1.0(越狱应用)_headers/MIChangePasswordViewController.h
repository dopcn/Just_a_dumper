//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MIBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface MIChangePasswordViewController : MIBaseViewController <UITextFieldDelegate>
{
    UITextField *_oldPasswordField;
    UITextField *_newPasswordField;
}

@property(retain, nonatomic) UITextField *newPasswordField; // @synthesize newPasswordField=_newPasswordField;
@property(retain, nonatomic) UITextField *oldPasswordField; // @synthesize oldPasswordField=_oldPasswordField;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)savePasswdAction;
- (void)cancleFirstResponder;
- (void)showPwdClick:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

