//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HotelDateTimeData;

@interface HotelDateTimeManager : NSObject
{
    HotelDateTimeData *date;
}

+ (id)formatDurationTextWithCheckInDate:(id)arg1 checkOutDate:(id)arg2;
+ (id)formatCheckInOutTextWithCheckInDate:(id)arg1 checkOutDate:(id)arg2;
+ (_Bool)isValidEndDate:(id)arg1;
+ (_Bool)isValidBeginDate:(id)arg1;
+ (_Bool)isValidBeginDate:(id)arg1 AndEndDate:(id)arg2;
+ (id)stringFromDate:(id)arg1;
+ (_Bool)checkCurrentDateChangedWith:(id)arg1 And:(id)arg2;
+ (id)getDefaultEndDate;
+ (id)getDefaultBeginDate;
+ (id)timeDataWithTimeInterval:(double)arg1;
@property(retain, nonatomic) HotelDateTimeData *date; // @synthesize date;
- (void).cxx_destruct;
- (_Bool)isValidDate:(id)arg1 isTodayValid:(_Bool)arg2;
- (double)integerRepresentation;
- (id)initWithDate:(id)arg1;
- (id)init;

@end

