//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQHKTaskCenterDelegate-Protocol.h"

@class MQQTHRecordManager, MQQTinyHealthHKHelper, NSArray, NSDate, NSMutableArray, NSRecursiveLock, NSString;

@interface MQQTinyHealthCenter : NSObject <MQQHKTaskCenterDelegate>
{
    NSMutableArray *_delegates;
    NSRecursiveLock *_delegatesLock;
    unsigned long long _backgroundTaskIdentifier;
    NSDate *_lastModificationDate;
    MQQTHRecordManager *_recordManager;
    MQQTinyHealthHKHelper *_HKHelper;
    unsigned long long _currentGoalDuration;
    NSArray *_totalGoalList;
}

+ (id)sharedCenter;
@property(copy, nonatomic) NSArray *totalGoalList; // @synthesize totalGoalList=_totalGoalList;
@property(nonatomic) unsigned long long currentGoalDuration; // @synthesize currentGoalDuration=_currentGoalDuration;
@property(retain, nonatomic) MQQTinyHealthHKHelper *HKHelper; // @synthesize HKHelper=_HKHelper;
@property(retain, nonatomic) MQQTHRecordManager *recordManager; // @synthesize recordManager=_recordManager;
@property(retain, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
- (void)willEnterForeground:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)endBackgroundTask;
- (void)beginBackgroundTaskIfNeeded;
- (void)taskCenter:(id)arg1 didReceiveDeliveryWithItemType:(unsigned long long)arg2;
- (void)_didUpdateGoal;
- (void)_didUpdateItem:(id)arg1 record:(id)arg2 recordOnly:(_Bool)arg3;
- (void)_didRemoveItems:(id)arg1;
- (void)_didAddItems:(id)arg1;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateTodayRecordWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCompletedRecordCountWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAchievementWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTodayRecordWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getRawTodayRecordWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getRecordsWithItem:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getRecordWithItem:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getRawRecordsWithItem:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getRawRecordWithItem:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)countOfCompletedUserItems;
- (unsigned long long)countOfScheduledUserItems;
- (unsigned long long)countOfTotalUserItems;
- (void)revertUserItem:(id)arg1;
- (void)completeUserItem:(id)arg1;
- (void)updateUserItems:(id)arg1;
- (void)removeUserItems:(id)arg1;
- (void)addUserItems:(id)arg1;
- (id)totalUserItems;
- (id)getTotalGoalList;
- (unsigned long long)getCurrentGoalDuration;
- (void)updateTodayGoalState;
- (id)completedGoalHistory;
@property(nonatomic) _Bool didSetGoal;
- (struct _NSRange)targetRangeForItem:(id)arg1;
- (id)_badHabitCategory;
- (id)_habitCategory;
- (id)_exerciseCategory;
- (unsigned long long)_weekday;
- (unsigned long long)_eveyday;
- (id)_itemsWithArray:(id)arg1 categoryType:(unsigned long long)arg2;
- (unsigned long long)totalLocalItemCount;
- (id)totalLocalCategories;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

