//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface SPKBankDiscountInfo : SAKDomainObject
{
    _Bool _showDiscountWarn;
    NSString *_campaignID;
    NSString *_cashticketCode;
    double _reduceAmount;
}

+ (id)predicateDictionary;
@property(nonatomic) _Bool showDiscountWarn; // @synthesize showDiscountWarn=_showDiscountWarn;
@property(nonatomic) double reduceAmount; // @synthesize reduceAmount=_reduceAmount;
@property(copy, nonatomic) NSString *cashticketCode; // @synthesize cashticketCode=_cashticketCode;
@property(copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
- (void).cxx_destruct;

@end

