//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDDeviceCommonViewController.h"

@class NSLayoutConstraint, UIButton, UILabel;

@interface CDDeviceBindSuccessViewController : CDDeviceCommonViewController
{
    UILabel *_tipsLabel;
    UIButton *_inputInviteCodeButton;
    NSLayoutConstraint *_layoutTopOfTipsImageView;
}

+ (id)controller;
@property(nonatomic) __weak NSLayoutConstraint *layoutTopOfTipsImageView; // @synthesize layoutTopOfTipsImageView=_layoutTopOfTipsImageView;
@property(nonatomic) __weak UIButton *inputInviteCodeButton; // @synthesize inputInviteCodeButton=_inputInviteCodeButton;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void).cxx_destruct;
- (id)pageAttribuite;
- (_Bool)cd_prefersInteractivePopGestureRecognizerEnabled;
- (id)cd_preferredBackItem;
- (void)showInputInviteCodeAlert;
- (void)inviteCodeButtonClicked:(id)arg1;
- (void)bindSuccessAction:(id)arg1;
- (void)requesetInviteCode:(CDUnknownBlockType)arg1;
- (void)updateDeviceProductType;
- (void)viewDidLoad;

@end

