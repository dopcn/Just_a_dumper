//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface VSFinanceExclusiveCoupon : JSONModel
{
    NSString<Optional> *_paymentFav;
    NSString<Optional> *_luckyMoney;
    NSString<Optional> *_totalFav;
    NSString<Optional> *_tipsId;
    NSString<Optional> *_tipsType;
}

@property(copy, nonatomic) NSString<Optional> *tipsType; // @synthesize tipsType=_tipsType;
@property(copy, nonatomic) NSString<Optional> *tipsId; // @synthesize tipsId=_tipsId;
@property(copy, nonatomic) NSString<Optional> *totalFav; // @synthesize totalFav=_totalFav;
@property(copy, nonatomic) NSString<Optional> *luckyMoney; // @synthesize luckyMoney=_luckyMoney;
@property(copy, nonatomic) NSString<Optional> *paymentFav; // @synthesize paymentFav=_paymentFav;
- (void).cxx_destruct;

@end

