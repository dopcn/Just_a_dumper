//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UMComScrollViewDelegate-Protocol.h"
#import "UMComTableViewHandleDataDelegate1-Protocol.h"

@class NSArray, NSString, UILabel, UMComPullRequest, UMComStatusView;
@protocol UMComScrollViewDelegate, UMComTableViewHandleDataDelegate1;

@interface UMComRequestTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UMComScrollViewDelegate, UMComTableViewHandleDataDelegate1>
{
    _Bool _isAutoStartLoadData;
    _Bool _isLoadLoacalData;
    _Bool _haveNextPage;
    _Bool _isLoadFinish;
    _Bool _doNotShowNodataNote;
    NSArray *_dataArray;
    UILabel *_noDataTipLabel;
    UMComPullRequest *_fetchRequest;
    UMComStatusView *_loadMoreStatusView;
    id <UMComTableViewHandleDataDelegate1> _handleDataDelegate;
    id <UMComScrollViewDelegate> _scrollViewDelegate;
    CDUnknownBlockType _loadSeverDataCompletionHandler;
    struct CGPoint _lastPosition;
}

@property(copy, nonatomic) CDUnknownBlockType loadSeverDataCompletionHandler; // @synthesize loadSeverDataCompletionHandler=_loadSeverDataCompletionHandler;
@property(nonatomic) __weak id <UMComScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <UMComTableViewHandleDataDelegate1> handleDataDelegate; // @synthesize handleDataDelegate=_handleDataDelegate;
@property(retain, nonatomic) UMComStatusView *loadMoreStatusView; // @synthesize loadMoreStatusView=_loadMoreStatusView;
@property(nonatomic) _Bool doNotShowNodataNote; // @synthesize doNotShowNodataNote=_doNotShowNodataNote;
@property(nonatomic) _Bool isLoadFinish; // @synthesize isLoadFinish=_isLoadFinish;
@property(nonatomic) _Bool haveNextPage; // @synthesize haveNextPage=_haveNextPage;
@property(nonatomic) _Bool isLoadLoacalData; // @synthesize isLoadLoacalData=_isLoadLoacalData;
@property(nonatomic) _Bool isAutoStartLoadData; // @synthesize isAutoStartLoadData=_isAutoStartLoadData;
@property(retain, nonatomic) UMComPullRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(nonatomic) struct CGPoint lastPosition; // @synthesize lastPosition=_lastPosition;
@property(retain, nonatomic) UILabel *noDataTipLabel; // @synthesize noDataTipLabel=_noDataTipLabel;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)deleteRowsAtIndexPath:(id)arg1;
- (void)insertRowsAtIndexPath:(id)arg1;
- (void)relloadCellAtIndextPath:(id)arg1;
- (void)deleteCellAtRow:(long long)arg1 section:(long long)arg2;
- (void)insertCellAtRow:(long long)arg1 section:(long long)arg2;
- (void)relloadCellAtRow:(long long)arg1 section:(long long)arg2;
- (void)handleLoadMoreDataWithData:(id)arg1 error:(id)arg2 dataHandleFinish:(CDUnknownBlockType)arg3;
- (void)handleServerDataWithData:(id)arg1 error:(id)arg2 dataHandleFinish:(CDUnknownBlockType)arg3;
- (void)handleCoreDataDataWithData:(id)arg1 error:(id)arg2 dataHandleFinish:(CDUnknownBlockType)arg3;
- (void)loadNextPageDataFromServer:(CDUnknownBlockType)arg1;
- (void)refreshNewDataFromServer:(CDUnknownBlockType)arg1;
- (void)fetchDataFromCoreData:(CDUnknownBlockType)arg1;
- (void)loadAllData:(CDUnknownBlockType)arg1 fromServer:(CDUnknownBlockType)arg2;
- (void)loadMoreData;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1 haveNextPage:(_Bool)arg2;
- (void)refreshScrollViewDidEndDragging:(id)arg1 haveNextPage:(_Bool)arg2;
- (_Bool)isScrollToBottom:(id)arg1;
- (_Bool)isBeginScrollBottom:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)creatNoFeedTip;
- (void)viewDidLoad;
- (id)init;
- (id)initWithFetchRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

