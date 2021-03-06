//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, SNSBaseViewController, UIColor;

@interface SNSHPTextViewInternal : UITextView
{
    _Bool _displayPlaceHolder;
    _Bool _isEmojiInputView;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    long long _viewType;
    SNSBaseViewController *_vc;
}

@property(nonatomic) __weak SNSBaseViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isEmojiInputView; // @synthesize isEmojiInputView=_isEmojiInputView;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool displayPlaceHolder; // @synthesize displayPlaceHolder=_displayPlaceHolder;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)showTextLimitTitle;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)getFeedDetailCommentSelectedString;
- (void)deleteContent;
- (void)copyContent;
- (void)cancelContent;
- (void)transmitContent;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setScrollable:(_Bool)arg1;
- (void)setText:(id)arg1;

@end

