//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CTTourSearchFilter, CTTourSearchFilterViewController, NSIndexPath, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton, UICollectionView, UIView;

@interface CTTourSearchFilterRouteViewController : CTRootViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    UIView *_maskView;
    long long _maxCellsPerSection;
    NSMutableDictionary *_cellSizeCache;
    UIView *_panelView;
    UIButton *_resetBtn;
    CTTourSearchFilter *_localFilter;
    NSIndexPath *_indexPath;
    CTTourSearchFilterViewController *_parentVC;
    NSLayoutConstraint *_topViewHeightConstraint;
    UIButton *_finishBtn;
}

@property(nonatomic) __weak UIButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(nonatomic) __weak NSLayoutConstraint *topViewHeightConstraint; // @synthesize topViewHeightConstraint=_topViewHeightConstraint;
@property(nonatomic) __weak CTTourSearchFilterViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) CTTourSearchFilter *localFilter; // @synthesize localFilter=_localFilter;
@property(nonatomic) __weak UIButton *resetBtn; // @synthesize resetBtn=_resetBtn;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) NSMutableDictionary *cellSizeCache; // @synthesize cellSizeCache=_cellSizeCache;
@property(nonatomic) long long maxCellsPerSection; // @synthesize maxCellsPerSection=_maxCellsPerSection;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)checkResetButtonEnable;
- (void)backAction:(id)arg1;
- (void)finishAction:(id)arg1;
- (void)resetAction:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)category_caculateCollectionViewCellSizeIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)tapAction:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)reloadTableViewWithFilter:(id)arg1;
- (id)initWithParentVC:(id)arg1 indexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

