//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface MKMapView (crn_ZoomLevel)
+ (double)crn_realWorldDistanceOfMapView:(id)arg1;
+ (double)crn_latitudeForOriginY:(double)arg1;
+ (double)crn_longitudeForOriginX:(double)arg1;
+ (double)crn_originYForLatitude:(double)arg1;
+ (double)crn_originXForLongitude:(double)arg1;
- (unsigned long long)crn_minZoom;
- (unsigned long long)crn_maxZoom;
- (unsigned long long)crn_zoomLevel;
- (CDStruct_b7cb895d)crn_coordinateRegionWithMapView:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 andZoomLevel:(unsigned long long)arg3;
- (void)crn_setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 animated:(_Bool)arg3;
- (CDStruct_c3b9c2ee)crn_coordinateSpanWithMapView:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 andZoomLevel:(unsigned long long)arg3;
@end

