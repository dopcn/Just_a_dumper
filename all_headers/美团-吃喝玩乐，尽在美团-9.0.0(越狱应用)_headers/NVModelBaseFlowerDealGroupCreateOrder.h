//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NVModelBaseFlowerDealGroup, NVModelBaseFlowerDeliveryInfo;

@interface NVModelBaseFlowerDealGroupCreateOrder : NVBaseModel
{
    NVModelBaseFlowerDeliveryInfo *_deliveryInfo;
    NVModelBaseFlowerDealGroup *_dealGroup;
}

+ (id)metaInfo;
@property(retain, nonatomic) NVModelBaseFlowerDealGroup *dealGroup; // @synthesize dealGroup=_dealGroup;
@property(retain, nonatomic) NVModelBaseFlowerDeliveryInfo *deliveryInfo; // @synthesize deliveryInfo=_deliveryInfo;
- (void).cxx_destruct;

@end

