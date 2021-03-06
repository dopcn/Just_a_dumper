//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlightNavibarVC.h"

#import "BizRecommendViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FPayResult, NSArray, NSMutableArray, NSString, UITableView;

@interface FPayProcessingVC : FlightNavibarVC <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, BizRecommendViewDelegate>
{
    UITableView *_tableViewInfo;
    FPayResult *_fPayResult;
    NSArray *_arrayTips;
    unsigned long long _payFromType;
    NSMutableArray *_arrayAction;
}

@property(retain, nonatomic) NSMutableArray *arrayAction; // @synthesize arrayAction=_arrayAction;
@property(nonatomic) unsigned long long payFromType; // @synthesize payFromType=_payFromType;
@property(retain, nonatomic) NSArray *arrayTips; // @synthesize arrayTips=_arrayTips;
@property(retain, nonatomic) FPayResult *fPayResult; // @synthesize fPayResult=_fPayResult;
@property(retain, nonatomic) UITableView *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getSearchNetBack:(id)arg1 forInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)bizRecommendEnter:(id)arg1;
- (void)setupR3ViewSubs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)setChangePriceViewSubs:(id)arg1 inSize:(struct CGSize *)arg2 payChangePriceTip:(id)arg3;
- (void)setupR2ViewSubs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)setupContentSubs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)setupTableViewHeaderR1C1R3Subs:(id)arg1 inSize:(struct CGSize *)arg2 index:(long long)arg3;
- (void)setupTableViewHeaderR1C1R2Subs:(id)arg1 inSize:(struct CGSize *)arg2 index:(long long)arg3;
- (void)setupTableViewHeaderR1C1R1Subs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)initTableViewHeaderR1C1R1Subs:(id)arg1;
- (void)setUpOrderInfoViewSubs:(id)arg1 inSize:(struct CGSize *)arg2 index:(long long)arg3;
- (void)setupTableViewHeaderR1C1Subs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)initTableViewHeaderR1C1Subs:(id)arg1;
- (void)setupTableViewHeaderSubs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)initTableViewHeaderSubs:(id)arg1;
- (void)setupNaviBarSubs:(id)arg1;
- (void)setupViewRootSubs:(id)arg1;
- (void)addbizRecommendButton;
- (void)jumpLocalOrderDetail:(id)arg1;
- (void)jumpOrderDetail:(id)arg1;
- (void)orderListStart;
- (void)orderDetailStart;
- (_Bool)isJoinOrderPayType;
- (void)goMain;
- (_Bool)canDoGoBack;
- (void)goBack:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

