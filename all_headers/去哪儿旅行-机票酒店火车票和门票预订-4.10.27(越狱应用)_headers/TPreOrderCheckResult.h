//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchNetResult.h"

@class NSArray, NSNumber, NSString, TOrderExpress, TOrderFillTrainInfo, TrainDeliveryPaperInfor, TrainInsuranceInfor, TrainProduct, TrainRecommendList, TrainUserBindInfo;

@interface TPreOrderCheckResult : SearchNetResult
{
    NSNumber *_agentId;
    NSString *_agentName;
    TOrderFillTrainInfo *_train;
    NSString *_buyTicketTips;
    NSString *_buyStudentTicketTip;
    NSString *_buyStudentAndChildTicketTip;
    NSString *_buyInsuranceTips;
    NSString *_seatTips;
    NSArray *_tickets__Array__TrainTicketsItem;
    NSNumber *_totalSeatNumber;
    NSString *_extra;
    NSString *_warmTips;
    NSString *_checkTicket;
    TOrderExpress *_invoiceInfo;
    TrainRecommendList *_recommendList;
    NSString *_packageShowName;
    NSNumber *_showPackagePrice;
    TrainInsuranceInfor *_insuranceInfo;
    NSString *_noBuyProductTip;
    TrainDeliveryPaperInfor *_deliveryPaperInfo;
    NSString *_buyChildTicketTip;
    NSString *_acceptSeatTip;
    NSNumber *_jumpTarget;
    NSNumber *_preVerify;
    NSArray *_activityInfos__Array__TrainActivityInfo;
    NSString *_faqName;
    NSArray *_webViews__Array__TrainTip;
    NSArray *_shareMsgs__Array__TShareMsg;
    TrainUserBindInfo *_userBindInfo;
    NSNumber *_paperSupportSeat;
    NSString *_alertContent;
    NSString *_studentDateLimit;
    NSString *_studentSeatLimit;
    NSString *_paperPurchaseWarms;
    NSString *_paperPurchaseDeliveryWarms;
    NSNumber *_appClientOccupy;
    NSNumber *_tryGetAccount;
    TrainProduct *_product;
    NSNumber *_paperDeliverySwitch;
    NSNumber *_supportTicketToStation;
    NSString *_ticketToStationAddress;
    NSString *_ticketToStationExpressPrice;
    NSNumber *_splitePrice;
    NSNumber *_insuranceStrongShow;
    NSArray *_bundleLabels__Array__FreeBundle;
    NSString *_candidateSeatWarningToastTip;
    NSString *_candidateSeatTip;
    NSNumber *_defaultDeliveryMode;
    NSNumber *_showOnlinePicking;
    NSNumber *_canOnlinePicking;
    NSString *_onlinePickingNote;
    NSNumber *_perRowSeatsNum;
    NSNumber *_isPackageService;
    NSArray *_combineProducts__Array__TrainCombineProduct;
}

