//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicTableVC.h"

#import "DownloadListHeaderCellCellDelegate-Protocol.h"
#import "MusicTrackCellDelegate-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EditDownloadingSongsVC, MusicEmptyView, NSFetchedResultsController, NSMutableArray, NSString, UIButton, UIImageView, UITableView, UIView;

@interface DownloadListIndexVC : MusicTableVC <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate, MusicTrackCellDelegate, DownloadListHeaderCellCellDelegate>
{
    MusicEmptyView *_emptyView;
    _Bool _showAd;
    NSString *errorMsg;
    NSFetchedResultsController *_downloadingTracks;
    NSFetchedResultsController *_downloadingMV;
    UITableView *_tableView;
    NSFetchedResultsController *_downloadingLoseTracks;
    EditDownloadingSongsVC *_editDownloadingSongsVc;
    UIImageView *_belowEditBgView;
    UIButton *_belowBtn;
    NSMutableArray *_dataArray;
    UIView *_adContentView;
}

@property(retain, nonatomic) UIView *adContentView; // @synthesize adContentView=_adContentView;
@property(nonatomic) _Bool showAd; // @synthesize showAd=_showAd;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIButton *belowBtn; // @synthesize belowBtn=_belowBtn;
@property(retain, nonatomic) UIImageView *belowEditBgView; // @synthesize belowEditBgView=_belowEditBgView;
@property(retain, nonatomic) EditDownloadingSongsVC *editDownloadingSongsVc; // @synthesize editDownloadingSongsVc=_editDownloadingSongsVc;
@property(retain, nonatomic) NSFetchedResultsController *downloadingLoseTracks; // @synthesize downloadingLoseTracks=_downloadingLoseTracks;
- (void)setTableView:(id)arg1;
- (id)tableView;
@property(retain, nonatomic) NSFetchedResultsController *downloadingMV; // @synthesize downloadingMV=_downloadingMV;
@property(retain, nonatomic) NSFetchedResultsController *downloadingTracks; // @synthesize downloadingTracks=_downloadingTracks;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg;
- (void).cxx_destruct;
- (void)p_initializeAdView;
- (double)adViewHeight;
- (long long)adType;
- (id)key;
- (void)loadAD;
- (_Bool)shouldShowPlayBtn;
- (void)trackCell:(id)arg1 removeDownloading:(id)arg2;
- (void)trackCell:(id)arg1 removeLocalTrack:(id)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)fetchAllDownloadsAtTracksAndLoseTracks;
- (void)downloadListHeaderCellDidClickOnRight:(id)arg1;
- (void)downloadListHeaderCellDidClickOnLeft:(id)arg1;
- (void)reloadTableView;
- (void)tableView:(id)arg1 loseSongCellDidSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 songCellDidSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 mvCellDidSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 headerCellDidSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 adCellDidSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 loseSongCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 songCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 mvCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 headerCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 adCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)toLocal;
- (void)toLocalMusic;
- (void)toOnline;
- (void)toOnlineMusic;
- (void)updateEmptyState;
- (_Bool)isContentEmpty;
- (void)setUpDownloadingLoseTracksController;
- (void)setUpDownloadingTracksController;
- (void)setUpDownloadingMVController;
- (_Bool)showIndicatorWhenAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)refreshDataArrayUseDownloadingLoseTracks;
- (void)refreshDataArrayUseDownloadingTracks;
- (void)refreshDataArrayUseDwonloadingMV;
- (void)refreshDataArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

