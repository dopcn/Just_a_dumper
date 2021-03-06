//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UIScrollView;

@interface CTTourDetailInfoDepartMask : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_departureCityPriceList;
    id _parentVC;
    UIScrollView *_mScrollView;
    UICollectionView *_departureView;
}

@property(retain, nonatomic) UICollectionView *departureView; // @synthesize departureView=_departureView;
@property(retain, nonatomic) UIScrollView *mScrollView; // @synthesize mScrollView=_mScrollView;
@property(nonatomic) __weak id parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) NSArray *departureCityPriceList; // @synthesize departureCityPriceList=_departureCityPriceList;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)removeSelf;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

