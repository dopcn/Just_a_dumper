//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCarTypePageControl, UIButton, UICollectionView;
@protocol SBrandCarTypeViewDataSource;

@interface SBrandCarTypeView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <SBrandCarTypeViewDataSource> _dataSource;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _tapBrandCarTypeCallback;
    CDUnknownBlockType _showOtherCarTypeCallback;
    UICollectionView *_carTypeCollectionView;
    UICollectionView *_detailCollectionView;
    UIButton *_carTypeButton;
    SCarTypePageControl *_pageControl;
    UIButton *_otherButton;
    unsigned long long _style;
}

+ (double)carTypeViewHeight;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) SCarTypePageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIButton *carTypeButton; // @synthesize carTypeButton=_carTypeButton;
@property(retain, nonatomic) UICollectionView *detailCollectionView; // @synthesize detailCollectionView=_detailCollectionView;
@property(retain, nonatomic) UICollectionView *carTypeCollectionView; // @synthesize carTypeCollectionView=_carTypeCollectionView;
@property(copy, nonatomic) CDUnknownBlockType showOtherCarTypeCallback; // @synthesize showOtherCarTypeCallback=_showOtherCarTypeCallback;
@property(copy, nonatomic) CDUnknownBlockType tapBrandCarTypeCallback; // @synthesize tapBrandCarTypeCallback=_tapBrandCarTypeCallback;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <SBrandCarTypeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateUIWithPage:(unsigned long long)arg1;
- (id)cellForPage:(unsigned long long)arg1;
- (double)lastItemOffset;
- (double)firstItemOffset;
- (double)itemOffsetAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentPage;
- (id)collectionViewLayout;
- (_Bool)hasOtherCarType;
- (id)modelAtItem:(unsigned long long)arg1;
- (unsigned long long)numberOfCarType;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)initializeOtherButton;
- (void)tapBrandCarType;
- (void)initializeCarTypeButton;
- (void)initializeDetailCollectionView;
- (void)initializeCarTypeCollectionView;
- (void)initializePageControl;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)at_di_select_brand_driver_failed:(id)arg1;
- (void)at_di_select_brand_driver_success:(id)arg1;
- (void)at_di_select_brandcartype_failed:(id)arg1;
- (void)at_di_select_brandcartype_success:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

