//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CloudProtocolSessionDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol CloudProtocolsManagerDelegate;

@interface CloudProtocolsManager : NSObject <CloudProtocolSessionDelegate>
{
    NSMutableArray *_arrayCloudProtocolSession;
    id <CloudProtocolsManagerDelegate> _delegate;
    unsigned long long _uin;
}

@property(retain) NSMutableArray *arrayCloudProtocolSession; // @synthesize arrayCloudProtocolSession=_arrayCloudProtocolSession;
- (void).cxx_destruct;
- (void)stopAndClean;
- (void)onActionWillDone:(id)arg1;
- (void)onActionWillStart:(id)arg1;
- (void)onSessionDone:(id)arg1;
- (void)startWork;
- (void)deleteUnnecessarySession;
- (void)addCloudProtocolSession:(id)arg1 withObject:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 uin:(unsigned long long)arg2;
- (void)addCloudProtocolSessionByActions:(id)arg1 withObject:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)addCloudProtocolSessionByActions:(id)arg1 withObject:(id)arg2;
- (void)addCloudProtocolSessionByAction:(id)arg1 withObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

