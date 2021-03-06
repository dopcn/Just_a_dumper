//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRefreshTableViewController.h>

#import "AHBaseServiceDelegate-Protocol.h"
#import "AHLoadingViewDelegate-Protocol.h"

@class AHLoadingView, AHSnackbarsView, ASKCategoryTagService, ASKListService, NSMutableArray, NSString;

@interface ASKListViewController : AHRefreshTableViewController <AHLoadingViewDelegate, AHBaseServiceDelegate>
{
    _Bool isFullScreenMode;
    _Bool isRequestSuccess;
    _Bool isFirstApprear;
    _Bool _isTopController;
    _Bool _orderNeedChange;
    _Bool _isLoading;
    _Bool _isFirstbrowse;
    _Bool _shouldPostNotification;
    _Bool _adFlag;
    long long _bbsId;
    NSString *_bbsName;
    long long _seriesId;
    long long _orderType;
    long long _fromType;
    AHSnackbarsView *_snack;
    ASKListService *_listService;
    ASKCategoryTagService *_categoryTagService;
    AHLoadingView *_loadingView;
    NSString *_containerAddress;
    double _offsetPointY;
    NSMutableArray *_sdkData;
    double _timeForPagePV;
}

@property(nonatomic) double timeForPagePV; // @synthesize timeForPagePV=_timeForPagePV;
@property(nonatomic) _Bool adFlag; // @synthesize adFlag=_adFlag;
@property(retain, nonatomic) NSMutableArray *sdkData; // @synthesize sdkData=_sdkData;
@property(nonatomic) double offsetPointY; // @synthesize offsetPointY=_offsetPointY;
@property(nonatomic) _Bool shouldPostNotification; // @synthesize shouldPostNotification=_shouldPostNotification;
@property(retain, nonatomic) NSString *containerAddress; // @synthesize containerAddress=_containerAddress;
@property(nonatomic) _Bool isFirstbrowse; // @synthesize isFirstbrowse=_isFirstbrowse;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool orderNeedChange; // @synthesize orderNeedChange=_orderNeedChange;
@property(nonatomic) _Bool isTopController; // @synthesize isTopController=_isTopController;
@property(retain, nonatomic) AHLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) ASKCategoryTagService *categoryTagService; // @synthesize categoryTagService=_categoryTagService;
@property(retain, nonatomic) ASKListService *listService; // @synthesize listService=_listService;
@property(retain, nonatomic) AHSnackbarsView *snack; // @synthesize snack=_snack;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(nonatomic) long long seriesId; // @synthesize seriesId=_seriesId;
@property(retain, nonatomic) NSString *bbsName; // @synthesize bbsName=_bbsName;
@property(nonatomic) long long bbsId; // @synthesize bbsId=_bbsId;
- (void).cxx_destruct;
- (id)myNavigationController;
- (void)didReceiveMemoryWarning;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 netServiceObj:(id)arg4;
- (void)netServiceFinished:(long long)arg1 netServiceObj:(id)arg2;
- (void)netServiceStarted:(long long)arg1 netServiceObj:(id)arg2;
- (void)AHLoadingViewReloadClick:(id)arg1;
- (void)handleResult;
- (void)showErrorView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)refreashData;
- (id)contentScrollView;
- (void)pullToRefresh;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)pushToHisCenter:(id)arg1 authorid:(id)arg2;
- (_Bool)topicIsAddToHistory:(long long)arg1;
- (void)didChangeOrderType:(id)arg1;
- (void)showTipsWithString:(id)arg1;
- (void)pullUpdateTriggering:(id)arg1 type:(long long)arg2;
- (void)addPVEvent;
- (void)initViews;
- (void)distriButionSuccess:(id)arg1;
- (id)insertAdvertWithAdvertData:(id)arg1;
- (id)insertAdvertWithListData:(id)arg1 advertData:(id)arg2;
- (void)requestAdvertWithPageIndex:(long long)arg1;
- (id)getDateWithStringDate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)endPVTime;
- (void)startPVTime;
- (void)childViewWillDisAppearInScrollNavigtionViewController:(id)arg1;
- (void)childViewWillAppearInScrollNavigtionViewController:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)setup:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

