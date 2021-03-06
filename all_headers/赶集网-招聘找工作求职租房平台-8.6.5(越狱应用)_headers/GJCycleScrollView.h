//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UIPageControl, UIScrollView;
@protocol CycleScrollViewDatasource, CycleScrollViewDelegate;

@interface GJCycleScrollView : UIView <UIScrollViewDelegate>
{
    long long _totalPages;
    long long _curPage;
    NSMutableArray *_curViews;
    _Bool _notNormalControl;
    float _pageControlBottomSpace;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    long long _currentPage;
    id <CycleScrollViewDatasource> _datasource;
    id <CycleScrollViewDelegate> _delegate;
    NSTimer *_animationTimer;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic, setter=setDelegate:) __weak id <CycleScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=setDataource:) __weak id <CycleScrollViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) float pageControlBottomSpace; // @synthesize pageControlBottomSpace=_pageControlBottomSpace;
@property(nonatomic) _Bool notNormalControl; // @synthesize notNormalControl=_notNormalControl;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)animationTimerDidFired:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setViewContent:(id)arg1 atIndex:(long long)arg2;
- (void)handleTap:(id)arg1;
- (long long)validPageValue:(long long)arg1;
- (void)getDisplayImagesWithCurpage:(long long)arg1;
- (void)loadData;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

