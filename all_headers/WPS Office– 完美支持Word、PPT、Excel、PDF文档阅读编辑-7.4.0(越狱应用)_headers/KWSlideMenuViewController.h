//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWPublicViewController.h"

#import "KWBannerSlideViewDelegate-Protocol.h"
#import "KWUserSummaryInfoViewDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class KWBannerSlideView, KWUserSummaryInfoView, NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UIView;

@interface KWSlideMenuViewController : KWPublicViewController <KWBannerSlideViewDelegate, SKStoreProductViewControllerDelegate, KWUserSummaryInfoViewDelegate>
{
    UIButton *_userPageButton;
    UIButton *_newMessageButton;
    UILabel *_newMessageReddotLabel;
    UIButton *_myCouponsButton;
    UIButton *_rateButton;
    UIButton *_settingButton;
    UIButton *_specialFeaturesButton;
    UIButton *_docerVipButton;
    UIView *_messageRotView;
    UIView *_settingRotView;
    KWBannerSlideView *_bannerSlideView;
    NSLayoutConstraint *_userPageHeightConstraint;
    NSLayoutConstraint *_userPageEqualHeightConstraint;
    NSLayoutConstraint *_myCouponsHeightConstraint;
    NSLayoutConstraint *_myCouponsEqualHeightConstraint;
    NSLayoutConstraint *_messageContainerHeightConstraint;
    NSLayoutConstraint *_messageContainerEqualHeightConstraint;
    NSLayoutConstraint *_settingsContainerBottomConstraint;
    NSLayoutConstraint *_settingsContainerHeightConstraint;
    NSLayoutConstraint *_bannerVerticalSpaceConstraint;
    NSLayoutConstraint *_bannerWidthConstraint;
    NSLayoutConstraint *_bannerHeightConstraint;
    NSLayoutConstraint *_specialFeaturesHeightConstraint;
    NSLayoutConstraint *_specialFeaturesEqualHeightConstraint;
    NSLayoutConstraint *_grayLineTopSpaceConstraint;
    NSLayoutConstraint *_grayLineBottomSpaceConstraint;
    NSLayoutConstraint *_grayLineHeightConstraint;
    NSLayoutConstraint *_blogContainerHeightConstraint;
    NSLayoutConstraint *_blogContainerEqualHeightConstraint;
    NSLayoutConstraint *_docerVipContainerHeightConstraint;
    NSLayoutConstraint *_docerVipContainerEqualHeightConstraint;
    KWUserSummaryInfoView *_userInfoView;
    _Bool _isFirstloadBanner;
    _Bool _isLoadingBanner;
    _Bool _appIsEnterBackground;
    NSArray *_bannerDatas;
}

@property(retain, nonatomic) NSArray *bannerDatas; // @synthesize bannerDatas=_bannerDatas;
- (void).cxx_destruct;
- (void)userSummaryButtonAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)bannerSlideView:(id)arg1 didSelectBanner:(id)arg2;
- (void)bannerSlideView:(id)arg1 didJumpNewBanner:(id)arg2;
- (void)showLatestShowBanner:(id)arg1;
- (id)latestShowBanner:(id)arg1;
- (void)fetchBannerCompleteWithBanners:(id)arg1;
- (void)startFetchBanners;
- (void)reloadBannerData;
- (void)checkIsShowReddotNotification:(id)arg1;
- (void)changeToLocalTabNotification:(id)arg1;
- (void)enterpriseActivateSuccessNotification:(id)arg1;
- (void)loginStateChangedNotification:(id)arg1;
- (void)loginInfoChangedNotification:(id)arg1;
- (_Bool)isChineseVersion;
- (void)dealloc;
- (void)showUserHelpAction:(id)arg1;
- (void)showShareFriendAction:(id)arg1;
- (void)showBlogAction:(id)arg1;
- (void)showHelpAction:(id)arg1;
- (void)showDocerVipAction:(id)arg1;
- (void)showMyCouponsAction:(id)arg1;
- (void)showNewMessageAction:(id)arg1;
- (void)showSpecialFeaturesAction:(id)arg1;
- (void)showUserPageAction:(id)arg1;
- (void)loginAction:(id)arg1;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)didBecomeActiveNotification:(id)arg1;
- (void)enterBackgroundNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

