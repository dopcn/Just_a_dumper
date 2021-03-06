//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, WMOrderPaymentInfo, WMRiskVerify;

@interface WMCOKSubmitCombineData : NSObject
{
    long long _code;
    NSString *_message;
    WMOrderPaymentInfo *_paymentInfo;
    long long _subCode;
    NSString *_warnDescription;
    NSString *_contactPhone;
    NSMutableArray *_missingDishes;
    double _minPrice;
    NSString *_requiredSPUTagID;
    WMRiskVerify *_riskVerify;
    NSDictionary *_outDeliveryData;
}

@property(retain, nonatomic) NSDictionary *outDeliveryData; // @synthesize outDeliveryData=_outDeliveryData;
@property(retain, nonatomic) WMRiskVerify *riskVerify; // @synthesize riskVerify=_riskVerify;
@property(copy, nonatomic) NSString *requiredSPUTagID; // @synthesize requiredSPUTagID=_requiredSPUTagID;
@property(nonatomic) double minPrice; // @synthesize minPrice=_minPrice;
@property(retain, nonatomic) NSMutableArray *missingDishes; // @synthesize missingDishes=_missingDishes;
@property(retain, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(retain, nonatomic) NSString *warnDescription; // @synthesize warnDescription=_warnDescription;
@property(nonatomic) long long subCode; // @synthesize subCode=_subCode;
@property(retain, nonatomic) WMOrderPaymentInfo *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)createMissingDishesByDataDictionary:(id)arg1 andErrorCode:(long long)arg2;
- (id)initWithServerDictionary:(id)arg1 serverApi:(long long)arg2;

@end

