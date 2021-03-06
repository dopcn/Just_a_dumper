//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGMusicTableViewAdapterDataSource-Protocol.h"
#import "KGMusicTableViewAdapterDelegate-Protocol.h"
#import "RefreshControlDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KGAlbumStoreBLL, KGDefaultNetErrorView, KGMusicTableViewAdapter, KGRefreshController, KGTableView, KGThemeLabel, NSMutableArray, NSString, PersonalInfoBlankViewController, UIView;

@interface KGAlbumStoreWellSellViewController : KGScrollPageViewController <UITableViewDataSource, UITableViewDelegate, RefreshControlDelegate, KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate>
{
    long long _collectType;
    KGDefaultNetErrorView *_errorView;
    UIView *_blankView;
    KGThemeLabel *_footViewLabel;
    double _markLoadingPostion;
    _Bool _isLoadingData;
    _Bool _isLastPage;
    CDUnknownBlockType _updatedCallBack;
    NSMutableArray *_wellsellArray;
    KGTableView *_tableView;
    KGRefreshController *_refreshControl;
    PersonalInfoBlankViewController *_blankVC;
    unsigned long long _currentPage;
    KGAlbumStoreBLL *_albumStoreBll;
    KGMusicTableViewAdapter *_tableViewAdapter;
}

@property(retain, nonatomic) KGMusicTableViewAdapter *tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) KGAlbumStoreBLL *albumStoreBll; // @synthesize albumStoreBll=_albumStoreBll;
@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) PersonalInfoBlankViewController *blankVC; // @synthesize blankVC=_blankVC;
@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *wellsellArray; // @synthesize wellsellArray=_wellsellArray;
@property(copy, nonatomic) CDUnknownBlockType updatedCallBack; // @synthesize updatedCallBack=_updatedCallBack;
- (void).cxx_destruct;
- (_Bool)hasMoreWithTabelView:(id)arg1;
- (void)addMoreDataActionWithTabelView:(id)arg1;
- (void)viewDidInitialize;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideErrorView;
- (void)showErrorView;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (_Bool)hasMoreItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hiddenBlankView;
- (void)showBlankView;
- (long long)pageSize;
- (void)showFooterView;
- (void)reConnectEvent;
- (void)refreshFinished;
- (void)loadWellSellData;
- (void)proccessPageIndexWellSell;
- (void)dealloc;
- (void)viewDidEnter;
- (void)viewDidAppear:(_Bool)arg1;
- (void)makeView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

