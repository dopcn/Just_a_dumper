//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"

@class GCDAsyncSocket, NSMutableData, NSTimer;
@protocol SDDJSocketManagerDelegate;

@interface SDDJSocketManager : NSObject <GCDAsyncSocketDelegate>
{
    _Bool _tcpDisable;
    _Bool _isTcpAuthed;
    _Bool _tcpActive;
    id <SDDJSocketManagerDelegate> _delegate;
    long long _wfdLocDataInterval;
    long long _generalLocDataInterval;
    long long _orderStatus;
    long long _cityID;
    double _lng;
    double _lat;
    CDUnknownBlockType _socketMsgArrivedCallback;
    GCDAsyncSocket *_asyncSocket;
    NSTimer *_timerHeartBeat;
    long long _retryCount;
    unsigned long long _beatInterval;
    NSMutableData *_remainData;
}

+ (id)defaultInstance;
@property(retain, nonatomic) NSMutableData *remainData; // @synthesize remainData=_remainData;
@property(nonatomic) unsigned long long beatInterval; // @synthesize beatInterval=_beatInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSTimer *timerHeartBeat; // @synthesize timerHeartBeat=_timerHeartBeat;
@property(retain, nonatomic) GCDAsyncSocket *asyncSocket; // @synthesize asyncSocket=_asyncSocket;
@property(copy, nonatomic) CDUnknownBlockType socketMsgArrivedCallback; // @synthesize socketMsgArrivedCallback=_socketMsgArrivedCallback;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) long long cityID; // @synthesize cityID=_cityID;
@property(nonatomic) long long orderStatus; // @synthesize orderStatus=_orderStatus;
@property(nonatomic) long long generalLocDataInterval; // @synthesize generalLocDataInterval=_generalLocDataInterval;
@property(nonatomic) long long wfdLocDataInterval; // @synthesize wfdLocDataInterval=_wfdLocDataInterval;
@property(nonatomic) _Bool tcpActive; // @synthesize tcpActive=_tcpActive;
@property(nonatomic) _Bool isTcpAuthed; // @synthesize isTcpAuthed=_isTcpAuthed;
@property(nonatomic) _Bool tcpDisable; // @synthesize tcpDisable=_tcpDisable;
@property(nonatomic) __weak id <SDDJSocketManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendContentToSocket:(id)arg1;
- (id)objectFromJSONString:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)onTimerHeartBeatHandler;
- (void)startReConnect;
- (void)reConnectHander;
- (void)sendAuth;
- (void)sendHeartBeat;
- (void)stopHeartBeat;
- (void)startHeartBeat;
- (void)stopTcpSocket;
- (void)startTcpSocket;
- (void)sockCenterDidReceiveData:(id)arg1;
- (id)init;
- (void)destory;

@end

