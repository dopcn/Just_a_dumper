//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBNotificationsRichNotificationComponentProviding-Protocol.h"

@class NSString;

@interface FBNotificationsRichNotificationComponentProvider : NSObject <FBNotificationsRichNotificationComponentProviding>
{
}

- (id)richNotificationComponentForNotification:(id)arg1 eventBus:(id)arg2 viewControllerLifeCycleAnnouncer:(id)arg3 tabVisitSessionManager:(id)arg4 reactionContext:(id)arg5 componentRenderingParams:(struct FBNotificationsComponentRenderingParams)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

