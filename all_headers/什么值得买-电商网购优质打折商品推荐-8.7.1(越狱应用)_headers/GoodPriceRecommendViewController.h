//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavigationBarViewController.h"

#import "NavigatonBarViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIBaseTableView, WebLoadV;

@interface GoodPriceRecommendViewController : NavigationBarViewController <NavigatonBarViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    long long _page;
    _Bool _isRefreshing;
    NSDictionary *_dicData;
    NSString *_type;
    NSString *_articleChannelId;
    NSString *_floatingLayerProgram;
    NSString *_navBarTitle;
    WebLoadV *_webLoadV;
    UIBaseTableView *_tableView;
    NSMutableArray *_arrData;
    NSMutableDictionary *_params;
}

@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *arrData; // @synthesize arrData=_arrData;
@property(retain, nonatomic) UIBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WebLoadV *webLoadV; // @synthesize webLoadV=_webLoadV;
@property(copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(copy, nonatomic) NSString *floatingLayerProgram; // @synthesize floatingLayerProgram=_floatingLayerProgram;
@property(copy, nonatomic) NSString *articleChannelId; // @synthesize articleChannelId=_articleChannelId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *dicData; // @synthesize dicData=_dicData;
- (void).cxx_destruct;
- (void)leftButtonClick;
- (void)commonErrorRefresh:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)buttonNotInterest:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleTable:(id)arg1 indexPath:(id)arg2;
- (void)requestNotInterest:(id)arg1 indexPath:(id)arg2;
- (void)handleErrorData:(_Bool)arg1;
- (void)handleResult:(id)arg1 isRefresh:(_Bool)arg2;
- (void)requestParam:(_Bool)arg1;
- (void)loadMore;
- (void)sendRequest;
- (void)removeLoadingView;
- (void)addLoadingView;
- (void)initNavBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

