//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface BindPayOrderInformationModel : CTBusinessBean
{
    int businessEType;
    long long orderID;
    NSString *orderDesc;
    NSString *currency;
    PriceType *orderAmount;
    NSString *externalNo;
    _Bool autoApplyBill;
    NSString *paymentNotify;
    NSString *recallType;
}

@property(copy, nonatomic) NSString *recallType; // @synthesize recallType;
@property(copy, nonatomic) NSString *paymentNotify; // @synthesize paymentNotify;
@property(nonatomic) _Bool autoApplyBill; // @synthesize autoApplyBill;
@property(copy, nonatomic) NSString *externalNo; // @synthesize externalNo;
@property(retain, nonatomic) PriceType *orderAmount; // @synthesize orderAmount;
@property(copy, nonatomic) NSString *currency; // @synthesize currency;
@property(copy, nonatomic) NSString *orderDesc; // @synthesize orderDesc;
@property(nonatomic) long long orderID; // @synthesize orderID;
@property(nonatomic) int businessEType; // @synthesize businessEType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

