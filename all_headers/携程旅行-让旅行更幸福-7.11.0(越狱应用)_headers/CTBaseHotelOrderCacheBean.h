//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelBaseCacheBean.h"

@class CTHotelInsurancesViewModel, CTHotelOrderFlagshipRegisterModel, CTHotelOrderOptionViewModel, CTHotelOrderSpreadModel, CTPaymentInfo, CTPersonalCouponViewModel, GroupMemberInfoModel, HotelCouponsSelectorViewModel, HotelCustomeRemarkModel, HotelExpensesListViewModel, HotelGiftViewModel, HotelInsurancesInformationViewmModel, HotelInvoiceTypeModel, HotelOptionInformation, HotelOrderOptionInformation, HotelOrderTitleDesp, HotelRoomInfoViewModel, HotelTaxAndServiceInformationModel, HotelUserRoomReward, InvoiceInformationModel, MileageInfoModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PriceType, ProtocolPaymentModel, SpecialPromotionModel;

@interface CTBaseHotelOrderCacheBean : CTHotelBaseCacheBean
{
    _Bool _isSpecialRegion;
    _Bool _isCanUserRemark;
    _Bool _isSupportInvoice;
    _Bool _isShowPrompText;
    _Bool _isNeedShowTwoPrice;
    _Bool _isUseCoupons;
    _Bool _isDefaultSelectCoupon;
    _Bool _cashToPrepayButtonOn;
    _Bool _hasStraightBackActivity;
    _Bool _showCouponWidget;
    _Bool _isPreAuthorization;
    _Bool _hasBlackInfo;
    _Bool _isMarriottHotel;
    _Bool _showInsurance;
    _Bool _showMinQualityToast;
    _Bool _IsContainOrderDetail;
    _Bool _isSaleHotel;
    _Bool _isGetRoomInfoSuccess;
    _Bool _isdefault_insurace;
    _Bool _isFirstSearch;
    _Bool _isExpediaHotel;
    _Bool _isSpreadsNeedPay;
    _Bool _isBornedUseFG;
    _Bool _isElectronicInvoice;
    _Bool _hasFullRecord;
    _Bool _isSupportPreBookInvoice;
    _Bool _canModifyInvoice;
    _Bool _isInsuranceFold;
    _Bool _isSpecialInvoiceModifyOrder;
    _Bool _isSupportBftoSwitchOn;
    _Bool _isNewTotalPrice;
    _Bool _isNeedCard;
    _Bool _isShowRoomNotEnough;
    _Bool _isReturnLatestPageForError;
    _Bool _usePredisModel;
    _Bool _needRegistGroupVip;
    _Bool _isFreeCancelInsuranceRoom;
    _Bool _isSpringHotel;
    _Bool _isShowInsuranceOptionNewVersion;
    _Bool _isdefaultInvoiceClose;
    _Bool _isFlagship;
    _Bool _hasPromotionReduce;
    _Bool _hasPrimeData;
    _Bool _showCashToPrepay;
    _Bool _flagshipLoginSwitch;
    _Bool _isInEBKWhiteList;
    int _payEType;
    int _phoneNumType;
    int _operationType;
    int _roomGuranteeListShowType;
    int _guestType;
    int _starEType;
    int _selectedBedType;
    int _rGroupvPnt;
    int _paymentSettingsBitMap;
    long long _hotelID;
    NSString *_hotelName;
    NSString *_roomEnName;
    long long _roomQuantity;
    long long _minQuantityPerOrder;
    long long _maxQuantityPerOrder;
    long long _holdRoomQuantity;
    NSMutableArray *_coordinateItemList;
    HotelRoomInfoViewModel *_selectRoomModel;
    NSMutableArray *_selectSpecialRequireList;
    NSMutableArray *_specialRequireListForDisplay;
    NSString *_customerRemark;
    long long _subPayType;
    long long _payTypeBitMap;
    InvoiceInformationModel *_invoiceModel;
    NSMutableArray *_invoiceDeliveryModeList;
    NSMutableArray *_invoiceBodyList;
    HotelInvoiceTypeModel *_selectInvoicebody;
    NSMutableArray *_passengesNameList;
    NSMutableDictionary *_selectPassenges;
    NSMutableDictionary *_innPassengerDict;
    NSString *_contactPhone;
    NSString *_contactEmail;
    NSString *_idCard;
    NSMutableArray *_roomPriceList;
    NSMutableArray *_roomGuranteeList;
    long long _maxGuestCounts;
    NSString *_prompText;
    PriceType *_couponAmount;
    PriceType *_usedCouponAmount;
    NSString *_couponBackRemark;
    NSString *_couponQuanRemark;
    NSString *_straightBackRemark;
    NSMutableArray *_promotionList;
    NSString *_proxyRemark;
    NSString *_inTheLimitRemark;
    HotelCouponsSelectorViewModel *_couponsViewModel;
    NSString *_lastArrivalTime;
    long long _hourSpan;
    NSString *_lastGuranteeDay;
    NSMutableArray *_creditCardList;
    NSMutableArray *_hotelBlackInfoList;
    CTHotelOrderOptionViewModel *_orderOption;
    HotelOrderOptionInformation *_orderOptionInfo;
    CTHotelOrderOptionViewModel *_orderOriginOption;
    NSString *_marriottCode;
    HotelExpensesListViewModel *_listOfExpensesModel;
    NSString *_taxRemark;
    NSString *_insurancePolicyholders;
    HotelInsurancesInformationViewmModel *_insuranceItemModel;
    NSString *_countryCode;
    long long _orderID;
    NSString *_serverSharedData;
    CTPaymentInfo *_paymentInfo;
    NSString *_warningMsg;
    NSString *_priceChangedPrompt;
    NSString *_warningRM;
    NSMutableArray *_warningInfoList;
    long long _invoiceway;
    NSString *_halfOffCoupon;
    long long _roomDayCount;
    NSString *_sequenceID;
    NSString *_haveNoBedMessage;
    long long _isClicked_insurace;
    CTHotelInsurancesViewModel *_tripInsurancesViewModel;
    CTPersonalCouponViewModel *_personCouponModel;
    HotelTaxAndServiceInformationModel *_taxAndServiceInformation;
    NSString *_invoiceMes;
    NSString *_invoiceNeedContent;
    CTHotelOrderSpreadModel *_spreadOrderModel;
    NSString *_secertDesp;
    HotelUserRoomReward *_roomReward;
    HotelOrderTitleDesp *_insuranceTitleDesp;
    NSString *_modifyNotifyMsg;
    long long _featureInnType;
    HotelGiftViewModel *_giftInfoModel;
    NSString *_boTaoMessage;
    NSMutableArray *_invoiceInformationList;
    NSArray *_rePurchase;
    NSString *_pregnantInsurance;
    NSString *_insuranceFoldDisplayText;
    NSString *_jiFenDesp;
    long long _jiFenNum;
    NSString *_repurchaseMessage;
    NSMutableArray *_outerRemarkList;
    NSString *_travelBookDesp;
    NSArray *_rCkRoomRefInfoList;
    NSString *_ratePlanID;
    NSString *_btaoMberExplain;
    NSString *_btaoMberPHolder;
    NSString *_highRiskMsg;
    HotelOptionInformation *_optionInfo;
    MileageInfoModel *_mileageInfo;
    NSString *_mOID;
    long long _roomQuantityOfUser;
    NSString *_minPriceRoomTraceInfo;
    NSString *_minPriceRoomTraceInfo2;
    NSString *_detailPriceTraceInfo;
    SpecialPromotionModel *_oriPredisModel;
    NSString *_rGroupvPhone;
    NSString *_rGroupvContryCode;
    NSString *_soaResult;
    NSString *_priceDetailEncourage;
    ProtocolPaymentModel *_protocolPayment;
    HotelCustomeRemarkModel *_bedModel;
    NSString *_hotelImportantTip;
    long long _couponTestVer;
    SpecialPromotionModel *_couponCashModel;
    NSDictionary *_couponCashDic;
    GroupMemberInfoModel *_groupMemberInfoModel;
    CTHotelOrderFlagshipRegisterModel *_groupVipRegistInfo;
    NSString *_shadowExtensionType;
    NSMutableArray *_promotionReduceList;
    SpecialPromotionModel *_primeModel;
    NSString *_merchantID;
    NSString *_hotelPhone;
    NSString *_promotionLimitInfo;
}

