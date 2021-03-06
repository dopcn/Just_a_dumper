//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UITextField;
@protocol UITextFieldDelegate;

@interface MGTVLoginBaseTextField : UIView <CAAnimationDelegate>
{
    NSString *_placeholder;
    UITextField *_internalTextField;
    id <UITextFieldDelegate> _delegate;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *internalTextField; // @synthesize internalTextField=_internalTextField;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isEqual:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(retain, nonatomic) NSString *text;
- (void)errorAnimation;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

