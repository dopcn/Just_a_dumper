//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMTelemetryEventConfigs : NSObject
{
    _Bool _metricEnabled;
    long long _samplingFactor;
    NSString *_type;
}

@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool metricEnabled; // @synthesize metricEnabled=_metricEnabled;
@property(readonly, nonatomic) long long samplingFactor; // @synthesize samplingFactor=_samplingFactor;
- (void).cxx_destruct;
- (id)initWithSamplingFactor:(long long)arg1 metricEnabled:(_Bool)arg2 type:(id)arg3;
- (id)init;

@end

