//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents;

@interface IFUtil : NSObject
{
    NSDateComponents *_dateComponentsByHour;
    NSDateComponents *_dateComponentsByDay;
    NSDateComponents *_dateComponentsByMonth;
    NSDateComponents *_dateComponentsByYear;
    NSDate *_bootTime;
}

+ (id)sharedObject;
@property(retain, nonatomic) NSDate *bootTime; // @synthesize bootTime=_bootTime;
@property(retain, nonatomic) NSDateComponents *dateComponentsByYear; // @synthesize dateComponentsByYear=_dateComponentsByYear;
@property(retain, nonatomic) NSDateComponents *dateComponentsByMonth; // @synthesize dateComponentsByMonth=_dateComponentsByMonth;
@property(retain, nonatomic) NSDateComponents *dateComponentsByDay; // @synthesize dateComponentsByDay=_dateComponentsByDay;
@property(retain, nonatomic) NSDateComponents *dateComponentsByHour; // @synthesize dateComponentsByHour=_dateComponentsByHour;
- (void).cxx_destruct;
- (id)dateOfContractDay:(unsigned long long)arg1 nextMonth:(id)arg2;
- (id)dateOfContractDay:(unsigned long long)arg1 thisMonth:(id)arg2;
- (_Bool)wwanOK;
- (void)getWiFiSent:(unsigned long long *)arg1 WiFiReceived:(unsigned long long *)arg2 WWANSent:(unsigned long long *)arg3 WWANReceived:(unsigned long long *)arg4;
- (long long)secondsSinceBoot;
- (id)dateFromTimeval:(long long)arg1;
- (long long)bootTimet;
- (id)lastDayOfThisMonth:(id)arg1;
- (id)dateByPrevMonth:(id)arg1;
- (id)dateByPrevDay:(id)arg1;
- (id)dateByNextYear:(id)arg1;
- (id)dateByNextMonth:(id)arg1;
- (id)dateByNextDay:(id)arg1;
- (id)dateByNextHour:(id)arg1;
- (id)dateByYear:(id)arg1;
- (id)dateByMonth:(id)arg1;
- (id)dateByDay:(id)arg1;
- (id)dateByHour:(id)arg1;
- (id)date:(id)arg1 byUnit:(unsigned long long)arg2;
- (void)initAllDateComponents;
- (id)init;

@end

