//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYMUSBTableView.h"

#import "JDYContextDataSourceDelegate-Protocol.h"
#import "TaskListTableViewCellProtocol-Protocol.h"
#import "TaskListTableViewSectionHeaderProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString;
@protocol TaskListTableViewProtocol;

@interface TaskListTableView : JDYMUSBTableView <UITableViewDataSource, UITableViewDelegate, TaskListTableViewCellProtocol, TaskListTableViewSectionHeaderProtocol, JDYContextDataSourceDelegate>
{
    NSArray *_processTasks;
    NSArray *_finishedTasks;
    long long _finishedTaskCount;
    _Bool _expand;
    _Bool _enableComplete;
    _Bool _enableImportant;
    NSIndexPath *_expandIndexPath;
    _Bool _prepareAutoDisplayNextCluster;
    id <TaskListTableViewProtocol> _taskListDelegate;
}

@property(nonatomic) _Bool prepareAutoDisplayNextCluster; // @synthesize prepareAutoDisplayNextCluster=_prepareAutoDisplayNextCluster;
@property(nonatomic) __weak id <TaskListTableViewProtocol> taskListDelegate; // @synthesize taskListDelegate=_taskListDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishLoadingData;
- (void)refreshDataAction;
- (void)taskListTableViewSectionHeaderDidExpand:(id)arg1;
- (id)activityCellWithIndexPath:(id)arg1;
- (void)taskListTableViewCell:(id)arg1 didSelectWithIndexPath:(id)arg2;
- (void)taskListTableViewCell:(id)arg1 didExpandWithIndexPath:(id)arg2 isExpand:(_Bool)arg3;
- (void)taskListTableViewCell:(id)arg1 didDeleteWithIndexPath:(id)arg2;
- (void)taskListTableViewCell:(id)arg1 didRemindWithIndexPath:(id)arg2;
- (void)taskListTableViewCell:(id)arg1 didImportantWithIndexPath:(id)arg2 isImportant:(_Bool)arg3;
- (void)taskListTableViewCell:(id)arg1 didCommitWithIndexPath:(id)arg2 isCommit:(_Bool)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDataWithProcessingTasks:(id)arg1 finishedTasks:(id)arg2 finishedTaskCount:(long long)arg3 enableImportant:(_Bool)arg4 enableComplete:(_Bool)arg5 sectionSecondScroll:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

