//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQAlertViewDelegate-Protocol.h"

@class NSString;

@interface MQQPushManager : NSObject <MQQAlertViewDelegate>
{
    _Bool _inBackground;
}

+ (id)sharedManager;
+ (id)pushRecordFromPush:(id)arg1;
+ (void)handlePush:(id)arg1;
+ (id)handleLaunchedPushInfo:(id)arg1;
+ (id)handlePushInfo:(id)arg1;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)pushModeAtThisMoment;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

