//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWPublicViewController.h"

@class KWLoginGuidePrivilegeViewController, NSString, UIButton, UIImageView, UILabel, UIView;

@interface KWLoginGuideViewController : KWPublicViewController
{
    int _quickLoginType;
    NSString *_subTitle;
    UIButton *_loginButton;
    UIButton *_otherLoginButton;
    UIImageView *_backgroundImageView;
    UIView *_homeContainerView;
    UIView *_detailContainerView;
    UILabel *_subTitleLabel;
    KWLoginGuidePrivilegeViewController *_loginGuidePrivilegeViewController;
}

@property(nonatomic) __weak KWLoginGuidePrivilegeViewController *loginGuidePrivilegeViewController; // @synthesize loginGuidePrivilegeViewController=_loginGuidePrivilegeViewController;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UIView *detailContainerView; // @synthesize detailContainerView=_detailContainerView;
@property(nonatomic) __weak UIView *homeContainerView; // @synthesize homeContainerView=_homeContainerView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIButton *otherLoginButton; // @synthesize otherLoginButton=_otherLoginButton;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) int quickLoginType; // @synthesize quickLoginType=_quickLoginType;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)otherLoginAction:(id)arg1;
- (void)loginAction:(id)arg1;
- (void)hideDetailAction:(id)arg1;
- (void)showDetailAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

