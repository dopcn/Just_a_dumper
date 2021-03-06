//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCopyObject.h"

@class FOrderListResultOrderNegoPriceInfo, NSArray, NSNumber, NSString;

@interface FOrderListResultOrder : FCopyObject
{
    NSString *_host;
    NSString *_orderNo;
    NSNumber *_isLocalOrder;
    NSString *_orderStatusStr;
    NSNumber *_orderStatusColor;
    NSString *_orderStatusNote;
    NSNumber *_orderStatusNoteColor;
    NSNumber *_flightType;
    NSString *_orderPrice;
    NSString *_orderTime;
    NSNumber *_otaType;
    NSString *_extparams;
    NSString *_moneyTypeView;
    NSString *_convertPrice;
    NSString *_currencyCode;
    NSNumber *_shareOrder;
    NSString *_orderTypeDesc;
    NSArray *_dptinfo__Array__FOrderListResultOrderFInfo;
    NSArray *_arrinfo__Array__FOrderListResultOrderFInfo;
    FOrderListResultOrderNegoPriceInfo *_payExtraPrice;
    NSArray *_orderActions__Array__FOrderActionItem;
    NSString *_charterTitle;
}

@property(retain, nonatomic) NSString *charterTitle; // @synthesize charterTitle=_charterTitle;
@property(retain, nonatomic, getter=arrayActionBtns, setter=setArrayActions:) NSArray *orderActions__Array__FOrderActionItem; // @synthesize orderActions__Array__FOrderActionItem=_orderActions__Array__FOrderActionItem;
@property(retain, nonatomic) FOrderListResultOrderNegoPriceInfo *payExtraPrice; // @synthesize payExtraPrice=_payExtraPrice;
@property(retain, nonatomic, getter=arrinfo, setter=setArrinfo:) NSArray *arrinfo__Array__FOrderListResultOrderFInfo; // @synthesize arrinfo__Array__FOrderListResultOrderFInfo=_arrinfo__Array__FOrderListResultOrderFInfo;
@property(retain, nonatomic, getter=dptinfo, setter=setDptinfo:) NSArray *dptinfo__Array__FOrderListResultOrderFInfo; // @synthesize dptinfo__Array__FOrderListResultOrderFInfo=_dptinfo__Array__FOrderListResultOrderFInfo;
@property(retain, nonatomic) NSString *orderTypeDesc; // @synthesize orderTypeDesc=_orderTypeDesc;
@property(retain, nonatomic) NSNumber *shareOrder; // @synthesize shareOrder=_shareOrder;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *convertPrice; // @synthesize convertPrice=_convertPrice;
@property(retain, nonatomic) NSString *moneyTypeView; // @synthesize moneyTypeView=_moneyTypeView;
@property(retain, nonatomic) NSString *extparams; // @synthesize extparams=_extparams;
@property(retain, nonatomic) NSNumber *otaType; // @synthesize otaType=_otaType;
@property(retain, nonatomic) NSString *orderTime; // @synthesize orderTime=_orderTime;
@property(retain, nonatomic) NSString *orderPrice; // @synthesize orderPrice=_orderPrice;
@property(retain, nonatomic) NSNumber *flightType; // @synthesize flightType=_flightType;
@property(retain, nonatomic) NSNumber *orderStatusNoteColor; // @synthesize orderStatusNoteColor=_orderStatusNoteColor;
@property(retain, nonatomic) NSString *orderStatusNote; // @synthesize orderStatusNote=_orderStatusNote;
@property(retain, nonatomic) NSNumber *orderStatusColor; // @synthesize orderStatusColor=_orderStatusColor;
@property(retain, nonatomic) NSString *orderStatusStr; // @synthesize orderStatusStr=_orderStatusStr;
@property(retain, nonatomic) NSNumber *isLocalOrder; // @synthesize isLocalOrder=_isLocalOrder;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end

