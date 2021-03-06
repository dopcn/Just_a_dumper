//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTFlightSender.h"

@class FlightOrderCreateV2Request;

@interface CTFlightDetailBaseSender : CTFlightSender
{
    FlightOrderCreateV2Request *_createOrderRequest;
}

+ (id)currentSegmentDetailViewModelWithListSectionInfoModel:(id)arg1;
+ (id)getFlightSegmentListWithSelectFlight:(id)arg1;
+ (id)getInstance;
+ (int)getOrderOperationTypeWithCacheBean:(id)arg1;
+ (void)setFlightSegmentForRequest:(id)arg1 cacheBean:(id)arg2;
+ (id)flightRepeatOrderCheckJsonRequesetWithCacheBean:(id)arg1;
+ (int)firstPassengerIDWithCacheBean:(id)arg1;
+ (id)createHotelInfoModel:(id)arg1;
+ (id)grslPromotionViewModelWithCacheBean:(id)arg1;
+ (id)upGradePromotionViewModelWithCacheBean:(id)arg1;
+ (id)promotionWithCoupon:(id)arg1;
+ (void)setPassengerList:(id)arg1 person:(id)arg2 passengerList:(id)arg3 passengerSettingList:(id)arg4 index:(int)arg5;
+ (void)setPassengerRegister:(id)arg1 person:(id)arg2 passenger:(id)arg3;
+ (void)setPassengerPhone:(id)arg1 passenger:(id)arg2;
+ (void)setTravelersCard:(id)arg1 person:(id)arg2 passenger:(id)arg3;
+ (void)setPassengerAgeType:(id)arg1 person:(id)arg2 departDate:(id)arg3;
+ (void)createPassengerList:(id)arg1 psgrSettingList:(id)arg2 FlightDetailBaseCacheBean:(id)arg3;
@property(retain, nonatomic) FlightOrderCreateV2Request *createOrderRequest; // @synthesize createOrderRequest=_createOrderRequest;
- (void).cxx_destruct;
- (id)getFlightSingeleSegmentExtendJsonStrWithPolicyModel:(id)arg1 segmentNO:(id)arg2 filterstring:(id)arg3;
- (id)getFlightExtendMidPageSelectedWithGoPolicyModel:(id)arg1 withReturnPolicyModel:(id)arg2 isCombine:(_Bool)arg3;
- (id)sendCommInvoiceTitleSearch:(id)arg1;
- (id)sendXProductConfigService:(id)arg1 orderConfirmCacheBean:(id)arg2 uuid:(id)arg3 departTime:(id)arg4 departCity:(id)arg5 arriveCity:(id)arg6;
- (id)sendGetVerifyCodeRequestWithPhoneNumber:(id)arg1;
- (_Bool)getNeedCheckDingXiangCATZDiscountRateWithPolicy:(id)arg1;
- (void)setXProductInfoWithModelSuffx:(id)arg1 model:(id)arg2;
- (void)setXProductInfoWithModel:(id)arg1 model:(id)arg2;
- (void)setUpNotelistWithCacheBean:(id)arg1 notelist:(id)arg2;
- (long long)transferedNoteType:(int)arg1;
- (void)setCalXProductList:(id)arg1 noteList:(id)arg2;
- (void)setManyPassengerRMInfoWithResponse:(id)arg1 cacheBean:(id)arg2;
- (id)getLimitedCertificateNumber:(id)arg1;
- (void)setDingXiangText:(id)arg1 goPolicy:(id)arg2;
- (void)setDingXiangType:(id)arg1 goPolicy:(id)arg2;
- (void)setDingXiangWithResponse:(id)arg1 cacheBean:(id)arg2;
- (void)setUpInvoiceDescWithCacheBean:(id)arg1 response:(id)arg2;
- (void)setFlighskyRailwaySegmentModelWith:(id)arg1 response:(id)arg2;
- (id)getFlightOrderFillPolicyModelWith:(id)arg1 middlePolcyModel:(id)arg2 detailResponse:(id)arg3 bundleSaleSegmentIdentify:(int)arg4 flightdetailCacheBean:(id)arg5;
- (void)setFlightOrderFillPolicyVewModel:(id)arg1 response:(id)arg2;
- (void)setFlightOrderFillSegmentVewModel:(id)arg1 response:(id)arg2;
- (void)setFlightOrderFillMainInfoViewModel:(id)arg1 response:(id)arg2;
- (void)setFlightDetailExtearnData:(id)arg1 response:(id)arg2 flightDetailBaseCacheBean:(id)arg3;
- (void)setFlightCartridgeListWithResponse:(id)arg1 cacheBean:(id)arg2;
- (void)setHuiXuanTicketFlag:(id)arg1 response:(id)arg2;
- (void)setCTFlightOrderFlag:(id)arg1 response:(id)arg2;
- (void)setCTFlightOrderViewModel:(id)arg1 response:(id)arg2;
- (void)setupAirlinePassengerCardVMInCache:(id)arg1 withFlightResponse:(id)arg2;
- (void)createSenderCallbackHelper:(id)arg1 atIndex:(int)arg2 deliveryStatus:(_Bool)arg3 withCacheBean:(id)arg4;
- (id)createSenderCallBack4FlightDetailSearch:(id)arg1 TripType:(int)arg2 SelectedGoPolicy:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4 traceModel:(id)arg5;
- (id)getFlightExtendModelWithStr:(id)arg1 extendType:(int)arg2;
- (id)getFlightPackageStrWithGoPolicyModelList:(id)arg1 withReturnPolicyModel:(id)arg2 cacheBean:(id)arg3;
- (void)setFlightBundleSaleInsuranceFlagTypeWithPolicyModel:(id)arg1 request:(id)arg2;
- (id)createFlightDetailSearchV2Request:(id)arg1 TripType:(int)arg2 productID:(id)arg3;
- (id)sendOrderCombineSearchWithFlightDetailBaseCacheBean:(id)arg1 tripType:(int)arg2 selectedGoPolicy:(id)arg3 uuid:(id)arg4 messageToken:(id)arg5 callbackBlock:(CDUnknownBlockType)arg6;
- (id)createFlightHotelSenderCallBackFlightDetailSearch:(id)arg1 TripType:(int)arg2 callbackBlock:(CDUnknownBlockType)arg3 traceModel:(id)arg4;
- (id)sendFlightHotelDetailSearchWithFlightDetailBaseCacheBean:(id)arg1 tripType:(int)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)setupHotelDetailWithResponse:(id)arg1 toCacheBean:(id)arg2;
- (id)sendFlightHotelDetailWithCacheBean:(id)arg1;
- (id)sendCheckAdditionalCoupon:(id)arg1 withCouponModel:(id)arg2 index:(int)arg3 uuid:(id)arg4;
- (id)sendGetAdditionalCouponListSearch:(id)arg1 uuid:(id)arg2;
- (void)creatLastOrderModifyInfoWithCacheBean:(id)arg1 response:(id)arg2;
- (void)setDetailBaseNoteInfo:(id)arg1 orderNoteList:(id)arg2;
- (void)setOrderInfo:(id)arg1 orderList:(id)arg2 orderResult:(id)arg3;
- (void)setOrderResult:(id)arg1 response:(id)arg2;
- (void)doWithOrderCreatResponseSuccessCache:(id)arg1 response:(id)arg2;
- (id)createSenderCallBack4CreateOrder:(id)arg1 operateEType:(int)arg2 traceModel:(id)arg3;
- (void)addCATZDiscountRateWithCache:(id)arg1 toArray:(id)arg2;
- (void)addFlightSkyRailWaySingleOrderModelWithCache:(id)arg1 containArray:(id)arg2;
- (id)getFlightNormalOrderExtendInfoModelWithParams:(id)arg1 extendType:(int)arg2;
- (id)getFlightPackageStrListInfoModelListWith:(id)arg1;
- (id)getFlightBundleOnePackageSaleTypeInfoModelWith:(id)arg1;
- (id)creatOrderExtendInformationModelList:(id)arg1;
- (id)createPaymentLimitInfoList:(id)arg1;
- (id)createContactInfoModel:(id)arg1;
- (id)getCreateOrderAbtestList;
- (id)createMiscInfoModel:(id)arg1;
- (long long)getFlightCreatOrderFlagWith:(id)arg1;
- (id)createPromotionList:(id)arg1 directReducePrice:(id)arg2;
- (void)setReturnPromotion:(id)arg1 promotionList:(id)arg2 directReducePrice:(id)arg3;
- (void)setGoPromotion:(id)arg1 promotionList:(id)arg2 directReducePrice:(id)arg3;
- (void)setUsedCoupon:(id)arg1 promotionList:(id)arg2;
- (void)setConsumerCoupon:(id)arg1 promotionList:(id)arg2;
- (id)setFlightCreatePriceDetailInformationModel:(id)arg1 PersonType:(int)arg2 segmentNo:(int)arg3 trainModel:(id)arg4;
- (void)setFlightCreatePriceDetailInformationModelList:(id)arg1 policyPriceModel:(id)arg2 salePolicyMdoel:(id)arg3 segmentNo:(int)arg4 trainModel:(id)arg5;
- (id)createPriceList:(id)arg1;
- (id)createSegmentList:(id)arg1;
- (id)createOrerInforModel:(id)arg1 totalAmount:(id)arg2 operateEType:(int)arg3;
- (id)createFlightOrderCreateV2Request:(id)arg1 totalAmount:(id)arg2 directReducePrice:(id)arg3 uuid:(id)arg4 meaasgeToken:(id)arg5;
- (void)modifyAppendParamWithDetailBaseCacheBean:(id)arg1 toRequest:(id)arg2;
- (id)sendCreateOrder:(id)arg1 totalAmount:(id)arg2 directReducePrice:(id)arg3 uuid:(id)arg4 meaasgeToken:(id)arg5 setOutDataBlock:(CDUnknownBlockType)arg6;
- (id)sendFlightTrainRNDetailService:(id)arg1 productID:(id)arg2;
- (id)createSkyRailWaySenderCallBackFlightDetailSearch:(id)arg1 TripType:(int)arg2 productID:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4 traceModel:(id)arg5;
- (id)sendSkyRailWayFlightDetailSearchWithFlightDetailBaseCacheBean:(id)arg1 tripType:(int)arg2 productID:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
- (id)getManyPassengerRMPackageSettingListWithDetailCacheBean:(id)arg1;
- (void)setBundleSalePackageSettingList:(id)arg1 toList:(id)arg2;
- (int)getPassengerInforId:(id)arg1 from:(id)arg2;
- (id)createPackageSettingList:(id)arg1;
- (id)createUnSelectedPackageListFromH5:(id)arg1;
- (void)setBundleSalePackageList:(id)arg1 toList:(id)arg2;
- (id)createPackageListFromH5:(id)arg1;
- (void)setFlightCreateOrderPackageInfoWith:(id)arg1 cacheBean:(id)arg2;
- (_Bool)needSendCheckServerForHiFrequency:(id)arg1 requestType:(int)arg2 departDate:(id)arg3 policyLimit:(id)arg4 pageSource:(int)arg5;
- (_Bool)checkRequestHelper:(id)arg1 requestType:(int)arg2 policyLimit:(id)arg3 departDate:(id)arg4 pageSource:(int)arg5;
- (id)getFlightUserCheckNotice:(int)arg1 noticeList:(id)arg2;
- (CDUnknownBlockType)getFailureMethodWithRequestType:(int)arg1 checkPassengersNoChildren:(id)arg2;
- (CDUnknownBlockType)getSuccessMethodWithRequestType:(int)arg1 checkPassengersNoChildren:(id)arg2;
- (id)createUserCheckRequest:(id)arg1 checkPassengerList:(id)arg2 requestType:(int)arg3 uuid:(id)arg4 departDate:(id)arg5 pageSource:(int)arg6 policyLimit:(id)arg7 productId:(id)arg8 checkPassengersNoChildren:(id)arg9;
- (id)sendFlightGovernmentCheckRequestWithflightNoStr:(id)arg1 checkPassengerList:(id)arg2 requestType:(int)arg3 uuid:(id)arg4 departDate:(id)arg5 pageSource:(int)arg6 policyLimit:(id)arg7 productId:(id)arg8;
- (id)sendCheckRepeatOrderWithIntFlightOrderCacheBean:(id)arg1;
- (id)sendCheckSoldOutWithFlightDetailBaseCacheBean:(id)arg1 productID:(id)arg2 policyID:(id)arg3 uuid:(id)arg4;

@end

