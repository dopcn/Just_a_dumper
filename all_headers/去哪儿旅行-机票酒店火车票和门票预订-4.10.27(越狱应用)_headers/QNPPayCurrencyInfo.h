//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QNPPayCurrencyInfo : NSObject
{
    NSString *_foreignRate;
    NSString *_serviceCharge;
    NSString *_CurrencySymbol;
    NSString *_currency;
}

@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *CurrencySymbol; // @synthesize CurrencySymbol=_CurrencySymbol;
@property(retain, nonatomic) NSString *serviceCharge; // @synthesize serviceCharge=_serviceCharge;
@property(retain, nonatomic) NSString *foreignRate; // @synthesize foreignRate=_foreignRate;
- (void).cxx_destruct;

@end

