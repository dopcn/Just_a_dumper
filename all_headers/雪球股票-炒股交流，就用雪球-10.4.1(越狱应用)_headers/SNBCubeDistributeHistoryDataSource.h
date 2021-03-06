//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PullRefreshTableViewDataSource.h"

@class NSDateFormatter, NSMutableArray, NSMutableParagraphStyle, NSString, SNBCubeDistributeHistoryVC;

@interface SNBCubeDistributeHistoryDataSource : PullRefreshTableViewDataSource
{
    _Bool _sellflag;
    _Bool _hasLoadData;
    long long _maxPage;
    long long _page;
    NSString *_symbol;
    SNBCubeDistributeHistoryVC *_historyVC;
    NSMutableArray *_historys;
    NSMutableArray *_reasonsArr;
    NSDateFormatter *_formatter;
    NSMutableParagraphStyle *_paraStyle;
}

@property(nonatomic) _Bool hasLoadData; // @synthesize hasLoadData=_hasLoadData;
@property(retain, nonatomic) NSMutableParagraphStyle *paraStyle; // @synthesize paraStyle=_paraStyle;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSMutableArray *reasonsArr; // @synthesize reasonsArr=_reasonsArr;
@property(retain, nonatomic) NSMutableArray *historys; // @synthesize historys=_historys;
@property(nonatomic) __weak SNBCubeDistributeHistoryVC *historyVC; // @synthesize historyVC=_historyVC;
@property(nonatomic) _Bool sellflag; // @synthesize sellflag=_sellflag;
@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long maxPage; // @synthesize maxPage=_maxPage;
- (void).cxx_destruct;
- (void)reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)reloadMoreTableViewDataSource;
- (void)reloadTableViewDataSource;
- (void)loadMoreDataSource:(_Bool)arg1;
- (id)initWithTableView:(id)arg1;

@end

