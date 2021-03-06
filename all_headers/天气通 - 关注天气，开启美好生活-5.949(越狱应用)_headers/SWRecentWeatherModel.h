//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXModelControl.h"

#import "SWAutomaticLocateMgrDelegate-Protocol.h"

@class NSString, SWRecentWeatherNetworkEngine;
@protocol SWRecentWeatherModelDelegate;

@interface SWRecentWeatherModel : SXModelControl <SWAutomaticLocateMgrDelegate>
{
    _Bool _isCache;
    _Bool _isReversingGeocode;
    _Bool _isNetworkFetching;
    id <SWRecentWeatherModelDelegate> _delegate;
    SWRecentWeatherNetworkEngine *_engine;
    unsigned long long _completeType;
    NSString *_streetName;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;
@property(nonatomic) unsigned long long completeType; // @synthesize completeType=_completeType;
@property(nonatomic) _Bool isNetworkFetching; // @synthesize isNetworkFetching=_isNetworkFetching;
@property(nonatomic) _Bool isReversingGeocode; // @synthesize isReversingGeocode=_isReversingGeocode;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) SWRecentWeatherNetworkEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak id <SWRecentWeatherModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reverseGeocodeForBackgroundUpdate:(id)arg1 andGeocode:(id)arg2;
- (void)fetchRecentWeatherDataForBackground;
- (void)getRecentWeatherData;
- (double)getUpdateTime;
- (id)updateDate;
- (void)saveUpdateTime;
- (id)getRecentWeatherItem;
- (void)recentWeatherItemSaveToCacheWithItem:(id)arg1;
- (_Bool)isNeededToFetchData:(id)arg1;
- (void)fetchRecentWeather:(id)arg1 geocode:(id)arg2;
- (void)consequenceHandlerWithItem:(id)arg1 andLocation:(id)arg2;
- (id)locationStringWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)reverseGeocode:(CDUnknownBlockType)arg1;
- (void)receivedNotification;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

