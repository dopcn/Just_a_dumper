//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttCartoonBaseScene.h"

@class NSArray;

@interface MttCartoonCategoryScene : MttCartoonBaseScene
{
    _Bool _showSubTypeList;
    _Bool _isLoading;
    NSArray *_subTypeData;
    double _sizeRate;
    double _applicationWidth;
}

@property(nonatomic) double applicationWidth; // @synthesize applicationWidth=_applicationWidth;
@property(nonatomic) double sizeRate; // @synthesize sizeRate=_sizeRate;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool showSubTypeList; // @synthesize showSubTypeList=_showSubTypeList;
@property(retain, nonatomic) NSArray *subTypeData; // @synthesize subTypeData=_subTypeData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)sceneInnerClickBack;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)showListData;
- (void)loadMore;
- (_Bool)needLoadMore;
- (void)beForcus:(_Bool)arg1;
- (void)loadSubTypeData;
- (void)loadListData;
- (void)loadData;
- (void)registerCollectionView:(id)arg1;
- (double)scaledBySizeRate:(double)arg1;
- (id)init;

@end

