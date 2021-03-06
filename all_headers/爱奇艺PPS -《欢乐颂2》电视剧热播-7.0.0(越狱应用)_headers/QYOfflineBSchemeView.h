//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYOfflineMyMenuCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QYOfflineProgressView, UITableView;
@protocol QYOfflineBSchemeViewDelegate;

@interface QYOfflineBSchemeView : UIView <UITableViewDelegate, UITableViewDataSource, QYOfflineMyMenuCellDelegate>
{
    id <QYOfflineBSchemeViewDelegate> _delegate;
    NSMutableArray *_dataSource;
    UITableView *_myTableView;
    QYOfflineProgressView *_myDiskSpaceView;
}

@property(retain, nonatomic) QYOfflineProgressView *myDiskSpaceView; // @synthesize myDiskSpaceView=_myDiskSpaceView;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <QYOfflineBSchemeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineMyMenuCellMyCartoon:(long long)arg1;
- (void)offlineMyMenuCellMyBookTaped:(long long)arg1;
- (void)offlineMyMenuCellOpenFolderWithOperateId:(id)arg1 Title:(id)arg2;
- (id)createBSchemeContent:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDataWithIndexPaths:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

