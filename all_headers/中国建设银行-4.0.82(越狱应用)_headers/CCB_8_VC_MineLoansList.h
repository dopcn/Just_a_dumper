//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCB_2_baseViewController.h"

#import "CCB_8_LimitCategoryCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCBTableView, CCB_8_VM_MineLoansList, NSString;

@interface CCB_8_VC_MineLoansList : CCB_2_baseViewController <UITableViewDelegate, UITableViewDataSource, CCB_8_LimitCategoryCellDelegate>
{
    double cellHeight;
    CCB_8_VM_MineLoansList *_viewModel;
    CCBTableView *_tableView;
}

@property(retain, nonatomic) CCBTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CCB_8_VM_MineLoansList *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshLoginStatus:(_Bool)arg1;
- (void)clickCellBtn:(id)arg1 withItem:(id)arg2;
- (void)checkOutMore;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshSJD808List;
- (void)CCB_addObserverToViewMode;
- (void)viewDidLoad;
- (void)changeIsNeedRefreshSJD808;
- (void)viewWillAppear:(_Bool)arg1;
- (id)generateCell;
- (void)getShowData;
- (double)viewHeightWithPreferredLayoutMaxWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

