//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface MttStartpageDirectLinkStatisticsManager : NSObject
{
    NSMutableArray *openedRecords;
    NSTimer *reportTimer;
    _Bool isPosting;
    NSMutableArray *_statPendingRecords;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *reportTimer; // @synthesize reportTimer;
@property(retain, nonatomic) NSMutableArray *openedRecords; // @synthesize openedRecords;
@property(retain, nonatomic) NSMutableArray *statPendingRecords; // @synthesize statPendingRecords=_statPendingRecords;
- (void).cxx_destruct;
- (void)reportTimerFire:(id)arg1;
- (void)createReportTimer;
- (void)invalidateReportTimer;
- (void)dataReportSuccessfully:(id)arg1;
- (void)dataReportFailed;
- (void)dataReportSucceed;
- (void)reportStatisticsData;
- (void)launchDataReport;
- (void)enterForeground:(id)arg1;
- (void)reportEntryRecord:(id)arg1;
- (void)addEntryStat:(id)arg1 delay:(_Bool)arg2;
- (void)reportPendingStat;
- (void)dealloc;
- (id)init;

@end

