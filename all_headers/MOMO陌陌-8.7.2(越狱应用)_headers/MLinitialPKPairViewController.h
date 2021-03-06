//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLViewController.h"

#import "MLShouldResponseGesture-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MLBroadcasterPKProcedureDataSource, MLInitialPKPairConfigureItem, MLShowRoomProfile, NSArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UIImageView, UILabel, UIView;
@protocol MLinitialPKPairViewControllerDelegate;

@interface MLinitialPKPairViewController : MLViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MLShouldResponseGesture>
{
    MLBroadcasterPKProcedureDataSource *_pkProcedureDataSource;
    id <MLinitialPKPairViewControllerDelegate> _delegate;
    MLInitialPKPairConfigureItem *_parentItem;
    MLShowRoomProfile *_roomProfile;
    UIImageView *_titleImageView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_containerView;
    UIView *_bottomBarView;
    UIImageView *_avatarView;
    UILabel *_winsLabel;
    UIButton *_backButton;
    NSArray *_configureItems;
    NSArray *_subitems;
}

@property(copy, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
@property(retain, nonatomic) NSArray *configureItems; // @synthesize configureItems=_configureItems;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *winsLabel; // @synthesize winsLabel=_winsLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) MLShowRoomProfile *roomProfile; // @synthesize roomProfile=_roomProfile;
@property(retain, nonatomic) MLInitialPKPairConfigureItem *parentItem; // @synthesize parentItem=_parentItem;
@property __weak id <MLinitialPKPairViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MLBroadcasterPKProcedureDataSource *pkProcedureDataSource; // @synthesize pkProcedureDataSource=_pkProcedureDataSource;
- (void).cxx_destruct;
- (_Bool)shouldResponseGestureInLocation:(struct CGPoint)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)targetItems;
- (id)takeCrownPKImg;
- (id)linkScreenPKImg;
- (id)arenaImg;
- (void)logItem:(id)arg1 isClick:(_Bool)arg2;
- (void)goToSubitemWithParentItem:(id)arg1;
- (void)reloadCollectionView;
- (void)handleBackButton;
- (void)setupBackButton;
- (void)updateFromParentItem;
- (void)bottomContentTapAction;
- (void)setupWinsLabel;
- (void)setupAvatarView;
- (void)setupBottomBarView;
- (void)setupCollectionView;
- (void)setupTitleImageView;
- (void)setupBlurEffectView;
- (void)setupContainerView;
- (double)contentHeight;
- (void)updateUI;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveUpdatePKFriendInvitingNumber:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

