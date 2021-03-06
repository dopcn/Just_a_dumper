//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDWalletBaseViewController.h"

@class BDCouponDetailFooterView, BDCouponDetailHeaderView, BDWalletCouponDetailViewModel, BDWalletStatusView, UITableView, UIView;

@interface BDWalletCouponDetailController : BDWalletBaseViewController
{
    BDCouponDetailHeaderView *_tableHeaderView;
    BDCouponDetailFooterView *_tableFooterView;
    _Bool _hasEnterScence;
    BDWalletCouponDetailViewModel *_viewModel;
    UITableView *_couponTable;
    BDWalletStatusView *_statusVC;
    UIView *_defaultView;
}

@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) BDWalletStatusView *statusVC; // @synthesize statusVC=_statusVC;
@property _Bool hasEnterScence; // @synthesize hasEnterScence=_hasEnterScence;
@property(retain, nonatomic) UITableView *couponTable; // @synthesize couponTable=_couponTable;
@property(retain, nonatomic) BDWalletCouponDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)statisticsCouponDetailToUseMethod:(id)arg1;
- (void)addStatisticsEvent:(id)arg1;
- (_Bool)needShowToolBar;
- (void)statusBtnClick:(id)arg1;
- (void)copyCodeBtnAction;
- (void)didClickHeader;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)createDefaultView;
- (id)tableFooterView;
- (id)tableHeaderView;
- (void)initTable;
- (void)initSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleDetailWithError:(id)arg1;
- (void)requestDetail;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)init;

@end