@property(copy, nonatomic, getter=combineProducts, setter=setCombineProducts:) NSArray *combineProducts__Array__TrainCombineProduct; // @synthesize combineProducts__Array__TrainCombineProduct=_combineProducts__Array__TrainCombineProduct;
@property(retain, nonatomic) NSNumber *isPackageService; // @synthesize isPackageService=_isPackageService;
@property(retain, nonatomic) NSNumber *perRowSeatsNum; // @synthesize perRowSeatsNum=_perRowSeatsNum;
@property(copy, nonatomic) NSString *onlinePickingNote; // @synthesize onlinePickingNote=_onlinePickingNote;
@property(retain, nonatomic) NSNumber *canOnlinePicking; // @synthesize canOnlinePicking=_canOnlinePicking;
@property(retain, nonatomic) NSNumber *showOnlinePicking; // @synthesize showOnlinePicking=_showOnlinePicking;
@property(retain, nonatomic) NSNumber *defaultDeliveryMode; // @synthesize defaultDeliveryMode=_defaultDeliveryMode;
@property(copy, nonatomic) NSString *candidateSeatTip; // @synthesize candidateSeatTip=_candidateSeatTip;
@property(copy, nonatomic) NSString *candidateSeatWarningToastTip; // @synthesize candidateSeatWarningToastTip=_candidateSeatWarningToastTip;
@property(retain, nonatomic, getter=bundleLabels, setter=setBundleLabels:) NSArray *bundleLabels__Array__FreeBundle; // @synthesize bundleLabels__Array__FreeBundle=_bundleLabels__Array__FreeBundle;
@property(retain, nonatomic) NSNumber *insuranceStrongShow; // @synthesize insuranceStrongShow=_insuranceStrongShow;
@property(retain, nonatomic) NSNumber *splitePrice; // @synthesize splitePrice=_splitePrice;
@property(copy, nonatomic) NSString *ticketToStationExpressPrice; // @synthesize ticketToStationExpressPrice=_ticketToStationExpressPrice;
@property(copy, nonatomic) NSString *ticketToStationAddress; // @synthesize ticketToStationAddress=_ticketToStationAddress;
@property(retain, nonatomic) NSNumber *supportTicketToStation; // @synthesize supportTicketToStation=_supportTicketToStation;
@property(retain, nonatomic) NSNumber *paperDeliverySwitch; // @synthesize paperDeliverySwitch=_paperDeliverySwitch;
@property(retain, nonatomic) TrainProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSNumber *tryGetAccount; // @synthesize tryGetAccount=_tryGetAccount;
@property(retain, nonatomic) NSNumber *appClientOccupy; // @synthesize appClientOccupy=_appClientOccupy;
@property(retain, nonatomic) NSString *paperPurchaseDeliveryWarms; // @synthesize paperPurchaseDeliveryWarms=_paperPurchaseDeliveryWarms;
@property(retain, nonatomic) NSString *paperPurchaseWarms; // @synthesize paperPurchaseWarms=_paperPurchaseWarms;
@property(copy, nonatomic) NSString *studentSeatLimit; // @synthesize studentSeatLimit=_studentSeatLimit;
@property(copy, nonatomic) NSString *studentDateLimit; // @synthesize studentDateLimit=_studentDateLimit;
@property(readonly, nonatomic) NSString *alertContent; // @synthesize alertContent=_alertContent;
@property(readonly, nonatomic) NSNumber *paperSupportSeat; // @synthesize paperSupportSeat=_paperSupportSeat;
@property(retain, nonatomic) TrainUserBindInfo *userBindInfo; // @synthesize userBindInfo=_userBindInfo;
@property(retain, nonatomic, getter=shareMsgs) NSArray *shareMsgs__Array__TShareMsg; // @synthesize shareMsgs__Array__TShareMsg=_shareMsgs__Array__TShareMsg;
@property(retain, nonatomic, getter=webViews) NSArray *webViews__Array__TrainTip; // @synthesize webViews__Array__TrainTip=_webViews__Array__TrainTip;
@property(readonly, nonatomic) NSString *faqName; // @synthesize faqName=_faqName;
@property(readonly, nonatomic, getter=activityInfos) NSArray *activityInfos__Array__TrainActivityInfo; // @synthesize activityInfos__Array__TrainActivityInfo=_activityInfos__Array__TrainActivityInfo;
@property(retain, nonatomic) NSNumber *preVerify; // @synthesize preVerify=_preVerify;
@property(readonly, nonatomic) NSNumber *jumpTarget; // @synthesize jumpTarget=_jumpTarget;
@property(readonly, nonatomic) NSString *acceptSeatTip; // @synthesize acceptSeatTip=_acceptSeatTip;
@property(copy, nonatomic) NSString *buyChildTicketTip; // @synthesize buyChildTicketTip=_buyChildTicketTip;
@property(retain, nonatomic) TrainDeliveryPaperInfor *deliveryPaperInfo; // @synthesize deliveryPaperInfo=_deliveryPaperInfo;
@property(copy, nonatomic) NSString *noBuyProductTip; // @synthesize noBuyProductTip=_noBuyProductTip;
@property(retain, nonatomic) TrainInsuranceInfor *insuranceInfo; // @synthesize insuranceInfo=_insuranceInfo;
@property(retain, nonatomic) NSNumber *showPackagePrice; // @synthesize showPackagePrice=_showPackagePrice;
@property(retain, nonatomic) NSString *packageShowName; // @synthesize packageShowName=_packageShowName;
@property(readonly, nonatomic) TrainRecommendList *recommendList; // @synthesize recommendList=_recommendList;
@property(readonly, nonatomic) TOrderExpress *invoiceInfo; // @synthesize invoiceInfo=_invoiceInfo;
@property(readonly, nonatomic) NSString *checkTicket; // @synthesize checkTicket=_checkTicket;
@property(readonly, nonatomic) NSString *warmTips; // @synthesize warmTips=_warmTips;
@property(readonly, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(readonly, nonatomic) NSNumber *totalSeatNumber; // @synthesize totalSeatNumber=_totalSeatNumber;
@property(retain, nonatomic, getter=tickets) NSArray *tickets__Array__TrainTicketsItem; // @synthesize tickets__Array__TrainTicketsItem=_tickets__Array__TrainTicketsItem;
@property(readonly, nonatomic) NSString *seatTips; // @synthesize seatTips=_seatTips;
@property(readonly, nonatomic) NSString *buyInsuranceTips; // @synthesize buyInsuranceTips=_buyInsuranceTips;
@property(copy, nonatomic) NSString *buyStudentAndChildTicketTip; // @synthesize buyStudentAndChildTicketTip=_buyStudentAndChildTicketTip;
@property(copy, nonatomic) NSString *buyStudentTicketTip; // @synthesize buyStudentTicketTip=_buyStudentTicketTip;
@property(readonly, nonatomic) NSString *buyTicketTips; // @synthesize buyTicketTips=_buyTicketTips;
@property(readonly, nonatomic) TOrderFillTrainInfo *train; // @synthesize train=_train;
@property(readonly, nonatomic) NSString *agentName; // @synthesize agentName=_agentName;
@property(readonly, nonatomic) NSNumber *agentId; // @synthesize agentId=_agentId;
- (void).cxx_destruct;

@end

