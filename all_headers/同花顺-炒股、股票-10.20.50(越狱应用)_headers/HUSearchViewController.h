//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXChildTabbarController.h"

#import "HUBaseSocketRequestDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HUFundsDataSocketRequest, HUPositionValueModel, NSMutableArray, NSString, UITableView, USAccountStateCell;

@interface HUSearchViewController : HXChildTabbarController <UITableViewDataSource, UITableViewDelegate, HUBaseSocketRequestDelegate>
{
    int _pageId;
    HUFundsDataSocketRequest *_positionRequest;
    USAccountStateCell *_stateCell;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSString *_qsId;
    unsigned long long _brokerID;
    HUPositionValueModel *_positionModel;
}

@property(retain, nonatomic) HUPositionValueModel *positionModel; // @synthesize positionModel=_positionModel;
@property(nonatomic) unsigned long long brokerID; // @synthesize brokerID=_brokerID;
@property(retain, nonatomic) NSString *qsId; // @synthesize qsId=_qsId;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) USAccountStateCell *stateCell; // @synthesize stateCell=_stateCell;
@property(retain, nonatomic) HUFundsDataSocketRequest *positionRequest; // @synthesize positionRequest=_positionRequest;
- (void).cxx_destruct;
- (id)sectionHelpCells;
- (id)sectionHistoryTradeCells;
- (id)sectionTodayTradeCells;
- (id)sectionStateCells;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getDataSourceCellForRowIndexPath:(id)arg1;
- (_Bool)isNormalCellForRowAtIndexPath:(id)arg1;
- (id)getCompleteStringFromStructData:(struct CEQStuffTableStruct *)arg1 hashKey:(long long)arg2;
- (id)getAccountInfoFromStructData:(struct CEQStuffTableStruct *)arg1 hashKey:(long long)arg2;
- (void)requestSocketFailed:(id)arg1 response:(id)arg2;
- (void)requestSocketSucceeded:(id)arg1 response:(id)arg2;
- (void)positionDataRefreshView;
- (void)requestPosition;
- (void)refreshData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

