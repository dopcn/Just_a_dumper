//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttMicroCloudFileViewController.h"

#import "DTaskDelegate-Protocol.h"
#import "MttUIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MttMicroCloudDownloadTask, MttMicroCloudListTableViewCell, NSIndexPath, NSString, UITableView;

@interface MttMicroCloudFileListViewController : MttMicroCloudFileViewController <UITableViewDelegate, UITableViewDataSource, MttUIAlertViewDelegate, DTaskDelegate>
{
    UITableView *_contentTableView;
    NSIndexPath *_selectPath;
    NSString *_downloadingFileID;
    MttMicroCloudDownloadTask *_downloader;
    MttMicroCloudListTableViewCell *_oriDownloadingCell;
}

@property(nonatomic) __weak MttMicroCloudListTableViewCell *oriDownloadingCell; // @synthesize oriDownloadingCell=_oriDownloadingCell;
@property(retain, nonatomic) MttMicroCloudDownloadTask *downloader; // @synthesize downloader=_downloader;
@property(copy, nonatomic) NSString *downloadingFileID; // @synthesize downloadingFileID=_downloadingFileID;
@property(retain, nonatomic) NSIndexPath *selectPath; // @synthesize selectPath=_selectPath;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
- (void).cxx_destruct;
- (void)mttUIAlert:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)numberOfGetFileListCount;
- (void)microFile:(id)arg1 taskError:(id)arg2;
- (void)microFile:(id)arg1 taskDownloaded:(id)arg2;
- (void)downloadFinished;
- (id)downloadingCell;
- (double)downloadProgress;
- (void)taskDownloadStatusChange:(id)arg1;
- (void)taskDownloadSizeChange:(id)arg1;
- (void)taskDownloadError:(id)arg1;
- (void)taskDownloaded:(id)arg1;
- (void)destroyDownloader;
- (void)initDownloader;
- (void)startLoading:(id)arg1;
- (_Bool)canOpenFileWithIndexPath:(id)arg1;
- (void)openFileWithIndexPath:(id)arg1;
- (void)downloadFileWithIndexPath:(id)arg1;
- (void)doDelete:(id)arg1;
- (void)doFinish:(id)arg1;
- (void)doCancelSelectAll:(id)arg1;
- (void)doSelectAll:(id)arg1;
- (void)doEdit:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (void)refreshData;
- (void)initContentTableView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

