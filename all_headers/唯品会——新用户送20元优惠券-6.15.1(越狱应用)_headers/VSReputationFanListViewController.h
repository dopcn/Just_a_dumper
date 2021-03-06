//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, VSReputationFanListViewModel, VSReputationFollowListEmptyView, VSReputationNoMoreView, VSTableDelegate, VSTopAndRateView;

@interface VSReputationFanListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    VSReputationFanListViewModel *_viewModel;
    UITableView *_tableView;
    VSTableDelegate *_tableViewDelegate;
    VSReputationNoMoreView *_noMoreView;
    VSTopAndRateView *_topAndRateView;
    VSReputationFollowListEmptyView *_emptyView;
}

@property(retain, nonatomic) VSReputationFollowListEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) VSTopAndRateView *topAndRateView; // @synthesize topAndRateView=_topAndRateView;
@property(retain, nonatomic) VSReputationNoMoreView *noMoreView; // @synthesize noMoreView=_noMoreView;
@property(retain, nonatomic) VSTableDelegate *tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) VSReputationFanListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)topAndRateViewClicked;
- (void)loadData;
- (void)setUpUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

