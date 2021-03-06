//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CMCardPackViewModel, CMIncompleteNoticeView, CMPackEmptyCardHeaderView, ENBaseSegmentedControl, NSString, UITableView, UIView;

@interface CMCardPackViewController : CMViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    _Bool _incompleteGuideCanceled;
    CMCardPackViewModel *_viewModel;
    ENBaseSegmentedControl *_segmentedControl;
    UITableView *_tableView;
    CMIncompleteNoticeView *_noticeView;
    UIView *_headerView;
    CMPackEmptyCardHeaderView *_innerHeaderView;
    UIView *_footerView;
}

+ (void)load;
@property(nonatomic) _Bool incompleteGuideCanceled; // @synthesize incompleteGuideCanceled=_incompleteGuideCanceled;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) CMPackEmptyCardHeaderView *innerHeaderView; // @synthesize innerHeaderView=_innerHeaderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CMIncompleteNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ENBaseSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) CMCardPackViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)backAction;
- (void)didClickBarItemAdd:(id)arg1;
- (void)didClickBarItemEye:(id)arg1;
- (void)pushAddNewCardViewController;
- (void)pushIncompleteCardViewController;
- (void)presentCardDetialViewForCard:(id)arg1;
- (void)copyToPasteBoardWithCard:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didReceiveSyncFinished;
- (void)didUpdatePackCardInfo:(id)arg1;
- (void)showGuidePopViewIfNeeded;
- (void)updateDataFromServer;
- (void)updateDataFromLocal;
- (void)reloadNavigationItems;
- (void)updateUI;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

