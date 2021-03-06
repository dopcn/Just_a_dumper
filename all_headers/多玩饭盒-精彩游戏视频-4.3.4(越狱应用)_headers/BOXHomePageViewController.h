//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOLBoxViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DWPullRefreshControl, MDWGetHeadLinePageRsp, NSDictionary, NSMutableArray, NSString, UITableView;

@interface BOXHomePageViewController : LOLBoxViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isLoadMore;
    _Bool _isLoading;
    UITableView *_tableView;
    NSDictionary *_reqOptionDic;
    NSString *_newsNotReadCount;
    long long _nextPageBeginId;
    NSMutableArray *_homePageTypeList;
    MDWGetHeadLinePageRsp *_homePageDataRsp;
    NSMutableArray *_homeContentList;
    DWPullRefreshControl *_pullRefreshControl;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) DWPullRefreshControl *pullRefreshControl; // @synthesize pullRefreshControl=_pullRefreshControl;
@property(retain, nonatomic) NSMutableArray *homeContentList; // @synthesize homeContentList=_homeContentList;
@property(retain, nonatomic) MDWGetHeadLinePageRsp *homePageDataRsp; // @synthesize homePageDataRsp=_homePageDataRsp;
@property(retain, nonatomic) NSMutableArray *homePageTypeList; // @synthesize homePageTypeList=_homePageTypeList;
@property(nonatomic) long long nextPageBeginId; // @synthesize nextPageBeginId=_nextPageBeginId;
@property(retain, nonatomic) NSString *newsNotReadCount; // @synthesize newsNotReadCount=_newsNotReadCount;
@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(retain, nonatomic) NSDictionary *reqOptionDic; // @synthesize reqOptionDic=_reqOptionDic;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)upRefreshData;
- (void)pullRefreshData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshNewsRedDot;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)checkNotReadNews:(CDUnknownBlockType)arg1;
- (void)loadHomePageDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

