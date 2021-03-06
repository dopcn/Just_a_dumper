//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSDate, NSString;

@interface HTKCalendarHoliday : SAKDomainObject
{
    NSDate *_date;
    NSString *_festival;
    unsigned long long _holidayType;
    unsigned long long _adjustType;
    NSArray *_holidayDetailData;
}

+ (id)dateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *holidayDetailData; // @synthesize holidayDetailData=_holidayDetailData;
@property(nonatomic) unsigned long long adjustType; // @synthesize adjustType=_adjustType;
@property(nonatomic) unsigned long long holidayType; // @synthesize holidayType=_holidayType;
@property(retain, nonatomic) NSString *festival; // @synthesize festival=_festival;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

