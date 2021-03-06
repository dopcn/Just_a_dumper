//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBindPhoneBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class MTTextField, NSString;

@interface MTBindPhoneViewController : MTBindPhoneBaseViewController <UITextFieldDelegate>
{
    _Bool _needToShowCurrentPhoneNumber;
    MTTextField *_targetPhoneTextField;
}

@property(nonatomic) _Bool needToShowCurrentPhoneNumber; // @synthesize needToShowCurrentPhoneNumber=_needToShowCurrentPhoneNumber;
@property(retain, nonatomic) MTTextField *targetPhoneTextField; // @synthesize targetPhoneTextField=_targetPhoneTextField;
- (void).cxx_destruct;
- (void)timerDidFinishCountDown;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;
- (void)sendVerificationCodeConfirmed:(_Bool)arg1;
- (void)didClickSubmitButton;
- (void)didClickvVerificationCodeButton;
- (void)viewDidLoad;
- (void)setupUI;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

