//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HSTelSecretsafeModel, NSTimer, RTLabel, UIButton, UIImageView, UILabel;
@protocol HSZFPrivacyTelAlertViewProtocol;

@interface HSZFPrivacyCallAlertView : UIView
{
    RTLabel *_callTitleLabel;
    HSTelSecretsafeModel *_model;
    UIButton *_commonTelBtn;
    NSTimer *_timer;
    id <HSZFPrivacyTelAlertViewProtocol> _delegate;
    UILabel *_firstLineLabel;
    UILabel *_secondLineLabel;
    UIButton *_ChangeTelBtn;
    UIButton *_cancelTelBtn;
    UIImageView *_iconImage;
    UIView *_coverView;
    UIView *_bottomBackView;
}

@property(nonatomic) __weak UIView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak UIButton *cancelTelBtn; // @synthesize cancelTelBtn=_cancelTelBtn;
@property(nonatomic) __weak UIButton *ChangeTelBtn; // @synthesize ChangeTelBtn=_ChangeTelBtn;
@property(nonatomic) __weak UILabel *secondLineLabel; // @synthesize secondLineLabel=_secondLineLabel;
@property(nonatomic) __weak UILabel *firstLineLabel; // @synthesize firstLineLabel=_firstLineLabel;
@property(nonatomic) __weak id <HSZFPrivacyTelAlertViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIButton *commonTelBtn; // @synthesize commonTelBtn=_commonTelBtn;
@property(retain, nonatomic) HSTelSecretsafeModel *model; // @synthesize model=_model;
@property(nonatomic) __weak RTLabel *callTitleLabel; // @synthesize callTitleLabel=_callTitleLabel;
- (void).cxx_destruct;
- (void)secureCallClick:(id)arg1;
- (void)normalCallClick:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)removeFromWindow;
- (void)showInWindow;
- (void)loadingText;
- (void)setupWithModel:(id)arg1 delegate:(id)arg2;

@end

