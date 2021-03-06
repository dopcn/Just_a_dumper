//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBizStore.h"

#import "SAirportDataSource-Protocol.h"
#import "SBulletinBoardsDataSource-Protocol.h"
#import "SCarTypeComDataSourceProtocal-Protocol.h"
#import "SDatePickerComDataSource-Protocol.h"
#import "SDynamicPriceDataSourceProtocol-Protocol.h"
#import "SEvaluateComDatasource-Protocol.h"
#import "SFormServiceAreaDataSource-Protocol.h"
#import "SGuideComDataSource-Protocol.h"
#import "SInServiceBubbleDataSource-Protocol.h"
#import "SMemberComDataSource-Protocol.h"
#import "SNotOpenCityDataSoruceProtocal-Protocol.h"
#import "SOperationCardComDataSource-Protocol.h"
#import "SOrderTrajComSource-Protocol.h"
#import "SPersonalityServiceDataSource-Protocol.h"
#import "SPickUpGuideComDataSource-Protocol.h"
#import "SPosMarkerDataSource-Protocol.h"
#import "SSCarBizDataSourceProtocal-Protocol.h"
#import "SSelectDriverDataSource-Protocol.h"
#import "STabSwitchDataSource-Protocol.h"
#import "STipComDataSourceProtocal-Protocol.h"

@class DTSdkGuideRespModel, DiDiPOIEntityModel, DisplayMsgModel, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString, SAirportOrderModel, SAirportPoiElementModel, SCarMemberModel, SHelpCallCarPassengerModel, SNewGuideFormModel, SNewGuideReqModel, SPackCarModel, SPersonalityServiceModel, SSelectDriverModel, TRCarpoolTravelExperienceModel, TREstimateFeeDataModel, TREvaluateXpanelModel, TRWanLiuCommentTagModel;

@interface SSCarBizDataSource : SBizStore <SCarTypeComDataSourceProtocal, SDynamicPriceDataSourceProtocol, SNotOpenCityDataSoruceProtocal, SOrderTrajComSource, SPickUpGuideComDataSource, SAirportDataSource, SBulletinBoardsDataSource, SEvaluateComDatasource, SFormServiceAreaDataSource, SMemberComDataSource, SOperationCardComDataSource, SPersonalityServiceDataSource, SPosMarkerDataSource, SSelectDriverDataSource, STabSwitchDataSource, STipComDataSourceProtocal, SDatePickerComDataSource, SSCarBizDataSourceProtocal, SInServiceBubbleDataSource, SGuideComDataSource>
{
    _Bool _bizVal_isGuideToCarPool;
    _Bool _bizVal_isGuidToStation;
    _Bool _bizVal_isGuidToAnyCar;
    _Bool _bizVal_isDefaultScrollViewOffset;
    _Bool _bizVal_isClickScrollViewOffset;
    _Bool _bizVal_isShouldRemoveGuideTips;
    _Bool _bizVal_fromRecover;
    _Bool _bizVal_selectedPayType;
    _Bool _isAutoRequestEstimate;
    _Bool _bizVal_airport_scene;
    _Bool _isGuideAirport;
    _Bool _isEstimateBubble;
    _Bool _bizval_AutoCreateOrder;
    _Bool _bizval_AlertWindow;
    _Bool _isSelectNavEnter;
    _Bool _isShowAlterView;
    _Bool _unableSelOtherGuide;
    NSNumber *_bizVal_isCarpool;
    NSNumber *_bizVal_carpoolSeat;
    long long _bizVal_isGuideToLevel;
    long long _bizVal_sceneIndex;
    NSString *_bizVal_tipFee;
    NSNumber *_bizVal_carLevel;
    NSString *_bizVal_estimate_id;
    NSString *_bizVal_estimate_selected_businessId;
    NSNumber *_bizVal_tag;
    NSString *_bizVal_business_submit;
    NSString *_bizVal_comfirmPriceMD5;
    NSString *_bizVal_xActivity_id;
    NSString *_bizVal_xActivity_type;
    long long _inTravelEta;
    long long _inTravelDistance;
    SPackCarModel *_packCarModel;
    TRWanLiuCommentTagModel *_commentTagModel;
    TRCarpoolTravelExperienceModel *_bizVal_carpoolTravelExperienceModel;
    TREstimateFeeDataModel *_orderDynamicFeeDataModel;
    SAirportPoiElementModel *_airportPoiElementModel;
    DTSdkGuideRespModel *_guideRespModel;
    DTSdkGuideRespModel *_cacheGuideRespModel;
    SNewGuideReqModel *_guideNewReqModel;
    SNewGuideReqModel *_cacheGuideNewReqModel;
    NSMutableDictionary *_cacheGuideNewModelDic;
    SNewGuideFormModel *_guideNewFormModel;
    long long _bizVal_estimateStatus;
    SAirportOrderModel *_airportOrderData;
    SSelectDriverModel *_selectDriverData;
    long long _curCarTypeOrDriver;
    NSString *_driverID;
    long long _bizVal_airport_SubIndex;
    SHelpCallCarPassengerModel *_currentPassenger;
    SCarMemberModel *_memberModel;
    DiDiPOIEntityModel *_recommendDestPOIModel;
    TREvaluateXpanelModel *_evaluateModel;
    SPersonalityServiceModel *_personalityService;
    NSNumber *_bizval_DoubleCheck;
    DisplayMsgModel *_displayModel;
    struct CLLocationCoordinate2D _curDriverLoc;
    CDStruct_02837cd9 _bestViewMapRect;
}

