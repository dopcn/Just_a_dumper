//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SubscriptionBaseViewControler.h"

#import "DispatchPaning2Pop-Protocol.h"
#import "IfengData_RequestListener-Protocol.h"
#import "PublicStatProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerDispatchable-Protocol.h"

@class IfengStateButton, JTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIView;

@interface SubscribeRecommendViewController : SubscriptionBaseViewControler <IfengData_RequestListener, UITableViewDataSource, UITableViewDelegate, UIViewControllerDispatchable, DispatchPaning2Pop, PublicStatProtocol>
{
    _Bool _needRefrashChildList;
    _Bool _isLoadNextPage;
    int _subscribeType;
    JTableView *_jTableView;
    NSMutableArray *_sourceDataArr;
    UIView *_noDataView;
    NSMutableDictionary *_mySubscribeCacheData;
    UIButton *_editButton;
    NSArray *_currentRequestChannelIds;
    UIView *_loadDataStateBackGroundView;
    IfengStateButton *_errorButton;
}

@property(retain, nonatomic) IfengStateButton *errorButton; // @synthesize errorButton=_errorButton;
@property(retain, nonatomic) UIView *loadDataStateBackGroundView; // @synthesize loadDataStateBackGroundView=_loadDataStateBackGroundView;
@property(retain, nonatomic) NSArray *currentRequestChannelIds; // @synthesize currentRequestChannelIds=_currentRequestChannelIds;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) NSMutableDictionary *mySubscribeCacheData; // @synthesize mySubscribeCacheData=_mySubscribeCacheData;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) _Bool isLoadNextPage; // @synthesize isLoadNextPage=_isLoadNextPage;
@property(nonatomic) _Bool needRefrashChildList; // @synthesize needRefrashChildList=_needRefrashChildList;
@property(retain, nonatomic) NSMutableArray *sourceDataArr; // @synthesize sourceDataArr=_sourceDataArr;
@property(nonatomic) int subscribeType; // @synthesize subscribeType=_subscribeType;
@property(retain, nonatomic) JTableView *jTableView; // @synthesize jTableView=_jTableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)deleteMySucribeWithChannelId:(id)arg1;
- (void)resetTableView;
- (id)handleCurrentRequestChannelIds;
- (void)requestMySubscribeData;
- (void)setStateButtonState;
- (void)setMySubscribeStateButtonState;
- (void)requestRecommendSubscribeData;
- (void)requestData;
- (void)editResponse:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createBlankCell:(id)arg1 IndexPath:(id)arg2;
- (id)createEditCell:(id)arg1 IndexPath:(id)arg2;
- (id)createSlideCell:(id)arg1 IndexPath:(id)arg2;
- (id)createDocCell:(id)arg1 IndexPath:(id)arg2;
- (id)createChildItemListCell:(id)arg1 IndexPath:(id)arg2;
- (void)jTableViewStartBottomMoreLoading:(id)arg1;
- (void)jTableViewStartHeadLoading:(id)arg1;
- (void)saveToCacheData:(id)arg1;
- (void)getFromCacheData;
- (void)initMySubscribeCacheData;
- (void)handleSubscribeListChanged;
- (void)removeObserver;
- (void)addObserver;
- (void)refreshEditButton;
- (void)refreshTableView;
- (void)restBtPressed;
- (void)createLoadDataStateBackGroundView;
- (void)createNoDataBackgroundView;
- (void)createTableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

