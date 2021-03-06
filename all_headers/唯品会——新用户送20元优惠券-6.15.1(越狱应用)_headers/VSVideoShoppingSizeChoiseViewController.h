//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UICollectionView, UIView, VSSkuFieldLoadingView, VSVideoShoppingSizeChoiseViewModel;

@interface VSVideoShoppingSizeChoiseViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    CDUnknownBlockType _VideoShoppingSizeChoiseVCWillDismiss;
    UIView *_sizeContainerView;
    NSLayoutConstraint *_sizeContainerViewTop;
    NSLayoutConstraint *_sizeContainerViewHeight;
    NSLayoutConstraint *_spaceLineHeight3;
    UICollectionView *_sizesCollectionView;
    UIButton *_confirmButton;
    UIView *_confirmBgView;
    UIButton *_collectButton;
    UIView *_backBgView;
    VSSkuFieldLoadingView *_loadingView;
    VSVideoShoppingSizeChoiseViewModel *_viewModel;
}

@property(retain, nonatomic) VSVideoShoppingSizeChoiseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) VSSkuFieldLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIView *backBgView; // @synthesize backBgView=_backBgView;
@property(nonatomic) __weak UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(nonatomic) __weak UIView *confirmBgView; // @synthesize confirmBgView=_confirmBgView;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UICollectionView *sizesCollectionView; // @synthesize sizesCollectionView=_sizesCollectionView;
@property(nonatomic) __weak NSLayoutConstraint *spaceLineHeight3; // @synthesize spaceLineHeight3=_spaceLineHeight3;
@property(nonatomic) __weak NSLayoutConstraint *sizeContainerViewHeight; // @synthesize sizeContainerViewHeight=_sizeContainerViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *sizeContainerViewTop; // @synthesize sizeContainerViewTop=_sizeContainerViewTop;
@property(nonatomic) __weak UIView *sizeContainerView; // @synthesize sizeContainerView=_sizeContainerView;
@property(copy, nonatomic) CDUnknownBlockType VideoShoppingSizeChoiseVCWillDismiss; // @synthesize VideoShoppingSizeChoiseVCWillDismiss=_VideoShoppingSizeChoiseVCWillDismiss;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)selectedSkuId;
- (void)collectButton_onClick:(id)arg1;
- (void)confirmButton_onClick:(id)arg1;
- (void)backButton_onClick:(id)arg1;
- (void)closeVideoShoppintSizeVC;
- (void)updateSizeContainerViewHeight;
- (void)reloadButtonDidClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)viewDidLoad;
- (void)bindViewModel;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

