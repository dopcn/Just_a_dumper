//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicTableVC.h"

#import "RefreshCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "btnClickedCollectionDelegate-Protocol.h"

@class NSMutableArray, NSString, RefreshCollectionView, UIButton;

@interface RadioChannelMoreVC : MusicTableVC <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, RefreshCollectionViewDelegate, btnClickedCollectionDelegate>
{
    RefreshCollectionView *_radioMoreCollectionView;
    UIButton *_noMoreDataBtn;
    NSMutableArray *_moreDataSource;
    long long _iMaxCount;
    _Bool _isAutoFetchingMore;
    double _preOffset;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)doReloadData:(id)arg1;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)updateMoreBtn:(id)arg1;
- (void)pullPsCollectionViewDidTriggerLoadMore:(id)arg1;
- (_Bool)pullPsCollectionViewDidShouldLoadMore:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectItemAtRow:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_radioDataFetched:(id)arg1;
- (void)p_fetchData;
- (void)p_moreDataFailed:(id)arg1 userInfo:(id)arg2;
- (void)p_moreDataFetched:(id)arg1;
- (void)p_fetchMoreData;
- (_Bool)p_checkNetVork;
- (_Bool)p_canLoadMore;
- (id)p_addNoMoreBtn:(struct CGRect)arg1;
- (void)p_addCollectionView;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)tableViewStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

