//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayDropDownField.h"

@class NSString, UIButton, UIViewController;
@protocol NLPayActionSheetFieldDelegate;

@interface NLPayActionSheetField : NLPayDropDownField
{
    id <NLPayActionSheetFieldDelegate> _delegate;
    UIViewController *_parentViewController;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak id <NLPayActionSheetFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleActionSheet:(long long)arg1;
@property(retain, nonatomic) NSString *text;
- (void)updateButtonTitleWithIndex:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;

@end

