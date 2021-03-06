//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SDCAlertViewContentViewDelegate-Protocol.h"

@class NSString, SDCAlertViewBackgroundView, SDCAlertViewContentView, UIColor, UIFont;
@protocol SDCAlertViewDelegate, SDCAlertViewTransitioning;

@interface SDCAlertView : UIView <SDCAlertViewContentViewDelegate>
{
    long long _alertViewStyle;
    id <SDCAlertViewDelegate> _delegate;
    CDUnknownBlockType _didPresentHandler;
    CDUnknownBlockType _clickedButtonHandler;
    CDUnknownBlockType _shouldDismissHandler;
    CDUnknownBlockType _willDismissHandler;
    CDUnknownBlockType _didDismissHandler;
    CDUnknownBlockType _shouldDeselectButtonHandler;
    id <SDCAlertViewTransitioning> _transitionCoordinator;
    SDCAlertViewBackgroundView *_alertBackgroundView;
    SDCAlertViewContentView *_alertContentView;
}

+ (void)initialize;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 subview:(id)arg3 buttons:(id)arg4;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 subview:(id)arg3;
+ (id)alertWithTitle:(id)arg1 subview:(id)arg2;
+ (id)alertWithSubview:(id)arg1;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
+ (id)alertViewWithAlertController:(id)arg1;
+ (id)cancelActionForAlertController:(id)arg1;
@property(retain, nonatomic) SDCAlertViewContentView *alertContentView; // @synthesize alertContentView=_alertContentView;
@property(retain, nonatomic) SDCAlertViewBackgroundView *alertBackgroundView; // @synthesize alertBackgroundView=_alertBackgroundView;
@property(retain, nonatomic) id <SDCAlertViewTransitioning> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(copy, nonatomic) CDUnknownBlockType shouldDeselectButtonHandler; // @synthesize shouldDeselectButtonHandler=_shouldDeselectButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType didDismissHandler; // @synthesize didDismissHandler=_didDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType willDismissHandler; // @synthesize willDismissHandler=_willDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType shouldDismissHandler; // @synthesize shouldDismissHandler=_shouldDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType clickedButtonHandler; // @synthesize clickedButtonHandler=_clickedButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType didPresentHandler; // @synthesize didPresentHandler=_didPresentHandler;
@property(nonatomic) __weak id <SDCAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long alertViewStyle; // @synthesize alertViewStyle=_alertViewStyle;
- (void).cxx_destruct;
- (void)positionSelf;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)tappedButtonAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfButtons;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
@property(nonatomic) long long cancelButtonIndex;
- (void)alertContentView:(id)arg1 didTapButtonAtIndex:(unsigned long long)arg2;
- (_Bool)alertContentView:(id)arg1 shouldDeselectButtonAtIndex:(unsigned long long)arg2;
- (void)updateFirstButtonEnabledStatus;
- (void)monitorChangesForTextFields:(id)arg1;
- (void)createContentViewWithTitle:(id)arg1 message:(id)arg2;
@property(readonly, nonatomic) UIView *contentView;
- (void)setAlwaysShowsButtonsVertically:(_Bool)arg1;
- (_Bool)alwaysShowsButtonsVertically;
- (void)setAttributedMessage:(id)arg1;
- (id)attributedMessage;
@property(copy, nonatomic) NSString *message;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
@property(copy, nonatomic) NSString *title;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)wasDismissedWithButtonIndex:(long long)arg1;
- (void)willBeDismissedWithButtonIndex:(long long)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)wasPresented;
- (void)willBePresented;
- (void)show;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)init;
- (void)showWithDismissHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) double labelSpacing;
@property(nonatomic) struct UIEdgeInsets contentPadding;
@property(retain, nonatomic) UIColor *buttonTextColor;
@property(retain, nonatomic) UIFont *normalButtonFont;
@property(retain, nonatomic) UIFont *suggestedButtonFont;
@property(retain, nonatomic) UIColor *textFieldTextColor;
@property(retain, nonatomic) UIFont *textFieldFont;
@property(retain, nonatomic) UIColor *messageLabelTextColor;
@property(retain, nonatomic) UIFont *messageLabelFont;
@property(retain, nonatomic) UIColor *titleLabelTextColor;
@property(retain, nonatomic) UIFont *titleLabelFont;
- (_Bool)attributedString:(id)arg1 hasAttribute:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

