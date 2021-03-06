//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PLUKeyboardInputView.h"

@class UIButton, UITextField, UITextView;

@interface PLUGiftKeyboardInputView : PLUKeyboardInputView
{
    _Bool _hideGiftBtn;
    UITextField *_textField;
    UITextView *_inPutText;
    unsigned long long _inputStyle;
    UIButton *_giftBtn;
}

@property(retain, nonatomic) UIButton *giftBtn; // @synthesize giftBtn=_giftBtn;
@property(nonatomic) unsigned long long inputStyle; // @synthesize inputStyle=_inputStyle;
- (void).cxx_destruct;
- (void)becomeFirstResponder;
- (void)checkInputText;
- (void)keyBoardDidHide:(id)arg1;
- (void)delegateShowKryBoard:(_Bool)arg1 changeTo:(struct CGRect)arg2 duration:(double)arg3;
- (void)keyBoardWillShow:(id)arg1;
- (void)keyBoardWillHide:(id)arg1;
- (void)keyBoardFrameChanged:(id)arg1;
- (void)clickGiftBtn:(id)arg1;
- (void)verticalLayout;
- (id)inPutText;
- (id)textField;
- (void)hideGiftBtn:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

