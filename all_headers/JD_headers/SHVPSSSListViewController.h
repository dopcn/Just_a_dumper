//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CustomActivityIndicatorView, JDFooterLoadingView, NSMutableArray, NSString, NewRefreshTableHeaderView, SHVPListDataProvider, UILabel, UITableView;

@interface SHVPSSSListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isLoading;
    _Bool _canLoadMore;
    SHVPListDataProvider *_dataProvider;
    UITableView *_tableView;
    NSMutableArray *_listArr;
    long long _requestStatus;
    NSString *_requestOffset;
    NewRefreshTableHeaderView *_refreshHeaderView;
    JDFooterLoadingView *_loadingView;
    UILabel *_footReloadView;
    UILabel *_footNoMoreItemView;
    CustomActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) CustomActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *footNoMoreItemView; // @synthesize footNoMoreItemView=_footNoMoreItemView;
@property(retain, nonatomic) UILabel *footReloadView; // @synthesize footReloadView=_footReloadView;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(copy, nonatomic) NSString *requestOffset; // @synthesize requestOffset=_requestOffset;
@property(nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(nonatomic) _Bool canLoadMore; // @synthesize canLoadMore=_canLoadMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *listArr; // @synthesize listArr=_listArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SHVPListDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)remindTapped:(id)arg1;
- (void)validateDataList;
- (_Bool)isLiveItemBeenRemind:(id)arg1;
- (void)refreshList;
- (void)retryLoadMore;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeReloadView;
- (void)showReloadView;
- (void)reconnect;
- (void)refreshData;
- (void)fetchDataScrollUp;
- (void)fetchDataPullDown;
- (void)fetchData:(long long)arg1;
- (void)stopLoadingAnimateCircle;
- (void)loadDataFirstTime;
- (void)initListData;
- (void)setUpViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

