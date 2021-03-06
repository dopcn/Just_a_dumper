//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KTVLiveRankHeaderCellDelegate-Protocol.h"
#import "MLCollectionViewDataSource-Protocol.h"
#import "MLCollectionViewDelegate-Protocol.h"
#import "MLCollectionViewDelegateFlowLayout-Protocol.h"

@class KTVLivingRankVM, NSString;
@protocol KTVLivingRankVLLDelegate;

@interface KTVLivingRankVLL : NSObject <KTVLiveRankHeaderCellDelegate, MLCollectionViewDataSource, MLCollectionViewDelegateFlowLayout, MLCollectionViewDelegate>
{
    long long sectionsCount;
    KTVLivingRankVM *_viewModel;
    id <KTVLivingRankVLLDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVLivingRankVLLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVLivingRankVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)mlCollectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)mlCollectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)mlCollectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)mlCollectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)mlCollectionView:(id)arg1 willDisplayCellWithIndex:(long long)arg2;
- (_Bool)haveMoreDataViewForMLCollectionView:(id)arg1;
- (void)mlCollectionView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (void)mlCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInMLCollectionView:(id)arg1;
- (id)mlCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)mlCollectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureCell:(id)arg1 forIndex:(long long)arg2;
- (void)KTVLiveRankHeaderCell_actionSelect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

