//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOLBoxTableViewController.h"

#import "BoxBarBaseBarCellDelegate-Protocol.h"
#import "TextScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class BOXBarInterface4OC, DWPullRefreshControl, NSMutableArray, NSString, NSTimer, UISearchBar, UISearchDisplayController;

@interface BoxBarHomeViewController : LOLBoxTableViewController <BoxBarBaseBarCellDelegate, UISearchBarDelegate, TextScrollViewDelegate>
{
    int _nextBeginId;
    NSMutableArray *_dataSource;
    BOXBarInterface4OC *_barInterface4OC;
    NSMutableArray *_datas;
    DWPullRefreshControl *_refreshControl;
    NSTimer *_timer;
    NSMutableArray *_userInfoArr;
    UISearchBar *_mySearchBar;
    UISearchDisplayController *_mySearchViewController;
}

@property(retain, nonatomic) UISearchDisplayController *mySearchViewController; // @synthesize mySearchViewController=_mySearchViewController;
@property(retain, nonatomic) UISearchBar *mySearchBar; // @synthesize mySearchBar=_mySearchBar;
@property(retain, nonatomic) NSMutableArray *userInfoArr; // @synthesize userInfoArr=_userInfoArr;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int nextBeginId; // @synthesize nextBeginId=_nextBeginId;
@property(retain, nonatomic) DWPullRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) BOXBarInterface4OC *barInterface4OC; // @synthesize barInterface4OC=_barInterface4OC;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)itemViewAvatarDidClick:(id)arg1;
- (void)itemViewNickDidClick:(id)arg1;
- (void)itemViewDidSelected:(id)arg1;
- (void)didReceiveMemoryWarning;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadBarNewUserInfo;
- (void)loadData;
- (void)firstLoadData;
- (void)setUpDataSource;
- (void)dealloc;
- (void)setupTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)barImageViewTouched:(id)arg1 onCell:(id)arg2;
- (void)creatBtnForCreatBarClickedOnCell:(id)arg1;
- (void)moreBtnForTopicBarClickedOnCell:(id)arg1;
- (void)moreBtnForHotBarClickedOnCell:(id)arg1;
- (void)moreBtnForUserBarClickedOnCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

