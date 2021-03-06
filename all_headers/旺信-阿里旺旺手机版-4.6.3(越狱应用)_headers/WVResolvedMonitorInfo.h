//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WVResolvedMonitorInfo : NSObject
{
    _Bool _hasAlarm;
    _Bool _hasAlarmArg;
    NSString *_monitorModule;
    NSString *_monitorPoint;
    NSArray *_dimensions;
    NSArray *_boolDimensions;
    NSArray *_measures;
    unsigned long long _count;
}

@property _Bool hasAlarmArg; // @synthesize hasAlarmArg=_hasAlarmArg;
@property _Bool hasAlarm; // @synthesize hasAlarm=_hasAlarm;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSArray *measures; // @synthesize measures=_measures;
@property(readonly, nonatomic) NSArray *boolDimensions; // @synthesize boolDimensions=_boolDimensions;
@property(readonly, nonatomic) NSArray *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(readonly, nonatomic) NSString *monitorModule; // @synthesize monitorModule=_monitorModule;
- (void).cxx_destruct;
- (void)initPropertyInfo:(Class)arg1;
- (void)initMonitorInfo:(Class)arg1;
- (id)initWithClass:(Class)arg1;

@end

