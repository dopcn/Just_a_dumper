//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;
@protocol QZCellScrollViewDataSource, QZCellScrollViewDelegate;

@interface QZCellScrollView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_visiblePages;
    NSMutableArray *_recycledPages;
    _Bool _ignoreScroll;
    unsigned long long _centerPageIndex;
    unsigned long long _pagesCount;
    id <QZCellScrollViewDataSource> _dataSource;
    id <QZCellScrollViewDelegate> _delegate;
    double _pagePadding;
    double _cellOffsetY;
    struct CGSize _cellSize;
}

@property(nonatomic) double cellOffsetY; // @synthesize cellOffsetY=_cellOffsetY;
@property(nonatomic) double pagePadding; // @synthesize pagePadding=_pagePadding;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) __weak id <QZCellScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QZCellScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollToEnd:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)reloadData;
- (long long)centerPageIndex;
- (void)doLoadStrategy:(_Bool)arg1;
- (void)tilePages;
- (void)executeLoadStrategy:(_Bool)arg1;
- (void)layoutPageViewOfIndex:(long long)arg1 widthData:(id)arg2;
- (struct CGRect)frameForPageAtIndex:(long long)arg1;
- (_Bool)existPageInRecycle:(id)arg1;
- (id)quickQueryPage:(id)arg1;
- (id)dequeueReusablePage;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

