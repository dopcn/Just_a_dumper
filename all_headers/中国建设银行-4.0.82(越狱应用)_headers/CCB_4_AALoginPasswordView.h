//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBView.h"

#import "CCBTextFieldDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CCBButton, CCBLabel, CCBTextField, NSString;
@protocol AALoginPasswordViewDelegate;

@interface CCB_4_AALoginPasswordView : CCBView <UITextFieldDelegate, CCBTextFieldDelegate>
{
    _Bool _switchOn;
    _Bool _isSelected;
    NSString *_passWordText;
    id <AALoginPasswordViewDelegate> _m_delegate;
    CCBLabel *_tipsLabel;
    CCBView *_loginView;
    CCBTextField *_loginPassword;
    CCBButton *_selectedBtn;
}

@property(retain, nonatomic) CCBButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) CCBTextField *loginPassword; // @synthesize loginPassword=_loginPassword;
@property(retain, nonatomic) CCBView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) CCBLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak id <AALoginPasswordViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(copy, nonatomic) NSString *passWordText; // @synthesize passWordText=_passWordText;
- (void).cxx_destruct;
- (void)ButtonEvent;
- (_Bool)didSelectKeyButton:(id)arg1 keyValue:(id)arg2;
- (void)setPassWord:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)initWithSwitchOn:(_Bool *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

