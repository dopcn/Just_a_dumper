//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SPKPasswordInputView, UILabel;

@interface SPKPromptPasswordInputView : UIView
{
    NSString *_promptString;
    NSString *_vicePromptString;
    UILabel *_promptLabel;
    UILabel *_promptViceLabel;
    UILabel *_errorLabel;
    SPKPasswordInputView *_passwordInputView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) SPKPasswordInputView *passwordInputView; // @synthesize passwordInputView=_passwordInputView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *promptViceLabel; // @synthesize promptViceLabel=_promptViceLabel;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy, nonatomic) NSString *vicePromptString; // @synthesize vicePromptString=_vicePromptString;
@property(copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
- (void).cxx_destruct;
- (void)setErrorMessage:(id)arg1 color:(id)arg2;
- (void)updateConstraints;
- (id)initWithPrompt:(id)arg1 vicePrompt:(id)arg2;

@end

