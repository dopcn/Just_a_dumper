//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"
#import "MAYQueryResponderTextViewProtocol-Protocol.h"

@class HPGrowingTextView, NSString, UIButton, UIImageView, UILabel, _TtC12MeituanMovie29MAYGrowingTextCommentIconView;
@protocol MAYGrowingTextContainerViewDelegate;

@interface MAYGrowingTextContainerView : UIView <MAYQueryResponderTextViewProtocol, HPGrowingTextViewDelegate>
{
    _Bool _showIconIndicator;
    _Bool _hideWhenKeyboardDismiss;
    _Bool _completionButtonHidden;
    id <MAYGrowingTextContainerViewDelegate> _delegate;
    UIButton *_completionButton;
    UIImageView *_textBorderImageView;
    HPGrowingTextView *_textView;
    UIImageView *_iconIndicator;
    UILabel *_labelIndicator;
    unsigned long long _maxInputNumber;
    UILabel *_surplusNumLabel;
    _TtC12MeituanMovie29MAYGrowingTextCommentIconView *_commentIconView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool completionButtonHidden; // @synthesize completionButtonHidden=_completionButtonHidden;
@property(retain, nonatomic) _TtC12MeituanMovie29MAYGrowingTextCommentIconView *commentIconView; // @synthesize commentIconView=_commentIconView;
@property(retain, nonatomic) UILabel *surplusNumLabel; // @synthesize surplusNumLabel=_surplusNumLabel;
@property(nonatomic) unsigned long long maxInputNumber; // @synthesize maxInputNumber=_maxInputNumber;
@property(retain, nonatomic) UILabel *labelIndicator; // @synthesize labelIndicator=_labelIndicator;
@property(retain, nonatomic) UIImageView *iconIndicator; // @synthesize iconIndicator=_iconIndicator;
@property(readonly, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *textBorderImageView; // @synthesize textBorderImageView=_textBorderImageView;
@property(readonly, nonatomic) UIButton *completionButton; // @synthesize completionButton=_completionButton;
@property(nonatomic) _Bool hideWhenKeyboardDismiss; // @synthesize hideWhenKeyboardDismiss=_hideWhenKeyboardDismiss;
@property(nonatomic) _Bool showIconIndicator; // @synthesize showIconIndicator=_showIconIndicator;
@property(nonatomic) __weak id <MAYGrowingTextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextView:(id)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (_Bool)textViewCanBecomeFirstResponder;
- (void)beginEditing;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

