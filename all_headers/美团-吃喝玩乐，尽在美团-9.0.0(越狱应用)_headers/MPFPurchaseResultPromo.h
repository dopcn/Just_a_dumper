//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface MPFPurchaseResultPromo : SAKDomainObject
{
    long long _promoID;
    NSString *_promoCode;
    NSString *_barCode;
}

+ (id)predicateDictionary;
@property(copy, nonatomic) NSString *barCode; // @synthesize barCode=_barCode;
@property(copy, nonatomic) NSString *promoCode; // @synthesize promoCode=_promoCode;
@property(nonatomic) long long promoID; // @synthesize promoID=_promoID;
- (void).cxx_destruct;

@end

