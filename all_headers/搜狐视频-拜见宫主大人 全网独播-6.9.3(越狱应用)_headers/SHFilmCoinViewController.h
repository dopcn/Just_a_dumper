//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHMovieBaseViewControll.h"

#import "NoDataViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, NoDataView, SVVIPCommodityModel, UITableView;

@interface SHFilmCoinViewController : SHMovieBaseViewControll <UITableViewDataSource, UITableViewDelegate, NoDataViewDelegate>
{
    UITableView *_tableView;
    NSArray *_products;
    NSArray *_commodities;
    long long _openType;
    NSString *_successOrderSn;
    SVVIPCommodityModel *_selectedComodityModel;
    long long _entanceType;
    NSString *_aid;
    NSString *_vid;
    NSString *_chanlid;
    NSString *_columnid;
    long long _fromType;
    NoDataView *_noDataView;
}

@property(retain, nonatomic) NoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSString *columnid; // @synthesize columnid=_columnid;
@property(retain, nonatomic) NSString *chanlid; // @synthesize chanlid=_chanlid;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property long long entanceType; // @synthesize entanceType=_entanceType;
@property(retain, nonatomic) SVVIPCommodityModel *selectedComodityModel; // @synthesize selectedComodityModel=_selectedComodityModel;
@property(copy, nonatomic) NSString *successOrderSn; // @synthesize successOrderSn=_successOrderSn;
@property(nonatomic) long long openType; // @synthesize openType=_openType;
@property(retain, nonatomic) NSArray *commodities; // @synthesize commodities=_commodities;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)onSingleTapOccured;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateRightBtn;
- (void)showSOHUFeeProtocol;
- (void)rightButtonClick:(id)arg1;
- (void)cancelFilmCoinViewController;
- (void)pushRedeemCodeViewController;
- (void)reloadTableData:(id)arg1;
- (void)registerNotifications;
- (void)addNoDataView;
- (void)addRightButton;
- (void)addTableFooterView;
- (void)refreshUserPrivileges;
- (void)paymentWithOrderSN:(id)arg1 commodityID:(long long)arg2;
- (void)addLoggingAfterPayed;
- (void)createOrderWithCommodity:(id)arg1;
- (void)userDidLoginWithNotification:(id)arg1;
- (void)loadFilmCoinProducts;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addLog;
- (void)backButtonClick;
- (void)setLeftButtonWithTitle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithOpenType:(long long)arg1 aid:(id)arg2 vid:(id)arg3 channelID:(id)arg4 columnid:(id)arg5 fromType:(long long)arg6;
- (id)initWithOpenType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

