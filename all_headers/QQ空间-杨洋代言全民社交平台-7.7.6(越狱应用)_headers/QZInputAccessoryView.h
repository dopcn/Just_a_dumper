//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLKeyboardView.h"

@class UIButton, UIImageView;
@protocol QZInputAccessoryViewDelegate;

@interface QZInputAccessoryView : DLKeyboardView
{
    UIButton *_emotionButton;
    UIButton *_mentionButton;
    UIButton *_photoButton;
    UIButton *_doneButton;
    UIImageView *_backgroundView;
    id <QZInputAccessoryViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QZInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doneAction:(id)arg1;
- (void)photoAction:(id)arg1;
- (void)mentionAction:(id)arg1;
- (void)emotionAction:(id)arg1;
- (void)switchToDefaultKeyboardStatus;
- (void)switchToEmotionsKeyboardStatus;
- (void)commentInit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

