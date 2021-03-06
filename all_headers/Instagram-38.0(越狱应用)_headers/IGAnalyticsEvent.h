//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAnalyticsEventType-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IGAnalyticsEvent : NSObject <IGAnalyticsEventType>
{
    NSString *_name;
    NSString *_module;
    NSMutableDictionary *_extra;
    _Bool _logPreviousSessionID;
    double _time;
}

+ (id)eventWithName:(id)arg1 module:(id)arg2 navState:(id)arg3;
+ (id)eventWithName:(id)arg1 module:(id)arg2;
@property(nonatomic) _Bool logPreviousSessionID; // @synthesize logPreviousSessionID=_logPreviousSessionID;
@property(nonatomic) double time; // @synthesize time=_time;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)extra;
- (void)log:(int)arg1;
- (void)logWithNoLatency:(_Bool)arg1;
- (void)log;
- (void)logImmediately;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)module;
- (id)name;
- (id)initWithName:(id)arg1 module:(id)arg2 navState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

