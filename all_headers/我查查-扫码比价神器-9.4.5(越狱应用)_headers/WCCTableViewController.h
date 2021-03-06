//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackedUIViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EGORefreshTableHeaderView, NSString, UITableView, UIView;

@interface WCCTableViewController : TrackedUIViewController <UITableViewDataSource, UITableViewDelegate, EGORefreshTableHeaderDelegate>
{
    EGORefreshTableHeaderView *_refreshHeaderView;
    _Bool _dataLoaded;
    _Bool _clearsSelectionOnViewWillAppear;
    _Bool _loadMoreMode;
    _Bool _pageMode;
    _Bool _pullToRefresh;
    _Bool _loading;
    int _loadMoreStatus;
    int _tableViewStyle;
    long long _pageIndex;
    long long _pageCount;
    UITableView *_tableview;
    UIView *_emptyView;
    UIView *_loadingView;
    UIView *_errorView;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool pullToRefresh; // @synthesize pullToRefresh=_pullToRefresh;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableview;
@property(nonatomic) int tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool pageMode; // @synthesize pageMode=_pageMode;
@property(nonatomic) int loadMoreStatus; // @synthesize loadMoreStatus=_loadMoreStatus;
@property(nonatomic) _Bool loadMoreMode; // @synthesize loadMoreMode=_loadMoreMode;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
- (void).cxx_destruct;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)errorViewWithText:(id)arg1;
- (id)emptyViewWithText:(id)arg1;
- (void)showEmpty:(_Bool)arg1;
- (void)showEmptyWithText:(id)arg1;
- (void)showError:(_Bool)arg1;
- (void)showErrorWithText:(id)arg1;
- (void)loadMoreData;
- (void)loadData;
- (void)showLoading:(_Bool)arg1;
- (void)refresh;
- (void)createTableViewIfNeed;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

