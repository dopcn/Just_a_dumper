//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewCell.h"

#import "TWIWaterfallLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, TWISaleAreaMajorSaleCollectionViewCell, UICollectionView;

@interface TWISaleAreaTableViewCell : MTTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TWIWaterfallLayoutDelegate>
{
    TWISaleAreaMajorSaleCollectionViewCell *_majorCell;
    UICollectionView *_saleCollectionView;
}

@property(retain, nonatomic) UICollectionView *saleCollectionView; // @synthesize saleCollectionView=_saleCollectionView;
@property(retain, nonatomic) TWISaleAreaMajorSaleCollectionViewCell *majorCell; // @synthesize majorCell=_majorCell;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)waterfallLayout:(id)arg1 cellTypAtIndexPath:(id)arg2;
- (double)waterfallLayout:(id)arg1 itemHeightForWidth:(double)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

