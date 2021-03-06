//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NMNetworkStatusChangeDelegate-Protocol.h"

@class NMNetworkReachability, NSString;

@interface NMAckorNetworkMonitorImp : NSObject <NMNetworkStatusChangeDelegate>
{
    NMNetworkReachability *_reachability;
    struct NMAckorNetworkMonitor *_monitor;
}

@property(nonatomic) struct NMAckorNetworkMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (int)changeEnum:(long long)arg1;
- (void)networkStatusChanged:(long long)arg1 newStatus:(long long)arg2;
- (void)internalInit;
- (id)initWithMonitor:(struct NMAckorNetworkMonitor *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

