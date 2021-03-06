//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BMKLocationManagerDelegate-Protocol.h"

@class BMKLocationManager, BMLocationData, CLLocation, NSMutableArray, NSString, NSTimer;
@protocol BMGPSManIMPDelegate;

@interface BMGPSManIMP : NSObject <BMKLocationManagerDelegate>
{
    _Bool m_bGotLocation;
    _Bool m_bIsIndoorLocation;
    long long m_unKnowStatusTryCount;
    BMLocationData *m_lastLocationData;
    NSTimer *m_networkStateTimer;
    _Bool m_bIsLocationDataPostReceived;
    _Bool m_bIsFirstInit;
    long long m_dInitTime;
    _Bool m_bIsFirstGetPoint;
    long long m_dGetPointTime;
    _Bool m_bIsFirstGetPointWithSpeed;
    _Bool _isInBackground;
    id <BMGPSManIMPDelegate> _delegate;
    double _currentDesiredAccuracy;
    BMKLocationManager *_locationManager;
    CLLocation *_bestEffortAtLocation;
    NSMutableArray *_bestLocationList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *bestLocationList; // @synthesize bestLocationList=_bestLocationList;
@property(retain, nonatomic) CLLocation *bestEffortAtLocation; // @synthesize bestEffortAtLocation=_bestEffortAtLocation;
@property(retain, nonatomic) BMKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) double currentDesiredAccuracy; // @synthesize currentDesiredAccuracy=_currentDesiredAccuracy;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) __weak id <BMGPSManIMPDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationDataPostReceived;
- (void)requestLocationSemantic;
- (void)setHotSpotUserCallback:(_Bool)arg1;
- (void)stopIndoorLocation;
- (void)tryIndoorLocation;
- (void)bmkLocationManager:(id)arg1 didUpdateNetworkState:(int)arg2 orError:(id)arg3;
- (void)bmkLocationManager:(id)arg1 didUpdateBMKLocationSemantic:(id)arg2 orError:(id)arg3;
- (void)bmkLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)bmkLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)bmkLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (_Bool)bmkLocationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)bmkLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)sendFirstRequestWithLocation;
- (void)networkStateTimeout;
- (void)requestNetworkState;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (_Bool)compassAvailable;
- (_Bool)isGotLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)setLocationDesiredAccuracy:(double)arg1;
- (id)getLastLocationList;
- (id)getHeadingData;
- (id)getLastLocation;
- (_Bool)isDelegateNeedBackgroundLocation;
- (_Bool)unInitializeHeading;
- (_Bool)initializeHeading;
- (_Bool)unInitializeLocation;
- (_Bool)initializeLocation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

