//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BMNetworkLonglinkDelegate-Protocol.h"

@class AFHTTPSessionManager, BMBusArriveHeader, BMNetworkLonglink, BMUGCDataReturnPoint, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface BMUGCDataReturnService : NSObject <BMNetworkLonglinkDelegate>
{
    BMNetworkLonglink *_longLink;
    int _reqId;
    AFHTTPSessionManager *_httpClient;
    NSTimer *_collectTimer;
    NSTimer *_returnTimer;
    NSMutableArray *_record;
    NSMutableArray *_naviDirection;
    BMUGCDataReturnPoint *_lastPoint;
    NSMutableDictionary *_fromDict;
    NSMutableArray *_busArrive;
    BMBusArriveHeader *_currentArriveHeader;
    _Bool _isInBusArrive;
    NSString *_f;
    NSString *_p;
    NSString *_cuid;
    CDUnknownBlockType _curBlock;
    CDUnknownBlockType _speedBlock;
    CDUnknownBlockType _angleBlock;
    long long _distanceThreshold;
    long long _collectThreshold;
    long long _returnTheshold;
}

+ (id)instance;
@property(nonatomic) long long returnTheshold; // @synthesize returnTheshold=_returnTheshold;
@property(nonatomic) long long collectThreshold; // @synthesize collectThreshold=_collectThreshold;
@property(nonatomic) long long distanceThreshold; // @synthesize distanceThreshold=_distanceThreshold;
@property(copy, nonatomic) CDUnknownBlockType angleBlock; // @synthesize angleBlock=_angleBlock;
@property(copy, nonatomic) CDUnknownBlockType speedBlock; // @synthesize speedBlock=_speedBlock;
@property(copy, nonatomic) CDUnknownBlockType curBlock; // @synthesize curBlock=_curBlock;
@property(copy, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
@property(copy, nonatomic) NSString *p; // @synthesize p=_p;
@property(copy, nonatomic) NSString *f; // @synthesize f=_f;
- (void).cxx_destruct;
- (void)networkLonglinkWithStatusCode:(unsigned long long)arg1 requestId:(long long)arg2 respondData:(id)arg3 isPush:(_Bool)arg4;
- (id)encrypt:(id)arg1;
- (id)buildHttpBody;
- (void)busArrive:(id)arg1;
- (void)naviRoadInfo:(id)arg1;
- (void)naviRoadCondition:(id)arg1;
- (id)getCurrentNaviDirectionPoint;
- (void)pageIsNeedUGCReturn:(id)arg1;
- (void)returnWhenEnterBackground;
- (void)returnLongLinkCallBack;
- (void)returnCallBack:(id)arg1;
- (id)getCurReturnPoint;
- (void)collectCallBack:(id)arg1;
- (double)getDistance:(id)arg1 end:(id)arg2;
- (void)changeFrom:(id)arg1;
- (void)addChangeFromNotification:(id)arg1 from:(id)arg2;
- (void)cleanColloctData;
- (void)unregisterTimer;
- (void)registerNotification;
- (void)registerTimer;
- (void)loadConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

