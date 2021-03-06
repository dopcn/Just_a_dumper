//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSNumber, NSString;

@interface GDTLiteStatsMgr : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *locManager;
    _Bool isGPSUpdating;
    NSString *sdkv;
    NSString *an;
    NSString *app_version_code;
    NSString *appn;
    NSString *uid;
    NSString *did;
    int idtype;
    int screen_x;
    int screen_y;
    NSString *lg;
    int tels;
    int wifis;
    NSString *system;
    NSString *os;
    NSString *osv;
    NSString *so;
    NSString *dn;
    NSNumber *lat;
    NSNumber *lng;
    NSNumber *loc_accuracy;
    NSString *mv;
    int pn;
    int apil;
    int lac;
    int cellid;
    NSString *neighborings;
    _Bool _isGpsOn;
    NSString *_model;
    NSString *_appkey;
}

+ (id)instance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGDTLiteStatsMgr;
@property(nonatomic) _Bool isGpsOn; // @synthesize isGpsOn=_isGpsOn;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *decodeId; // @synthesize decodeId=did;
- (void).cxx_destruct;
- (void)initDeviceMap;
- (void)initConnMap;
- (id)machineName;
- (int)deviceType;
- (id)device;
- (int)carrier;
- (int)conn;
- (void)startUpdateLocation;
- (_Bool)isRetina;
- (void)collectCGIRequestParam:(id)arg1;
- (id)macAddress;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)initializeData;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

