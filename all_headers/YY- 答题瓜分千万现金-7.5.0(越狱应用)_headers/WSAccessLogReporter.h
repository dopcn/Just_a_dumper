//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WSAccessLogReporter : NSObject
{
    unsigned long long _offsetBefore;
    unsigned long long _currentOffset;
    _Bool _inBackground;
    long long _readCount;
    struct dispatch_source_s *_timer;
    struct dispatch_queue_s *_accessLogReporterQueue;
    long long _reportLimit;
    long long _totalNum;
}

+ (id)sharedInstance;
@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) long long reportLimit; // @synthesize reportLimit=_reportLimit;
- (id)readAccessLogStringWithFrame:(unsigned long long)arg1 andReadLineLimit:(long long)arg2 atPath:(id)arg3;
- (unsigned long long)fileLength;
- (id)generateParamFormDataWithBoundary:(id)arg1 andReportFlag:(_Bool)arg2;
- (id)dataToReportReportFlag:(_Bool)arg1;
- (_Bool)validateReportConfig;
- (void)clearReportRecord;
- (void)report;
- (void)stopReporter;
- (void)willEnterForeground;
- (void)willEnterBackground;
- (void)startReporter;

@end

