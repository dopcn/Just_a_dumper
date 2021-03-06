//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttBaseViewController.h"

#import "MTTSwipeForDeleteTableViewCellDelegate-Protocol.h"
#import "MttActionSheetDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MttActionSheet, MttAttributedEmptyContentView, NSMutableArray, NSString, UIBarButtonItem, UITableView, VideoCenterService;

@interface BookmarkVideoViewController : MttBaseViewController <UITableViewDelegate, UITableViewDataSource, MttActionSheetDelegate, TTTAttributedLabelDelegate, MTTSwipeForDeleteTableViewCellDelegate>
{
    UITableView *_tableView;
    UIBarButtonItem *_mttDeleteButtonItem;
    NSMutableArray *_videoBookmarkEntries;
    MttAttributedEmptyContentView *_emptyView;
    MttActionSheet *_actionSheet;
    VideoCenterService *_service;
}

@property(retain, nonatomic) VideoCenterService *service; // @synthesize service=_service;
@property(retain, nonatomic) MttActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) MttAttributedEmptyContentView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableArray *videoBookmarkEntries; // @synthesize videoBookmarkEntries=_videoBookmarkEntries;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)cellDidSelectDelete:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)mttActionSheetCancel:(id)arg1;
- (void)mttActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteBookMarks:(id)arg1;
- (void)updateEmptyView;
- (void)onClearBtnClick:(id)arg1;
- (void)onDeleteBtnClick:(id)arg1;
- (void)reloadData;
- (void)bookMarkVideoUpdate;
- (void)initToolBar;
- (void)initEmptyView;
- (void)initTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

