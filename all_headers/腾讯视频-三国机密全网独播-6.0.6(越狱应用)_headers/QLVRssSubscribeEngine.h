//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NetworkCheckerDelegate-Protocol.h"
#import "QLRequestModelDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, QLVRssSubscribeListModel;

@interface QLVRssSubscribeEngine : NSObject <NetworkCheckerDelegate, QLRequestModelDelegate>
{
    NSRecursiveLock *_mgrLock;
    NSMutableArray *_infoQueue;
    NSMutableDictionary *_taskMap;
    QLVRssSubscribeListModel *_itemListModel;
    _Bool _taskFiring;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool taskFiring; // @synthesize taskFiring=_taskFiring;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)momentDidLogoutSuccess:(id)arg1;
- (void)momentDidLoginSuccess:(id)arg1;
- (void)requestModelDidCancelLoad:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)reachabilityChanged;
- (_Bool)isVrssUpdateComingForCurrentUser;
- (_Bool)isVrssItemUpdateComing:(id)arg1;
- (_Bool)isSubscribed:(id)arg1;
- (void)cancelSubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)update;
- (void)postNotification:(id)arg1 object:(id)arg2;
- (void)updateSubscribeList;
- (void)fireTaskDelay;
- (void)fireTask:(id)arg1;
- (void)clearInfoQueueAndTasks;
- (_Bool)removeInfoForQueue:(id)arg1;
- (void)saveQueueToDisk;
- (id)readQueueForDisk;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

