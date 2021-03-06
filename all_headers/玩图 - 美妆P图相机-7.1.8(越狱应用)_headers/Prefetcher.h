//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADProfile, AdServingConfig, CEDataManager, Scheduler;

@interface Prefetcher : NSObject
{
    _Bool _serving;
    Scheduler *_scheduler;
    CEDataManager *_dataMgr;
    AdServingConfig *_adServingCfg;
    ADProfile *_downloadingProfile;
}

@property(retain, nonatomic) ADProfile *downloadingProfile; // @synthesize downloadingProfile=_downloadingProfile;
@property(nonatomic) _Bool serving; // @synthesize serving=_serving;
@property(retain, nonatomic) AdServingConfig *adServingCfg; // @synthesize adServingCfg=_adServingCfg;
@property(retain, nonatomic) CEDataManager *dataMgr; // @synthesize dataMgr=_dataMgr;
@property(nonatomic) __weak Scheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (id)getGroupInfoWithGroup:(id)arg1 dataMgr:(id)arg2 prefetchCfg:(id)arg3;
- (id)buildFromProfileWithADProfile:(id)arg1 asset:(id)arg2;
- (void)profileComplete:(id)arg1 reuse:(_Bool)arg2;
- (id)getActiveGroups;
- (void)updatePrefetchConfig;
- (void)dynamicPrefetchWithGroup:(id)arg1;
- (void)schedulePrefetchForGroup:(id)arg1;
- (void)schedulePrefetch;
- (id)initWithScheduler:(id)arg1 dataMgr:(id)arg2;

@end

