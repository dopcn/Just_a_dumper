//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GlobalHelper : NSObject
{
}

+ (void)askForPlayingViaWWAN:(CDUnknownBlockType)arg1;
+ (void)dismissWWANAlertView;
+ (void)reachabilityChanged:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)registerNotifications;
+ (id)normalizeString:(id)arg1 withFont:(id)arg2 constrainedToWidth:(double)arg3;
+ (id)getDeviceType:(long long)arg1;
+ (void)downloadTask:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;
+ (id)videoQualityControlName:(long long)arg1;
+ (id)videoQualityName:(long long)arg1;
+ (void)initialize;

@end

