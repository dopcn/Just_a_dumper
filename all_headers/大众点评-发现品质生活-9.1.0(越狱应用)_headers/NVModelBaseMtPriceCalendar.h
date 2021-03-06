//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSDate, NSString;

@interface NVModelBaseMtPriceCalendar : NVBaseModel
{
    long long _type;
    double _buyPrice;
    long long _dealId;
    NSArray *_range;
    double _canBuyPrice;
    double _price;
    NSDate *_startTime;
    NSString *_desc;
    long long _uid;
    NSDate *_endTime;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) double canBuyPrice; // @synthesize canBuyPrice=_canBuyPrice;
@property(retain, nonatomic) NSArray *range; // @synthesize range=_range;
@property(nonatomic) long long dealId; // @synthesize dealId=_dealId;
@property(nonatomic) double buyPrice; // @synthesize buyPrice=_buyPrice;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

