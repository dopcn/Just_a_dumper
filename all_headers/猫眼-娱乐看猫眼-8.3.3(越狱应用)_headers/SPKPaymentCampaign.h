//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@interface SPKPaymentCampaign : SAKDomainObject
{
    long long _campaignID;
    unsigned long long _type;
    unsigned long long _source;
    double _discountValue;
    double _maxDiscount;
    double _minFee;
    double _threshold;
}

+ (id)minFeeJSONTransformer;
+ (id)predicateDictionary;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) double minFee; // @synthesize minFee=_minFee;
@property(nonatomic) double maxDiscount; // @synthesize maxDiscount=_maxDiscount;
@property(nonatomic) double discountValue; // @synthesize discountValue=_discountValue;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long campaignID; // @synthesize campaignID=_campaignID;

@end

