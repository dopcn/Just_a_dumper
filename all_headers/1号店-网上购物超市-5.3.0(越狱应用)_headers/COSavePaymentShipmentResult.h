//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COBaseResult.h"

@class COBalanceVO, COCartVO, COCheckInfoVO, COCombinationPaymentVO, COCombinationShipmentVO, COOrderPriceVO, NSNumber, NSString;

@interface COSavePaymentShipmentResult : COBaseResult
{
    COBalanceVO *_balanceVO;
    NSNumber *_canReplacement;
    NSString *_cartJson;
    COCartVO *_cartVO;
    COCheckInfoVO *_checkInfoVO;
    COCombinationPaymentVO *_combinationPaymentVO;
    COCombinationShipmentVO *_combinationShipmentVO;
    COOrderPriceVO *_orderPriceVO;
    NSNumber *_useReplacement;
}

@property(retain, nonatomic) NSNumber *useReplacement; // @synthesize useReplacement=_useReplacement;
@property(retain, nonatomic) COOrderPriceVO *orderPriceVO; // @synthesize orderPriceVO=_orderPriceVO;
@property(retain, nonatomic) COCombinationShipmentVO *combinationShipmentVO; // @synthesize combinationShipmentVO=_combinationShipmentVO;
@property(retain, nonatomic) COCombinationPaymentVO *combinationPaymentVO; // @synthesize combinationPaymentVO=_combinationPaymentVO;
@property(retain, nonatomic) COCheckInfoVO *checkInfoVO; // @synthesize checkInfoVO=_checkInfoVO;
@property(retain, nonatomic) COCartVO *cartVO; // @synthesize cartVO=_cartVO;
@property(copy, nonatomic) NSString *cartJson; // @synthesize cartJson=_cartJson;
@property(retain, nonatomic) NSNumber *canReplacement; // @synthesize canReplacement=_canReplacement;
@property(retain, nonatomic) COBalanceVO *balanceVO; // @synthesize balanceVO=_balanceVO;
- (void).cxx_destruct;

@end

