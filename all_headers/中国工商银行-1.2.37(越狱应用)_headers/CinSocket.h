//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CinRunLoop, NSString;
@protocol CinSocketDelegate;

@interface CinSocket : NSObject
{
    NSString *_ip;
    int _port;
    CinRunLoop *_runLoop;
    _Bool _isConnected;
    struct __CFSocket *_socket;
    struct __CFData *_address;
    NSString *_sockAddr;
    struct __SCNetworkReachability *_reachAbility;
    _Bool enableLog;
    id <CinSocketDelegate> delegate;
}

@property(nonatomic) _Bool enableLog; // @synthesize enableLog;
@property(nonatomic) id <CinSocketDelegate> delegate; // @synthesize delegate;
- (void)writeLog:(id)arg1;
- (void)processDisconnected;
- (void)processRead:(const void *)arg1;
- (void)processConnect;
- (void)releaseRearch;
- (void)releaseSocket;
- (void)initRearch;
- (void)enableCallback:(unsigned long long)arg1;
- (void)initSocket;
- (void)initAddress;
- (_Bool)send:(id)arg1;
- (void)disconnect;
- (void)innerConnect;
- (void)connect;
- (id)getSocketAddress;
- (_Bool)isConnected;
- (void)innerDealloc;
- (void)dealloc;
- (id)initAddress:(id)arg1 withRunLoop:(id)arg2;
- (id)initIP:(id)arg1 withPort:(int)arg2 withRunLoop:(id)arg3;

@end

