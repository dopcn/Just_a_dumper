//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BDMStatisticsWriterProvider-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol BDMExperimentProvider, BDMHTTPClient;

@interface BDMABTestConfigure : NSObject <BDMStatisticsWriterProvider>
{
    NSMutableArray *_statisticsWriters;
    NSMutableArray *_uploaderSchemas;
    NSMutableDictionary *_storeDictionary;
    _Bool _hasStarted;
    NSString *_clientId;
    id <BDMExperimentProvider> _experimentProvider;
    id <BDMHTTPClient> _httpClient;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <BDMHTTPClient> httpClient; // @synthesize httpClient=_httpClient;
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) id <BDMExperimentProvider> experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(copy) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)readConfigure;
- (_Bool)saveConfigure:(id)arg1;
- (_Bool)updateConfigure:(id)arg1 needNotify:(_Bool)arg2 updateOnlyMemory:(_Bool)arg3 saveToFile:(_Bool)arg4;
- (void)flush;
- (void)runTaskSchema;
- (void)addLoggerWithModel:(id)arg1 withClientId:(id)arg2;
- (void)addTaskSchema:(id)arg1;
- (void)addStatisticsWriterProvider:(id)arg1;
- (void)clear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

