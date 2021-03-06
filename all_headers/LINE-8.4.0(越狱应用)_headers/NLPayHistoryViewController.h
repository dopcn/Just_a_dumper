//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayTableViewController.h"

#import "NLPayDateRangeInputViewControllerDelegate-Protocol.h"
#import "NLPayHistoryHeaderViewDelegate-Protocol.h"

@class NLPayHistoryHeaderView, NSDate, NSMutableArray, NSString;

@interface NLPayHistoryViewController : NLPayTableViewController <NLPayHistoryHeaderViewDelegate, NLPayDateRangeInputViewControllerDelegate>
{
    _Bool _loading;
    _Bool _hasNext;
    NLPayHistoryHeaderView *_headerView;
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_dataArray;
    long long _startNumber;
    long long _pageSize;
}

+ (long long)tableViewStyle;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long startNumber; // @synthesize startNumber=_startNumber;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NLPayHistoryHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)dateRangeInputViewController:(id)arg1 didFinishWithStartDate:(id)arg2 endDate:(id)arg3;
- (void)historyHeaderViewDidSelectCustomPeriod:(id)arg1;
- (void)historyHeaderView:(id)arg1 didSelectPeriodWithStartDate:(id)arg2 endDate:(id)arg3;
- (void)historyHeaderView:(id)arg1 didChangeSegmentedControlIndex:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideLoadingViewAnimated:(_Bool)arg1;
- (void)showLoadingViewAnimated:(_Bool)arg1;
- (void)loadMoreData;
- (void)loadDataWithSegmentedIndex:(long long)arg1 startNumber:(long long)arg2 animated:(_Bool)arg3;
- (void)setupHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

