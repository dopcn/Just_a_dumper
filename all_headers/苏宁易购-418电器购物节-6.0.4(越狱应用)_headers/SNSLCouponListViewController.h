//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSLOrderCommonVCtrler.h"

#import "PayFlowServiceDelegate-Protocol.h"

@class NSMutableArray, NSString, PayFlowService, SNMBNewOrderListDTO, UIButton, UILabel, UIView, YDCouponDTO;
@protocol SNSLCouponListDelegate;

@interface SNSLCouponListViewController : SNSLOrderCommonVCtrler <PayFlowServiceDelegate>
{
    _Bool isCanEdit;
    _Bool isSecLoad;
    _Bool isESSPay;
    NSString *orderID;
    NSString *vendorCode;
    NSString *sendTime;
    SNMBNewOrderListDTO *_YDOrderBean;
    id <SNSLCouponListDelegate> _delegate;
    UIView *_bottomNavBar;
    UIView *_bottomNavBar2;
    UIView *_noListView;
    UIButton *_confirmButton;
    UIButton *_gotoPayButton;
    UILabel *_orderCountLabel;
    UILabel *_orderCountLabel2;
    UIButton *_navRightBtn;
    UIButton *_navRightBtn2;
    YDCouponDTO *_YDCouponDto;
    NSMutableArray *_SelectedCouponArr;
    NSMutableArray *_FunCouponArr;
    NSString *_totalBalance;
    NSString *_totalAdjust;
    NSString *_checkedQty;
    PayFlowService *_payFlowService;
}

+ (void)load;
@property(retain, nonatomic) PayFlowService *payFlowService; // @synthesize payFlowService=_payFlowService;
@property(retain, nonatomic) NSString *checkedQty; // @synthesize checkedQty=_checkedQty;
@property(retain, nonatomic) NSString *totalAdjust; // @synthesize totalAdjust=_totalAdjust;
@property(retain, nonatomic) NSString *totalBalance; // @synthesize totalBalance=_totalBalance;
@property(retain, nonatomic) NSMutableArray *FunCouponArr; // @synthesize FunCouponArr=_FunCouponArr;
@property(retain, nonatomic) NSMutableArray *SelectedCouponArr; // @synthesize SelectedCouponArr=_SelectedCouponArr;
@property(retain, nonatomic) YDCouponDTO *YDCouponDto; // @synthesize YDCouponDto=_YDCouponDto;
@property(retain, nonatomic) UIButton *navRightBtn2; // @synthesize navRightBtn2=_navRightBtn2;
@property(retain, nonatomic) UIButton *navRightBtn; // @synthesize navRightBtn=_navRightBtn;
@property(retain, nonatomic) UILabel *orderCountLabel2; // @synthesize orderCountLabel2=_orderCountLabel2;
@property(retain, nonatomic) UILabel *orderCountLabel; // @synthesize orderCountLabel=_orderCountLabel;
@property(retain, nonatomic) UIButton *gotoPayButton; // @synthesize gotoPayButton=_gotoPayButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *noListView; // @synthesize noListView=_noListView;
@property(retain, nonatomic) UIView *bottomNavBar2; // @synthesize bottomNavBar2=_bottomNavBar2;
@property(retain, nonatomic) UIView *bottomNavBar; // @synthesize bottomNavBar=_bottomNavBar;
@property(nonatomic) __weak id <SNSLCouponListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SNMBNewOrderListDTO *YDOrderBean; // @synthesize YDOrderBean=_YDOrderBean;
@property(retain, nonatomic) NSString *sendTime; // @synthesize sendTime;
@property(nonatomic) _Bool isESSPay; // @synthesize isESSPay;
@property(retain, nonatomic) NSString *vendorCode; // @synthesize vendorCode;
@property(retain, nonatomic) NSString *orderID; // @synthesize orderID;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setOrderNumLabel:(id)arg1 numString:(id)arg2 frontColor:(id)arg3 frontFont:(id)arg4 backColor:(id)arg5 backFont:(id)arg6;
- (void)setOrderNumWithContent:(id)arg1 contentColor:(id)arg2 contentFont:(id)arg3 label:(id)arg4 numString:(id)arg5 frontColor:(id)arg6 frontFont:(id)arg7 backColor:(id)arg8 backFont:(id)arg9;
- (void)gotoChangeCoupon:(id)arg1;
- (void)gotoPayAction:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)selectTableRow:(long long)arg1;
- (void)getGongRongArr;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)useYuDingCouponListCompletionWithResult:(_Bool)arg1 YDCoupondic:(id)arg2 errorMsg:(id)arg3;
- (void)saveYuDingCouponListCompletionWithResult:(_Bool)arg1 YDCouponDTO:(id)arg2 errorMsg:(id)arg3;
- (void)GetYuDingCouponListCompletionWithResult:(_Bool)arg1 YDCouponDTO:(id)arg2 errorMsg:(id)arg3;
- (void)loadBottomView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

