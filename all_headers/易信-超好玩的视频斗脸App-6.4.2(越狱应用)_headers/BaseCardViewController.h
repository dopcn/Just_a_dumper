//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "CardTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CardFooterView, CardHeaderView, NSArray, NSMutableArray, NSString, UITableView, YXNavigationBarConfig;

@interface BaseCardViewController : YXUIViewController <UITableViewDataSource, UITableViewDelegate, CardTableViewDelegate>
{
    CardHeaderView *tableHeaderView;
    CardFooterView *tableFooterView;
    _Bool _showNaviBarLine;
    NSString *_teamID;
    NSString *_userID;
    UITableView *_tableView;
    NSMutableArray *_userInfoList;
    NSArray *_cachedUserGameList;
    NSString *_gameListUrl;
    YXNavigationBarConfig *_currentNavigationBarConfig;
    double _currentNaviBarAlpha;
}

@property(nonatomic) _Bool showNaviBarLine; // @synthesize showNaviBarLine=_showNaviBarLine;
@property(nonatomic) double currentNaviBarAlpha; // @synthesize currentNaviBarAlpha=_currentNaviBarAlpha;
@property(retain, nonatomic) YXNavigationBarConfig *currentNavigationBarConfig; // @synthesize currentNavigationBarConfig=_currentNavigationBarConfig;
@property(retain, nonatomic) NSString *gameListUrl; // @synthesize gameListUrl=_gameListUrl;
@property(retain, nonatomic) NSArray *cachedUserGameList; // @synthesize cachedUserGameList=_cachedUserGameList;
@property(retain, nonatomic) NSMutableArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (double)headerHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setBarButton;
- (void)reloadCardTableView;
- (void)updateTableInfoList;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (_Bool)shouldShowBarBottomLine;
- (id)yxNavigationBarConfig;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)removeListenEvents;
- (void)dealloc;
- (void)onLeftAction;
- (void)onLeftButtonPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (id)blacklistTitle:(id)arg1;
- (id)closeFriendTitle:(id)arg1;
- (id)notifyTitle:(id)arg1;
- (void)addMediaVisitList;
- (void)refreshGameListView:(CDUnknownBlockType)arg1;
- (void)refreshUserFeedView;
- (void)showHistoryController;
- (void)showPublicMainFeedList;
- (void)showSettingRight;
- (void)showTeamSessionController:(id)arg1;
- (void)showAuthGame;
- (void)showIndividualQRController;
- (void)showPersonalSetSignatureViewController;
- (void)showPersonalStateViewController;
- (void)showRedPacketMedalsWebViewController;
- (void)showUserFeedListController;
- (void)showStarController;
- (id)blacklistTitle:(id)arg1;
- (id)notifyTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

