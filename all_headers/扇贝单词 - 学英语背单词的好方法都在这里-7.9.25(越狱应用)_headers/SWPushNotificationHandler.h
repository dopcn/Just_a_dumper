//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SWPushNotificationHandler : NSObject
{
}

+ (void)openApplicationToHandleGeneralPushNotification:(id)arg1;
+ (void)handleRemoteNotification:(id)arg1 inController:(id)arg2;
+ (void)unsubscribeTopics:(id)arg1;
+ (void)subscribeChannels:(id)arg1;
+ (void)setupDeviceToken:(id)arg1;
+ (void)registerMiPush;
+ (void)registerRemoteNotification:(id)arg1;
+ (void)sendRegIdToServer;

@end

