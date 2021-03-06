//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RMXBase4LiveModuleVC.h"

@class UIButton, UITextField;

@interface RMXRNAAutoNumberInputVC : RMXBase4LiveModuleVC
{
    CDUnknownBlockType _goButtonActionHandler;
    CDUnknownBlockType _manualButtonActionHandler;
    UIButton *_goButton;
    UIButton *_manualAuthButton;
    UITextField *_nameTextField;
    UITextField *_numberIdTextFiled;
}

@property(nonatomic) __weak UITextField *numberIdTextFiled; // @synthesize numberIdTextFiled=_numberIdTextFiled;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) __weak UIButton *manualAuthButton; // @synthesize manualAuthButton=_manualAuthButton;
@property(nonatomic) __weak UIButton *goButton; // @synthesize goButton=_goButton;
@property(copy, nonatomic) CDUnknownBlockType manualButtonActionHandler; // @synthesize manualButtonActionHandler=_manualButtonActionHandler;
@property(copy, nonatomic) CDUnknownBlockType goButtonActionHandler; // @synthesize goButtonActionHandler=_goButtonActionHandler;
- (void).cxx_destruct;
- (void)manualAuthButtonAction:(id)arg1;
- (void)goButtonAction:(id)arg1;
- (void)numberTextFieldChanged:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)realnameTextfieldChanged:(id)arg1;
- (_Bool)checkGoButtonEnableWithName:(id)arg1 numberID:(id)arg2;
- (_Bool)checkIsValidNumber:(id)arg1;
- (_Bool)checkIsValidName:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;

@end

