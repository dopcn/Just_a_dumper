//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseNativeViewController.h"

#import "HSTabChildCtrProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBRouteProtocol-Protocol.h"

@class HSHomeDataParser, HSMyNavView, HSTabHomePageController, HSUserInfoView, NSDictionary, NSString, UITableView, WBWidgetModel;

@interface HSHomeMineViewController : WBBaseNativeViewController <UITableViewDelegate, UITableViewDataSource, WBRouteProtocol, HSTabChildCtrProtocol>
{
    _Bool _loginFromSelf;
    _Bool _isMyRequestTimeOut;
    _Bool _isRequestTimeOut;
    _Bool _viewWillAppear;
    _Bool _isShow;
    _Bool _needShowOpenNotice;
    int _tabPageType;
    HSHomeDataParser *_dataParser;
    NSDictionary *_actionDic;
    UITableView *_tableView;
    HSUserInfoView *_headView;
    HSTabHomePageController *_parentViewCtr;
    NSDictionary *_curTabData;
    NSDictionary *_transitionTabData;
    NSString *_aRequestDataDicStr;
    WBWidgetModel *_detailModel;
    HSMyNavView *_naviView;
    double _heightForHeader;
}

+ (id)routeWithParamters:(id)arg1 extensionParamters:(id)arg2;
@property(nonatomic) _Bool needShowOpenNotice; // @synthesize needShowOpenNotice=_needShowOpenNotice;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) double heightForHeader; // @synthesize heightForHeader=_heightForHeader;
@property(nonatomic) _Bool viewWillAppear; // @synthesize viewWillAppear=_viewWillAppear;
@property(retain, nonatomic) HSMyNavView *naviView; // @synthesize naviView=_naviView;
@property(nonatomic) _Bool isRequestTimeOut; // @synthesize isRequestTimeOut=_isRequestTimeOut;
@property(retain, nonatomic) WBWidgetModel *detailModel; // @synthesize detailModel=_detailModel;
@property(copy, nonatomic) NSString *aRequestDataDicStr; // @synthesize aRequestDataDicStr=_aRequestDataDicStr;
@property(retain, nonatomic) NSDictionary *transitionTabData; // @synthesize transitionTabData=_transitionTabData;
@property(retain, nonatomic) NSDictionary *curTabData; // @synthesize curTabData=_curTabData;
@property(nonatomic) int tabPageType; // @synthesize tabPageType=_tabPageType;
@property(nonatomic) __weak HSTabHomePageController *parentViewCtr; // @synthesize parentViewCtr=_parentViewCtr;
@property(nonatomic) _Bool isMyRequestTimeOut; // @synthesize isMyRequestTimeOut=_isMyRequestTimeOut;
@property(retain, nonatomic) HSUserInfoView *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool loginFromSelf; // @synthesize loginFromSelf=_loginFromSelf;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *actionDic; // @synthesize actionDic=_actionDic;
@property(retain, nonatomic) HSHomeDataParser *dataParser; // @synthesize dataParser=_dataParser;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)recordTabPageType;
- (void)checkNoticeOpen;
- (void)imAction;
- (void)backAction;
- (void)configNavigationView;
- (void)transmitParentViewCtr:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)adjustStatusBarAppearance:(double)arg1;
- (long long)preferredStatusBarStyle;
- (id)registerPrivateItemView;
- (id)initWithAction:(id)arg1;
- (void)switchOperateDuration:(double)arg1;
- (void)needLoginOperateThen:(CDUnknownBlockType)arg1;
- (void)pubRequest;
- (id)getOrderPostBodyDic;
- (void)orderRequest;
- (void)refreshCellData:(id)arg1;
- (id)failFootView:(id)arg1;
- (id)sucessFootView;
- (void)stopTopRefreshLoading;
- (void)requestMyDataFailure:(id)arg1;
- (void)requestMyDataFinish:(id)arg1;
- (id)getPostBodyDic;
- (void)requestMyDataReloadData:(_Bool)arg1;
- (void)requestReloadMyData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

