//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IChannelEventRecorderCore-Protocol.h"
#import "ReachabilityClient-Protocol.h"

@class DuringTimeStatisticsManager, NSMutableDictionary, NSString, NSTimer;
@protocol ChannelEventRecorderDelegate;

@interface ChannelEventRecorder : NSObject <ReachabilityClient, IChannelEventRecorderCore>
{
    id <ChannelEventRecorderDelegate> _delegate;
    NSMutableDictionary *_dataContainer;
    NSMutableDictionary *_eventContainer;
    DuringTimeStatisticsManager *_duringTimeManager;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) DuringTimeStatisticsManager *duringTimeManager; // @synthesize duringTimeManager=_duringTimeManager;
@property(retain) NSMutableDictionary *eventContainer; // @synthesize eventContainer=_eventContainer;
@property(retain) NSMutableDictionary *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(nonatomic) __weak id <ChannelEventRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reachabilityDidChange:(long long)arg1;
- (void)clear;
- (void)addDataToContainer:(id)arg1;
- (void)timeout;
- (void)checkEnd;
- (void)cancel;
- (void)end;
- (_Bool)isRuning;
- (void)addEvent:(id)arg1 eventValue:(id)arg2;
- (void)addJoinChannelEvent:(id)arg1 eventValue:(id)arg2;
- (void)begin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

