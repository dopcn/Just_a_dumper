//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NeloTProcessor-Protocol.h"

@class NSDictionary, NSString;
@protocol ThriftNeloEventServer;

@interface ThriftNeloEventServerProcessor : NSObject <NeloTProcessor>
{
    id <ThriftNeloEventServer> mService;
    NSDictionary *mMethodMap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)process_ackedAppendList_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_ackedAppend_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (_Bool)processOnInputProtocol:(id)arg1 outputProtocol:(id)arg2;
- (id)service;
- (id)initWithThriftNeloEventServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

