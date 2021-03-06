//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NVMTAGCDAsyncSocketDelegate-Protocol.h"
#import "NVMTAMidProtocol-Protocol.h"

@class NSMutableData, NSString, NVMTAGCDAsyncSocket;
@protocol NVMTAMainServiceDelegate, OS_dispatch_queue;

@interface NVMTAMid : NSObject <NVMTAGCDAsyncSocketDelegate, NVMTAMidProtocol>
{
    NSString *mtaIdfa;
    NSObject<OS_dispatch_queue> *task_queue;
    NSMutableData *readBuf;
    _Bool readHeaderComplete;
    _Bool readComplete;
    NVMTAGCDAsyncSocket *mtaSocket;
    _Bool isConnecting;
    long long bodyLen;
    id <NVMTAMainServiceDelegate> _mtaMainServices;
}

+ (id)getInstance;
+ (void)load;
@property(nonatomic) __weak id <NVMTAMainServiceDelegate> mtaMainServices; // @synthesize mtaMainServices=_mtaMainServices;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)startSocket;
- (void)handleBodyResult:(id)arg1 configData:(id)arg2;
- (void)closeBuffer;
- (void)tcpRequest:(id)arg1;
- (id)getStringForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)getRequestData;
- (void)reportMid;
- (id)init;
- (void)initMtaServices:(id)arg1;
- (id)getIDFA;
- (id)getMID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

