//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewController.h"

#import "MAYPagingRefreshTableProtocol-Protocol.h"

@class MAYImmovablePagingFooterView, MAYImmovablePagingHeaderView, MTRefreshController, NSMutableArray, NSString;

@interface MAYTwoDragDirectionTableViewController : MTTableViewController <MAYPagingRefreshTableProtocol>
{
    NSMutableArray *_otherListeners;
    MTRefreshController *_refreshController;
    int _currentPageNumber;
    int _totalPages;
    MAYImmovablePagingHeaderView *_pagingHeaderView;
    MAYImmovablePagingFooterView *_pagingFooterView;
}

@property(retain, nonatomic) MAYImmovablePagingFooterView *pagingFooterView; // @synthesize pagingFooterView=_pagingFooterView;
@property(retain, nonatomic) MAYImmovablePagingHeaderView *pagingHeaderView; // @synthesize pagingHeaderView=_pagingHeaderView;
@property(nonatomic) int totalPages; // @synthesize totalPages=_totalPages;
@property(nonatomic) int currentPageNumber; // @synthesize currentPageNumber=_currentPageNumber;
- (void).cxx_destruct;
- (void)loadPage:(int)arg1;
- (void)pagingFooterStatusChanged:(id)arg1;
- (void)pagingHeaderStatusChanged:(id)arg1;
- (void)setupRefreshController;
- (void)setupPagingHeaderView;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

