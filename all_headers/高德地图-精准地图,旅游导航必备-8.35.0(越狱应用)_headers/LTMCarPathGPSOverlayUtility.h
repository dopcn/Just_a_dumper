//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseUtility.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "NMGpsMonitorManagerDelegate-Protocol.h"

@class AMap3DNaviCompositeOverlay, NSString;

@interface LTMCarPathGPSOverlayUtility : NMBaseUtility <CLLocationManagerDelegate, NMGpsMonitorManagerDelegate>
{
    AMap3DNaviCompositeOverlay *_naviCompOverlay;
}

@property(retain, nonatomic) AMap3DNaviCompositeOverlay *naviCompOverlay; // @synthesize naviCompOverlay=_naviCompOverlay;
- (void).cxx_destruct;
- (void)lostGPS:(_Bool)arg1;
- (void)updateGpsLevel:(long long)arg1;
- (void)locationManager:(id)arg1 didUpdateFrequentlyToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)clearCustomGPSOverlay;
- (id)trackTextureWithGPSStatus:(_Bool)arg1;
- (void)createCustomGPSOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

