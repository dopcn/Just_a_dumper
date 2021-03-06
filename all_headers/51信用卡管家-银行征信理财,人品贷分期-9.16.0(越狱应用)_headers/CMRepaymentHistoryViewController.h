//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CMInterfaceDataRefreshManager, CMRepaymentHistoryViewModel, NSString, UILabel, UITableView;

@interface CMRepaymentHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    CMRepaymentHistoryViewModel *_viewModel;
    CDUnknownBlockType _refreshDataCompletedBlock;
    UITableView *_repaymentHistoryTableView;
    UILabel *_repaymentCountLabel;
    CMInterfaceDataRefreshManager *_dataRefreshManager;
}

@property(retain, nonatomic) CMInterfaceDataRefreshManager *dataRefreshManager; // @synthesize dataRefreshManager=_dataRefreshManager;
@property(nonatomic) __weak UILabel *repaymentCountLabel; // @synthesize repaymentCountLabel=_repaymentCountLabel;
@property(nonatomic) __weak UITableView *repaymentHistoryTableView; // @synthesize repaymentHistoryTableView=_repaymentHistoryTableView;
@property(copy, nonatomic) CDUnknownBlockType refreshDataCompletedBlock; // @synthesize refreshDataCompletedBlock=_refreshDataCompletedBlock;
@property(retain, nonatomic) CMRepaymentHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refreshData;
- (void)updateDataFromServer;
- (void)reloadRepaymentHistories;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)buildUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

