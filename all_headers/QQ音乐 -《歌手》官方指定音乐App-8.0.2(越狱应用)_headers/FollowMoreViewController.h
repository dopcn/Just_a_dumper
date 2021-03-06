//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "FollowTableViewImageManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FollowMoreDataManager, NSString, QMSearchBar, QMTableView, UIButton, UIImageView, UITableView, UIView;

@interface FollowMoreViewController : SkinViewController <UITableViewDataSource, UITableViewDelegate, FollowTableViewImageManagerDelegate>
{
    UITableView *currentTableView;
    long long currentGroupid;
    _Bool afterLoad;
    _Bool needRefresh;
    _Bool singersLoadingMore;
    _Bool daRensLoadingMore;
    unsigned long long currentSingersPage;
    unsigned long long currentDaRensPage;
    long long _currentTab;
    UIView *_headerTabBar;
    QMTableView *_singerTable;
    QMTableView *_daRenTable;
    QMTableView *_normalUserTable;
    UITableView *_searchTable;
    FollowMoreDataManager *_dataManager;
    QMSearchBar *_searchBar;
    UIImageView *_singerSelectView;
    UIImageView *_userSelectView;
    UIButton *_singerBtn;
    UIButton *_daRenBtn;
}

@property(retain, nonatomic) UIButton *daRenBtn; // @synthesize daRenBtn=_daRenBtn;
@property(retain, nonatomic) UIButton *singerBtn; // @synthesize singerBtn=_singerBtn;
@property(retain, nonatomic) UIImageView *userSelectView; // @synthesize userSelectView=_userSelectView;
@property(retain, nonatomic) UIImageView *singerSelectView; // @synthesize singerSelectView=_singerSelectView;
@property(retain, nonatomic) QMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) FollowMoreDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UITableView *searchTable; // @synthesize searchTable=_searchTable;
@property(retain, nonatomic) QMTableView *normalUserTable; // @synthesize normalUserTable=_normalUserTable;
@property(retain, nonatomic) QMTableView *daRenTable; // @synthesize daRenTable=_daRenTable;
@property(retain, nonatomic) QMTableView *singerTable; // @synthesize singerTable=_singerTable;
@property(retain, nonatomic) UIView *headerTabBar; // @synthesize headerTabBar=_headerTabBar;
@property(nonatomic) long long currentTab; // @synthesize currentTab=_currentTab;
- (void).cxx_destruct;
- (void)onNotifyFollowMoreDataUserDataChanged:(id)arg1;
- (void)onNotifyFollowMoreDataSingerDataChanged:(id)arg1;
- (void)onNotifyFollowMoreDataDarrenDataChanged:(id)arg1;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)beginSearchWithSearchKey:(id)arg1;
- (void)searchTextChanged:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 TableView:(id)arg2 Image:(id)arg3;
- (void)headerFinish:(id)arg1;
- (void)viewDidPop;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)createDaRensCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createSingersCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onFollowOrCancelViewClicked:(_Bool)arg1 WithSingerInfo:(id)arg2 index:(long long)arg3;
- (void)syncFollowStatus:(id)arg1;
- (void)queryGeneSimiliarDarenByPage:(unsigned long long)arg1;
- (void)queryGeneSimiliarSingerByPage:(unsigned long long)arg1;
- (void)queryFollowSingerWithSingerId:(unsigned long long)arg1 isFollow:(_Bool)arg2 AndCellIndex:(long long)arg3;
- (void)queryFollowDarenWithUin:(unsigned long long)arg1 encryptedUin:(id)arg2 isFollow:(_Bool)arg3 AndCellIndex:(long long)arg4;
- (void)didReceiveMemoryWarning;
- (void)animationFromLastTable:(id)arg1 withOrientation:(long long)arg2 showLoadingView:(_Bool)arg3;
- (id)createTableViewWithTab:(long long)arg1;
- (void)changeCurrentTable:(long long)arg1 WithAnimation:(_Bool)arg2;
- (void)changeSelectedView:(id)arg1;
- (void)switchCurrentTab:(id)arg1;
- (void)switchCurrentTabWithNoAnimation:(id)arg1;
- (void)changeTitleColor:(id)arg1 isSelect:(_Bool)arg2;
- (id)selectedImageView:(struct CGRect)arg1;
- (void)createHeaderTabBar;
- (void)reFresh;
- (void)showNetErrWithResult:(int)arg1 tab:(long long)arg2;
- (void)showEmptyView;
- (float)infoViewTopOffset;
- (float)emptyViewTopOffset;
- (id)emptyViewText;
- (int)vcType;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

