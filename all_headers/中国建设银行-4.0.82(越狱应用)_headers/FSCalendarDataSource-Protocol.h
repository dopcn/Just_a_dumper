//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSCalendar, FSCalendarCell, NSDate, NSString, UIImage, UILabel;

@protocol FSCalendarDataSource <NSObject>

@optional
- (NSDate *)maximumDateForCalendar:(FSCalendar *)arg1;
- (NSDate *)minimumDateForCalendar:(FSCalendar *)arg1;
- (_Bool)calendar:(FSCalendar *)arg1 hasEventForDate:(NSDate *)arg2;
- (UIImage *)calendar:(FSCalendar *)arg1 imageForDate:(NSDate *)arg2;
- (void)calendar:(FSCalendar *)arg1 subtitleLabel:(UILabel *)arg2 ForDate:(NSDate *)arg3;
- (void)calendar:(FSCalendar *)arg1 subCell:(FSCalendarCell *)arg2 ForDate:(NSDate *)arg3;
- (NSString *)calendar:(FSCalendar *)arg1 subtitleForDate:(NSDate *)arg2;
@end

