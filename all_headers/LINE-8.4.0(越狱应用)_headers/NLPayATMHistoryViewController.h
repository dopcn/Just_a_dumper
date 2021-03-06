//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayHistoryViewController.h"

#import "NLPayTradeNumberCellDelegate-Protocol.h"

@class NLPayTradeNumberHistoryView, NSString;

@interface NLPayATMHistoryViewController : NLPayHistoryViewController <NLPayTradeNumberCellDelegate>
{
    NLPayTradeNumberHistoryView *_historyViewForSizeCalc;
}

+ (long long)tableViewStyle;
@property(retain, nonatomic) NLPayTradeNumberHistoryView *historyViewForSizeCalc; // @synthesize historyViewForSizeCalc=_historyViewForSizeCalc;
- (void).cxx_destruct;
- (void)updateTradeInfoCell:(id)arg1;
- (void)reloadTradeInfo:(id)arg1;
- (void)cancelChargeWithTradeInfo:(id)arg1;
- (void)tradeNumberCellDidCancel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataWithSegmentedIndex:(long long)arg1 startNumber:(long long)arg2 animated:(_Bool)arg3;
- (long long)selectedTradeRequestType;
- (_Bool)historyHeaderViewShouldShowPeriod:(id)arg1;
- (_Bool)historyHeaderViewShouldShowSegmentedControl:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

