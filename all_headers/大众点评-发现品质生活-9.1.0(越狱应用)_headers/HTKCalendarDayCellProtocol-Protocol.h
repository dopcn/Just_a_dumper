//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTKPriceCalendarInfo, NSDate, NSIndexPath;

@protocol HTKCalendarDayCellProtocol <NSObject>
+ (struct CGSize)cellSizeAtIndexPath:(NSIndexPath *)arg1;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) _Bool enabled;
- (void)updateWithDate:(NSDate *)arg1 calendarInfo:(HTKPriceCalendarInfo *)arg2 firstDayInMonth:(NSDate *)arg3;
@end

