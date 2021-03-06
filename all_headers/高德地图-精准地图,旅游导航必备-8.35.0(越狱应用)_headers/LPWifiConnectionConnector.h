//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlinkAsyncSocketDelegate-Protocol.h"

@class AlinkAsyncSocket, NSData, NSError, NSString;

@interface LPWifiConnectionConnector : NSObject <AlinkAsyncSocketDelegate>
{
    NSString *_host;
    long long _port;
    NSData *_requestData;
    CDUnknownBlockType _connectBlock;
    NSData *_readData;
    _Bool _isHandShaked;
    long long _reconnectStatus;
    _Bool _isNotClientDisconnect;
    AlinkAsyncSocket *_tcpSocket;
    double _reconnectTimeout;
    double _timeout;
    NSError *_disconnectError;
}

@property(retain, nonatomic) NSError *disconnectError; // @synthesize disconnectError=_disconnectError;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double reconnectTimeout; // @synthesize reconnectTimeout=_reconnectTimeout;
@property(retain, nonatomic) AlinkAsyncSocket *tcpSocket; // @synthesize tcpSocket=_tcpSocket;
- (void).cxx_destruct;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 willDisconnectWithError:(id)arg2;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (double)onSocket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)onSocket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)initWithTCPHost:(id)arg1 port:(long long)arg2 data:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

