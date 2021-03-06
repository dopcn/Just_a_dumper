//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;
@protocol YSFPageViewDataSource, YSFPageViewDelegate;

@interface YSFPageView : UIView <UIScrollViewDelegate>
{
    long long _currentPage;
    long long _currentPageForRotation;
    UIScrollView *_scrollView;
    id <YSFPageViewDataSource> _dataSource;
    id <YSFPageViewDelegate> _pageViewDelegate;
    NSMutableArray *_pages;
}

@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(nonatomic) __weak id <YSFPageViewDelegate> pageViewDelegate; // @synthesize pageViewDelegate=_pageViewDelegate;
@property(nonatomic) __weak id <YSFPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)raisePageIndexChangedDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadPage;
- (void)calculatePageNumbers;
- (void)loadPagesForCurrentPage:(long long)arg1;
- (long long)pageInBound:(long long)arg1 min:(long long)arg2 max:(long long)arg3;
- (long long)currentPage;
- (id)viewAtIndex:(long long)arg1;
- (void)reloadData;
- (void)scrollToPage:(long long)arg1;
- (void)setupControls;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

