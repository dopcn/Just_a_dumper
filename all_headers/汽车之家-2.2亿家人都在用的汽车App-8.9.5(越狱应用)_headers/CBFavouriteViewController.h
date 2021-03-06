//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRefreshTableViewController.h>

#import "AHAlertViewDelegate-Protocol.h"
#import "AHBaseServiceDelegate-Protocol.h"
#import "AHFavouriteHistoryDelegate-Protocol.h"
#import "AHLoadingViewDelegate-Protocol.h"
#import "ChildViewControllerProtocol-Protocol.h"
#import "FavouriteManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AHLabel, AHLoadingView, AHNavigationController, CBFavouriteManager, NSMutableArray, NSString;

@interface CBFavouriteViewController : AHRefreshTableViewController <AHFavouriteHistoryDelegate, AHBaseServiceDelegate, AHLoadingViewDelegate, AHAlertViewDelegate, UIAlertViewDelegate, FavouriteManagerDelegate, ChildViewControllerProtocol>
{
    int viewSource;
    int viewType;
    long long index;
    double viewHeight;
    NSString *carIDListStr;
    NSMutableArray *tlist;
    _Bool _isFirstLoad;
    _Bool _isFirstSyn;
    _Bool _canPushToUserProtrait;
    _Bool _isTopController;
    AHLabel *synLabel;
    NSMutableArray *DeleteCountArray;
    NSMutableArray *_favouriteList;
    AHNavigationController *_myNavigationController;
    AHLoadingView *_loadingView;
    CBFavouriteManager *_favouriteManager;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isTopController; // @synthesize isTopController=_isTopController;
@property(nonatomic) _Bool canPushToUserProtrait; // @synthesize canPushToUserProtrait=_canPushToUserProtrait;
@property(nonatomic) _Bool isFirstSyn; // @synthesize isFirstSyn=_isFirstSyn;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) CBFavouriteManager *favouriteManager; // @synthesize favouriteManager=_favouriteManager;
@property(retain, nonatomic) AHLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AHNavigationController *myNavigationController; // @synthesize myNavigationController=_myNavigationController;
@property(retain, nonatomic) NSMutableArray *favouriteList; // @synthesize favouriteList=_favouriteList;
@property(retain, nonatomic) NSMutableArray *DeleteCountArray; // @synthesize DeleteCountArray;
@property(retain, nonatomic) AHLabel *synLabel; // @synthesize synLabel;
@property(nonatomic) double viewHeight; // @synthesize viewHeight;
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic) int viewType; // @synthesize viewType;
@property(nonatomic) int viewSource; // @synthesize viewSource;
- (void).cxx_destruct;
- (void)pushToHisCenter:(long long)arg1 authorid:(long long)arg2;
- (void)cancelAll;
- (void)selectAll;
- (void)setEditing:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (void)netServiceFinished:(long long)arg1;
- (void)childViewWillDisAppearInScrollNavigtionViewController:(id)arg1;
- (void)childViewWillAppearInScrollNavigtionViewController:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)receiveDataFinish;
- (void)showEmptyView;
- (void)showFavLoadingView;
- (void)pullUpdateTriggering:(id)arg1 type:(long long)arg2;
- (void)showMore;
- (void)favouriteSynFail:(id)arg1 errorCode:(int)arg2;
- (void)favouriteSynSuccess:(id)arg1;
- (void)favouriteSynStart:(id)arg1;
- (void)handleResult:(id)arg1;
- (void)getData;
- (void)getDataNoSyn;
- (void)showNextPageTip:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)AddPVEvent;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)reLoginFinishDelegate;
- (double)getTopicTitleHeight:(id)arg1;
- (id)getModelByData:(id)arg1 dataSource:(int)arg2 dataType:(int)arg3;
- (int)getViewType:(long long)arg1;
- (void)AHLoadingViewReloadClick:(id)arg1;
- (void)initTableView;
- (void)initData;
- (void)editFavourite:(_Bool)arg1;
- (void)deleteAction;
- (void)updateSynLabelText:(id)arg1;
- (void)viewDidLoad;
- (void)postEventBegin;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)convertTopicWithTopic:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)sendPostToUserFavouriteWithSelectedNumber;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

