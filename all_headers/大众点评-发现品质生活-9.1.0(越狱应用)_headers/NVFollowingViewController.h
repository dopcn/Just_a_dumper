//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVTableViewController.h"

#import "NVNavigatorDelegate-Protocol.h"

@class NSMutableArray, NSString, NVBackgroundSpecialTip, RACDisposable;

@interface NVFollowingViewController : NVTableViewController <NVNavigatorDelegate>
{
    RACDisposable *followDisposable;
    NSMutableArray *honeyList;
    long long userId;
    NVBackgroundSpecialTip *tip;
    _Bool isEnd;
    long long recordCount;
    long long nextStartIndex;
    NSString *emptyMsg;
}

+ (_Bool)needsLogin:(id)arg1;
@property(nonatomic) long long userId; // @synthesize userId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didEnterBackground:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)gotoUser:(id)arg1 isRequest:(_Bool)arg2;
- (_Bool)isFollowListEmpty;
- (void)cancelWaitingNotify;
- (_Bool)refreshData;
- (void)followListChanged:(id)arg1;
- (void)loadNext;
- (void)doSearch;
- (void)gotoAddHoney;
- (void)viewDidLoad;
- (_Bool)isGroupedTableView;
- (_Bool)handleWithURLAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

