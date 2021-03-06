//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSPXDiagnoseEngine.h"

#import "WSPXSimplePingDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, WSPXSimplePing;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WSPXHostPinger : WSPXDiagnoseEngine <WSPXSimplePingDelegate>
{
    _Bool _didStartPing;
    _Bool _complete;
    long long _packetLoss;
    long long _maxRTT;
    long long _minRTT;
    long long _avgRTT;
    WSPXSimplePing *_simplePing;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_rttList;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    long long _pingTimes;
    double _sendPingTime;
    double _totoalTime;
    long long _successPingTimes;
}

@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) _Bool didStartPing; // @synthesize didStartPing=_didStartPing;
@property(nonatomic) long long successPingTimes; // @synthesize successPingTimes=_successPingTimes;
@property(nonatomic) double totoalTime; // @synthesize totoalTime=_totoalTime;
@property(nonatomic) double sendPingTime; // @synthesize sendPingTime=_sendPingTime;
@property(nonatomic) long long pingTimes; // @synthesize pingTimes=_pingTimes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *rttList; // @synthesize rttList=_rttList;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WSPXSimplePing *simplePing; // @synthesize simplePing=_simplePing;
@property(nonatomic) long long avgRTT; // @synthesize avgRTT=_avgRTT;
@property(nonatomic) long long minRTT; // @synthesize minRTT=_minRTT;
@property(nonatomic) long long maxRTT; // @synthesize maxRTT=_maxRTT;
@property(nonatomic) long long packetLoss; // @synthesize packetLoss=_packetLoss;
- (void).cxx_destruct;
- (void)endTime;
- (void)cancelTimer;
- (void)startTimer;
- (void)successPing;
- (void)failPing;
- (void)killPing;
- (void)sendPing;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)startPing;
- (void)start:(CDUnknownBlockType)arg1;
- (id)resultDictionary;
- (long long)rttWave;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

