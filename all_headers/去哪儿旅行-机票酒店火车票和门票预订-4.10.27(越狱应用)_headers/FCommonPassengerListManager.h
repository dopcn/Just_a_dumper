//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTTSAVBookingResult, FTTSInterAVResult, NSMutableArray;

@interface FCommonPassengerListManager : NSObject
{
    NSMutableArray *_arrayCommonPassengerList;
    NSMutableArray *_arrayInsuranceList;
    unsigned long long _orderPassengerType;
    FTTSInterAVResult *_fTTSAVResult;
    FTTSAVBookingResult *_fTTSDomesticAVResult;
}

+ (id)sharedManager;
@property(retain, nonatomic) FTTSAVBookingResult *fTTSDomesticAVResult; // @synthesize fTTSDomesticAVResult=_fTTSDomesticAVResult;
@property(retain, nonatomic) FTTSInterAVResult *fTTSAVResult; // @synthesize fTTSAVResult=_fTTSAVResult;
- (void).cxx_destruct;
- (long long)getTicketPriceKeyWithInsuranceList:(id)arg1 withPriceInfoItem:(id)arg2;
- (id)getBuyInsuranceListWithPsg:(id)arg1;
- (_Bool)isBuyInterAccidentOrTravel:(id)arg1;
- (_Bool)isBuyInsuranceEnjoyedPrice:(id)arg1;
- (void)updateInsurancePersonOrigin:(id)arg1 toNew:(id)arg2;
- (_Bool)isBuyDomeBenefit:(id)arg1 withPriceItem:(id)arg2;
- (_Bool)isBuyInterBenefitProduct:(id)arg1;
- (long long)getBuyInsuranceIndex:(id)arg1 insuranceType:(long long)arg2;
- (long long)checkPersonExist:(id)arg1 passengerData:(id)arg2;
- (_Bool)checkPersonCanBuyInsurance:(id)arg1 PassengerData:(id)arg2;
- (long long)checkInsuranceListExist:(id)arg1;
- (void)deletePassengerWithInsuranceList:(id)arg1;
- (void)deletePersonInInsurancewithPassenger:(id)arg1;
- (void)defaultSelectPersonData:(id)arg1;
- (void)updatePassengerInsuranceListWithpassengerData:(id)arg1;
- (id)getInsurancePersonData:(id)arg1 withInsuranceData:(id)arg2;
- (_Bool)isOutInsuranceRange:(id)arg1 withInsuranceData:(id)arg2;
- (void)cleanInsuranceList;
- (id)getAuxProductDataWithProductClass:(id)arg1;
- (id)getInsuranceListDataWithProductType:(long long)arg1;
- (void)buyProductByNobody:(id)arg1;
- (void)buyProductByAllPerson:(id)arg1;
- (_Bool)isBuyAuxProductWithType:(long long)arg1;
- (id)getInsuranceTitle:(long long)arg1;
- (_Bool)hasPersonInProductWithType:(long long)arg1;
- (_Bool)isBuyInsuranceWithType:(long long)arg1;
- (_Bool)isBuyAuxProducts;
- (_Bool)isContainAuxProducts;
- (_Bool)isBuyOnlyInsurance;
- (_Bool)isBuyInsurance;
- (id)getInterAuxProducts;
- (long long)getInsuranceCountWithPerson:(id)arg1;
- (double)getInterAuxProductTotalPrice:(id)arg1;
- (double)getInterInsurancePriceTotal;
- (id)getInsuranceListData:(long long)arg1;
- (long long)getInsuranceListCount;
- (id)getInsuranceList;
- (_Bool)checkCredit:(id)arg1;
- (_Bool)checkPassengerInfoIsEnough:(id)arg1 withCertIndex:(long long)arg2;
- (id)getPassengerCertNIInfo:(id)arg1;
- (_Bool)letPassengerBuyCard:(id)arg1 isDefaultSelect:(_Bool)arg2;
- (_Bool)checkPassengerMemberUseInfo:(id)arg1;
- (void)updatePassengerMemberInfo:(id)arg1;
- (_Bool)updateSharedManagerPassengerMemberInfo:(id)arg1;
- (_Bool)isNoCreditAndNoWriteCreditInfo:(id)arg1;
- (id)constructCommonPassengerInterDefaultCredit;
- (id)constructCommonPassengerDomesticDefaultCredit;
- (id)constructCommonPassengerDefaultCredit;
- (id)construceDefaultCommonPassenger;
- (_Bool)isCheckInterChild2ManFlag:(id)arg1;
- (_Bool)isChildSpecialTicketFlag;
- (void)updateChild2ManTicketCheck:(id)arg1;
- (_Bool)checkSpecialChildIsSelected;
- (long long)getPassengerDataIndexInCommonList:(id)arg1;
- (void)realDeleteCommonPassenger:(id)arg1;
- (void)deleteCommonPassenger:(id)arg1;
- (id)getFlightLastestDate;
- (void)updateCommonPassengerOrigin:(id)arg1 toNew:(id)arg2;
- (void)addCommonPassenger:(id)arg1 updateType:(unsigned long long)arg2;
- (void)updateCommonPassengerList:(id)arg1 updateType:(unsigned long long)arg2;
- (void)cleanCommonPassengerList;
- (id)getCommonPassengerData:(long long)arg1;
- (long long)getCommonPassengerListCount;
- (id)getCommonPassengerList;
- (unsigned long long)getOrderPassengerType;
- (void)setOrderPassengerType:(unsigned long long)arg1;
- (id)init;

@end

