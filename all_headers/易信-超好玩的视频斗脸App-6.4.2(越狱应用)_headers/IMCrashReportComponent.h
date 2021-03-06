//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMConfigDelegate-Protocol.h"

@class IMCrashReportingConfigs, NSArray, NSString;

@interface IMCrashReportComponent : NSObject <IMConfigDelegate>
{
    IMCrashReportingConfigs *_config;
    NSArray *_activeAds;
}

+ (id)sharedComponent;
@property(retain, nonatomic) NSArray *activeAds; // @synthesize activeAds=_activeAds;
@property(retain, nonatomic) IMCrashReportingConfigs *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)configUpdated:(id)arg1;
- (void)stop;
- (void)attachCrashReporterAndSendPendingReports;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

