//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BMKGeoCodeSearchDelegate-Protocol.h"
#import "BMKMapViewDelegate-Protocol.h"
#import "BMKRouteSearchDelegate-Protocol.h"

@class BMKGeoCodeSearch, BMKMapView, BMKPointAnnotation, BMKRouteSearch, NSString, VSGetOrderTrackMapRsp;

@interface VSLogisticsMapViewController : UIViewController <BMKMapViewDelegate, BMKRouteSearchDelegate, BMKGeoCodeSearchDelegate>
{
    _Bool _hasZoomVisibleMapRect;
    _Bool _hasAddAnnotation;
    _Bool _hasAddRoute;
    NSString *_orderSn;
    VSGetOrderTrackMapRsp *_orderTrackMapRsp;
    BMKMapView *_mapView;
    BMKRouteSearch *_routesearch1;
    BMKRouteSearch *_routesearch2;
    BMKPointAnnotation *_distributionAddressAnnotation;
    BMKPointAnnotation *_deliveryStationAddressAnnotation;
    BMKPointAnnotation *_signAddressAnnotation;
    BMKPointAnnotation *_locationAnnotation;
    CDUnknownBlockType _requestLogisticsTrackCallback;
    BMKGeoCodeSearch *_distributionAddressGeoCodeSearch;
    BMKGeoCodeSearch *_deliveryStationAddressGeoCodeSearch;
    BMKGeoCodeSearch *_signAddressGeoCodeSearch;
}

@property(retain, nonatomic) BMKGeoCodeSearch *signAddressGeoCodeSearch; // @synthesize signAddressGeoCodeSearch=_signAddressGeoCodeSearch;
@property(retain, nonatomic) BMKGeoCodeSearch *deliveryStationAddressGeoCodeSearch; // @synthesize deliveryStationAddressGeoCodeSearch=_deliveryStationAddressGeoCodeSearch;
@property(retain, nonatomic) BMKGeoCodeSearch *distributionAddressGeoCodeSearch; // @synthesize distributionAddressGeoCodeSearch=_distributionAddressGeoCodeSearch;
@property(copy, nonatomic) CDUnknownBlockType requestLogisticsTrackCallback; // @synthesize requestLogisticsTrackCallback=_requestLogisticsTrackCallback;
@property(nonatomic) _Bool hasAddRoute; // @synthesize hasAddRoute=_hasAddRoute;
@property(retain, nonatomic) BMKPointAnnotation *locationAnnotation; // @synthesize locationAnnotation=_locationAnnotation;
@property(retain, nonatomic) BMKPointAnnotation *signAddressAnnotation; // @synthesize signAddressAnnotation=_signAddressAnnotation;
@property(retain, nonatomic) BMKPointAnnotation *deliveryStationAddressAnnotation; // @synthesize deliveryStationAddressAnnotation=_deliveryStationAddressAnnotation;
@property(retain, nonatomic) BMKPointAnnotation *distributionAddressAnnotation; // @synthesize distributionAddressAnnotation=_distributionAddressAnnotation;
@property(nonatomic) _Bool hasAddAnnotation; // @synthesize hasAddAnnotation=_hasAddAnnotation;
@property(nonatomic) _Bool hasZoomVisibleMapRect; // @synthesize hasZoomVisibleMapRect=_hasZoomVisibleMapRect;
@property(retain, nonatomic) BMKRouteSearch *routesearch2; // @synthesize routesearch2=_routesearch2;
@property(retain, nonatomic) BMKRouteSearch *routesearch1; // @synthesize routesearch1=_routesearch1;
@property(retain, nonatomic) BMKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) VSGetOrderTrackMapRsp *orderTrackMapRsp; // @synthesize orderTrackMapRsp=_orderTrackMapRsp;
@property(copy, nonatomic) NSString *orderSn; // @synthesize orderSn=_orderSn;
- (void).cxx_destruct;
- (void)onGetGeoCodeResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (id)geoSearchWithAddress:(id)arg1;
- (void)requestOrderTrackMapWithOrderSN:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestLogisticsTrackWithOrderSn:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onGetDrivingRouteResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewFitPoints:(CDStruct_c3b9c2ee *)arg1 pointCount:(long long)arg2;
- (void)drivingRouteSearch;
- (void)addAnnotations;
- (void)zoomVisibleMapRect;
- (void)mapViewWillDisAppear;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

