//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVTableViewController.h"

#import "NVTaskDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NVGetTaskM;

@interface NVTravelOrderListViewController : NVTableViewController <UITableViewDataSource, UITableViewDelegate, NVTaskDelegate>
{
    NVGetTaskM *_taskList;
    NSMutableArray *_list;
    long long _nextStartIndex;
    _Bool _isEnd;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidUnload;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isGroupedTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)taskDidFail:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)reSet;
- (void)loadNext;
- (void)didTickCancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

