//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCHttpDNSServiceDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, ObserverContainer, UCHttpDNSConfig, UCHttpDNSService;
@protocol INetTrafficStatistics;

@interface UCHttpDNSServiceModel : NSObject <UCHttpDNSServiceDelegate>
{
    UCHttpDNSConfig *_config;
    NSObject<INetTrafficStatistics> *_netStat;
    double _minTTL;
    UCHttpDNSService *_dnsService;
    NSMutableSet *_waitingHosts;
    NSMutableDictionary *_hostIPMap;
    ObserverContainer *_observers;
}

@property(retain, nonatomic) ObserverContainer *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *hostIPMap; // @synthesize hostIPMap=_hostIPMap;
@property(retain, nonatomic) NSMutableSet *waitingHosts; // @synthesize waitingHosts=_waitingHosts;
@property(retain, nonatomic) UCHttpDNSService *dnsService; // @synthesize dnsService=_dnsService;
@property(nonatomic) double minTTL; // @synthesize minTTL=_minTTL;
@property(retain, nonatomic) NSObject<INetTrafficStatistics> *netStat; // @synthesize netStat=_netStat;
@property(retain, nonatomic) UCHttpDNSConfig *config; // @synthesize config=_config;
- (void)httpDNSServiceFinish:(id)arg1 error:(id)arg2;
- (void)addHostInfoItem:(id)arg1;
- (id)allExpiredHosts;
- (void)updateAllHostsIfNeed;
- (void)updateIPForHosts:(id)arg1 type:(unsigned long long)arg2;
- (id)hostInfoForCurrentNet:(id)arg1;
- (void)updateIPForHosts:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

