//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DGPHomeBuslineRealtimeRequest, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

@interface DGPRealtimeUpdateCenter : NSObject
{
    _Bool _isStartImmediately;
    _Bool _closeEnterForegroundImmediately;
    _Bool _isNeedResume;
    double _busLineLoopDuration;
    NSString *_page;
    long long _realPage;
    NSString *_locationPage;
    NSString *_lastBusesParam;
    NSString *_cityID;
    NSString *_arrivalLineStopString;
    CDUnknownBlockType _updateSuccess;
    CDUnknownBlockType _updateFailure;
    NSMapTable *_observerMap;
    NSMutableDictionary *_registeredParamMap;
    NSMutableDictionary *_linesMap;
    NSMapTable *_callbackMap;
    NSMapTable *_registerMap;
    NSObject<OS_dispatch_source> *_loopTimer;
    DGPHomeBuslineRealtimeRequest *_buslineRealtimeRequest;
}

@property(retain, nonatomic) DGPHomeBuslineRealtimeRequest *buslineRealtimeRequest; // @synthesize buslineRealtimeRequest=_buslineRealtimeRequest;
@property(nonatomic) _Bool isNeedResume; // @synthesize isNeedResume=_isNeedResume;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *loopTimer; // @synthesize loopTimer=_loopTimer;
@property(retain, nonatomic) NSMapTable *registerMap; // @synthesize registerMap=_registerMap;
@property(retain, nonatomic) NSMapTable *callbackMap; // @synthesize callbackMap=_callbackMap;
@property(retain, nonatomic) NSMutableDictionary *linesMap; // @synthesize linesMap=_linesMap;
@property(retain, nonatomic) NSMutableDictionary *registeredParamMap; // @synthesize registeredParamMap=_registeredParamMap;
@property(retain, nonatomic) NSMapTable *observerMap; // @synthesize observerMap=_observerMap;
@property(copy, nonatomic) CDUnknownBlockType updateFailure; // @synthesize updateFailure=_updateFailure;
@property(copy, nonatomic) CDUnknownBlockType updateSuccess; // @synthesize updateSuccess=_updateSuccess;
@property(copy, nonatomic) NSString *arrivalLineStopString; // @synthesize arrivalLineStopString=_arrivalLineStopString;
@property(nonatomic) _Bool closeEnterForegroundImmediately; // @synthesize closeEnterForegroundImmediately=_closeEnterForegroundImmediately;
@property(retain, nonatomic) NSString *cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) NSString *lastBusesParam; // @synthesize lastBusesParam=_lastBusesParam;
@property(copy, nonatomic) NSString *locationPage; // @synthesize locationPage=_locationPage;
@property(nonatomic) long long realPage; // @synthesize realPage=_realPage;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(nonatomic) _Bool isStartImmediately; // @synthesize isStartImmediately=_isStartImmediately;
@property(nonatomic) double busLineLoopDuration; // @synthesize busLineLoopDuration=_busLineLoopDuration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)busLineRealtimeModelKeyWithLineID:(id)arg1 orderID:(id)arg2;
- (id)buslineRealtimeModelKey:(id)arg1;
- (_Bool)isBuslineModelHaveMutipleLines:(id)arg1;
- (_Bool)validateLineID:(id)arg1 orderID:(id)arg2;
- (id)generateUniqueKeyForBusline:(id)arg1;
- (id)genertateUniqueForBuslines:(id)arg1;
- (id)uniqueKeyOfBusline:(id)arg1;
- (id)allRequestParams;
- (id)convertAllParamsStringWithParamsArray:(id)arg1;
- (id)requestBuslineString;
- (void)clearStorage;
- (void)fetchBusLineRealtimeUpdateSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)__stopLooper;
- (void)__startLooper;
- (id)lookForBusRealtimeModel:(id)arg1;
- (id)lookForArrayOfBusRealtimeModel:(id)arg1;
- (id)generatePreBusParamWithPreBusArray:(id)arg1 withBusArrays:(id)arg2;
- (id)generateParamWithRealtimeBusModels:(id)arg1;
- (void)fetchBusLineUpdate:(id)arg1 withPreBusInformation:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fetchBusLineUpdate:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cleanup;
- (void)stopBusLineLoop;
- (void)startBusLineLoop;
- (void)removeUpdateObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeBusLineLoopParams:(id)arg1;
- (void)addBusLineLoopParams:(id)arg1;
- (void)removeRegister:(id)arg1;
- (void)startBusLineLoopRunWithRegister:(id)arg1 param:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)observeUpdateCallback;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (id)init;

@end

