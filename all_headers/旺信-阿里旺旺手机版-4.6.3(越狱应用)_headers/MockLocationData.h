//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface MockLocationData : NSObject <CLLocationManagerDelegate>
{
    int _status;
    NSLock *_lock;
    NSLock *_delegateLock;
    NSObject<OS_dispatch_semaphore> *_mockLocationSemaphore;
    CLLocationManager *_mockLocationManager;
    NSMutableArray *_longiArray;
    NSMutableArray *_latiArray;
    NSMutableArray *_altiArray;
    NSMutableArray *_vertiArray;
    NSMutableArray *_horiArray;
    NSMutableArray *_timeArray;
    NSString *_gpsInfo;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *gpsInfo; // @synthesize gpsInfo=_gpsInfo;
@property(retain, nonatomic) NSMutableArray *timeArray; // @synthesize timeArray=_timeArray;
@property(retain, nonatomic) NSMutableArray *horiArray; // @synthesize horiArray=_horiArray;
@property(retain, nonatomic) NSMutableArray *vertiArray; // @synthesize vertiArray=_vertiArray;
@property(retain, nonatomic) NSMutableArray *altiArray; // @synthesize altiArray=_altiArray;
@property(retain, nonatomic) NSMutableArray *latiArray; // @synthesize latiArray=_latiArray;
@property(retain, nonatomic) NSMutableArray *longiArray; // @synthesize longiArray=_longiArray;
@property(retain, nonatomic) CLLocationManager *mockLocationManager; // @synthesize mockLocationManager=_mockLocationManager;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *mockLocationSemaphore; // @synthesize mockLocationSemaphore=_mockLocationSemaphore;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSLock *delegateLock; // @synthesize delegateLock=_delegateLock;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)init;
- (void)startCollectGpsInfo;
- (id)getData;
- (void)clearData;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (double)mean:(id)arg1;
- (double)standardDeviation:(id)arg1;
- (double)variance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

