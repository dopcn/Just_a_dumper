//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMLWBaseViewController.h"

#import "BMLWOrderDetailCustomServiceCellDelegate-Protocol.h"
#import "BMLWOrderDetailGoodsInfoCellDelegate-Protocol.h"
#import "BMLWOrderDetailGoodsPhotosCellDelegate-Protocol.h"
#import "BMLWOrderDetailOrderStatusMapCellDelegate-Protocol.h"
#import "BMLWOrderdetailOrderStatusBaseCellDelegate-Protocol.h"
#import "BMLWRedPacketFloatViewDelegate-Protocol.h"
#import "SAKPortalable-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BMLWOrderDetailBottomView, BMLWOrderDetailScheduledDeliveryModel, BMLWOrderDetailScheduledDeliveryView, BMLWOrderStatusModel, BMLWRedPacketFloatView, BMLWRiderInfoModel, NSMutableArray, NSString, NSURL, SAKScrollViewRefreshControl, UITableView;

@interface BMLWOrderDetailViewController : BMLWBaseViewController <UITableViewDelegate, UITableViewDataSource, BMLWRedPacketFloatViewDelegate, BMLWOrderdetailOrderStatusBaseCellDelegate, BMLWOrderDetailOrderStatusMapCellDelegate, BMLWOrderDetailCustomServiceCellDelegate, BMLWOrderDetailGoodsInfoCellDelegate, BMLWOrderDetailGoodsPhotosCellDelegate, SAKPortalable>
{
    _Bool _showRedPacketAutomatically;
    _Bool _canComment;
    _Bool _isLoading;
    _Bool _needRefresh;
    _Bool _isFirstLoad;
    SAKScrollViewRefreshControl *_pullRefreshView;
    UITableView *_tableView;
    BMLWRedPacketFloatView *_redPacketView;
    NSURL *_redPacketIconURL;
    BMLWOrderDetailScheduledDeliveryView *_scheduledDeliveryView;
    BMLWOrderDetailBottomView *_bottomView;
    NSString *_orderId;
    NSString *_goodsNames;
    BMLWRiderInfoModel *_rider;
    NSMutableArray *_orderDetailArray;
    BMLWOrderStatusModel *_orderState;
    long long _businessType;
    BMLWOrderDetailScheduledDeliveryModel *_deliveryModel;
    NSString *_customServiceURL;
}

+ (id)orderDetailURLWithOrderViewId:(id)arg1 source:(id)arg2;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool canComment; // @synthesize canComment=_canComment;
@property(retain, nonatomic) NSString *customServiceURL; // @synthesize customServiceURL=_customServiceURL;
@property(retain, nonatomic) BMLWOrderDetailScheduledDeliveryModel *deliveryModel; // @synthesize deliveryModel=_deliveryModel;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) BMLWOrderStatusModel *orderState; // @synthesize orderState=_orderState;
@property(retain, nonatomic) NSMutableArray *orderDetailArray; // @synthesize orderDetailArray=_orderDetailArray;
@property(retain, nonatomic) BMLWRiderInfoModel *rider; // @synthesize rider=_rider;
@property(retain, nonatomic) NSString *goodsNames; // @synthesize goodsNames=_goodsNames;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) BMLWOrderDetailBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) BMLWOrderDetailScheduledDeliveryView *scheduledDeliveryView; // @synthesize scheduledDeliveryView=_scheduledDeliveryView;
@property(retain, nonatomic) NSURL *redPacketIconURL; // @synthesize redPacketIconURL=_redPacketIconURL;
@property(retain, nonatomic) BMLWRedPacketFloatView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SAKScrollViewRefreshControl *pullRefreshView; // @synthesize pullRefreshView=_pullRefreshView;
@property(nonatomic) _Bool showRedPacketAutomatically; // @synthesize showRedPacketAutomatically=_showRedPacketAutomatically;
- (void).cxx_destruct;
- (void)dealloc;
- (void)statusMapCellDidClickRiderRoute;
- (void)goodsPhotosCell:(id)arg1 didClickImageAtIndex:(unsigned long long)arg2;
- (void)goodsCell:(id)arg1 insuranceURL:(id)arg2;
- (void)serviceCell:(id)arg1 clickItem:(id)arg2;
- (void)baseCellClickOrderStatus;
- (void)handleOrderDetailStatistics:(long long)arg1 extraInfo:(id)arg2;
- (void)handleOrderDetailStatistics:(long long)arg1;
- (void)didClickRedPacket:(id)arg1;
- (id)modelToCellIdentifierMapper;
- (void)setDelegateForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)restoreRedPacketShrinkState;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)refresh;
- (void)userEvaluationClickAction;
- (void)oneMoreOrderClickAction;
- (void)payRightNowClickAction;
- (void)alertMsg:(id)arg1;
- (void)cancelOrderClickAction;
- (void)buildCancelSuccessCaseDataSource:(id)arg1;
- (void)buildCancelFailureBySystemCaseDataSource:(id)arg1;
- (void)buildCancelFailureByRiderCaseDataSource:(id)arg1;
- (void)buildWaitingForConfirmCaseDataSource:(id)arg1;
- (void)buildRefundFailureCaseDataSource:(id)arg1;
- (void)buildRefundSuccessCaseDataSource:(id)arg1;
- (void)buildRefundingCaseDataSource:(id)arg1;
- (void)buildFinishedCaseDataSource:(id)arg1;
- (void)buildDeliveringCaseDataSource:(id)arg1;
- (void)buildFetchingCaseDataSource:(id)arg1;
- (void)buildWaitForAcceptCaseDataSource:(id)arg1;
- (void)buildWaitForPayCaseDataSource:(id)arg1;
- (void)buildCommonDataSouce:(id)arg1;
- (void)buildEdgeShrinkableRedPacket;
- (void)updateCustomServiceData:(id)arg1;
- (void)buildBottomOperationButtons;
- (void)buildScheduledDeliveryView;
- (_Bool)isValidScheduledDeliveryTime;
- (void)buildDataSourceWithRawDatas:(id)arg1;
- (void)updateOrderStatusWithRawDatas:(id)arg1;
- (void)fetchRawDatas;
- (void)fetchRedPacketShareInfo;
- (void)addPullRefreshView;
- (void)registerAllCells;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didClickRightBarButton:(id)arg1;
- (void)setupRightBarButtonItems;
- (void)initializeData;
- (void)viewDidLoad;
- (id)initWithOrderId:(id)arg1;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

