//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDUIViewController.h"

#import "DYMEmptyDelegate-Protocol.h"
#import "EmptyWishListViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WishListCellDelegate-Protocol.h"
#import "WishListNavBarItemDelegate-Protocol.h"

@class EmptyWishListView, MJRefreshFooterView, MJRefreshHeaderView, NSMutableArray, NSString, UITableView, WishListDataSource, WishListNavBarItem;

@interface WishListViewController : WDUIViewController <UITableViewDelegate, UITableViewDataSource, WishListNavBarItemDelegate, WishListCellDelegate, EmptyWishListViewDelegate, DYMEmptyDelegate>
{
    _Bool _fromURL;
    UITableView *_listTableView;
    MJRefreshHeaderView *_refreshHeaderView;
    MJRefreshFooterView *_refreshFooterView;
    EmptyWishListView *_emptyView;
    WishListNavBarItem *_navBarItem;
    NSMutableArray *_dataArray;
    WishListDataSource *_dataSource;
    long long _page;
}

@property(nonatomic) _Bool fromURL; // @synthesize fromURL=_fromURL;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) WishListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) WishListNavBarItem *navBarItem; // @synthesize navBarItem=_navBarItem;
@property(nonatomic) __weak EmptyWishListView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak MJRefreshFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(nonatomic) __weak MJRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) __weak UITableView *listTableView; // @synthesize listTableView=_listTableView;
- (void).cxx_destruct;
- (void)didClickEmptyView;
- (void)emptyViewDidAppear;
- (void)emptyViewDidDisAppear;
- (void)goShoppingFromWishList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelGoodCollection:(long long)arg1 cell:(id)arg2;
- (void)toGoodDetailViewController:(long long)arg1;
- (void)goodDidJoinedCart:(long long)arg1;
- (void)badgeButtonClick:(id)arg1;
- (void)loadListData:(long long)arg1;
- (void)tableEndRefresh;
- (void)wishListGoodsChanged:(id)arg1;
- (void)shoppingCartChanged:(id)arg1;
- (void)createEmptyView;
- (void)createTabelView;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 fromURL:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

