//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NMShareMenuButtonDelegate-Protocol.h"

@class AttributedLabel, MTLabel, NMActionSheetBackgroundView, NSArray, NSString, UIButton, UILabel, UITapGestureRecognizer;
@protocol NMAAGShareMenuViewDelegate;

@interface NMAAGShareMenuView : UIView <NMShareMenuButtonDelegate>
{
    NSString *_inviteCode;
    unsigned long long _menuType;
    _Bool _isShowing;
    UIView *_containerView;
    NMActionSheetBackgroundView *_bgView;
    UIView *_maskView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_reviveSuperView;
    UILabel *_reviveTitleLabel;
    AttributedLabel *_reviveDescLabel;
    UIView *_singleLineView;
    UIView *_inviteSuperView;
    UILabel *_inviteCodeLabel;
    UILabel *_inviteDescLabel;
    UIButton *_copyButton;
    UIView *_shareButtonsView;
    NSArray *_shareButtonArray;
    UILabel *_ruleTitleLabel;
    MTLabel *_ruleDescLabel;
    id <NMAAGShareMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMAAGShareMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareButtonTouched:(unsigned long long)arg1;
- (void)copyBtnClick:(id)arg1;
- (void)cancelShare:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)dismissMenuView;
- (void)showMenuView:(id)arg1;
- (void)showMenuView;
- (void)layoutSubviews;
- (id)initWithShareMenuType:(unsigned long long)arg1 inviteCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

