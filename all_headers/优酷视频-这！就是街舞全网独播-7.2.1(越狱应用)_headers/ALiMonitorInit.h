//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALiMonitor.h"

@class NSString;

@interface ALiMonitorInit : ALiMonitor
{
    NSString *_measure_security_time;
    NSString *_measure_ut_time;
    NSString *_measure_all_time;
    NSString *_security_time;
    NSString *_ut_time;
    NSString *_all_time;
}

@property(retain, nonatomic) NSString *all_time; // @synthesize all_time=_all_time;
@property(retain, nonatomic) NSString *ut_time; // @synthesize ut_time=_ut_time;
@property(retain, nonatomic) NSString *security_time; // @synthesize security_time=_security_time;
@property(retain, nonatomic) NSString *measure_all_time; // @synthesize measure_all_time=_measure_all_time;
@property(retain, nonatomic) NSString *measure_ut_time; // @synthesize measure_ut_time=_measure_ut_time;
@property(retain, nonatomic) NSString *measure_security_time; // @synthesize measure_security_time=_measure_security_time;
- (void).cxx_destruct;
- (void)makeMeasure:(id)arg1;
- (id)monitorModule;
- (id)monitorPoint;
- (id)init;
- (id)initWithSecurityInitTime:(id)arg1 utInitTime:(id)arg2;

@end

