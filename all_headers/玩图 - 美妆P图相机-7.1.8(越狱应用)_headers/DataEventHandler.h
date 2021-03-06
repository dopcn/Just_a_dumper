//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EventHandlerProtocol-Protocol.h"

@class CEDataManager, NSString, Scheduler;

@interface DataEventHandler : NSObject <EventHandlerProtocol>
{
    Scheduler *_scheduler;
    CEDataManager *_dataMgr;
}

@property(retain, nonatomic) CEDataManager *dataMgr; // @synthesize dataMgr=_dataMgr;
@property(nonatomic) __weak Scheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)onAudienceTargetingTagsChanged:(id)arg1;
- (void)onAssetReady:(id)arg1;
- (void)onActivePlacementChanged:(id)arg1;
- (void)onServingCfgChanged:(id)arg1;
- (void)onPHChanged:(id)arg1;
- (void)onAdListChanged:(id)arg1;
- (void)handleEvent:(id)arg1;
- (id)initWithScheduler:(id)arg1 dataMgr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

