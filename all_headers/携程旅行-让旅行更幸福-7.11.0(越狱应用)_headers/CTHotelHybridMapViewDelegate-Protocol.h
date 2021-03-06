//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CTHotelHybridMapAnnotation, CTHotelHybridMapView;

@protocol CTHotelHybridMapViewDelegate <NSObject>

@optional
- (void)cth_mapView:(CTHotelHybridMapView *)arg1 zoomLevelDidChanged:(unsigned long long)arg2;
- (void)cth_mapView:(CTHotelHybridMapView *)arg1 centerCoordinateDidChanged:(struct CLLocationCoordinate2D)arg2;
- (void)cth_mapView:(CTHotelHybridMapView *)arg1 annotationDidClicked:(CTHotelHybridMapAnnotation *)arg2;
- (void)cth_mapView:(CTHotelHybridMapView *)arg1 annotationDeselected:(CTHotelHybridMapAnnotation *)arg2;
- (void)cth_mapView:(CTHotelHybridMapView *)arg1 loadFailedWithTimeInterval:(double)arg2;
- (void)cth_mapView:(CTHotelHybridMapView *)arg1 loadFinishedWithTimeInterval:(double)arg2;
@end

