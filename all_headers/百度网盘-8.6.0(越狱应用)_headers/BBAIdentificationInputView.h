//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIFont, UITextField;
@protocol BBAIdentificationInputViewDelegate;

@interface BBAIdentificationInputView : UIView <UITextFieldDelegate>
{
    unsigned long long _codeNumber;
    UIFont *_textFont;
    long long _keyboardType;
    id <BBAIdentificationInputViewDelegate> _delegate;
    NSMutableArray *_labels;
    UITextField *_textField;
    NSArray *_currentDispalyString;
}

@property(retain, nonatomic) NSArray *currentDispalyString; // @synthesize currentDispalyString=_currentDispalyString;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(nonatomic) id <BBAIdentificationInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) unsigned long long codeNumber; // @synthesize codeNumber=_codeNumber;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isWhitespaceCharact:(id)arg1;
- (id)convertToArrayWithoutWhitespaceOfString:(id)arg1;
- (void)handleNotify:(id)arg1;
- (void)selectTextField:(id)arg1;
- (void)clearText;
- (id)identificationCodeString;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 codeNumber:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 codeNumber:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

