//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNRootViewController.h"

#import "CCarDataLoaderDelegate-Protocol.h"
#import "CCarNoResultViewDelegarte-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCarDataLoader, CCarNoResultView, NSMutableArray, NSString, UITableView;

@interface CCarResultListController : QNRootViewController <UITableViewDelegate, UITableViewDataSource, CCarDataLoaderDelegate, CCarNoResultViewDelegarte>
{
    _Bool _isFinishLoading;
    _Bool _isDownLoading;
    _Bool _isGetMore;
    long long _totalCnt;
    UITableView *_tableView;
    NSMutableArray *_resultArray;
    CCarNoResultView *_noRetView;
    NSMutableArray *_defaultBtnArray;
    long long _currPage;
    CCarDataLoader *_dataLoader;
}

@property(retain, nonatomic) CCarDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) long long currPage; // @synthesize currPage=_currPage;
@property(retain, nonatomic) NSMutableArray *defaultBtnArray; // @synthesize defaultBtnArray=_defaultBtnArray;
@property(retain, nonatomic) CCarNoResultView *noRetView; // @synthesize noRetView=_noRetView;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(nonatomic) long long totalCnt; // @synthesize totalCnt=_totalCnt;
- (void).cxx_destruct;
- (void)scroll2Top;
- (void)clickDefaultBtnToSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getMoreItemList;
- (_Bool)isReachEnd;
- (void)dataLoaderDownLoadDataFailed:(id)arg1;
- (void)getMoreDone:(_Bool)arg1;
- (void)dataLoaderDownLoadDataComplete:(id)arg1;
- (id)parseJSONResponse:(id)arg1;
- (id)getRequestURL;
- (void)requestWithSearchOptionForResultList;
- (void)dismissWaitingView;
- (void)showWaitingView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)carResultListThemeChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

