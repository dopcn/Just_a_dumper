//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, UITextField;

@protocol BCAccountInputViewDelegate <NSObject>
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (void)textFieldDidChange:(UITextField *)arg1;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
- (void)textFieldShouldReturn:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;

@optional
- (void)codeBtnPressed:(UIButton *)arg1;
- (void)cipherBtnPressed:(UIButton *)arg1;
- (void)selectCountry;
@end

