//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HomePage_Box_LocalNotification : NSObject
{
}

+ (id)stringFromDate:(id)arg1;
+ (id)dateFromString:(id)arg1;
+ (id)toDateFromInterval:(double)arg1;
+ (id)findLocalNotificationWithWareId:(id)arg1 date:(id)arg2;
+ (_Bool)hasNotificationWithWareId:(id)arg1 date:(id)arg2;
+ (id)finLocalNotificationWithName:(id)arg1 date:(id)arg2;
+ (void)scheduleLocalNotificationWithWares:(id)arg1 interval:(double)arg2;
+ (void)removeNotificationWithWareId:(id)arg1 interval:(double)arg2;
+ (void)addNotifictionWithInterval:(double)arg1 wareId:(id)arg2 title:(id)arg3;

@end

