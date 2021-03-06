//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JHSCollectionView, JHSSectionDirector, NSArray, NSString;

@interface JHSCommendView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    JHSSectionDirector *_sectionDirector;
    _Bool _isCartTitle;
    CDUnknownBlockType _didSeleteBlock;
    NSArray *_dataList;
    NSArray *_titleList;
    JHSCollectionView *_productCollectionView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) JHSCollectionView *productCollectionView; // @synthesize productCollectionView=_productCollectionView;
@property(nonatomic) _Bool isCartTitle; // @synthesize isCartTitle=_isCartTitle;
@property(retain, nonatomic) NSArray *titleList; // @synthesize titleList=_titleList;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(copy, nonatomic) CDUnknownBlockType didSeleteBlock; // @synthesize didSeleteBlock=_didSeleteBlock;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)rowFactory;
- (void)wrappingCollectionViewWithLuaView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

