//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface MobClickInternal : NSObject
{
    NSOperationQueue *_sendLogQueue;
    NSOperationQueue *_otherQueue;
    NSMutableArray *_terminates;
    NSMutableArray *_events;
    NSMutableArray *_errors;
    NSMutableArray *_ekv;
    NSMutableArray *_tmpContainer;
    NSString *_json;
    NSDictionary *_error_support_info;
    NSString *_sessionID;
    NSString *_wrapperType;
    NSString *_wrapperVersion;
    NSMutableArray *_pageItems;
    NSMutableDictionary *_pageItemsHash;
    NSMutableDictionary *_ekvBeginTimes;
    NSMutableDictionary *_eventBeginTimes;
}

+ (void)setErrorSupportInfo:(id)arg1;
+ (void)installUncaughtExceptionHandler;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *json; // @synthesize json=_json;
@property(copy, nonatomic) NSString *wrapperVersion; // @synthesize wrapperVersion=_wrapperVersion;
@property(copy, nonatomic) NSString *wrapperType; // @synthesize wrapperType=_wrapperType;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSDictionary *error_support_info; // @synthesize error_support_info=_error_support_info;
@property(retain) NSMutableArray *tmpContainer; // @synthesize tmpContainer=_tmpContainer;
@property(retain) NSMutableArray *ekv; // @synthesize ekv=_ekv;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain) NSMutableArray *events; // @synthesize events=_events;
@property(retain) NSMutableArray *terminates; // @synthesize terminates=_terminates;
@property(retain, nonatomic) NSOperationQueue *otherQueue; // @synthesize otherQueue=_otherQueue;
@property(retain, nonatomic) NSOperationQueue *sendLogQueue; // @synthesize sendLogQueue=_sendLogQueue;
- (void)buildDummySession;
- (void)removeInstanceMsgs;
- (void)removeSessions;
- (id)header;
- (void)error:(id)arg1;
- (void)saveCrashInfo:(id)arg1;
- (void)ekvEnd:(id)arg1;
- (void)eventEnd:(id)arg1;
- (void)ekvBegin:(id)arg1;
- (void)eventBegin:(id)arg1;
- (void)unarchiveErrors:(id)arg1;
- (void)unarchiveEvents:(id)arg1;
- (void)unarchiveSessions:(id)arg1;
- (void)unarchiveObjects:(id)arg1;
- (void)archiveObjects:(id)arg1;
- (id)archiveObjectsWithHeader:(_Bool)arg1;
- (void)archiveCacheToFile;
- (id)loadCacheFile;
- (void)loadCache;
- (void)loadCacheFromTempContainer;
- (void)saveAndCleanCache;
- (void)removeCacheData;
- (void)stopSession:(double)arg1;
- (void)handleInactivate:(double)arg1;
- (void)workEvent:(id)arg1;
- (void)setEventSessionID:(id)arg1;
- (void)addEvent:(id)arg1 inContainer:(id)arg2;
- (id)arrayWithEventType:(int)arg1;
- (void)beginPerformJob;
- (void)generateEnvelopeFile;
- (_Bool)hasJob;
- (void)validateEnvelopeFiles:(id)arg1;
- (void)dealloc;
- (id)init;

@end

