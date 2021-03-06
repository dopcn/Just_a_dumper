//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSessionRouteDescription, NSDictionary, NSMutableSet;

@interface QYAudioSessionManager : NSObject
{
    _Bool _wantNotifyOthersWhenSetActiveOptionOnDeactivation;
    _Bool _bAppBackground;
    _Bool _bAnyBusineesActiveOnce;
    NSMutableSet *_setActiveBusinees;
    NSDictionary *_mapSoloBusineesKey;
    NSDictionary *_mapMixBusineesKey;
    NSDictionary *_mapInactiveBusineesKey;
    AVAudioSessionRouteDescription *_routeDescription;
}

+ (id)shareInstance;
@property(retain) AVAudioSessionRouteDescription *routeDescription; // @synthesize routeDescription=_routeDescription;
@property(nonatomic) _Bool bAnyBusineesActiveOnce; // @synthesize bAnyBusineesActiveOnce=_bAnyBusineesActiveOnce;
@property(nonatomic) _Bool bAppBackground; // @synthesize bAppBackground=_bAppBackground;
@property(retain, nonatomic) NSDictionary *mapInactiveBusineesKey; // @synthesize mapInactiveBusineesKey=_mapInactiveBusineesKey;
@property(retain, nonatomic) NSDictionary *mapMixBusineesKey; // @synthesize mapMixBusineesKey=_mapMixBusineesKey;
@property(retain, nonatomic) NSDictionary *mapSoloBusineesKey; // @synthesize mapSoloBusineesKey=_mapSoloBusineesKey;
@property(retain, nonatomic) NSMutableSet *setActiveBusinees; // @synthesize setActiveBusinees=_setActiveBusinees;
@property(nonatomic) _Bool wantNotifyOthersWhenSetActiveOptionOnDeactivation; // @synthesize wantNotifyOthersWhenSetActiveOptionOnDeactivation=_wantNotifyOthersWhenSetActiveOptionOnDeactivation;
- (void).cxx_destruct;
- (id)getCurrentSessionRouteDes;
- (void)currentRouteDidChange:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (_Bool)isSoloServicePlayingBackground;
- (unsigned long long)p_getCategoryOption;
- (id)p_getSessionMode;
- (_Bool)p_getActiveFlag;
- (id)p_getSessionCategory;
- (_Bool)isNeedSkipRefreshAudioSessionStatus;
- (void)refreshAudioSessionStatus;
- (void)updateBusineesActiveStatus:(id)arg1;
- (void)updateActiveBusineesSet:(id)arg1 active:(_Bool)arg2;
- (void)setBusinees:(id)arg1 active:(_Bool)arg2;
- (id)init;

@end

