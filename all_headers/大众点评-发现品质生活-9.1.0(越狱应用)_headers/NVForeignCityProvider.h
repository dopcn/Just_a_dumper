//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVCityProvider.h"

@class NSArray;

@interface NVForeignCityProvider : NVCityProvider
{
    NSArray *_historyCities;
    NSArray *_hotForeignCities;
    NSArray *_nearbyForeignCities;
}

@property(retain, nonatomic) NSArray *nearbyForeignCities; // @synthesize nearbyForeignCities=_nearbyForeignCities;
@property(retain, nonatomic) NSArray *hotForeignCities; // @synthesize hotForeignCities=_hotForeignCities;
@property(retain, nonatomic) NSArray *historyCities; // @synthesize historyCities=_historyCities;
- (void).cxx_destruct;
- (id)hotCities;
- (_Bool)filterCity:(id)arg1;

@end

