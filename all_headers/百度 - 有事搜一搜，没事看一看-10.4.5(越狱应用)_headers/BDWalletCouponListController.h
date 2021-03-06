//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDWalletBaseViewController.h"

#import "BDWalletCouponCellDelegate-Protocol.h"
#import "BDwalletBBallteCouponViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BDWalletCouponBlankView, BDWalletCouponCell, BDWalletCouponListModel, BDWalletCouponOverlayView, BDWalletRefreshTableFooterView, BDWalletRefreshTableHeaderView, BDWalletStatusView, BDwalletBBallteCouponView, BaiduWalletAdScrollView, NSString, UITableView, UIView;
@protocol BaiduWallet_CouponListDelegate;

@interface BDWalletCouponListController : BDWalletBaseViewController <UITableViewDataSource, UITableViewDelegate, BDWalletCouponCellDelegate, BDwalletBBallteCouponViewDelegate>
{
    UIView *_footerView;
    BDWalletCouponOverlayView *_overlayView;
    UIView *_coverView;
    BDWalletCouponBlankView *_blankView;
    _Bool _customEditing;
    _Bool _isViewShowing;
    id <BaiduWallet_CouponListDelegate> _delegate;
    BDWalletCouponListModel *_listModel;
    BDWalletCouponCell *_editingCell;
    UITableView *_couponTable;
    BDWalletRefreshTableHeaderView *_refreshHeaderView;
    BDWalletRefreshTableFooterView *_refreshFooterView;
    BDWalletStatusView *_statusVC;
    UIView *_defaultView;
    UIView *_tableFooterView;
    BDwalletBBallteCouponView *_bCouponView;
    BaiduWalletAdScrollView *_adBannerView;
}

@property(nonatomic) _Bool isViewShowing; // @synthesize isViewShowing=_isViewShowing;
@property(retain, nonatomic) BaiduWalletAdScrollView *adBannerView; // @synthesize adBannerView=_adBannerView;
@property(retain, nonatomic) BDwalletBBallteCouponView *bCouponView; // @synthesize bCouponView=_bCouponView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) BDWalletStatusView *statusVC; // @synthesize statusVC=_statusVC;
@property(retain, nonatomic) BDWalletRefreshTableFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) BDWalletRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) _Bool customEditing; // @synthesize customEditing=_customEditing;
@property(retain, nonatomic) UITableView *couponTable; // @synthesize couponTable=_couponTable;
@property(retain, nonatomic) BDWalletCouponCell *editingCell; // @synthesize editingCell=_editingCell;
@property(retain, nonatomic) BDWalletCouponListModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) __weak id <BaiduWallet_CouponListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statisticsCouponListToUseMethod:(id)arg1;
- (void)addStatisticsEvent:(id)arg1;
- (_Bool)needShowToolBar;
- (void)loginWithThirdPartyAuthorizationLoginError;
- (void)dealThirdPartyAuthorizationLogin:(id)arg1;
- (void)receiveCouponSucess:(id)arg1;
- (void)lookUpMoreCoupon;
- (void)clickToUseButtonAction:(id)arg1;
- (void)updateRefreshView;
- (void)BDWalletRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (_Bool)BDWalletRefreshTableFooterDataSourceIsLoading:(id)arg1;
- (void)BDWalletRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)BDWalletRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectCouponModel:(id)arg1;
- (void)didShowCouponModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)statusBtnClick:(id)arg1;
- (void)deleteCoupon;
- (void)enterEmptyPage;
- (void)enterUnUsedCouponList;
- (void)adClickedWithIndex:(long long)arg1;
- (void)loginSuccess;
- (void)updateADBannerItems;
- (void)initRefreshView;
- (id)tableHeaderView;
- (void)initBlankView;
- (void)initTableView;
- (void)initAdBannerView;
- (void)initBCouponView;
- (void)createDefaultView;
- (void)initSubviews;
- (void)handleDataWithError:(id)arg1;
- (void)getNextPageData;
- (void)getFirstPageData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (id)initWithListState:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

