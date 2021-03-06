//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSString, TPKPOIDetailDealLookMoreModel;

@interface TPKPOIDetailSecondTicketModel : SAKDomainObject
{
    _Bool _defaultOpen;
    NSString *_name;
    NSString *_iconUrl;
    double _lowPrice;
    double _lowOriginalPrice;
    long long _defaultOpenCount;
    NSArray *_deals;
    TPKPOIDetailDealLookMoreModel *_lookMoreModel;
}

+ (id)lookMoreModelJSONTransformer;
+ (id)dealsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) TPKPOIDetailDealLookMoreModel *lookMoreModel; // @synthesize lookMoreModel=_lookMoreModel;
@property(retain, nonatomic) NSArray *deals; // @synthesize deals=_deals;
@property(nonatomic) long long defaultOpenCount; // @synthesize defaultOpenCount=_defaultOpenCount;
@property(nonatomic) _Bool defaultOpen; // @synthesize defaultOpen=_defaultOpen;
@property(nonatomic) double lowOriginalPrice; // @synthesize lowOriginalPrice=_lowOriginalPrice;
@property(nonatomic) double lowPrice; // @synthesize lowPrice=_lowPrice;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

