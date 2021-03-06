//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class CCBMaskWindow, NSArray, NSString, UIFont, UILabel, UITextView;

@interface CCB_8_SBAlertView : UIView <UITextViewDelegate>
{
    NSString *_title;
    UIFont *_titleFont;
    id _message;
    UIFont *_messageFont;
    NSString *_messageCode;
    NSArray *_buttonTitleArr;
    UIFont *_buttonTitleFont;
    long long _textAlignment;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _contentDidClick;
    CCBMaskWindow *_m_window;
    UILabel *_titleLabel;
    UITextView *_messageTextView;
    NSArray *_buttonsArray;
    NSArray *_devidinglinesArray;
}

+ (void)showSuccMessage:(id)arg1;
+ (void)showErrorMessage:(id)arg1;
@property(copy, nonatomic) NSArray *devidinglinesArray; // @synthesize devidinglinesArray=_devidinglinesArray;
@property(copy, nonatomic) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(nonatomic) __weak UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak CCBMaskWindow *m_window; // @synthesize m_window=_m_window;
@property(copy, nonatomic) CDUnknownBlockType contentDidClick; // @synthesize contentDidClick=_contentDidClick;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *buttonTitleFont; // @synthesize buttonTitleFont=_buttonTitleFont;
@property(copy, nonatomic) NSArray *buttonTitleArr; // @synthesize buttonTitleArr=_buttonTitleArr;
@property(copy, nonatomic) NSString *messageCode; // @synthesize messageCode=_messageCode;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(copy, nonatomic) id message; // @synthesize message=_message;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)createDevidinglineImageView:(id)arg1;
- (id)createDevidinglines:(long long)arg1;
- (id)createButton:(long long)arg1 title:(id)arg2;
- (id)createAlertButtons:(id)arg1;
- (id)messageTextParagraphStyle;
- (id)codeStringAttributes;
- (id)messageStringAttributes;
- (id)createMessageViewAttrsString:(id)arg1 withMessageCode:(id)arg2;
- (double)devideLineWidth;
- (void)locationButtonsAndDivideLinesCoordinate:(struct CGSize)arg1;
- (_Bool)messageViewTextOnlyOneLine:(double)arg1 forMessage:(id)arg2;
- (double)calcStringHeight:(double)arg1 forAttrsString:(id)arg2;
- (double)calcMessageTextViewSizeHeight:(double)arg1 withViewOriginY:(double)arg2;
- (double)calcMessageTextViewOriginY;
- (void)locationTitleLabelPostionAndFrame:(double)arg1;
- (_Bool)titleLabelIsVisiable;
- (double)alertViewWidth;
- (double)widthForCalcMessageTextViewStringHeight:(double)arg1;
- (void)alertTypeDefaultLayout;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)buttonClick:(id)arg1;
- (void)setTitleFont:(id)arg1 messageFont:(id)arg2;
- (void)dismiss;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitleArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

