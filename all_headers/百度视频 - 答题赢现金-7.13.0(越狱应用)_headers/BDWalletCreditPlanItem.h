//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface BDWalletCreditPlanItem : NSObject <NSCopying>
{
    NSString *_instalment;
    NSString *_rate;
    NSString *_amount;
    NSString *_fee_amount;
}

@property(retain, nonatomic) NSString *fee_amount; // @synthesize fee_amount=_fee_amount;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *instalment; // @synthesize instalment=_instalment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

