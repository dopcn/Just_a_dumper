//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTFlightCommonUpPushViewDelegate-Protocol.h"
#import "CTFlightContactEditWidgetDelegate-Protocol.h"
#import "CTFlightContactListWidgetDelegate-Protocol.h"
#import "CTFlightCostDetailsDelegate-Protocol.h"
#import "CTFlightOrderConfirmNewCProductPurchasedCellDelegate-Protocol.h"
#import "CTFlightOrderVCBottomViewDelegate-Protocol.h"
#import "CTFlightUseAdditionalCouponWidgetDelegate-Protocol.h"
#import "FlightDeliveryMgrInterfaceDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CTFlightCommonUpPushView, CTFlightCostDetailsFullScreenMaskView, CTFlightCountDownTimer, CTFlightNavigationBar, CTFlightOrderConfirmBaseCacheBean, CTFlightOrderVCBottomView, CTInvoiceTitleManagerCacheBean, CTVectorImageView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIGestureRecognizer, UILabel, UITableView, UIView;
@protocol FlightDeliveryMgrInterface;

@interface CTFlightCommonOrderConfirmViewController : CTRootViewController <CTFlightUseAdditionalCouponWidgetDelegate, CTFlightContactListWidgetDelegate, CTFlightContactEditWidgetDelegate, FlightDeliveryMgrInterfaceDelegate, CTFlightCostDetailsDelegate, CTFlightOrderConfirmNewCProductPurchasedCellDelegate, CTFlightCommonUpPushViewDelegate, UIAlertViewDelegate, CTFlightOrderVCBottomViewDelegate>
{
    NSMutableArray *arraySectionType;
    NSMutableDictionary *confirmCellTypeDic;
    _Bool isXProductSoldOut;
    NSString *couponCheckSeriviceToken;
    CTFlightCountDownTimer *timeoutTimer;
    _Bool isNotFirstLoad;
    UIGestureRecognizer *tapGR;
    _Bool _isLoadingCoupon;
    _Bool _isCheckTraceFinish;
    int _myInvoiceTitleIndex;
    CTFlightOrderConfirmBaseCacheBean *_cache;
    UITableView *_flightOrderTableView;
    CTFlightNavigationBar *_flightNavigationBar;
    NSString *_uuid;
    CTInvoiceTitleManagerCacheBean *_invoiceTitleCacheBean;
    CTFlightCommonUpPushView *_exUpView;
    id <FlightDeliveryMgrInterface> _deliveryMgr;
    NSMutableDictionary *_deliveryIndexMap;
    NSString *_couponcellLogTitle;
    NSString *_couponcellLogSubTitle;
    NSMutableArray *_deliveryXProductList;
    UIView *_viewBottom;
    CTFlightCostDetailsFullScreenMaskView *_costDetailMaskView;
    UILabel *_limitMinutesLabel;
    UILabel *_limitSecondsLabel;
    UIView *_limitTimeView;
    CTVectorImageView *_limitTimeClockView;
    UILabel *_visionAssitantLabel;
    UIView *_limitTimeTipsView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_tableViewBottomConstraint;
    CTFlightOrderVCBottomView *_bottomDetailBarView;
    NSLayoutConstraint *_bottomViewHeightConstraint;
    NSLayoutConstraint *_tableViewTopConstraint;
}

