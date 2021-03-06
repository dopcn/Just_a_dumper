//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttAlertMessageView.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class MttAttributedLabel, NSString, UIButton;
@protocol MttAlertMessageSecurityViewDelegate;

@interface MttAlertMessageSecurityView : MttAlertMessageView <TTTAttributedLabelDelegate>
{
    id <MttAlertMessageSecurityViewDelegate> _delegate;
    UIButton *_iconButton;
    MttAttributedLabel *_descriptionLabel;
}

@property(retain, nonatomic) MttAttributedLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) __weak id <MttAlertMessageSecurityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)iconPressed;
- (void)layoutSubviews;
- (void)createUI;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

