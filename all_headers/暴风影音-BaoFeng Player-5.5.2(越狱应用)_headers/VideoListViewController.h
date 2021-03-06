//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DataClient, HomeViewController, KGRefreshCell, KGRefreshFooter, KGRefreshHeader, NSIndexPath, NSMutableArray, NSString, UITableView, ZJScrollPageView;

@interface VideoListViewController : CommonViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isNeedRefresh;
    _Bool _isReloadTableView;
    unsigned long long _idx;
    NSString *_cateId;
    double _tableViewHeight;
    HomeViewController *_homeVC;
    NSIndexPath *_currentIndexPath;
    ZJScrollPageView *_scrollPageView;
    unsigned long long _refreshType;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    KGRefreshCell *_refreshCell;
    KGRefreshHeader *_header;
    KGRefreshFooter *_footer;
    CDUnknownBlockType _completeBlock;
    DataClient *_netRequest;
}

@property(retain, nonatomic) DataClient *netRequest; // @synthesize netRequest=_netRequest;
@property(nonatomic) _Bool isReloadTableView; // @synthesize isReloadTableView=_isReloadTableView;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) KGRefreshFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) KGRefreshHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) KGRefreshCell *refreshCell; // @synthesize refreshCell=_refreshCell;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isNeedRefresh; // @synthesize isNeedRefresh=_isNeedRefresh;
@property(nonatomic) unsigned long long refreshType; // @synthesize refreshType=_refreshType;
@property(nonatomic) __weak ZJScrollPageView *scrollPageView; // @synthesize scrollPageView=_scrollPageView;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak HomeViewController *homeVC; // @synthesize homeVC=_homeVC;
@property(nonatomic) double tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
@property(copy, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
@property(nonatomic) unsigned long long idx; // @synthesize idx=_idx;
- (void).cxx_destruct;
- (id)lastUpdateUserDefaultsKey;
- (void)reloadTableView;
- (void)closePlayer;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)transitionToVideoDetailControllerWithIndexPath:(id)arg1 homeTableView:(id)arg2 style:(long long)arg3;
- (void)saveCache;
- (void)dealResponseDataWithType:(id)arg1 response:(id)arg2 time:(id)arg3;
- (void)loadDataWithType:(id)arg1;
- (void)reloadDataAction;
- (void)reloadDataWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)refreshDataBySroll;
- (void)loadRefreshDataByNotifitation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithIdx:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *lastUpdateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

