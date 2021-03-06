//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMMoatNativeViewability.h"

@class INMMoatReactiveVideoTracker, INMMoatVideoTracker;

@interface IMMoatNativeVideoViewability : IMMoatNativeViewability
{
    INMMoatVideoTracker *_moatTracker;
    INMMoatReactiveVideoTracker *_moatCustomTracker;
}

@property(retain, nonatomic) INMMoatReactiveVideoTracker *moatCustomTracker; // @synthesize moatCustomTracker=_moatCustomTracker;
@property(retain, nonatomic) INMMoatVideoTracker *moatTracker; // @synthesize moatTracker=_moatTracker;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendAdEventForEventType:(unsigned long long)arg1 forPlayHead:(double)arg2 withVolume:(float)arg3;
- (void)switchViewabilityTo:(id)arg1;
- (void)attachViewabilityToVideoAssets:(id)arg1;
- (id)initWithMoatParameters:(id)arg1;

@end

