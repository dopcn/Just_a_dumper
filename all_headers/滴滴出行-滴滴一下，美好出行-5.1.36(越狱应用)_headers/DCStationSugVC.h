//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCBaseViewController.h"

@class DCRouteOrderRouteModel, DCStationMapUnit, DCStationSugPoiSearchCom, NSArray;

@interface DCStationSugVC : DCBaseViewController
{
    DCStationMapUnit *_mapCom;
    DCStationSugPoiSearchCom *_poiSearchCom;
    NSArray *_listModel;
    DCRouteOrderRouteModel *_routeModel;
    long long _stationType;
}

@property(nonatomic) long long stationType; // @synthesize stationType=_stationType;
@property(retain, nonatomic) DCRouteOrderRouteModel *routeModel; // @synthesize routeModel=_routeModel;
@property(retain, nonatomic) NSArray *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) DCStationSugPoiSearchCom *poiSearchCom; // @synthesize poiSearchCom=_poiSearchCom;
@property(retain, nonatomic) DCStationMapUnit *mapCom; // @synthesize mapCom=_mapCom;
- (void).cxx_destruct;
- (id)buildSugSignal;
- (void)forInit;
- (id)initWithRecommendListStation:(id)arg1 editStation:(id)arg2 route:(id)arg3 type:(long long)arg4;
- (id)init;
- (void)dealloc;

@end

