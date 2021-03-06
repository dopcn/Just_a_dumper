//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMBaseViewController.h"

#import "BMHaiTaoNoticeViewDelegate-Protocol.h"
#import "BMPassWordViewDelegate-Protocol.h"
#import "BMPayMethodV2CellDelegate-Protocol.h"
#import "BMPayOptionV2CellDelegate-Protocol.h"
#import "BMUsePassWordViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BMAddressModel, BMBottomView, BMConfirmOrderManager, BMPayManagerV2, BMUserPassWordView, NSArray, NSString, UITableView;

@interface BMConfirmOrderV2VC : BMBaseViewController <UITableViewDelegate, UITableViewDataSource, BMPayOptionV2CellDelegate, BMPayMethodV2CellDelegate, BMUsePassWordViewDelegate, BMPassWordViewDelegate, BMHaiTaoNoticeViewDelegate>
{
    _Bool _shouldShowHaiTaoNoticeView;
    BMAddressModel *_addressModel;
    BMConfirmOrderManager *_confirmOrderManager;
    UITableView *_tableView;
    NSArray *_dataSourceArray;
    BMBottomView *_bottomView;
    BMPayManagerV2 *_payManager;
    BMUserPassWordView *_inputPayPwdView;
}

@property(nonatomic) _Bool shouldShowHaiTaoNoticeView; // @synthesize shouldShowHaiTaoNoticeView=_shouldShowHaiTaoNoticeView;
@property(retain, nonatomic) BMUserPassWordView *inputPayPwdView; // @synthesize inputPayPwdView=_inputPayPwdView;
@property(retain, nonatomic) BMPayManagerV2 *payManager; // @synthesize payManager=_payManager;
@property(retain, nonatomic) BMBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) BMConfirmOrderManager *confirmOrderManager; // @synthesize confirmOrderManager=_confirmOrderManager;
@property(retain, nonatomic) BMAddressModel *addressModel; // @synthesize addressModel=_addressModel;
- (void).cxx_destruct;
- (void)didClickedCloseNoticeViewBtn;
- (void)didSelectedRowForCoupon;
- (void)saveUserIdCardNumberWithAlertView:(id)arg1 idCardNo:(id)arg2 name:(id)arg3;
- (void)didSelectedRowForUserIDCardNumber;
- (void)didSelectedRowForAddress;
- (_Bool)isRowForCoupon:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareTableViewDatasource;
- (void)refreshConfirmOrderView;
- (void)payOptionV2Cell:(id)arg1 didTapPaySwitch:(id)arg2;
- (void)payMehtodV2Cell:(id)arg1 didClickedBtn:(id)arg2;
- (void)didClickedConfirmOrderBtn;
- (void)requestPayResult;
- (void)checkOrderPayState;
- (void)pushToOrderToPayControllerWithOrderId:(long long)arg1;
- (void)pushToPayResultControllerWithPayModel:(id)arg1;
- (void)callPayKitWithPayModel:(id)arg1;
- (void)payOrderWithPayOrderModel:(id)arg1;
- (void)getPayInfoWithOrderId:(id)arg1;
- (void)createOrder;
- (void)showSetPassWordAlertView;
- (void)reSetPasssWord;
- (void)OnPushController:(long long)arg1 wParam:(id)arg2;
- (void)checkPayPwdCorrect;
- (void)checkPayPwdExist;
- (void)removeObserverWhenViewWillDisappear;
- (void)addObserverWhenViewWillAppear;
- (void)removeObserverWhenDealloc;
- (void)addObserverWhenViewDidLoad;
- (void)initSubviews;
- (id)initWithConfirmOrderManager:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

