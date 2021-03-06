//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IGNetworkMonitorAnalyticsData : NSObject
{
    long long _maxNumberOfEvents;
    _Bool _isRunning;
    NSMutableArray *_intEvents;
    NSMutableArray *_intNoLatencyEvents;
}

@property(readonly, nonatomic) NSMutableArray *intNoLatencyEvents; // @synthesize intNoLatencyEvents=_intNoLatencyEvents;
@property(readonly, nonatomic) NSMutableArray *intEvents; // @synthesize intEvents=_intEvents;
- (void).cxx_destruct;
- (void)receivedAnalyticsLogEventNotification:(id)arg1;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) NSArray *noLatencyEvents;
@property(readonly, nonatomic) NSArray *events;
- (id)initWithMaxNumberOfEvents:(long long)arg1;

@end

