//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PriceType;

@interface CTPayInsuranceInfoModel : NSObject
{
    int _provider;
    PriceType *_amount;
    NSString *_currency;
}

@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (id)ctp_ubt_log_description;
- (id)init;

@end

