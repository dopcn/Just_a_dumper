//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BDNCollectionViewAdapterViewLayout, NSArray, UICollectionView, UICollectionViewLayout;

@interface BDNCollectionViewAdapter : NSObject
{
    UICollectionView *_bridgedCollectionView;
    BDNCollectionViewAdapterViewLayout *_internalWrappedCollectionViewLayout;
    NSArray *_internalSections;
}

@property(copy, nonatomic) NSArray *internalSections; // @synthesize internalSections=_internalSections;
@property(retain, nonatomic) BDNCollectionViewAdapterViewLayout *internalWrappedCollectionViewLayout; // @synthesize internalWrappedCollectionViewLayout=_internalWrappedCollectionViewLayout;
@property(nonatomic) __weak UICollectionView *bridgedCollectionView; // @synthesize bridgedCollectionView=_bridgedCollectionView;
- (void).cxx_destruct;
- (id)sectionsInRect:(struct CGRect)arg1;
- (void)updateSections:(id)arg1;
- (void)unregiseterSectionData:(id)arg1;
- (void)regiseterSectionData:(id)arg1;
- (unsigned long long)safeSectionCount;
@property(readonly, copy, nonatomic) NSArray *sections;
@property(readonly, nonatomic) UICollectionViewLayout *wrappedCollectionViewLayout;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)sectionDataInsertSections:(id)arg1 atSection:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sectionDataAppendSections:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataAtSectionsDelete:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataDeleteSections:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataInsert:(id)arg1 atSection:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sectionDataAppend:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataAtSectionDelete:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)sectionDataDelete:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataAtSectionReload:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)sectionDataReload:(id)arg1 animated:(_Bool)arg2;
- (void)collectionViewPerformBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)collectionViewAdapterReload;
- (void)sectionDataDeleteInnerFooter:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataInsertInnerFooter:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataReloadInnerFooter:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataDeleteFakeFooter:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataInsertFakeFooter:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataReloadFakeFooter:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataDelete:(id)arg1 items:(id)arg2 animated:(_Bool)arg3;
- (void)sectionDataInsert:(id)arg1 items:(id)arg2 animated:(_Bool)arg3;
- (void)sectionDataReload:(id)arg1 items:(id)arg2 animated:(_Bool)arg3;
- (void)sectionDataDeleteInnerHeader:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataInsertInnerHeader:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataReloadInnerHeader:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataDeleteFakeHeader:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataInsertFakeHeader:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataReloadFakeHeader:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)sectionDataRecommendedInnerFooterFrame:(id)arg1;
- (struct CGRect)sectionDataRecommendedFakeFooterFrame:(id)arg1;
- (struct CGRect)sectionDataRecommendedFrame:(id)arg1 item:(unsigned long long)arg2;
- (struct CGRect)sectionDataRecommendedInnerHeaderFrame:(id)arg1;
- (struct CGRect)sectionDataRecommendedFakeHeaderFrame:(id)arg1;
- (void)tryScrollCollectionViewToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)sectionDataScrollToInnerFooterTop:(id)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToFakeFooterTop:(id)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToTop:(id)arg1 item:(unsigned long long)arg2 offset:(double)arg3 animated:(_Bool)arg4;
- (void)sectionDataScrollToInnerHeaderTop:(id)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToFakeHeaderTop:(id)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToInnerFooterTop:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataScrollToFakeFooterTop:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataScrollToTop:(id)arg1 item:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToInnerHeaderTop:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataScrollToFakeHeaderTop:(id)arg1 animated:(_Bool)arg2;
- (void)sectionDataScrollToInnerFooter:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToFakeFooter:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollTo:(id)arg1 item:(unsigned long long)arg2 atScrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)sectionDataScrollToInnerHeader:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)sectionDataScrollToFakeHeader:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end

