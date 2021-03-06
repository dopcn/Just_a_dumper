//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Landscape_StockRightChildViewBaseController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HXSocketFetcher, NSMutableArray, NSString, TransactionDetailTableActivityCell, UITableView;

@interface Landscape_FutureTransactionDetailTableViewController : Landscape_StockRightChildViewBaseController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _needClearData;
    _Bool _hasRequestData;
    _Bool _hasPrePage;
    _Bool _hasLoadActivityCell;
    _Bool _hasRequestPrePage;
    _Bool _noPushTableViewAnimation;
    _Bool _isFinishAnimation;
    _Bool _isFirstNoRealData;
    UITableView *_tableView;
    HXSocketFetcher *_realFetcher;
    HXSocketFetcher *_historyFetcher;
    NSMutableArray *_detailArray;
    NSMutableArray *_insertIndexes;
    NSMutableArray *_tempArray;
    long long _currentPage;
    long long _toRow;
    TransactionDetailTableActivityCell *_activityTopCell;
    NSString *_endTime;
    long long _tableviewPageCount;
    double _lastContentOffset;
}

@property(nonatomic) _Bool isFirstNoRealData; // @synthesize isFirstNoRealData=_isFirstNoRealData;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) long long tableviewPageCount; // @synthesize tableviewPageCount=_tableviewPageCount;
@property(nonatomic) _Bool isFinishAnimation; // @synthesize isFinishAnimation=_isFinishAnimation;
@property(nonatomic) _Bool noPushTableViewAnimation; // @synthesize noPushTableViewAnimation=_noPushTableViewAnimation;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) _Bool hasRequestPrePage; // @synthesize hasRequestPrePage=_hasRequestPrePage;
@property(nonatomic) _Bool hasLoadActivityCell; // @synthesize hasLoadActivityCell=_hasLoadActivityCell;
@property(retain, nonatomic) TransactionDetailTableActivityCell *activityTopCell; // @synthesize activityTopCell=_activityTopCell;
@property(nonatomic) _Bool hasPrePage; // @synthesize hasPrePage=_hasPrePage;
@property(nonatomic) _Bool hasRequestData; // @synthesize hasRequestData=_hasRequestData;
@property(nonatomic) _Bool needClearData; // @synthesize needClearData=_needClearData;
@property(nonatomic) long long toRow; // @synthesize toRow=_toRow;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *tempArray; // @synthesize tempArray=_tempArray;
@property(retain, nonatomic) NSMutableArray *insertIndexes; // @synthesize insertIndexes=_insertIndexes;
@property(retain, nonatomic) NSMutableArray *detailArray; // @synthesize detailArray=_detailArray;
@property(retain, nonatomic) HXSocketFetcher *historyFetcher; // @synthesize historyFetcher=_historyFetcher;
@property(retain, nonatomic) HXSocketFetcher *realFetcher; // @synthesize realFetcher=_realFetcher;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)finishAnimation;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)insertRealMingXiRow:(id)arg1 andAnimation:(_Bool)arg2;
- (_Bool)timeSampleIsAllSame:(id)arg1;
- (void)requestMore;
- (void)dealTableScrollAndRequest;
- (void)requestHistoryData:(_Bool)arg1 showActivityIndicator:(_Bool)arg2;
- (void)requestRealData:(_Bool)arg1 showActivityIndicator:(_Bool)arg2;
- (void)setDataWith:(id)arg1;
- (void)makeConstraints;
- (void)clearRequestFetcher;
- (void)clearData;
- (void)requestData:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

