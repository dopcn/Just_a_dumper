//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWPublicViewController.h"

#import "KWPrivilegeCollectionViewCellDelegate-Protocol.h"
#import "KWPrivilegeHeaderCollectionViewCellDelegate-Protocol.h"
#import "KWRoamLoginViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class KWPrivilegeViewModel, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UIImageView, UIView;

@interface KWPrivilegeViewController : KWPublicViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, KWPrivilegeHeaderCollectionViewCellDelegate, KWPrivilegeCollectionViewCellDelegate, KWRoamLoginViewDelegate>
{
    _Bool _isShowHeaderCell;
    _Bool _isFirstLoad;
    _Bool _isLoading;
    unsigned long long _presentingType;
    UIView *_vipChangeContainerView;
    UIButton *_userIconButton;
    UIImageView *_vipIconImageView;
    UICollectionView *_privilegeCollectionView;
    KWPrivilegeViewModel *_privilegeViewModel;
    NSMutableArray *_privilegeItemArray;
    NSMutableDictionary *_privilegeFoldStatusDic;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) _Bool isShowHeaderCell; // @synthesize isShowHeaderCell=_isShowHeaderCell;
@property(retain, nonatomic) NSMutableDictionary *privilegeFoldStatusDic; // @synthesize privilegeFoldStatusDic=_privilegeFoldStatusDic;
@property(retain, nonatomic) NSMutableArray *privilegeItemArray; // @synthesize privilegeItemArray=_privilegeItemArray;
@property(retain, nonatomic) KWPrivilegeViewModel *privilegeViewModel; // @synthesize privilegeViewModel=_privilegeViewModel;
@property(nonatomic) __weak UICollectionView *privilegeCollectionView; // @synthesize privilegeCollectionView=_privilegeCollectionView;
@property(retain, nonatomic) UIImageView *vipIconImageView; // @synthesize vipIconImageView=_vipIconImageView;
@property(nonatomic) __weak UIButton *userIconButton; // @synthesize userIconButton=_userIconButton;
@property(nonatomic) __weak UIView *vipChangeContainerView; // @synthesize vipChangeContainerView=_vipChangeContainerView;
@property(nonatomic) unsigned long long presentingType; // @synthesize presentingType=_presentingType;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)enterpriseActivateSuccessNotification:(id)arg1;
- (void)purchaseProjectionCompletionNotification:(id)arg1;
- (void)userInfoChangedNotification:(id)arg1;
- (void)userLoginStateChangedNotification:(id)arg1;
- (void)didTriggerFoldActionForPrivilegeCollectionViewCell:(id)arg1;
- (_Bool)isFoldForPrivilegeCollectionViewCell:(id)arg1;
- (_Bool)prefersFoldLayoutForPrivilegeCollectionViewCell:(id)arg1;
- (_Bool)prefersNarrowLayoutForPrivilegeCollectionViewCell:(id)arg1;
- (_Bool)prefersCardTypeLayoutForPrivilegeCollectionViewCell:(id)arg1;
- (struct UIEdgeInsets)insetsForPrivilegeCollectionViewCell:(id)arg1;
- (double)centerViewHeightForPrivilegeCollectionViewCell:(id)arg1;
- (long long)numberOfPrivilegeItemsAtHorizontalForPrivilegeCollectionViewCell:(id)arg1;
- (double)privilegeItemHeightForPrivilegeCollectionViewCell:(id)arg1;
- (void)privilegeCollectionViewCell:(id)arg1 didPrivilegeItemButtonClick:(id)arg2;
- (void)privilegeCollectionViewCellDidBuyButtonClick:(id)arg1;
- (void)didTriggerUserIconButtonForPrivilegeHeaderCollectionViewCell:(id)arg1;
- (_Bool)isCompanyUser;
- (_Bool)isFoldForPrivilegeModel:(id)arg1;
- (_Bool)isFoldLayoutForPrivilegeModel:(id)arg1;
- (_Bool)isNarrowLayout;
- (struct UIEdgeInsets)insetsForPrivilegeModel:(id)arg1;
- (long long)privilegeItemHeight:(id)arg1;
- (long long)numberOfPrivilegeItemsAtHorizontal:(id)arg1;
- (double)privilegeCellCenterViewHeight:(id)arg1;
- (double)heightForItemAtIndexPath:(id)arg1;
- (_Bool)isNeedSplitLayout:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showUserDetail;
- (void)reloadPrivilegeCollectionViewData;
- (void)refreshHeaderView;
- (void)refreshNavigationBarWithUserInfo:(id)arg1;
- (void)refreshWithUserInfo:(id)arg1;
- (void)requestPrivilegeInfosWithOnlyCache:(_Bool)arg1;
- (void)requestPrivilegeInfos;
- (void)setCanPullRefresh:(_Bool)arg1;
- (void)stopSuccessPullRefresh;
- (void)stopPullRefresh;
- (void)triggerPullRefresh;
- (void)initPrivilegeCollectionViewPullLoad;
- (void)reloadData;
- (void)setup;
- (void)showVipChangeAction:(id)arg1;
- (void)onModifyUserInfoAction:(id)arg1;
- (void)onCloseAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

