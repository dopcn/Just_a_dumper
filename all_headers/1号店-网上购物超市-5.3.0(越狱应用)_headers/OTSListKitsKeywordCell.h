//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSBase/OTSCollectionViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, OTSCollectionView;

@interface OTSListKitsKeywordCell : OTSCollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    OTSCollectionView *_wordView;
    long long _cellType;
    NSArray *_wordsArray;
    NSString *_searchKeyword;
    double _vSpace;
    double _hSpace;
}

+ (struct CGSize)sizeForCellType:(long long)arg1;
@property(nonatomic) double hSpace; // @synthesize hSpace=_hSpace;
@property(nonatomic) double vSpace; // @synthesize vSpace=_vSpace;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSArray *wordsArray; // @synthesize wordsArray=_wordsArray;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) OTSCollectionView *wordView; // @synthesize wordView=_wordView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateWithCellData:(id)arg1 keyword:(id)arg2 cellType:(long long)arg3;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

