//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCIMBaseMessageItem.h"

@class NSArray, TBCIMNotificationSwitchItem;

@interface TBCIMOnlineIDL : TBCIMBaseMessageItem
{
    NSArray *_groupInfo;
    NSArray *_heartbeat;
    TBCIMNotificationSwitchItem *_notificationItem;
}

@property(retain, nonatomic) TBCIMNotificationSwitchItem *notificationItem; // @synthesize notificationItem=_notificationItem;
@property(retain, nonatomic) NSArray *heartbeat; // @synthesize heartbeat=_heartbeat;
@property(retain, nonatomic) NSArray *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void)dealloc;
- (id)init;

@end

