//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CDBackgroundTaskManager : NSObject
{
}

+ (id)didScheduledTaskClassNamesFromBackgroundFetch;
+ (id)eventParametersFromBackgroundFetch;
+ (void)_scheduledTaskFromBackgroundFetch:(CDUnknownBlockType)arg1;
+ (void)scheduledTaskFromRemoteNotification:(CDUnknownBlockType)arg1;
+ (void)scheduledTaskFromBackgroundFetch:(CDUnknownBlockType)arg1;
+ (void)invalidateApplicationBackgroundFetch;
+ (void)initializeApplicationBackgroundFetch;

@end

