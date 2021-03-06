//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MiPushSDK : NSObject
{
}

+ (id)getRegId;
+ (id)getSDKVersion;
+ (void)getAllAccountAsync;
+ (void)getAllTopicAsync;
+ (id)getAllTopic;
+ (void)getAllAliasAsync;
+ (id)getAllAlias;
+ (void)openAppNotify:(id)arg1;
+ (void)unsubscribe:(id)arg1;
+ (void)subscribe:(id)arg1;
+ (void)unsetAccount:(id)arg1;
+ (void)setAccount:(id)arg1;
+ (void)unsetAlias:(id)arg1;
+ (void)setAlias:(id)arg1;
+ (void)handleReceiveRemoteNotification:(id)arg1;
+ (void)bindDeviceToken:(id)arg1;
+ (void)unregisterMiPush;
+ (void)registerMiPush:(id)arg1 type:(unsigned long long)arg2 connect:(_Bool)arg3 logName:(id)arg4;
+ (void)registerMiPush:(id)arg1 type:(unsigned long long)arg2 connect:(_Bool)arg3;
+ (void)registerMiPush:(id)arg1 type:(unsigned long long)arg2;
+ (void)registerMiPush:(id)arg1;

@end

