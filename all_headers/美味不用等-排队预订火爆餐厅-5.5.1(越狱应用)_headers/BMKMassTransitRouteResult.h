//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKSuggestAddrInfo, BMKTaxiInfo, NSArray;

@interface BMKMassTransitRouteResult : NSObject
{
    BMKSuggestAddrInfo *_suggestAddrResult;
    NSArray *_routes;
    long long _totalRoutes;
    BMKTaxiInfo *_taxiInfo;
}

@property(retain, nonatomic) BMKTaxiInfo *taxiInfo; // @synthesize taxiInfo=_taxiInfo;
@property(nonatomic) long long totalRoutes; // @synthesize totalRoutes=_totalRoutes;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) BMKSuggestAddrInfo *suggestAddrResult; // @synthesize suggestAddrResult=_suggestAddrResult;
- (void).cxx_destruct;

@end

