//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSDictionary, NVModelBaseZeusPriceCalendarResult;

@interface HotelZeusPriceCalendarDateSourceAdapter : NSObject
{
    NVModelBaseZeusPriceCalendarResult *_priceCalendarResult;
    NSDateFormatter *_ymdDateFormatter;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDictionary *_dayPriceStockDict;
}

@property(retain, nonatomic) NSDictionary *dayPriceStockDict; // @synthesize dayPriceStockDict=_dayPriceStockDict;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDateFormatter *ymdDateFormatter; // @synthesize ymdDateFormatter=_ymdDateFormatter;
@property(retain, nonatomic) NVModelBaseZeusPriceCalendarResult *priceCalendarResult; // @synthesize priceCalendarResult=_priceCalendarResult;
- (void).cxx_destruct;
- (id)MockPriceStockDict;
- (id)dateStockPriceDictFromZeusStockInfoArr:(id)arg1;
- (void)preprocessStockPriceInfo;
- (id)dayPriceStockInfoForDate:(id)arg1;
- (id)initWithZeusPriceCalendarResult:(id)arg1 dateFormatter:(id)arg2;

@end

