//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDUIViewController.h"

#import "FViewNoNetWorkDelegate-Protocol.h"
#import "GoodsListCollectionViewDelegate-Protocol.h"

@class BadgeButton, FViewNoNetWork, GoodsListCollectionView, NSString;

@interface WebShopCategoryDetailViewController : WDUIViewController <GoodsListCollectionViewDelegate, FViewNoNetWorkDelegate>
{
    NSString *_categoryTitle;
    long long _categoryId;
    GoodsListCollectionView *_collectionView;
    FViewNoNetWork *_noNetView;
    BadgeButton *_badgeButton;
}

@property(nonatomic) __weak BadgeButton *badgeButton; // @synthesize badgeButton=_badgeButton;
@property(nonatomic) __weak FViewNoNetWork *noNetView; // @synthesize noNetView=_noNetView;
@property(nonatomic) __weak GoodsListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
- (void).cxx_destruct;
- (void)GoodsListCollectionView:(id)arg1 goodsDetailCellAddShoppingCart:(id)arg2;
- (void)GoodsListCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)FViewNoNetWorkBtnPressed:(id)arg1;
- (void)goodsInfoChnaged:(id)arg1;
- (void)shoppingCartChanged:(id)arg1;
- (void)clickShoppingCart:(id)arg1;
- (void)loadDataWithPage:(long long)arg1;
- (void)initnavigationBar;
- (void)initViews;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

