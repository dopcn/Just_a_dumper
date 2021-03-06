//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FOXAccountManager, FOXCalendarEventStorage, FOXCalendarEventStore, FOXCalendarEventTagStorage, FOXSystemCalendarEventReminderStorage, NSThreadSafeDictionary;

@interface FOXCalendarEventManager : NSObject
{
    FOXCalendarEventStore *_systemCalendarEventStorage;
    FOXCalendarEventStorage *_customCalendarEventStorage;
    FOXSystemCalendarEventReminderStorage *_systemEventReminderStorage;
    FOXAccountManager *_accountManager;
    FOXCalendarEventTagStorage *_calendarEventTagStorage;
    NSThreadSafeDictionary *_accountID2AccountDict;
}

@property(retain, nonatomic) NSThreadSafeDictionary *accountID2AccountDict; // @synthesize accountID2AccountDict=_accountID2AccountDict;
- (void).cxx_destruct;
- (_Bool)isOrganizerWithEvent:(id)arg1;
- (_Bool)hasCancelEvent:(id)arg1;
- (void)clearStartEndTimePair;
- (void)setEventAttendee:(id)arg1;
- (void)deleteIcsWithAccountId:(long long)arg1;
- (void)deleteIcsWithMailId:(long long)arg1;
- (id)getIcsCalendarWithMailId:(long long)arg1;
- (id)getCalendarWithUid:(id)arg1 AccountId:(long long)arg2;
- (id)getIcsInviteWithMailId:(long long)arg1;
- (id)exceptionEventByExceptionID:(long long)arg1;
- (id)localCalendarSource;
- (id)systemCalendarSources;
- (id)systemDefaultCalendarSource;
- (id)calendarSourceWithAccountId:(long long)arg1 andCalendarFolderId:(long long)arg2;
- (id)calendarSourcesWithAccountId:(long long)arg1;
- (id)readWriteCalendarSourcesDict;
- (id)calendarSourcesDict;
- (id)fox_calendarSourcesDictWithReadWriteRequired:(_Bool)arg1;
- (id)calendarSources;
- (id)fox_customCalendarSources;
- (id)LocalAcccount;
- (id)calendarsHaveReminderFromDate:(id)arg1 toDate:(id)arg2 calendarSourceList:(id)arg3;
- (id)calendarsFromDate:(id)arg1 toDate:(id)arg2 calendarSourceList:(id)arg3;
- (id)fox_calendarsFromDate:(id)arg1 toDate:(id)arg2 requiredReminder:(_Bool)arg3 calendarSourceList:(id)arg4;
- (id)fox_calendarsFromDate:(id)arg1 toDate:(id)arg2 events:(id)arg3;
- (id)calendarEventsOnlyHaveSimpleInfoFromDate:(id)arg1 toDate:(id)arg2 calendarSourceList:(id)arg3;
- (id)fox_initCustomCalendarEvents:(id)arg1;
- (id)calendarEventWithEventRemoteID:(id)arg1;
- (id)calendarEventWithContactId:(id)arg1;
- (id)calendarEventWithEventID:(id)arg1;
- (id)fox_customCalendarEventWithEventRemoteID:(id)arg1;
- (id)fox_initSystemCalendarEvents:(id)arg1;
- (void)fox_initSystemCalendarEventsReminder:(id)arg1;
- (id)fox_customCalendarEventWithContactID:(id)arg1;
- (id)fox_customCalendarEventWithEventID:(id)arg1;
- (id)fox_systemCalendarEventWithEventID:(id)arg1;
- (void)fox_setSourceOfCustomCalendarEvents:(id)arg1;
- (id)fox_folderNameFromAccount:(id)arg1 withFolderID:(long long)arg2;
- (void)fox_notifyDeletedCalendar:(id)arg1 forSpanType:(long long)arg2;
- (void)updateSystemCalendarFolder:(id)arg1;
- (_Bool)deleteCalendarEvent:(id)arg1;
- (_Bool)fox_deleteCustomCalendarEvent:(id)arg1;
- (_Bool)fox_deleteSystemCalendarEvent:(id)arg1;
- (void)fox_notifyUpdatedCalendar:(id)arg1 spanType:(long long)arg2;
- (_Bool)fox_updateCustomCalendarEvent:(id)arg1;
- (_Bool)fox_updateSystemCalendarEvent:(id)arg1 oldCalendarEvent:(id)arg2;
- (_Bool)updateCalendarEvent:(id)arg1;
- (void)fox_notifyAddedCalendarEvents:(id)arg1;
- (_Bool)fox_internalAddCalendarEvent:(id)arg1;
- (id)allSystemCalendarSourcesDictWithReadWriteRequired:(_Bool)arg1;
- (_Bool)addCalendarEvents:(id)arg1;
- (_Bool)addCalendar:(id)arg1;
- (_Bool)fox_addCustomCalendarEvent:(id)arg1;
- (_Bool)fox_addSystemCalendarEvent:(id)arg1;
- (void)dealloc;
- (void)fox_accountDeleted:(id)arg1;
- (void)fox_accountAdded:(id)arg1;
- (void)fox_eventAccessibleChanged:(id)arg1;
- (id)initWithCalendarEventStorageCreator:(id)arg1 accountManager:(id)arg2;
- (id)init;

@end

