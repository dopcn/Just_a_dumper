//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableSet, UITapGestureRecognizer;
@protocol DARecycledScrollViewDataSource, DARecycledScrollViewDelegate;

@interface DARecycledScrollView : UIScrollView
{
    _Bool _infinite;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <DARecycledScrollViewDataSource> _dataSource;
    NSMutableSet *_visibleTileViews;
    NSMutableSet *_recycledTileViews;
}

@property(retain, nonatomic) NSMutableSet *recycledTileViews; // @synthesize recycledTileViews=_recycledTileViews;
@property(retain, nonatomic) NSMutableSet *visibleTileViews; // @synthesize visibleTileViews=_visibleTileViews;
@property(nonatomic) id <DARecycledScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool infinite; // @synthesize infinite=_infinite;
- (void)layoutSubviews;
- (struct CGSize)contentSize;
- (void)viewTapped:(id)arg1;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) id <DARecycledScrollViewDelegate> delegate;
- (id)visibleTileViewForIndex:(unsigned long long)arg1;
- (double)widthForTileAtIndex:(long long)arg1;
- (double)combinedWidthForTilesUntilIndex:(long long)arg1;
- (void)tileViews;
- (unsigned long long)tilesCount;
- (_Bool)isDisplayingTileForIndex:(unsigned long long)arg1;
- (void)configureTileView:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)clear;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)jumpToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)reloadData;
- (id)dequeueRecycledTileView;
- (void)dealloc;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

