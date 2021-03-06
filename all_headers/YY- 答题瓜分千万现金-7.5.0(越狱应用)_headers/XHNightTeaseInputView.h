//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView;
@protocol XHNightTeaseInputViewDelegate;

@interface XHNightTeaseInputView : UIView <UITextViewDelegate>
{
    id <XHNightTeaseInputViewDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_titleLable;
    UILabel *_tipLable;
    UITextView *_messageTextView;
    UILabel *_placeholderLabel;
    UILabel *_countLabel;
    UIButton *_publishButton;
}

@property(retain, nonatomic) UIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UILabel *tipLable; // @synthesize tipLable=_tipLable;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <XHNightTeaseInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)clickPublishButton:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)clearText;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)layoutSubviews;
- (void)viewInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