+ (id)getPersonOfNewListStr:(id)arg1 isSpecialRegion:(_Bool)arg2;
+ (void)addPersonOfNewList:(id)arg1 isSpecialRegion:(_Bool)arg2 orderCacheBean:(id)arg3;
+ (id)getPersonListStr:(id)arg1 isSpecialRegion:(_Bool)arg2;
@property(retain, nonatomic) NSString *promotionLimitInfo; // @synthesize promotionLimitInfo=_promotionLimitInfo;
@property(copy, nonatomic) NSString *hotelPhone; // @synthesize hotelPhone=_hotelPhone;
@property(nonatomic) _Bool isInEBKWhiteList; // @synthesize isInEBKWhiteList=_isInEBKWhiteList;
@property(nonatomic) int paymentSettingsBitMap; // @synthesize paymentSettingsBitMap=_paymentSettingsBitMap;
@property(retain, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
@property(nonatomic) _Bool flagshipLoginSwitch; // @synthesize flagshipLoginSwitch=_flagshipLoginSwitch;
@property(nonatomic) _Bool showCashToPrepay; // @synthesize showCashToPrepay=_showCashToPrepay;
@property(nonatomic) _Bool hasPrimeData; // @synthesize hasPrimeData=_hasPrimeData;
@property(retain, nonatomic) SpecialPromotionModel *primeModel; // @synthesize primeModel=_primeModel;
@property(nonatomic) _Bool hasPromotionReduce; // @synthesize hasPromotionReduce=_hasPromotionReduce;
@property(retain, nonatomic) NSMutableArray *promotionReduceList; // @synthesize promotionReduceList=_promotionReduceList;
@property(copy, nonatomic) NSString *shadowExtensionType; // @synthesize shadowExtensionType=_shadowExtensionType;
@property(retain, nonatomic) CTHotelOrderFlagshipRegisterModel *groupVipRegistInfo; // @synthesize groupVipRegistInfo=_groupVipRegistInfo;
@property(retain, nonatomic) GroupMemberInfoModel *groupMemberInfoModel; // @synthesize groupMemberInfoModel=_groupMemberInfoModel;
@property(nonatomic) _Bool isFlagship; // @synthesize isFlagship=_isFlagship;
@property(retain, nonatomic) NSDictionary *couponCashDic; // @synthesize couponCashDic=_couponCashDic;
@property(retain, nonatomic) SpecialPromotionModel *couponCashModel; // @synthesize couponCashModel=_couponCashModel;
@property(nonatomic) long long couponTestVer; // @synthesize couponTestVer=_couponTestVer;
@property(nonatomic) _Bool isdefaultInvoiceClose; // @synthesize isdefaultInvoiceClose=_isdefaultInvoiceClose;
@property(nonatomic) _Bool isShowInsuranceOptionNewVersion; // @synthesize isShowInsuranceOptionNewVersion=_isShowInsuranceOptionNewVersion;
@property(retain, nonatomic) NSString *hotelImportantTip; // @synthesize hotelImportantTip=_hotelImportantTip;
@property(nonatomic) _Bool isSpringHotel; // @synthesize isSpringHotel=_isSpringHotel;
@property(retain, nonatomic) HotelCustomeRemarkModel *bedModel; // @synthesize bedModel=_bedModel;
@property(retain, nonatomic) ProtocolPaymentModel *protocolPayment; // @synthesize protocolPayment=_protocolPayment;
@property(copy, nonatomic) NSString *priceDetailEncourage; // @synthesize priceDetailEncourage=_priceDetailEncourage;
@property(nonatomic) _Bool isFreeCancelInsuranceRoom; // @synthesize isFreeCancelInsuranceRoom=_isFreeCancelInsuranceRoom;
@property(retain, nonatomic) NSString *soaResult; // @synthesize soaResult=_soaResult;
@property(nonatomic) int rGroupvPnt; // @synthesize rGroupvPnt=_rGroupvPnt;
@property(copy, nonatomic) NSString *rGroupvContryCode; // @synthesize rGroupvContryCode=_rGroupvContryCode;
@property(copy, nonatomic) NSString *rGroupvPhone; // @synthesize rGroupvPhone=_rGroupvPhone;
@property(nonatomic) _Bool needRegistGroupVip; // @synthesize needRegistGroupVip=_needRegistGroupVip;
@property(nonatomic) _Bool usePredisModel; // @synthesize usePredisModel=_usePredisModel;
@property(retain, nonatomic) SpecialPromotionModel *oriPredisModel; // @synthesize oriPredisModel=_oriPredisModel;
@property(nonatomic) _Bool isReturnLatestPageForError; // @synthesize isReturnLatestPageForError=_isReturnLatestPageForError;
@property(copy, nonatomic) NSString *detailPriceTraceInfo; // @synthesize detailPriceTraceInfo=_detailPriceTraceInfo;
@property(copy, nonatomic) NSString *minPriceRoomTraceInfo2; // @synthesize minPriceRoomTraceInfo2=_minPriceRoomTraceInfo2;
@property(copy, nonatomic) NSString *minPriceRoomTraceInfo; // @synthesize minPriceRoomTraceInfo=_minPriceRoomTraceInfo;
@property(nonatomic) long long roomQuantityOfUser; // @synthesize roomQuantityOfUser=_roomQuantityOfUser;
@property(nonatomic) _Bool isShowRoomNotEnough; // @synthesize isShowRoomNotEnough=_isShowRoomNotEnough;
@property(retain, nonatomic) NSString *mOID; // @synthesize mOID=_mOID;
@property(retain, nonatomic) MileageInfoModel *mileageInfo; // @synthesize mileageInfo=_mileageInfo;
@property(retain, nonatomic) HotelOptionInformation *optionInfo; // @synthesize optionInfo=_optionInfo;
@property(retain, nonatomic) NSString *highRiskMsg; // @synthesize highRiskMsg=_highRiskMsg;
@property(retain, nonatomic) NSString *btaoMberPHolder; // @synthesize btaoMberPHolder=_btaoMberPHolder;
@property(retain, nonatomic) NSString *btaoMberExplain; // @synthesize btaoMberExplain=_btaoMberExplain;
@property(nonatomic) _Bool isNeedCard; // @synthesize isNeedCard=_isNeedCard;
@property(copy, nonatomic) NSString *ratePlanID; // @synthesize ratePlanID=_ratePlanID;
@property(copy, nonatomic) NSArray *rCkRoomRefInfoList; // @synthesize rCkRoomRefInfoList=_rCkRoomRefInfoList;
@property(copy, nonatomic) NSString *travelBookDesp; // @synthesize travelBookDesp=_travelBookDesp;
@property(retain, nonatomic) NSMutableArray *outerRemarkList; // @synthesize outerRemarkList=_outerRemarkList;
@property(nonatomic) _Bool isNewTotalPrice; // @synthesize isNewTotalPrice=_isNewTotalPrice;
@property(copy, nonatomic) NSString *repurchaseMessage; // @synthesize repurchaseMessage=_repurchaseMessage;
@property(nonatomic) _Bool isSupportBftoSwitchOn; // @synthesize isSupportBftoSwitchOn=_isSupportBftoSwitchOn;
@property(nonatomic) _Bool isSpecialInvoiceModifyOrder; // @synthesize isSpecialInvoiceModifyOrder=_isSpecialInvoiceModifyOrder;
@property(nonatomic) long long jiFenNum; // @synthesize jiFenNum=_jiFenNum;
@property(copy, nonatomic) NSString *jiFenDesp; // @synthesize jiFenDesp=_jiFenDesp;
@property(copy, nonatomic) NSString *insuranceFoldDisplayText; // @synthesize insuranceFoldDisplayText=_insuranceFoldDisplayText;
@property(nonatomic) _Bool isInsuranceFold; // @synthesize isInsuranceFold=_isInsuranceFold;
@property(copy, nonatomic) NSString *pregnantInsurance; // @synthesize pregnantInsurance=_pregnantInsurance;
@property(retain, nonatomic) NSArray *rePurchase; // @synthesize rePurchase=_rePurchase;
@property(nonatomic) _Bool canModifyInvoice; // @synthesize canModifyInvoice=_canModifyInvoice;
@property(nonatomic) int selectedBedType; // @synthesize selectedBedType=_selectedBedType;
@property(retain, nonatomic) NSMutableArray *invoiceInformationList; // @synthesize invoiceInformationList=_invoiceInformationList;
@property(nonatomic) int starEType; // @synthesize starEType=_starEType;
@property(nonatomic) _Bool isSupportPreBookInvoice; // @synthesize isSupportPreBookInvoice=_isSupportPreBookInvoice;
@property(copy, nonatomic) NSString *boTaoMessage; // @synthesize boTaoMessage=_boTaoMessage;
@property(nonatomic) int guestType; // @synthesize guestType=_guestType;
@property(retain, nonatomic) HotelGiftViewModel *giftInfoModel; // @synthesize giftInfoModel=_giftInfoModel;
@property(nonatomic) long long featureInnType; // @synthesize featureInnType=_featureInnType;
@property(copy, nonatomic) NSString *modifyNotifyMsg; // @synthesize modifyNotifyMsg=_modifyNotifyMsg;
@property(nonatomic) _Bool hasFullRecord; // @synthesize hasFullRecord=_hasFullRecord;
@property(nonatomic) int roomGuranteeListShowType; // @synthesize roomGuranteeListShowType=_roomGuranteeListShowType;
@property(retain, nonatomic) HotelOrderTitleDesp *insuranceTitleDesp; // @synthesize insuranceTitleDesp=_insuranceTitleDesp;
@property(retain, nonatomic) HotelUserRoomReward *roomReward; // @synthesize roomReward=_roomReward;
@property(copy, nonatomic) NSString *secertDesp; // @synthesize secertDesp=_secertDesp;
@property(nonatomic) _Bool isElectronicInvoice; // @synthesize isElectronicInvoice=_isElectronicInvoice;
@property(nonatomic) _Bool isBornedUseFG; // @synthesize isBornedUseFG=_isBornedUseFG;
@property(nonatomic) _Bool isSpreadsNeedPay; // @synthesize isSpreadsNeedPay=_isSpreadsNeedPay;
@property(retain, nonatomic) CTHotelOrderSpreadModel *spreadOrderModel; // @synthesize spreadOrderModel=_spreadOrderModel;
@property(copy, nonatomic) NSString *invoiceNeedContent; // @synthesize invoiceNeedContent=_invoiceNeedContent;
@property(retain, nonatomic) NSString *invoiceMes; // @synthesize invoiceMes=_invoiceMes;
@property(nonatomic) _Bool isExpediaHotel; // @synthesize isExpediaHotel=_isExpediaHotel;
@property(retain, nonatomic) HotelTaxAndServiceInformationModel *taxAndServiceInformation; // @synthesize taxAndServiceInformation=_taxAndServiceInformation;
@property(retain, nonatomic) CTPersonalCouponViewModel *personCouponModel; // @synthesize personCouponModel=_personCouponModel;
@property(retain, nonatomic) CTHotelInsurancesViewModel *tripInsurancesViewModel; // @synthesize tripInsurancesViewModel=_tripInsurancesViewModel;
@property(nonatomic) _Bool isFirstSearch; // @synthesize isFirstSearch=_isFirstSearch;
@property(nonatomic) _Bool isdefault_insurace; // @synthesize isdefault_insurace=_isdefault_insurace;
@property(nonatomic) long long isClicked_insurace; // @synthesize isClicked_insurace=_isClicked_insurace;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *haveNoBedMessage; // @synthesize haveNoBedMessage=_haveNoBedMessage;
@property(nonatomic) _Bool isGetRoomInfoSuccess; // @synthesize isGetRoomInfoSuccess=_isGetRoomInfoSuccess;
@property(retain, nonatomic) NSString *sequenceID; // @synthesize sequenceID=_sequenceID;
@property(nonatomic) long long roomDayCount; // @synthesize roomDayCount=_roomDayCount;
@property(copy, nonatomic) NSString *halfOffCoupon; // @synthesize halfOffCoupon=_halfOffCoupon;
@property(nonatomic) long long invoiceway; // @synthesize invoiceway=_invoiceway;
@property(nonatomic) _Bool isSaleHotel; // @synthesize isSaleHotel=_isSaleHotel;
@property(nonatomic) _Bool IsContainOrderDetail; // @synthesize IsContainOrderDetail=_IsContainOrderDetail;
@property(retain, nonatomic) NSMutableArray *warningInfoList; // @synthesize warningInfoList=_warningInfoList;
@property(retain, nonatomic) NSString *warningRM; // @synthesize warningRM=_warningRM;
@property(nonatomic) _Bool showMinQualityToast; // @synthesize showMinQualityToast=_showMinQualityToast;
@property(retain, nonatomic) NSString *priceChangedPrompt; // @synthesize priceChangedPrompt=_priceChangedPrompt;
@property(retain, nonatomic) NSString *warningMsg; // @synthesize warningMsg=_warningMsg;
@property(retain, nonatomic) CTPaymentInfo *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(copy, nonatomic) NSString *serverSharedData; // @synthesize serverSharedData=_serverSharedData;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) int phoneNumType; // @synthesize phoneNumType=_phoneNumType;
@property(retain, nonatomic) HotelInsurancesInformationViewmModel *insuranceItemModel; // @synthesize insuranceItemModel=_insuranceItemModel;
@property(copy, nonatomic) NSString *insurancePolicyholders; // @synthesize insurancePolicyholders=_insurancePolicyholders;
@property(nonatomic) _Bool showInsurance; // @synthesize showInsurance=_showInsurance;
@property(copy, nonatomic) NSString *taxRemark; // @synthesize taxRemark=_taxRemark;
@property(retain, nonatomic) HotelExpensesListViewModel *listOfExpensesModel; // @synthesize listOfExpensesModel=_listOfExpensesModel;
@property(retain, nonatomic) NSString *marriottCode; // @synthesize marriottCode=_marriottCode;
@property(nonatomic) _Bool isMarriottHotel; // @synthesize isMarriottHotel=_isMarriottHotel;
@property(retain, nonatomic) CTHotelOrderOptionViewModel *orderOriginOption; // @synthesize orderOriginOption=_orderOriginOption;
@property(retain, nonatomic) HotelOrderOptionInformation *orderOptionInfo; // @synthesize orderOptionInfo=_orderOptionInfo;
@property(retain, nonatomic) CTHotelOrderOptionViewModel *orderOption; // @synthesize orderOption=_orderOption;
@property(retain, nonatomic) NSMutableArray *hotelBlackInfoList; // @synthesize hotelBlackInfoList=_hotelBlackInfoList;
@property(nonatomic) _Bool hasBlackInfo; // @synthesize hasBlackInfo=_hasBlackInfo;
@property(nonatomic) _Bool isPreAuthorization; // @synthesize isPreAuthorization=_isPreAuthorization;
@property(retain, nonatomic) NSMutableArray *creditCardList; // @synthesize creditCardList=_creditCardList;
@property(copy, nonatomic) NSString *lastGuranteeDay; // @synthesize lastGuranteeDay=_lastGuranteeDay;
@property(nonatomic) long long hourSpan; // @synthesize hourSpan=_hourSpan;
@property(retain, nonatomic) NSString *lastArrivalTime; // @synthesize lastArrivalTime=_lastArrivalTime;
@property(retain, nonatomic) HotelCouponsSelectorViewModel *couponsViewModel; // @synthesize couponsViewModel=_couponsViewModel;
@property(nonatomic) _Bool showCouponWidget; // @synthesize showCouponWidget=_showCouponWidget;
@property(copy, nonatomic) NSString *inTheLimitRemark; // @synthesize inTheLimitRemark=_inTheLimitRemark;
@property(copy, nonatomic) NSString *proxyRemark; // @synthesize proxyRemark=_proxyRemark;
@property(retain, nonatomic) NSMutableArray *promotionList; // @synthesize promotionList=_promotionList;
@property(copy, nonatomic) NSString *straightBackRemark; // @synthesize straightBackRemark=_straightBackRemark;
@property(nonatomic) _Bool hasStraightBackActivity; // @synthesize hasStraightBackActivity=_hasStraightBackActivity;
@property(copy, nonatomic) NSString *couponQuanRemark; // @synthesize couponQuanRemark=_couponQuanRemark;
@property(nonatomic) _Bool cashToPrepayButtonOn; // @synthesize cashToPrepayButtonOn=_cashToPrepayButtonOn;
@property(copy, nonatomic) NSString *couponBackRemark; // @synthesize couponBackRemark=_couponBackRemark;
@property(nonatomic) _Bool isDefaultSelectCoupon; // @synthesize isDefaultSelectCoupon=_isDefaultSelectCoupon;
@property(retain, nonatomic) PriceType *usedCouponAmount; // @synthesize usedCouponAmount=_usedCouponAmount;
@property(retain, nonatomic) PriceType *couponAmount; // @synthesize couponAmount=_couponAmount;
@property(nonatomic) _Bool isUseCoupons; // @synthesize isUseCoupons=_isUseCoupons;
@property(nonatomic) _Bool isNeedShowTwoPrice; // @synthesize isNeedShowTwoPrice=_isNeedShowTwoPrice;
@property(copy, nonatomic) NSString *prompText; // @synthesize prompText=_prompText;
@property(nonatomic) _Bool isShowPrompText; // @synthesize isShowPrompText=_isShowPrompText;
@property(nonatomic) long long maxGuestCounts; // @synthesize maxGuestCounts=_maxGuestCounts;
@property(retain, nonatomic) NSMutableArray *roomGuranteeList; // @synthesize roomGuranteeList=_roomGuranteeList;
@property(retain, nonatomic) NSMutableArray *roomPriceList; // @synthesize roomPriceList=_roomPriceList;
@property(copy, nonatomic) NSString *idCard; // @synthesize idCard=_idCard;
@property(copy, nonatomic) NSString *contactEmail; // @synthesize contactEmail=_contactEmail;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(retain, nonatomic) NSMutableDictionary *innPassengerDict; // @synthesize innPassengerDict=_innPassengerDict;
@property(retain, nonatomic) NSMutableDictionary *selectPassenges; // @synthesize selectPassenges=_selectPassenges;
@property(retain, nonatomic) NSMutableArray *passengesNameList; // @synthesize passengesNameList=_passengesNameList;
@property(retain, nonatomic) HotelInvoiceTypeModel *selectInvoicebody; // @synthesize selectInvoicebody=_selectInvoicebody;
@property(retain, nonatomic) NSMutableArray *invoiceBodyList; // @synthesize invoiceBodyList=_invoiceBodyList;
@property(retain, nonatomic) NSMutableArray *invoiceDeliveryModeList; // @synthesize invoiceDeliveryModeList=_invoiceDeliveryModeList;
@property(retain, nonatomic) InvoiceInformationModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(nonatomic) long long payTypeBitMap; // @synthesize payTypeBitMap=_payTypeBitMap;
@property(nonatomic) long long subPayType; // @synthesize subPayType=_subPayType;
@property(nonatomic) int payEType; // @synthesize payEType=_payEType;
@property(nonatomic) _Bool isSupportInvoice; // @synthesize isSupportInvoice=_isSupportInvoice;
@property(copy, nonatomic) NSString *customerRemark; // @synthesize customerRemark=_customerRemark;
@property(nonatomic) _Bool isCanUserRemark; // @synthesize isCanUserRemark=_isCanUserRemark;
@property(retain, nonatomic) NSMutableArray *specialRequireListForDisplay; // @synthesize specialRequireListForDisplay=_specialRequireListForDisplay;
@property(retain, nonatomic) NSMutableArray *selectSpecialRequireList; // @synthesize selectSpecialRequireList=_selectSpecialRequireList;
@property(retain, nonatomic) HotelRoomInfoViewModel *selectRoomModel; // @synthesize selectRoomModel=_selectRoomModel;
@property(retain, nonatomic) NSMutableArray *coordinateItemList; // @synthesize coordinateItemList=_coordinateItemList;
@property(nonatomic) long long holdRoomQuantity; // @synthesize holdRoomQuantity=_holdRoomQuantity;
@property(nonatomic) long long maxQuantityPerOrder; // @synthesize maxQuantityPerOrder=_maxQuantityPerOrder;
@property(nonatomic) long long minQuantityPerOrder; // @synthesize minQuantityPerOrder=_minQuantityPerOrder;
@property(nonatomic) long long roomQuantity; // @synthesize roomQuantity=_roomQuantity;
@property(copy, nonatomic) NSString *roomEnName; // @synthesize roomEnName=_roomEnName;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(nonatomic) long long hotelID; // @synthesize hotelID=_hotelID;
@property(nonatomic) _Bool isSpecialRegion; // @synthesize isSpecialRegion=_isSpecialRegion;
- (void).cxx_destruct;
- (_Bool)isCouponAndCashAbTest;
- (_Bool)protocolPaymentPayTypGurantee;
- (_Bool)protocolPaymentPayTypPre;
- (id)handleInsuranceAndTripnsurance;
- (int)getUseTripInsurancesModelId;
- (_Bool)isHasUseTripInsurances;
- (_Bool)isHasUseInsurances;
- (_Bool)isOptionViewPriceNewVersion;
- (_Bool)isOptionViewNewVersion;
- (id)getGuaranteeRemarkForPayment;
- (id)getGuaranteeRemarkForOrderFill;
- (id)getGuaranteeRemark:(id)arg1;
- (_Bool)isNomalhotelProcess;
- (_Bool)isOverseahotelProcess;
- (_Bool)isForeignguestProcess:(int)arg1;
- (void)setSpreadOrderIsGuarantee:(_Bool)arg1;
- (_Bool)hasTraipInsuranceFG;
- (void)setHotelTaxAndServiceInfo:(id)arg1;
- (_Bool)needToShowEmail;
- (_Bool)needShowInsurance;
- (_Bool)isShowOptionPrice;
- (void)submitSelectHotelOption;
- (void)calculateTripInsurance;
- (void)setHotelPaymentInfo:(id)arg1 hotelDataType:(int)arg2;
- (_Bool)isShowInvoiceCell;
- (id)init;

@end

