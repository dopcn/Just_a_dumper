//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSListeningBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface KSListeningCETMoreListViewController : KSListeningBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_catId;
}

@property(copy, nonatomic) NSString *catId; // @synthesize catId=_catId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveCachesResultNotification:(id)arg1;
- (void)didReceiveCachesProgressNotification:(id)arg1;
- (void)didReceivePlayProgressNotification:(id)arg1;
- (void)didReceivePlayStatusNotification:(id)arg1;
- (void)registerNotification;
- (void)judgeStatus;
- (void)judgeCachesWithArray:(id)arg1;
- (void)judge_player;
- (void)viewWillAppear:(_Bool)arg1;
- (void)playerViewChange:(id)arg1;
- (void)dropdownRefresh;
- (void)loadMoreData;
- (void)showListeningDetailVC:(id)arg1;
- (void)showMoreDataWithCatId:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)requestLoadMoreData;
- (void)requestListData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

