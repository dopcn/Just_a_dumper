//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMSDKGeoLocationManager, IMSignalsConfig, NSMutableArray, NSOperationQueue, NSString;

@interface IMNice : NSObject
{
    _Bool _started;
    IMSignalsConfig *_config;
    NSMutableArray *_wifiData;
    NSOperationQueue *_collectionQueue;
    NSOperationQueue *_networkQueue;
    IMSDKGeoLocationManager *_locationManager;
    NSString *_sessionId;
    double _sessionStartTime;
    double _sessionEndTime;
    unsigned long long _identifier;
}

+ (_Bool)cellularInfoEnabled;
+ (_Bool)locationEnabled;
+ (_Bool)wifiEnabled;
+ (_Bool)iCEEnabled;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double sessionEndTime; // @synthesize sessionEndTime=_sessionEndTime;
@property(nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) IMSDKGeoLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSOperationQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) NSOperationQueue *collectionQueue; // @synthesize collectionQueue=_collectionQueue;
@property(retain, nonatomic) NSMutableArray *wifiData; // @synthesize wifiData=_wifiData;
@property(retain, nonatomic) IMSignalsConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)nicePayload;
- (void)sendNiceRequest;
- (void)collectWifiInfo;
- (void)stopWifi;
- (void)startWifi;
- (void)stopSession;
- (void)startSession;
- (void)clearSessionInfo;
- (void)stopNiceOperations;
- (void)stop;
- (void)start;
- (id)init;

@end

