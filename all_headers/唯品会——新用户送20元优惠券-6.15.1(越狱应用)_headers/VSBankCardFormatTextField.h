//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol VSBankCardFormatTextFieldDelegate;

@interface VSBankCardFormatTextField : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    id <VSBankCardFormatTextFieldDelegate> _bankCardFormatTextFieldDelegate;
}

@property(nonatomic) __weak id <VSBankCardFormatTextFieldDelegate> bankCardFormatTextFieldDelegate; // @synthesize bankCardFormatTextFieldDelegate=_bankCardFormatTextFieldDelegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (void)setBankCardTextFieldFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

