//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UmpRetInfo.h"

@class NSString;

@interface OrderInfo : UmpRetInfo
{
    NSString *tradeNo;
    NSString *amount;
    NSString *orderDate;
    NSString *goodsName;
    NSString *orderId;
    NSString *merId;
    NSString *merName;
}

+ (void)initWithDictionary:(id)arg1 dictionary:(id)arg2;
@property(retain, nonatomic) NSString *merName; // @synthesize merName;
@property(retain, nonatomic) NSString *merId; // @synthesize merId;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId;
@property(retain, nonatomic) NSString *goodsName; // @synthesize goodsName;
@property(retain, nonatomic) NSString *orderDate; // @synthesize orderDate;
@property(retain, nonatomic) NSString *amount; // @synthesize amount;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo;
- (id)description;

@end

