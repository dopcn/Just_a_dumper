//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttCartoonBaseScene.h"

#import "MttCartoonGridCollectionViewDelegate-Protocol.h"
#import "MttCartoonRankingListHeaderDelegate-Protocol.h"

@class MttCartoonAppearance, MttCartoonFlowLayout, MttCartoonRankingListDataSource, MttCartoonRankingListHeader, NSMutableDictionary, NSString;

@interface MttCartoonRankingListScene : MttCartoonBaseScene <MttCartoonRankingListHeaderDelegate, MttCartoonGridCollectionViewDelegate>
{
    _Bool _headerViewIsFloating;
    _Bool _isDataLoaded;
    MttCartoonFlowLayout *_collectionViewLayout;
    long long _currentRankingType;
    MttCartoonAppearance *_appearance;
    MttCartoonRankingListDataSource *_dataSource;
    MttCartoonRankingListDataSource *_renqiDataSource;
    MttCartoonRankingListDataSource *_gengxinDataSource;
    MttCartoonRankingListDataSource *_gejiabangdanDataSource;
    MttCartoonRankingListHeader *_headerView;
    NSMutableDictionary *_offsetDict;
}

@property(retain, nonatomic) NSMutableDictionary *offsetDict; // @synthesize offsetDict=_offsetDict;
@property(nonatomic) _Bool isDataLoaded; // @synthesize isDataLoaded=_isDataLoaded;
@property(nonatomic) _Bool headerViewIsFloating; // @synthesize headerViewIsFloating=_headerViewIsFloating;
@property(retain, nonatomic) MttCartoonRankingListHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MttCartoonRankingListDataSource *gejiabangdanDataSource; // @synthesize gejiabangdanDataSource=_gejiabangdanDataSource;
@property(retain, nonatomic) MttCartoonRankingListDataSource *gengxinDataSource; // @synthesize gengxinDataSource=_gengxinDataSource;
@property(retain, nonatomic) MttCartoonRankingListDataSource *renqiDataSource; // @synthesize renqiDataSource=_renqiDataSource;
@property(retain, nonatomic) MttCartoonRankingListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MttCartoonAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) long long currentRankingType; // @synthesize currentRankingType=_currentRankingType;
- (void)setCollectionViewLayout:(id)arg1;
- (void).cxx_destruct;
- (void)gridCollectionView:(id)arg1 didSelectCell:(id)arg2 withUserInfo:(id)arg3;
- (void)header:(id)arg1 swithToType:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onTapHeaderButton:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)loadData;
- (_Bool)needLoadMore;
- (void)hideHeader;
- (void)showHeader;
- (void)beForcus:(_Bool)arg1;
- (void)registerCollectionView:(id)arg1;
- (id)collectionViewLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

