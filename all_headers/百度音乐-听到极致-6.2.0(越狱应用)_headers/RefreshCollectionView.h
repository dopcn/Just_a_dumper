//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "LoadMoreTableFooterDelegate-Protocol.h"

@class EGORefreshTableHeaderView, LoadMoreTableFooterView, MessageInterceptor, NSDate, UIColor, UIImage;
@protocol RefreshCollectionViewDelegate;

@interface RefreshCollectionView : UICollectionView <EGORefreshTableHeaderDelegate, LoadMoreTableFooterDelegate>
{
    EGORefreshTableHeaderView *refreshView;
    LoadMoreTableFooterView *loadMoreView;
    struct UIEdgeInsets realContentInsets;
    UIImage *pullArrowImage;
    UIColor *pullBackgroundColor;
    UIColor *pullTextColor;
    NSDate *pullLastRefreshDate;
    _Bool pullTableIsRefreshing;
    _Bool pullTableIsLoadingMore;
    _Bool enableRefresh;
    _Bool enableLoadmore;
    id <RefreshCollectionViewDelegate> pullDelegate;
    MessageInterceptor *_delegateInterceptor;
}

@property(retain, nonatomic) MessageInterceptor *delegateInterceptor; // @synthesize delegateInterceptor=_delegateInterceptor;
@property(nonatomic) __weak id <RefreshCollectionViewDelegate> pullDelegate; // @synthesize pullDelegate;
@property(nonatomic) _Bool pullTableIsLoadingMore; // @synthesize pullTableIsLoadingMore;
@property(nonatomic) _Bool pullTableIsRefreshing; // @synthesize pullTableIsRefreshing;
@property(retain, nonatomic) UIColor *pullTextColor; // @synthesize pullTextColor;
@property(retain, nonatomic) NSDate *pullLastRefreshDate; // @synthesize pullLastRefreshDate;
@property(retain, nonatomic) UIColor *pullBackgroundColor; // @synthesize pullBackgroundColor;
@property(retain, nonatomic) UIImage *pullArrowImage; // @synthesize pullArrowImage;
- (void).cxx_destruct;
- (void)loadMoreTableFooterDidTriggerLoadMore:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configDisplayProperties;
- (void)refreshLoadMoreView;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)setDefaultContentInset:(struct UIEdgeInsets)arg1;
- (void)config;
- (void)initDelegateInterceptor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 headerRefresh:(_Bool)arg2 loadMore:(_Bool)arg3 collectionViewLayout:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 headerRefresh:(_Bool)arg2 loadMore:(_Bool)arg3 collectionViewLayout:(id)arg4 isNeedNativeDelegate:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

