//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TDCommentInputBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YTCInstanceDelegate-Protocol.h"
#import "YTCRepliesTopBarDelegate-Protocol.h"

@class NSString, TDCommentInputBar, YTCInstance, YTCListCell, YTCRefreshTableView, YTCRepliesTopBar;

@interface YTCRepliesController : UIViewController <UITableViewDelegate, UITableViewDataSource, YTCInstanceDelegate, YTCRepliesTopBarDelegate, TDCommentInputBarDelegate>
{
    YTCInstance *_ytc_instance;
    YTCListCell *_listCell;
    YTCRefreshTableView *_tableView;
    YTCRepliesTopBar *_topBar;
    TDCommentInputBar *_bottomBar;
}

@property(nonatomic) __weak TDCommentInputBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) __weak YTCRepliesTopBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak YTCRefreshTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YTCListCell *listCell; // @synthesize listCell=_listCell;
@property(retain, nonatomic) YTCInstance *ytc_instance; // @synthesize ytc_instance=_ytc_instance;
- (void).cxx_destruct;
- (void)failureRequest;
- (void)hasMore;
- (void)successLoadMore;
- (void)successRefresh:(long long)arg1;
- (void)ytcInstance:(id)arg1 repliesDataSource:(id)arg2 type:(long long)arg3 stauts:(long long)arg4 object:(id)arg5;
- (void)YTCInstance:(id)arg1 listDatasource:(id)arg2 type:(long long)arg3 stauts:(long long)arg4 object:(id)arg5;
- (void)listTopBarEventSendComment;
- (void)repliesTopBarEventBack;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)notReachable;
- (void)loadMore;
- (void)refresh;
- (void)configTableView;
- (void)configViews;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)emojiRequestionCompletion;
- (void)removeNotifications;
- (void)addNotifications;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

