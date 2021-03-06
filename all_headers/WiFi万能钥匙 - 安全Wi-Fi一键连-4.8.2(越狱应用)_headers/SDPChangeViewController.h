//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDPBaseViewController.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface SDPChangeViewController : SDPBaseViewController
{
    UIView *_viewIphoneXHair;
    NSLayoutConstraint *_hairHeightConstraint;
    UIButton *_btnBack;
    UIView *_viewTop;
    UILabel *_labelChange;
    UIImageView *_ivTop;
    UIButton *_btnCharge;
    UIButton *_btnWithdraw;
}

@property(nonatomic) __weak UIButton *btnWithdraw; // @synthesize btnWithdraw=_btnWithdraw;
@property(nonatomic) __weak UIButton *btnCharge; // @synthesize btnCharge=_btnCharge;
@property(nonatomic) __weak UIImageView *ivTop; // @synthesize ivTop=_ivTop;
@property(nonatomic) __weak UILabel *labelChange; // @synthesize labelChange=_labelChange;
@property(nonatomic) __weak UIView *viewTop; // @synthesize viewTop=_viewTop;
@property(nonatomic) __weak UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(nonatomic) __weak NSLayoutConstraint *hairHeightConstraint; // @synthesize hairHeightConstraint=_hairHeightConstraint;
@property(nonatomic) __weak UIView *viewIphoneXHair; // @synthesize viewIphoneXHair=_viewIphoneXHair;
- (void).cxx_destruct;
- (void)doQueryBalanceRequest;
- (void)didBtnWithdrawTapped:(id)arg1;
- (void)didBtnChargeTapped:(id)arg1;
- (void)didBtnBackTapped:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)loadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

