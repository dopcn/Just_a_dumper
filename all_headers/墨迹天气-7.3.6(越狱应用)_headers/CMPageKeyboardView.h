//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextView;
@protocol CMPageKeyboardViewDelegate;

@interface CMPageKeyboardView : UIView <UITextViewDelegate>
{
    _Bool _isPageKeyboardShow;
    id <CMPageKeyboardViewDelegate> _delegate;
    UITextView *_textView;
    long long _pageCount;
    UIButton *_sureButton;
    UIButton *_cancelButton;
    UILabel *_detailLabel;
    UILabel *_label1;
    UILabel *_label2;
    UIView *_pageView;
}

@property(retain, nonatomic) UIView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(nonatomic) _Bool isPageKeyboardShow; // @synthesize isPageKeyboardShow=_isPageKeyboardShow;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <CMPageKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissKeyboardClearText;
- (void)keyboardHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)addNotification;
- (void)clickedSureBtn:(id)arg1;
- (void)clickedCancelBtn:(id)arg1;
- (void)setDetailLabelText:(id)arg1;
- (id)setButtonWithTitle:(id)arg1;
- (void)initPageView;
- (void)initTextView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

