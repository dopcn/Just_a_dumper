//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableSet, NSString, UICollectionViewFlowLayout;
@protocol SEARCHBaseCollectionViewDelegate;

@interface SEARCHBaseCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _circularSlide;
    id <SEARCHBaseCollectionViewDelegate> _baseDelegate;
    UICollectionViewFlowLayout *_layout;
    NSArray *_resultList;
    NSArray *_collectionDataSource;
    NSMutableSet *_gaSet;
}

@property(retain, nonatomic) NSMutableSet *gaSet; // @synthesize gaSet=_gaSet;
@property(retain, nonatomic) NSArray *collectionDataSource; // @synthesize collectionDataSource=_collectionDataSource;
@property(nonatomic) _Bool circularSlide; // @synthesize circularSlide=_circularSlide;
@property(retain, nonatomic) NSArray *resultList; // @synthesize resultList=_resultList;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <SEARCHBaseCollectionViewDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)offsetIndexCalculate;
- (void)circularConvertContentOffset;
- (void)circularStartPosition:(long long)arg1;
- (long long)circularConvertIndex:(long long)arg1 count:(long long)arg2;
- (id)constructCollectionViewDataSource:(id)arg1;
- (void)configureDisplay:(_Bool)arg1 horizontalIndicator:(_Bool)arg2 verticalIndicator:(_Bool)arg3 bouces:(_Bool)arg4;
- (void)configureLayout:(long long)arg1 itemSpace:(double)arg2 lineSpace:(double)arg3 itemSize:(struct CGSize)arg4;
- (void)scrollGa:(long long)arg1;
- (void)ga:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

