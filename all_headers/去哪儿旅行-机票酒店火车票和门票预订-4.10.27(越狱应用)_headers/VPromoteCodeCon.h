//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface VPromoteCodeCon : NSObject
{
    NSString *_productEnId;
    NSString *_tEnId;
    NSString *_takeoffDateStr;
    NSNumber *_taocanCount;
    NSNumber *_adultCount;
    NSNumber *_childCount;
    NSNumber *_roomCount;
    NSNumber *_sharingRoom;
    NSNumber *_isChanged;
    NSNumber *_orderTotalAmount;
    long long _price;
    long long _totalPrice;
}

@property(nonatomic) long long totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) NSNumber *orderTotalAmount; // @synthesize orderTotalAmount=_orderTotalAmount;
@property(retain, nonatomic) NSNumber *isChanged; // @synthesize isChanged=_isChanged;
@property(retain, nonatomic) NSNumber *sharingRoom; // @synthesize sharingRoom=_sharingRoom;
@property(retain, nonatomic) NSNumber *roomCount; // @synthesize roomCount=_roomCount;
@property(retain, nonatomic) NSNumber *childCount; // @synthesize childCount=_childCount;
@property(retain, nonatomic) NSNumber *adultCount; // @synthesize adultCount=_adultCount;
@property(retain, nonatomic) NSNumber *taocanCount; // @synthesize taocanCount=_taocanCount;
@property(retain, nonatomic) NSString *takeoffDateStr; // @synthesize takeoffDateStr=_takeoffDateStr;
@property(retain, nonatomic) NSString *tEnId; // @synthesize tEnId=_tEnId;
@property(retain, nonatomic) NSString *productEnId; // @synthesize productEnId=_productEnId;
- (void).cxx_destruct;
- (void)buildChangedWithNew:(id)arg1 old:(id)arg2;

@end

