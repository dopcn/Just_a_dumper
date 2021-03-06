//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TrainReminder : NSObject
{
}

+ (id)localNotificationForKey:(id)arg1;
+ (_Bool)hasRemindEventForKey:(id)arg1;
+ (void)removeLocalPushEvent:(id)arg1;
+ (void)removeCalendarEventForEventIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)removeRemindEventForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)addLocalPushEvent:(id)arg1 forKey:(id)arg2;
+ (void)accessEventStore:(CDUnknownBlockType)arg1;
+ (void)addCalendarEvent:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)addRemindEvent:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)eventStore;

@end