@property(nonatomic) _Bool isCheckTraceFinish; // @synthesize isCheckTraceFinish=_isCheckTraceFinish;
@property(nonatomic) __weak NSLayoutConstraint *tableViewTopConstraint; // @synthesize tableViewTopConstraint=_tableViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomViewHeightConstraint; // @synthesize bottomViewHeightConstraint=_bottomViewHeightConstraint;
@property(retain, nonatomic) CTFlightOrderVCBottomView *bottomDetailBarView; // @synthesize bottomDetailBarView=_bottomDetailBarView;
@property(nonatomic) __weak NSLayoutConstraint *tableViewBottomConstraint; // @synthesize tableViewBottomConstraint=_tableViewBottomConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *limitTimeTipsView; // @synthesize limitTimeTipsView=_limitTimeTipsView;
@property(retain, nonatomic) UILabel *visionAssitantLabel; // @synthesize visionAssitantLabel=_visionAssitantLabel;
@property(retain, nonatomic) CTVectorImageView *limitTimeClockView; // @synthesize limitTimeClockView=_limitTimeClockView;
@property(retain, nonatomic) UIView *limitTimeView; // @synthesize limitTimeView=_limitTimeView;
@property(retain, nonatomic) UILabel *limitSecondsLabel; // @synthesize limitSecondsLabel=_limitSecondsLabel;
@property(retain, nonatomic) UILabel *limitMinutesLabel; // @synthesize limitMinutesLabel=_limitMinutesLabel;
@property(retain, nonatomic) CTFlightCostDetailsFullScreenMaskView *costDetailMaskView; // @synthesize costDetailMaskView=_costDetailMaskView;
@property(retain, nonatomic) UIView *viewBottom; // @synthesize viewBottom=_viewBottom;
@property(retain, nonatomic) NSMutableArray *deliveryXProductList; // @synthesize deliveryXProductList=_deliveryXProductList;
@property(copy, nonatomic) NSString *couponcellLogSubTitle; // @synthesize couponcellLogSubTitle=_couponcellLogSubTitle;
@property(copy, nonatomic) NSString *couponcellLogTitle; // @synthesize couponcellLogTitle=_couponcellLogTitle;
@property(retain, nonatomic) NSMutableDictionary *deliveryIndexMap; // @synthesize deliveryIndexMap=_deliveryIndexMap;
@property(readonly, nonatomic) id <FlightDeliveryMgrInterface> deliveryMgr; // @synthesize deliveryMgr=_deliveryMgr;
@property(nonatomic) int myInvoiceTitleIndex; // @synthesize myInvoiceTitleIndex=_myInvoiceTitleIndex;
@property(retain, nonatomic) CTFlightCommonUpPushView *exUpView; // @synthesize exUpView=_exUpView;
@property(retain, nonatomic) CTInvoiceTitleManagerCacheBean *invoiceTitleCacheBean; // @synthesize invoiceTitleCacheBean=_invoiceTitleCacheBean;
@property(nonatomic) _Bool isLoadingCoupon; // @synthesize isLoadingCoupon=_isLoadingCoupon;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) CTFlightNavigationBar *flightNavigationBar; // @synthesize flightNavigationBar=_flightNavigationBar;
@property(retain, nonatomic) UITableView *flightOrderTableView; // @synthesize flightOrderTableView=_flightOrderTableView;
@property(retain, nonatomic) CTFlightOrderConfirmBaseCacheBean *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)getOutsideDataWithType:(id)arg1;
- (void)callbackFromDeliveryManager:(long long)arg1 param:(id)arg2;
- (void)reloadTableByDelivery;
- (void)handleConfirmPageDelivery;
- (_Bool)isNeedCaculateXProductPrice;
- (void)hideLimitTimeTipsView;
- (void)refreshLimitTimerView:(int)arg1;
- (void)newVisionPayTime:(int)arg1;
- (void)refreshLimitTimerViewNewVision:(int)arg1;
- (id)getTimeString:(int)arg1;
- (id)getTitleStringWithTarget:(id)arg1 placeString:(id)arg2;
- (void)setupTimeTipView;
- (void)setupLimitTimeView;
- (_Bool)isInternational;
- (void)keyboardHide:(id)arg1;
- (id)findFirstResponder:(id)arg1;
- (void)hideKeyboard:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)updateXProductCouponList;
- (void)gotoFlightCarUseViewControllerWithModel:(id)arg1;
- (void)returnFirstTripAndRefresh;
- (id)getGoMiddlePageVC;
- (id)getSecondFlightListVC;
- (id)getFirstFlightListVC;
- (void)gotoRoundWayGoMiddlePage;
- (void)gotoOrderDetailViewController;
- (void)goToSuccessPage;
- (_Bool)hasUseCarCouponInConfirmView;
- (void)backBarButtonClicked:(id)arg1;
- (id)getTraceParam;
- (void)customizeViewControllerBeforeAnimate:(id)arg1;
- (void)applicationDidEnterForeground:(id)arg1;
- (void)appWillResignActiveOther:(id)arg1;
- (void)flightOrderViewKeyboardWillHide:(id)arg1;
- (void)flightOrderViewKeyboardWillShow:(id)arg1;
- (void)newVisonTitle;
- (double)getDeltHeightBetweenDiffVersion;
- (void)refreshTitleView;
- (void)didTapToDetailAction:(id)arg1;
- (_Bool)contactEditWidget:(id)arg1 checkNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 deleteNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 editedNode:(id)arg2;
- (void)contactListWidget:(id)arg1 deleteNode:(id)arg2;
- (void)contactListWidget:(id)arg1 changedNode:(id)arg2;
- (_Bool)contactListWidget:(id)arg1 checkNode:(id)arg2 alert:(_Bool)arg3;
- (void)contactListWidget:(id)arg1 didSelect:(id)arg2;
- (void)submitButtonClicked;
- (void)useCarViewControllerDidTapBack;
- (void)useCarViewControllerDidTapConfirmWithProductModel:(id)arg1;
- (void)flightConfirmNewCProductPurchasedUncheckWithModel:(id)arg1;
- (void)flightConfirmNewCProductPurchasedEditWithModel:(id)arg1 cell:(id)arg2;
- (void)maskView:(id)arg1 willRemoveFromSuperView:(id)arg2;
- (void)beforeScreenMaskHide;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendGetPaymentInfoService;
- (void)doWithOrderChangeResultFailWith:(id)arg1;
- (_Bool)doWithOrderChangeFrameFailWithErrorCode:(int)arg1 serverErrorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onXProductSoldOutContinuePay;
- (void)onXProductSoldOutCancel;
- (id)getAlertMessageWithList:(id)arg1;
- (_Bool)checkXProductSoldOut:(id)arg1;
- (void)realSendModifyOrderService;
- (void)handleCheckTraceCodeError;
- (void)sendCreateOrderService;
- (_Bool)checkDispatchInfo;
- (_Bool)checkOrderInfo;
- (void)doSubmitOrder;
- (void)submitOrder:(id)arg1;
- (void)didTapToPayBtnTouchUpInSideAction:(id)arg1;
- (void)didTapToPayBtnTouchDownAction:(id)arg1;
- (void)flightSectionProductSaleCellClickOperationWith:(id)arg1;
- (void)showProductDescWithSectionIndex:(long long)arg1;
- (_Bool)needOperationWithFlightOrderTime;
- (id)getCouponPriceWithCoupon:(id)arg1;
- (long long)getSumUseCarPrice;
- (id)getCouponCostDetailModelList;
- (void)showFlightPriceDetailViewWithOriginCostList:(id)arg1;
- (void)reLogPageCode;
- (void)resetViewStatusWithXProduct:(id)arg1;
- (void)setXproductCellTypeWithModel:(id)arg1 containArray:(id)arg2;
- (void)resetPackageSaleCellTypeWithType:(long long)arg1 sectionIndex:(long long)arg2;
- (void)setFlightDeliveryCellTypeWithCellArray:(id)arg1;
- (void)resetFormCellTypeWithType:(long long)arg1;
- (void)resetCrnSectionCellType:(long long)arg1;
- (void)resetFlightCellType;
- (void)resetSectionType;
- (void)resetViewWithProductSelectChange;
- (void)refreshOrderAmount;
- (id)getFareTicketAppendHotelShowText;
- (void)setOrderAmount;
- (long long)calAmmount;
- (void)saveHistoryRecord;
- (void)readHistoryRecord;
- (void)sendCarUseServie:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)updateCarUsePriceMark;
- (void)needToSubmitOrder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setViewByCache;
- (void)cloneDeliveryMgrWithOld:(id)arg1;
- (void)setNavigationRightbuttonItems;
- (void)setNavigationBarCusTomTitleView:(id)arg1;
- (void)initNavigationBar;
- (void)unregisterNotification;
- (void)registerNotification;
- (void)iniBottomBar;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initCache;
- (void)initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)isEnableUseCarCoupon;
- (double)getAdditionalCouponCellHeight;
- (void)disMissCouponWidget;
- (void)onInputAdditionalCounponCodeChanged:(id)arg1;
- (void)onDeselectAdditionalCounpon:(id)arg1;
- (void)sendCheckAdditionalCouponRequestForConfirmPageRN:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendCheckAdditionalCouponRequest:(id)arg1 index:(int)arg2 resultCallback:(CDUnknownBlockType)arg3 withWidget:(id)arg4 isShowAnimation:(_Bool)arg5;
- (void)onSelectAdditionalCounpon:(id)arg1 index:(int)arg2 resultCallback:(CDUnknownBlockType)arg3 withWidget:(id)arg4 isShowAnimation:(_Bool)arg5;
- (void)gotoCouponWidget;
- (id)couponTitleLogDict;
- (void)gotoUseAdditionalCouponWidget;
- (id)getAdditionalCouponCellWithTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)sendGetAdditionalCouponListRequest;
- (void)refreshNaviBarState;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (double)getFlightCrnViewForConfirmXProductCellHeight:(id)arg1;
- (id)getFlightCrnViewForConfirmXProductCellWith:(id)arg1 tableView:(id)arg2;
- (id)getDeliveryLogData;
- (id)getTraceDicCacheBean:(id)arg1;
- (void)logTraceCacheBean:(id)arg1 WhenLeave:(id)arg2;
- (_Bool)isSelectedUseCar;
- (_Bool)isMutexWithDeliveryType;
- (_Bool)isContainer:(id)arg1 in:(id)arg2;
- (long long)selectedXProductPrice;
- (void)setFlightOrderConfirmCacheBeanWithDeletaPackagelist:(id)arg1;
- (id)getSelectProductPrice4InvoiceCal;
- (id)getSelectProductPrice;
- (_Bool)isSelectAnyFlightProduct;
- (_Bool)hasBoughtXProductCoupon;
- (_Bool)isSelectedAnyXProduct;
- (_Bool)selectedHotel;
- (id)getFlightOrderAmountString;
- (id)getFlightOrderTotalPrice;
- (int)getPlusIndexInPriceDetailList:(id)arg1;
- (id)getFlightPricedetailArrayWithOriginCostList:(id)arg1;
- (id)getFlightSectionCellListWith:(long long)arg1;
- (_Bool)isCProductWithCellType:(long long)arg1;
- (_Bool)isSameCellType:(long long)arg1 otherCellType:(long long)arg2;
- (int)getFlightCellTypeIndexWithIndexPath:(id)arg1;
- (id)getFlightProductSaleModelWithPath:(id)arg1 classType:(Class)arg2;
- (id)getFlightAreaSetingModelWithSectionIndex:(unsigned long long)arg1;
- (int)getFlightCircleAngleTypeWithIndexPath:(id)arg1;
- (double)getFlightNormalTitleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2 title:(id)arg3 flightcellType:(long long)arg4;
- (id)getFlightNormalTitleCellWithTableView:(id)arg1 indexPath:(id)arg2 title:(id)arg3 circleViewTyoe:(int)arg4 flightcellType:(long long)arg5 urlDesc:(id)arg6;
- (double)getFlightProductSaleTitleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightProductSaleTitleCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightBlackCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightBlackCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightNewCProductDoubleSelectedDetailInfoCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightNewCProductDoubleSelectedDetailInfoCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightNewCProductSingleSelectedCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightNewCProductSingleSelectedCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightNewCProductCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightNewCProductCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightDefaultCell;
- (id)setupFlightOrderConfirmCouponTitleCell:(id)arg1 type:(long long)arg2;
- (id)setupFlightOrderConfirmCouponTitleCellModel:(int)arg1;
- (double)getFlightSectionnProductSaleCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (double)getFlightFormSectionCellHeightWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightFormSectionCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)getFlightSectionnProductSaleCellWithTableView:(id)arg1 indexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

