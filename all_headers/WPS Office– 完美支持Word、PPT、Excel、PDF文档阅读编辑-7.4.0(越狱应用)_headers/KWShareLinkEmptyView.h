//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol KWShareLinkEmptyViewCellDelegate;

@interface KWShareLinkEmptyView : UIView
{
    _Bool _isLogined;
    id <KWShareLinkEmptyViewCellDelegate> _delegate;
    UILabel *_tipsUpLabel;
    UILabel *_tipsDownLabel;
    UILabel *_unloginTipsLabel;
    UIButton *_loginButton;
}

@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak UILabel *unloginTipsLabel; // @synthesize unloginTipsLabel=_unloginTipsLabel;
@property(nonatomic) __weak UILabel *tipsDownLabel; // @synthesize tipsDownLabel=_tipsDownLabel;
@property(nonatomic) __weak UILabel *tipsUpLabel; // @synthesize tipsUpLabel=_tipsUpLabel;
@property(nonatomic) __weak id <KWShareLinkEmptyViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLogined; // @synthesize isLogined=_isLogined;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onLoginAction:(id)arg1;
- (void)designContent;
- (void)initContent;
- (void)awakeFromNib;

@end