+ (id)dataTojsonString:(id)arg1;
@property(copy, nonatomic) DisplayMsgModel *displayModel; // @synthesize displayModel=_displayModel;
@property(copy, nonatomic) NSNumber *bizval_DoubleCheck; // @synthesize bizval_DoubleCheck=_bizval_DoubleCheck;
@property(retain, nonatomic) SPersonalityServiceModel *personalityService; // @synthesize personalityService=_personalityService;
@property(retain, nonatomic) TREvaluateXpanelModel *evaluateModel; // @synthesize evaluateModel=_evaluateModel;
@property(nonatomic) _Bool unableSelOtherGuide; // @synthesize unableSelOtherGuide=_unableSelOtherGuide;
@property(nonatomic) _Bool isShowAlterView; // @synthesize isShowAlterView=_isShowAlterView;
@property(nonatomic) _Bool isSelectNavEnter; // @synthesize isSelectNavEnter=_isSelectNavEnter;
@property(nonatomic) _Bool bizval_AlertWindow; // @synthesize bizval_AlertWindow=_bizval_AlertWindow;
@property(retain, nonatomic) DiDiPOIEntityModel *recommendDestPOIModel; // @synthesize recommendDestPOIModel=_recommendDestPOIModel;
@property(nonatomic) _Bool bizval_AutoCreateOrder; // @synthesize bizval_AutoCreateOrder=_bizval_AutoCreateOrder;
@property(nonatomic) _Bool isEstimateBubble; // @synthesize isEstimateBubble=_isEstimateBubble;
@property(retain, nonatomic) SCarMemberModel *memberModel; // @synthesize memberModel=_memberModel;
@property(retain, nonatomic) SHelpCallCarPassengerModel *currentPassenger; // @synthesize currentPassenger=_currentPassenger;
@property(nonatomic) _Bool isGuideAirport; // @synthesize isGuideAirport=_isGuideAirport;
@property(nonatomic) long long bizVal_airport_SubIndex; // @synthesize bizVal_airport_SubIndex=_bizVal_airport_SubIndex;
@property(nonatomic) _Bool bizVal_airport_scene; // @synthesize bizVal_airport_scene=_bizVal_airport_scene;
@property(retain, nonatomic) NSString *driverID; // @synthesize driverID=_driverID;
@property(nonatomic) long long curCarTypeOrDriver; // @synthesize curCarTypeOrDriver=_curCarTypeOrDriver;
@property(retain, nonatomic) SSelectDriverModel *selectDriverData; // @synthesize selectDriverData=_selectDriverData;
@property(retain, nonatomic) SAirportOrderModel *airportOrderData; // @synthesize airportOrderData=_airportOrderData;
@property(nonatomic) long long bizVal_estimateStatus; // @synthesize bizVal_estimateStatus=_bizVal_estimateStatus;
@property(nonatomic) _Bool isAutoRequestEstimate; // @synthesize isAutoRequestEstimate=_isAutoRequestEstimate;
@property(retain, nonatomic) SNewGuideFormModel *guideNewFormModel; // @synthesize guideNewFormModel=_guideNewFormModel;
@property(retain, nonatomic) NSMutableDictionary *cacheGuideNewModelDic; // @synthesize cacheGuideNewModelDic=_cacheGuideNewModelDic;
@property(retain, nonatomic) SNewGuideReqModel *cacheGuideNewReqModel; // @synthesize cacheGuideNewReqModel=_cacheGuideNewReqModel;
@property(retain, nonatomic) SNewGuideReqModel *guideNewReqModel; // @synthesize guideNewReqModel=_guideNewReqModel;
@property(retain, nonatomic) DTSdkGuideRespModel *cacheGuideRespModel; // @synthesize cacheGuideRespModel=_cacheGuideRespModel;
@property(retain, nonatomic) DTSdkGuideRespModel *guideRespModel; // @synthesize guideRespModel=_guideRespModel;
@property(retain, nonatomic) SAirportPoiElementModel *airportPoiElementModel; // @synthesize airportPoiElementModel=_airportPoiElementModel;
@property(nonatomic) _Bool bizVal_selectedPayType; // @synthesize bizVal_selectedPayType=_bizVal_selectedPayType;
@property(nonatomic) CDStruct_02837cd9 bestViewMapRect; // @synthesize bestViewMapRect=_bestViewMapRect;
@property(retain, nonatomic) TREstimateFeeDataModel *orderDynamicFeeDataModel; // @synthesize orderDynamicFeeDataModel=_orderDynamicFeeDataModel;
@property(retain, nonatomic) TRCarpoolTravelExperienceModel *bizVal_carpoolTravelExperienceModel; // @synthesize bizVal_carpoolTravelExperienceModel=_bizVal_carpoolTravelExperienceModel;
@property(retain, nonatomic) TRWanLiuCommentTagModel *commentTagModel; // @synthesize commentTagModel=_commentTagModel;
@property(retain, nonatomic) SPackCarModel *packCarModel; // @synthesize packCarModel=_packCarModel;
@property(nonatomic) struct CLLocationCoordinate2D curDriverLoc; // @synthesize curDriverLoc=_curDriverLoc;
@property(nonatomic) long long inTravelDistance; // @synthesize inTravelDistance=_inTravelDistance;
@property(nonatomic) long long inTravelEta; // @synthesize inTravelEta=_inTravelEta;
@property(copy, nonatomic) NSString *bizVal_xActivity_type; // @synthesize bizVal_xActivity_type=_bizVal_xActivity_type;
@property(copy, nonatomic) NSString *bizVal_xActivity_id; // @synthesize bizVal_xActivity_id=_bizVal_xActivity_id;
@property(copy) NSString *bizVal_comfirmPriceMD5; // @synthesize bizVal_comfirmPriceMD5=_bizVal_comfirmPriceMD5;
@property(copy, nonatomic) NSString *bizVal_business_submit; // @synthesize bizVal_business_submit=_bizVal_business_submit;
@property(copy, nonatomic) NSNumber *bizVal_tag; // @synthesize bizVal_tag=_bizVal_tag;
@property(copy, nonatomic) NSString *bizVal_estimate_selected_businessId; // @synthesize bizVal_estimate_selected_businessId=_bizVal_estimate_selected_businessId;
@property(copy, nonatomic) NSString *bizVal_estimate_id; // @synthesize bizVal_estimate_id=_bizVal_estimate_id;
@property(copy, nonatomic) NSNumber *bizVal_carLevel; // @synthesize bizVal_carLevel=_bizVal_carLevel;
@property(copy, nonatomic) NSString *bizVal_tipFee; // @synthesize bizVal_tipFee=_bizVal_tipFee;
@property(nonatomic) _Bool bizVal_fromRecover; // @synthesize bizVal_fromRecover=_bizVal_fromRecover;
@property(nonatomic) long long bizVal_sceneIndex; // @synthesize bizVal_sceneIndex=_bizVal_sceneIndex;
@property(nonatomic) _Bool bizVal_isShouldRemoveGuideTips; // @synthesize bizVal_isShouldRemoveGuideTips=_bizVal_isShouldRemoveGuideTips;
@property(nonatomic) _Bool bizVal_isClickScrollViewOffset; // @synthesize bizVal_isClickScrollViewOffset=_bizVal_isClickScrollViewOffset;
@property(nonatomic) long long bizVal_isGuideToLevel; // @synthesize bizVal_isGuideToLevel=_bizVal_isGuideToLevel;
@property(nonatomic) _Bool bizVal_isDefaultScrollViewOffset; // @synthesize bizVal_isDefaultScrollViewOffset=_bizVal_isDefaultScrollViewOffset;
@property(nonatomic) _Bool bizVal_isGuidToAnyCar; // @synthesize bizVal_isGuidToAnyCar=_bizVal_isGuidToAnyCar;
@property(nonatomic) _Bool bizVal_isGuidToStation; // @synthesize bizVal_isGuidToStation=_bizVal_isGuidToStation;
@property(retain, nonatomic) NSNumber *bizVal_carpoolSeat; // @synthesize bizVal_carpoolSeat=_bizVal_carpoolSeat;
@property(retain, nonatomic) NSNumber *bizVal_isCarpool; // @synthesize bizVal_isCarpool=_bizVal_isCarpool;
@property(nonatomic) _Bool bizVal_isGuideToCarPool; // @synthesize bizVal_isGuideToCarPool=_bizVal_isGuideToCarPool;
- (void).cxx_destruct;
- (id)dateStringWithBejing:(id)arg1;
- (id)notAutoCreateOrderReason;
- (void)closedAutoCreateOrder;
- (_Bool)forbiddenAutoCreateOrderEstimateResult;
- (_Bool)isAutoCreateOrderEstimateResult;
- (id)getCrosscityCarpoolOrFlashSID;
- (_Bool)setSelectNavTabBarEnter:(_Bool)arg1;
- (_Bool)isSelectNavTabBarEnter;
- (_Bool)isFiredCrossCityCarpoolTime;
- (_Bool)enableSpecialNewSCTX;
- (_Bool)enableNewSCTX;
- (_Bool)isHideResetPosBtn;
- (id)activityIdentify;
- (_Bool)checkIfShowGuideInfo;
- (_Bool)isFlightLanded;
- (id)currentSelectedPersonalityServiceTitle;
- (id)getPersonalityServiceEstimateModel;
- (id)personalityServiceData;
- (id)getCurrentOrderId;
- (void)agreeDynamicConfirm:(id)arg1 isRecommend:(_Bool)arg2;
- (id)cityIDOfFromPOI;
- (long long)winXinPayAbilityChannel;
- (id)cityModelWithCityId:(id)arg1;
- (_Bool)isOrderSCTXOpen;
- (long long)inServiceBubbleType:(id)arg1;
- (id)getGuideEstimateParam;
- (id)getAthenaParam;
- (id)productIds;
- (id)requireCarLevels;
- (id)getFirstValidDate;
- (void)clearhelpCallCarData;
- (void)clearCache;
@property(copy, nonatomic) NSDate *bizVal_scheduleDate;
- (id)biz_Conf_WanliuInfoModel;
- (id)biz_Conf_EUserInfo;
- (id)biz_Conf_WLConfModel;
- (_Bool)hasCarpoolData;
- (void)guideRequestFromBusiness:(id)arg1 info:(id)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)forceToPay;
- (_Bool)estimatePriceEnable;
- (_Bool)needEstimateAfterSelectDate;
- (id)biz_RealTimeFeeModel;
- (id)biz_payCarPoolPayment;
- (id)biz_payDefaultTag;
- (_Bool)biz_isStationOrder;
- (id)biz_stationStatusInfo;
- (_Bool)biz_isAdministrativeCar;
- (_Bool)biz_isCarPoolOrder;
- (_Bool)biz_isReservationOrder;
- (id)biz_orderCommentModel:(id)arg1;
- (id)biz_orderDetailModel;
- (long long)biz_orderStatus;
- (id)biz_payWayConfig;
- (id)biz_OrderModel;
- (id)biz_ProtectPhoneKey;
- (id)biz_PannelConfModel;
- (long long)biz_OrderFlowStatus;
- (id)biz_EntryInfo;
- (id)biz_DriverInfo;
- (id)biz_LikeWaitModel;
- (id)biz_EnsureModel;
- (id)biz_RealTimeOrderModel;
- (id)biz_PoolSeat;
- (id)biz_PoolAcceptWait;
- (id)biz_tipFee;
- (id)biz_SharedTrip;
- (id)biz_sceneType;
- (id)biz_activeOrderID;
- (_Bool)supportPoolSeatMode;
- (id)biz_carLevelType:(id)arg1 businessId:(id)arg2;
- (id)biz_carLevelModel:(id)arg1;
- (id)biz_estimate_unValid;
- (_Bool)biz_estimate_feeAmount;
- (id)biz_estimate_current;
- (id)biz_estimate_normal;
- (id)biz_estimate_carpool;
- (id)biz_AirportOrderInfo;
- (id)biz_PackOrderInfo;
- (id)biz_DraftOrderInfo;
- (void)selectDateFinishWithDate:(id)arg1;
- (id)getDateConfigModel;
- (void)clearSelectDate:(_Bool)arg1;
- (id)getDefaultTitle;
- (id)getDatePickerModel;
- (_Bool)isOtherReservationDatePicker;
- (_Bool)isAirportDropOffDatePircker;
- (id)biz_estimate_by:(long long)arg1;
- (_Bool)orderIsInWaitService;
- (id)biz_estimate_trace_id;
- (id)biz_estimateModel;
- (_Bool)isAirportAddressWithFromPoi:(id)arg1;
- (_Bool)isUserSelectBookTimeWithDate:(id)arg1;
- (_Bool)canGuideToTargetByContentModel:(id)arg1;
- (_Bool)isShowGuideInfoByContentModel:(id)arg1;
- (double)getGuideNormalTipRatioWithGuide:(id)arg1 showType:(long long)arg2;
- (id)getGuideBubbleID;
- (id)getGuideInfoFromData;
- (void)deleteGuidePNewOrderData;
- (void)saveGuidePNewOrderData:(id)arg1;
- (id)getGuidePNewOrderData;
- (void)removeGuideInfoDataExcludeFormData;
- (void)removeGuideInfoData;
- (id)getGuideInfoData;
- (_Bool)checkIfGuideToAirportTabWithFromPoi:(id)arg1 Date:(id)arg2;
- (id)init;
- (id)orderIDForActiveBoardCom;
- (unsigned long long)displayTypeForActiveBoardsCom:(_Bool)arg1;
- (_Bool)canShowEvaluateEntrance;
- (id)entranceButtonModelForActiveBoardsCom;
- (void)omgForShowActivitySheetView;
- (id)activitySheetTitleForActiveBoardsCom;
- (id)configOperationButton:(id)arg1;
- (_Bool)showOperationButton;
- (id)configQuestionButton;
- (id)configPandleButton;
- (_Bool)showQuestionButton;
- (id)configShareButton;
- (id)shareCoupon;
- (_Bool)showShareButton;
- (_Bool)showPandleButton;
- (id)activityButtonConfs;
- (id)webViewConfForActiveBoardsCom;
- (void)activeBoardsCom:(id)arg1 activityData:(CDUnknownBlockType)arg2 showStyle:(long long)arg3;
- (_Bool)canShowWebViewEvaluateCom;
- (_Bool)separatorHidden;
- (id)getOneConfDefaltCarType;
- (id)carLeveArrWithBusinessId:(id)arg1;
- (id)brandCarTypeArrayForCom:(id)arg1;
- (long long)seleceIndexForCarTypeCom:(id)arg1;
- (void)omgGuideAlertShow:(id)arg1;
- (void)carTypeCom:(id)arg1 didselectedCarType:(id)arg2;
- (id)carTypeArrayForCarTypeCom:(id)arg1;
- (id)getMenuNumIdForCurCarLevel;
- (long long)currentSelectForCarTypeCom:(id)arg1;
- (void)carTypeCom:(id)arg1 selectedCarTypeIndex:(unsigned long long)arg2 carTypeModel:(id)arg3;
- (id)dataSourceForCarTypeCom:(id)arg1 businessId:(id)arg2;
- (_Bool)isHiddenCarStar;
- (_Bool)shouldShowRateLevel;
- (id)driverUrl:(id)arg1;
- (_Bool)shouldCloseInfoCard:(_Bool)arg1;
- (id)notRounding:(double)arg1 afterPoint:(long long)arg2;
- (void)getDriverModel:(CDUnknownBlockType)arg1;
- (id)estimateFeeDataModel;
- (id)dynamicPriceConfirmURLString;
- (id)dynamicPriceURLString;
- (_Bool)needDynamicPriceConfirmView;
- (_Bool)needDynamicPriceViewWithLastEstimate:(id)arg1;
- (_Bool)needDynamicPriceView;
- (_Bool)isHiddenCarStar;
- (_Bool)shouldShowRateLevel;
- (id)driverUrl:(id)arg1;
- (_Bool)shouldCloseNewDriverInfoCard:(_Bool)arg1;
- (id)notRounding:(double)arg1 afterPoint:(long long)arg2;
- (void)getNewDriverModel:(CDUnknownBlockType)arg1;
- (id)notOpenTipCityForSNotOpenCityCom:(id)arg1;
- (id)orderTrajComDestAddrModel;
- (id)orderTrajComStartAddrModel;
- (id)orderTrajRequestData:(long long)arg1;
- (_Bool)isOrderTrajOpen;
- (id)getPhoneProtectModel;
- (id)phone_num_protect;
- (_Bool)isCallSerivce;
- (_Bool)openProtect;
- (_Bool)isEnableProtect;
- (_Bool)isCancelOrFinishedOrder;
- (id)driverPhoneForPhoneProtectCom:(id)arg1;
- (void)phoneProtectCom:(id)arg1 data:(CDUnknownBlockType)arg2;
- (id)fetchPickUpGuideSignal;
- (_Bool)airportIsInputFlightNumFormCom:(id)arg1;
- (id)flightNumCellDisplaySubTitleStr;
- (id)flightNumCellDisplayTitleStr;
- (id)selectedAirportInfoModel;
- (id)selectedFlightInfoModel;
- (id)flightInfo;
- (_Bool)isGuideLocked;
- (void)updateOrderInfoWithType:(id)arg1 type:(long long)arg2;
- (void)showPointEscapeTrunkWebVC:(id)arg1;
- (void)showEscapeTrunkAlterView:(id)arg1 confiemBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)showcarpoolAlterView:(id)arg1 cardConf:(id)arg2 confiemBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (void)showcarpoolAlterView:(id)arg1 confiemBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (_Bool)showProgressHUD:(id)arg1;
- (void)updateOrderInfoWithPrice:(id)arg1 withGuidePos:(id)arg2 withSeatum:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)bulletinBoardsClickedCard:(id)arg1 actBtnAtIndex:(long long)arg2 actionHandler:(CDUnknownBlockType)arg3;
- (void)bulletinBoardsDidTimerFinishedWorkForCard:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (_Bool)xpanelDisplayDown;
- (_Bool)isEnableGestureInMapToContolBulletinBoardsWithPageMode:(unsigned long long)arg1;
- (void)bulletinBoardsWillHideWithPageMode:(unsigned long long)arg1;
- (void)bulletinBoardsWillShowWithPageMode:(unsigned long long)arg1;
- (void)bulletinBoardsDidInitedWithPageMode:(unsigned long long)arg1;
- (_Bool)orderHasBeenEvaluated;
- (_Bool)shouldAutoCloseEveluateButton;
- (void)setShouldAutoCloseEveluateButton:(_Bool)arg1;
- (void)loadAdditionView:(id)arg1 withCompleted:(CDUnknownBlockType)arg2;
- (void)evaluateCom:(id)arg1 loadAdditionView:(CDUnknownBlockType)arg2;
- (void)cleanDataBeforeCloseAndPopToRoot;
- (_Bool)shouldPayFinishAutoShowEvaluate;
- (_Bool)iSEvaluateComEventSucceed;
- (_Bool)evaluateCom:(id)arg1 shouldShowEvaluate:(_Bool)arg2 automatic:(_Bool)arg3;
- (_Bool)canShowEvaluateEntrance;
- (_Bool)evaluateDidOverdue;
- (long long)loadCommentRating;
- (id)commitingCommentModelByStarModel:(id)arg1;
- (void)logCollection;
- (void)evaluateCom:(id)arg1 questions:(id)arg2 answerWithIndexs:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)evaluateCom:(id)arg1 submitWithContainer:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (id)evaluateTagsWithTags:(id)arg1;
- (id)tagArrayByCommentString:(id)arg1;
- (id)getCommentTagsFromModel:(id)arg1 starLevel:(int)arg2;
- (id)commentTagArrayWithCommentTagDataModel:(id)arg1;
- (void)questiton:(id)arg1 withCompleted:(CDUnknownBlockType)arg2;
- (void)questiton:(id)arg1 evaluateCom:(id)arg2 withCompleted:(CDUnknownBlockType)arg3;
- (void)evaluateCom:(id)arg1 loadEvaluateContainer:(CDUnknownBlockType)arg2;
- (id)commentModelWithXpanel:(id)arg1;
- (void)evaluateCom:(id)arg1 submitThanksMessage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (id)registerThanksFeeConfigureModel:(id)arg1;
- (id)xpanelDispalyData;
- (void)requestPersonalitySuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *formServiceAreaCurrentTitle;
- (void)formServiceAreaCom:(id)arg1 cleanSelectedServiceDataWithType:(long long)arg2;
- (void)formServiceAreaCom:(id)arg1 didChangedAtIndex:(unsigned long long)arg2 withModel:(id)arg3 allValues:(id)arg4;
- (id)dataForFormServiceAreaCom:(id)arg1;
- (id)p_service_selectedArray;
@property(readonly, copy, nonatomic) NSArray *service_selectedArray;
@property(readonly, copy, nonatomic) NSString *service_selectedDataString;
- (id)oidForShareJourneyCom:(id)arg1;
- (void)helpCallCarCom:(id)arg1 updatePassenger:(id)arg2;
- (id)fetchHelpCallCarComModel;
- (id)serviceConfigModelForIMService;
- (_Bool)isSupportForIMService;
- (_Bool)isOpenIM;
- (id)getIMSecret;
- (_Bool)isDisabled;
- (void)imCom:(id)arg1 secretKey:(CDUnknownBlockType)arg2;
- (id)modelForIMCom:(id)arg1;
- (id)privilegeShareDisplayLevelForXPanel;
- (id)displayLevelForXPanel;
- (_Bool)shouldShowPrivilegeShareCardFirst;
- (id)omegaForXPanel;
- (long long)heightForXPanelDispay;
- (void)memberItemEventHander:(long long)arg1;
- (void)memberDetailEventHander;
- (void)cleanMemberModel;
- (id)fetchMemberModel;
- (void)requestMemberWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)updateComponentSignals;
- (_Bool)shouldDisplay;
- (id)keyForScene:(long long)arg1;
- (id)sm_infoModelForScene:(long long)arg1;
- (void)sm_storeInfoModel:(id)arg1 forScene:(long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *infoModelDict; // @dynamic infoModelDict;
- (void)requestOneCallXActivityInfoWithXActivityModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_testButtonItemClickEvent:(id)arg1;
- (id)_testViewModel4;
- (id)_testViewModel3;
- (id)_testViewModel2;
- (id)_testViewModel1;
- (id)_testViewModels;
- (void)itemAction:(id)arg1;
- (id)_createViewModelWithActivityModel:(id)arg1;
- (id)operationCardComRequireLoadViewModels:(id)arg1;
- (id)billDataForClose:(id)arg1;
- (id)billDataForClosePay:(id)arg1;
- (id)billDataForNeedPay:(id)arg1;
- (id)billDataForPayFinish:(id)arg1;
- (id)billDataForPayBillComponent;
- (_Bool)needsPrepareBillData;
- (id)currentSelectedPersonalityServiceDataForCom:(id)arg1;
- (void)resetSelectedPersonalityServiceData;
- (void)cancelSelectedPersonalityServiceDataForCom:(id)arg1;
- (void)confirmSelectedPersonalityServiceDataForCom:(id)arg1;
- (void)saveSelectedPersonalityServiceDataWithSId:(id)arg1 resultValue:(id)arg2;
- (_Bool)isMultiSelectedPersonalityServiceDataForCom:(id)arg1 SId:(id)arg2;
- (id)selectedPersonalityServiceDataWithSId:(id)arg1;
- (id)getPersonalityServiceSelectedModelForCom:(id)arg1;
- (id)personalityServiceListModels;
- (void)requestPersonalityServiceListMode:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (id)getPersonalityServiceConfigModel;
- (_Bool)posMarkerShouldDisplayTotalCities:(long long)arg1;
- (_Bool)posMarkerEnableRecommendDestination;
- (_Bool)posMarkerShouldShowRecommendDestination;
- (_Bool)posMarkerShouldShowAddrNameAnnotation:(id)arg1;
- (unsigned long long)posMarkerShowTypeInServicePage;
- (id)posMarkerComDestAddrModelForScene:(long long)arg1;
- (id)posMarkerComStartAddrModelForScene:(long long)arg1;
- (id)posMarkerStartDesPosModelForCom:(id)arg1;
- (void)updateUserSelectDriverWithDriverID:(id)arg1 carLevel:(id)arg2;
- (_Bool)isLoadingDriverDataCom:(id)arg1;
- (long long)seleceIndexForSelectDriverCom:(id)arg1;
- (id)driverListForSelectDriverCom:(id)arg1;
- (void)requestDriverListModelWithParam:(id)arg1 loginRequired:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)addDefaultDriver;
- (id)defaultCarTypeOfDriver;
- (id)defaultDriver;
- (id)defaultCarType;
- (long long)curSelectCarTypeOrDriver;
- (void)setCurSelectCarTypeOrDriverWithType:(unsigned long long)arg1;
- (void)tipCom:(id)arg1 addToServiceWith:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (long long)tipfeeValueFortipCom:(id)arg1;
- (void)tipCom:(id)arg1 selectedPrice:(id)arg2;
- (id)dataSourceForTipCom:(id)arg1 isNeedRequsetService:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

