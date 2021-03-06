//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderShopBaseViewController.h"

#import "MYStoryRefreshDelegate-Protocol.h"
#import "WanderShopActiveCellTableViewCellDelegate-Protocol.h"

@class JDStoreNetwork, NSString, UIScrollView;

@interface WanderShopChoiceViewController : WanderShopBaseViewController <MYStoryRefreshDelegate, WanderShopActiveCellTableViewCellDelegate>
{
    _Bool _firstToAutoLoad;
    _Bool _isOnlyInsert;
    JDStoreNetwork *_firstPageDao;
    _Bool _requestStoryListEnd;
    _Bool _managerInitFirst;
    double _heightAfterBanner;
}

- (void).cxx_destruct;
- (void)pullingDowntoRefreshStoryList;
- (void)doPullRefresh:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *storyScrollView;
- (id)currentNavigationController;
- (void)refreshLoading;
- (void)reconnect;
- (void)goActiveDetailControll:(id)arg1;
- (void)intoMessageLikeViewOfStoryID:(id)arg1;
- (void)intoUserCenterOfUserID:(id)arg1;
- (void)pushToPlusMainPage:(id)arg1;
- (void)pushToUserCenter:(id)arg1;
- (void)pushToWanderShopDetail:(id)arg1;
- (void)currentUserLogin:(id)arg1;
- (void)backTopButtonPressed:(id)arg1;
- (void)refreshNotificationCell;
- (void)loadData:(int)arg1;
- (void)requestContentEnd;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createBackTopButton;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

