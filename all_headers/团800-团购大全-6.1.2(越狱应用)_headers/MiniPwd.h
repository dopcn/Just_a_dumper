//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIBase.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UITextField;

@interface MiniPwd : UIBase <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *background;
    UIImageView *code[6];
    UITextField *textField;
    NSString *password;
    BOOL autoSubmit;
    NSString *format;
    NSString *format_msg;
    NSString *format_type;
}

- (void).cxx_destruct;
- (BOOL)checkContent;
- (void)dissmissPopView;
- (void)showErrorMsg:(id)arg1;
- (BOOL)checkInput;
- (id)getValue;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)handleSingleTap:(id)arg1;
- (struct CGSize)calcSize;
- (void)layoutSubviews;
- (id)init:(struct CGSize)arg1 withModel:(id)arg2;

@end

