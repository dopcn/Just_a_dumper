//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTBCrashReportFilter-Protocol.h"

@class NSArray, NSString;

@interface MTBCrashReportFilterPipeline : NSObject <MTBCrashReportFilter>
{
    NSArray *_filters;
}

+ (id)filterWithFilters:(id)arg1;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)addFilter:(id)arg1;
- (id)initWithFiltersArray:(id)arg1;
- (id)initWithFilters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

