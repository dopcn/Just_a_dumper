//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface CTFlightNotificationManager : NSObject <UIAlertViewDelegate>
{
    NSDictionary *_pushDic;
    NSMutableArray *_notificationObjects;
}

+ (void)receiveNewFlightPushMsg;
+ (void)setAppHomePageHasShowedNewMsgTag;
+ (void)dealWithName:(id)arg1 rootVC:(id)arg2 params:(id)arg3;
+ (void)acceptNotificationFromForeground:(id)arg1;
+ (void)acceptNotificationFromBackground:(id)arg1;
+ (void)acceptNotificationFromLaunch:(id)arg1;
+ (void)acceptNotification:(id)arg1 from:(int)arg2;
+ (id)manager;
@property(retain, nonatomic) NSMutableArray *notificationObjects; // @synthesize notificationObjects=_notificationObjects;
@property(retain, nonatomic) NSDictionary *pushDic; // @synthesize pushDic=_pushDic;
- (void).cxx_destruct;
- (void)onReceiveNotification4SysCalendar:(id)arg1;
- (void)notificationSelector:(id)arg1;
- (void)postNotificationOnMainThread:(id)arg1 withParam:(id)arg2;
- (void)CTNotificationManagerLog:(id)arg1 withMethodName:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)acceptFlightWait:(id)arg1;
- (void)goBroad:(id)arg1;
- (void)acceptflightBoardNotice:(id)arg1;
- (void)refreshMessageService:(int)arg1 operateType:(int)arg2 success:(CDUnknownBlockType)arg3;
- (void)acceptMessageService:(int)arg1;
- (void)refreshMainThread;
- (void)backGroundacceptPlaneSeat:(id)arg1 andpushDic:(id)arg2;
- (void)backGroundacceptFlightBoard:(id)arg1 andpushDic:(id)arg2;
- (void)backGroundacceptLow:(id)arg1 pushInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

