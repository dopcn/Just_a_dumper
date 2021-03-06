//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AsyncSocket, NSString;
@protocol RemoteLogDelegate;

@interface RemoteLogManager : NSObject
{
    AsyncSocket *asyncSocket;
    _Bool _active;
    int _status;
    id <RemoteLogDelegate> _delegate;
    NSString *_host;
    long long _port;
}

+ (id)sharedInstance;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) __weak id <RemoteLogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)encodingDictionary:(id)arg1;
- (void)enterForegound;
- (void)onSocket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (_Bool)sendMessage:(id)arg1 type:(id)arg2 tag:(long long)arg3;
- (_Bool)log:(id)arg1;
- (_Bool)logWithFormat:(id)arg1;
- (void)closeConnect;
- (void)startConnect;
- (_Bool)isConnected;
- (id)init;

@end

