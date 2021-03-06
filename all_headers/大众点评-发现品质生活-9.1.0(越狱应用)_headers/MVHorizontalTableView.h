//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol MVHorizontalTableViewDataSource, MVHorizontalTableViewDelegate;

@interface MVHorizontalTableView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    NSRecursiveLock *_mainLock;
    NSMutableArray *_cellQueue;
    NSMutableDictionary *_visibleCells;
    NSMutableArray *_cellFrames;
    NSMutableArray *_selectedIndexes;
    NSMutableArray *_highlightedIndexes;
    NSMutableArray *_sectionHeaderPositionRangeArray;
    NSMutableArray *_sectionHeaderViews;
    NSMutableArray *_sectionHeaderFullBackgoundViews;
    NSIndexPath *_currentCellIndexPath;
    id <MVHorizontalTableViewDelegate> _newdelegate;
    id <MVHorizontalTableViewDataSource> _dataSource;
    double _cellSpacing;
    double _sectionSpacing;
    struct UIEdgeInsets _contentMargin;
}

@property(nonatomic) struct UIEdgeInsets contentMargin; // @synthesize contentMargin=_contentMargin;
@property(nonatomic) double sectionSpacing; // @synthesize sectionSpacing=_sectionSpacing;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
@property(nonatomic) __weak id <MVHorizontalTableViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MVHorizontalTableViewDelegate> delegate; // @synthesize delegate=_newdelegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)unhighlightCellAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)highlightCellAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)enqueueCell:(id)arg1 forKey:(id)arg2;
- (void)updateSectionHeaderView;
- (void)updateVisibleCells;
- (struct CGRect)visibleRect;
- (id)currentTouchCellIndex:(struct CGPoint)arg1;
- (id)visibleIndexPaths;
- (void)addCellAtIndexPath:(id)arg1;
- (void)deselectCellAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)selectCellAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2 nearestPosition:(int)arg3;
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)dequeueCellWithReusableIdentifier:(id)arg1;
- (void)reloadData;
- (void)initialize;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

