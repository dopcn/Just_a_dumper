//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MNRTopListDetailsByRecommend, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TopListEntity;

@interface BoxOfficeZoneViewController : MNBViewController <UITableViewDataSource, UITableViewDelegate>
{
    long long totalCount;
    NSMutableArray *_movies;
    TopListEntity *currentToplistEntity;
    NSNumber *_numberBoxOfficeID;
    NSString *_boxOfficeZoneTableHeaderContent;
    NSNumber *_currentTopListId;
    long long _currentPage;
    NSMutableDictionary *_mDicBoxOffice;
    MNRTopListDetailsByRecommend *_requestTopListDetails;
}

@property(retain, nonatomic) MNRTopListDetailsByRecommend *requestTopListDetails; // @synthesize requestTopListDetails=_requestTopListDetails;
@property(retain, nonatomic) NSMutableDictionary *mDicBoxOffice; // @synthesize mDicBoxOffice=_mDicBoxOffice;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSNumber *currentTopListId; // @synthesize currentTopListId=_currentTopListId;
@property(copy, nonatomic) NSString *boxOfficeZoneTableHeaderContent; // @synthesize boxOfficeZoneTableHeaderContent=_boxOfficeZoneTableHeaderContent;
@property(retain, nonatomic) NSNumber *numberBoxOfficeID; // @synthesize numberBoxOfficeID=_numberBoxOfficeID;
@property(retain, nonatomic) TopListEntity *currentToplistEntity; // @synthesize currentToplistEntity;
- (void).cxx_destruct;
- (void)doneLoadingTableViewData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onLoadFixTopListByIdFailed;
- (void)onLoadFixTopListByIdFinished:(id)arg1;
- (void)loadTopListDetailsData:(id)arg1 pageIndex:(id)arg2;
- (void)loadBoxOfficeWithId:(id)arg1;
- (void)mt_cancelLoadData;
- (void)mt_loadData;
- (void)mt_addViewConstraints;
- (void)createPullToRefreshView;
- (void)createInfiniteScrollingView;
- (void)createTableView;
- (void)createMainViews;
- (void)mt_createViews;
- (void)mt_initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

