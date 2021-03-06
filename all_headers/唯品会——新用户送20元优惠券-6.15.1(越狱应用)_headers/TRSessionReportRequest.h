//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRHttpRequest.h"

@class NSMutableArray;

@interface TRSessionReportRequest : TRHttpRequest
{
    NSMutableArray *_sentObjects;
}

@property(retain, nonatomic) NSMutableArray *sentObjects; // @synthesize sentObjects=_sentObjects;
- (void).cxx_destruct;
- (_Bool)populateCustomEvents:(id)arg1 session:(id)arg2;
- (_Bool)populateGeneralData:(id)arg1 session:(id)arg2;
- (_Bool)populateExceptions:(id)arg1 session:(id)arg2;
- (_Bool)populatePages:(id)arg1 session:(id)arg2;
- (_Bool)populateTapEvents:(id)arg1 session:(id)arg2;
- (_Bool)populateVolumeSensor:(id)arg1 session:(id)arg2;
- (_Bool)populateBatterySensor:(id)arg1 session:(id)arg2;
- (_Bool)populateBrightnessSensor:(id)arg1 session:(id)arg2;
- (_Bool)populateWifiSensor:(id)arg1 session:(id)arg2;
- (_Bool)populateLocationSensor:(id)arg1 session:(id)arg2;
- (void)markAsSent;
- (_Bool)prepareDataForReports:(long long)arg1 session:(id)arg2;
- (id)init;

@end

