//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class AppMonitorDimensionSet, AppMonitorMeasureSet, NSDictionary, NSLock, NSString;

@interface AppMonitorMetric : NSObject <NSCopying>
{
    _Bool _detail;
    NSString *_transactionId;
    NSString *_module;
    NSString *_monitorPoint;
    AppMonitorDimensionSet *_dimensionSet;
    AppMonitorMeasureSet *_measureSet;
    NSLock *_lock;
    NSDictionary *_extraInfo;
}

@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) AppMonitorMeasureSet *measureSet; // @synthesize measureSet=_measureSet;
@property(retain, nonatomic) AppMonitorDimensionSet *dimensionSet; // @synthesize dimensionSet=_dimensionSet;
@property(retain, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic, getter=isDetail) _Bool detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetTransactionId;
- (_Bool)validWithDimensionValueSet:(id)arg1 MeasureValueSet:(id)arg2;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3 measureSet:(id)arg4;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3 dimensionSet:(id)arg4;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3 measureSet:(id)arg4 dimensionSet:(id)arg5;

@end

