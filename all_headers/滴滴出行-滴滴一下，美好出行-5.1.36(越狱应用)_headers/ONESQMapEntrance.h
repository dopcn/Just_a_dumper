//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ONESBaseMapEntranceAdapter.h"

#import "ONESBaseMapEntranceDelegate-Protocol.h"
#import "ONESBaseSearchDelegate-Protocol.h"
#import "ONESQMapViewDelegate-Protocol.h"
#import "ONESReverseGeocoderDelegate-Protocol.h"
#import "QAppKeyCheckDelegate-Protocol.h"
#import "QMapNavigationDelegate-Protocol.h"
#import "QMapViewDelegate-Protocol.h"

@class NSString, ONESQHeatTileOverlay, ONESQMapView, ONESQReverseGeocoder, ONESQSearch;

@interface ONESQMapEntrance : ONESBaseMapEntranceAdapter <QMapViewDelegate, ONESBaseMapEntranceDelegate, QMapNavigationDelegate, QAppKeyCheckDelegate, ONESQMapViewDelegate, ONESBaseSearchDelegate, ONESReverseGeocoderDelegate>
{
    double _pri_zoomLevel_willchange;
    _Bool _pacBreakPinch;
    CDStruct_b7cb895d _paccurrentRegionPinchBegin;
    double _paclastZoomTime;
    _Bool _pacisSingleTouchDoubleTap;
    _Bool _isLoadedMap;
    _Bool _showTraffic;
    _Bool _isBlockNavigation;
    int _currentNaviType;
    double _centerOffsetY;
    ONESQMapView *_qMapView;
    ONESQHeatTileOverlay *_heatTileOverlay;
    ONESQReverseGeocoder *_reverseGeocoder;
    ONESQSearch *_oneQSearch;
    struct CGPoint _centerCoordinatePoint;
    struct CGRect _mapFrame;
}

@property(nonatomic) struct CGRect mapFrame; // @synthesize mapFrame=_mapFrame;
@property(retain, nonatomic) ONESQSearch *oneQSearch; // @synthesize oneQSearch=_oneQSearch;
@property(nonatomic) _Bool isBlockNavigation; // @synthesize isBlockNavigation=_isBlockNavigation;
@property(nonatomic) int currentNaviType; // @synthesize currentNaviType=_currentNaviType;
@property(retain, nonatomic) ONESQReverseGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(retain, nonatomic) ONESQHeatTileOverlay *heatTileOverlay; // @synthesize heatTileOverlay=_heatTileOverlay;
@property(retain, nonatomic) ONESQMapView *qMapView; // @synthesize qMapView=_qMapView;
- (void)setCenterCoordinatePoint:(struct CGPoint)arg1;
- (struct CGPoint)centerCoordinatePoint;
- (void).cxx_destruct;
- (_Bool)userEndLineHidden;
- (void)setUserEndLineHidden:(_Bool)arg1;
- (id)queryInfo;
- (void)setQueryInfo:(id)arg1;
- (void)handleRainbowRoutePb:(id)arg1;
- (void)handleRainbowRoute:(id)arg1;
- (void)setRoadEnlargementViewEnabled:(_Bool)arg1;
- (_Bool)isRoadEnlargementViewEnabled;
- (void)setLaneViewEnabled:(_Bool)arg1;
- (_Bool)isLaneViewEnabled;
- (void)setCameraViewEnabled:(_Bool)arg1;
- (_Bool)isCameraViewEnabled;
- (void)setLocationOverlayHidden:(_Bool)arg1;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2 usingSrcCoor:(struct CLLocationCoordinate2D *)arg3;
- (double)maxFontSizeThatFitsForString:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 size:(struct CGSize *)arg4 maxFontSize:(double)arg5 minFontSize:(double)arg6;
- (CDStruct_b7cb895d)getMaxRectInPolygon:(struct CLLocationCoordinate2D *)arg1 count:(int)arg2;
- (void)mapviewLanguageChanged:(unsigned long long)arg1;
- (void)updateMapEntranceLanguage:(unsigned long long)arg1;
- (void)notifyAppKeyCheckResult:(unsigned long long)arg1;
- (void)notifyCancelNavRouteSearchRequestResult:(_Bool)arg1;
- (void)notifyNavRouteSearchDidFail;
- (void)notifyNavRouteSearchDidFailWithError:(id)arg1;
- (void)notifyNavRouteSearchResult:(id)arg1;
- (void)onONESQMapViewSingleTouchSingleTapAction:(id)arg1;
- (void)onONESQMapViewDoubleTouchSingleTapAction:(id)arg1;
- (void)onONESQMapViewSingleTouchDoubleTapAction:(id)arg1;
- (void)onONESQMapViewPanAction:(id)arg1;
- (void)onONESQMapViewPinchAction:(id)arg1;
- (void)arrivePassPoint:(long long)arg1;
- (void)mapDayNightStyleChanged:(_Bool)arg1;
- (void)hideLaneView;
- (void)showLaneView:(id)arg1;
- (void)hideRoadEnlargementView;
- (void)showRoadEnlargementView:(id)arg1;
- (void)recomputeRouteDidFailWithErrorFinally:(id)arg1;
- (void)recomputeRouteDidFailWithError:(id)arg1;
- (void)recomputeRouteDidFinished:(id)arg1;
- (void)recomputeRouteWillStarted;
- (void)triggerOverspeed:(id)arg1;
- (void)userTrackingModeNone;
- (void)showRouteFinished;
- (void)userNavigationEnd:(_Bool)arg1;
- (void)userLocationErr:(id)arg1;
- (void)returnTTSValue:(id)arg1;
- (void)updateRouteResult:(id)arg1;
- (void)refreshRouteLineRainbowWithTrafficsJSON:(id)arg1 mapPoints:(id)arg2 routeType:(int)arg3;
- (int)remainTimeToPassPoint:(int)arg1;
- (int)distanceToPassPoint:(int)arg1;
- (CDStruct_02837cd9)getRouteLineLeftVisibleRect:(int)arg1 toPassPointIndex:(int)arg2;
- (void)setDynamicChangeRouteDelegate:(id)arg1;
- (void)setRouteDrawType:(unsigned long long)arg1 routeIndex:(long long)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawCap:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawTexture:(id)arg1 param2:(double)arg2 routeIndex:(long long)arg3 routeGroupIndex:(long long)arg4 routeDrawType:(unsigned long long)arg5;
- (void)setHighLightRoute:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setMapMaskColor:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 layer:(long long)arg5 curveType:(long long)arg6 animateSecond:(double)arg7;
- (id)getImageFilePathFlag:(id)arg1;
- (int)getNavigationRouteGroupIndex;
- (void)setTrafficColor:(unsigned int)arg1 blockColor:(unsigned int)arg2 unBlockColor:(unsigned int)arg3 extremeBlockColor:(unsigned int)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 dispLevel:(int)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 dispLevel:(int)arg2;
- (_Bool)removeRouteOverlayGroupByIndex:(long long)arg1;
- (_Bool)removeRouteOverlayGroup:(id)arg1;
- (_Bool)addRouteOverlayGroup:(id)arg1;
- (_Bool)addRouteOverlay:(id)arg1 routeOverlayGroup:(id)arg2;
- (void)adaptRouteOverlayGroup:(id)arg1;
- (void)startNavigationWithFromLocation:(id)arg1 withToLocation:(id)arg2;
- (_Bool)removeWalkRoute;
- (void)stopWalkNavigation;
- (_Bool)startWalkNavigation:(_Bool)arg1;
- (void)showWalkSearchRoute:(id)arg1 automaticAjustVisibleMapRect:(_Bool)arg2;
- (void)showWalkSearchRoute:(id)arg1;
- (void)continueNavigation;
- (void)adjustOriginalRouteid:(id)arg1;
- (_Bool)removeRoute;
- (void)stopNavigation;
- (unsigned long long)naviDayNightMode;
- (void)setNaviDayNightMode:(unsigned long long)arg1;
- (id)naviStatus;
- (struct UIEdgeInsets)edgePaddingFor2DNorthOverView;
- (void)setEdgePaddingFor2DNorthOverView:(struct UIEdgeInsets)arg1;
- (void)setMapNaviShowMode:(long long)arg1;
- (void)setForbidRecaculate:(_Bool)arg1;
- (_Bool)forbidRecaculate;
- (id)getRouteLineInfo;
- (void)createSearchRoute:(id)arg1;
- (void)setLocationForNavigation:(CDStruct_c3b9c2ee *)arg1 nPointIndex:(int)arg2 pNextPoint:(CDStruct_c3b9c2ee *)arg3 nDistance:(int)arg4 nOffset:(int)arg5 nType:(int)arg6;
- (void)showSearchRouteAfterCreate:(id)arg1 lineArray:(id)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(id)arg1 lineArray:(id)arg2;
- (void)showSearchRoute:(id)arg1 routeColor:(long long)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(id)arg1 routeColor:(long long)arg2;
- (_Bool)startCarpoolNavigation:(_Bool)arg1;
- (_Bool)startNavigation:(_Bool)arg1;
- (_Bool)startNavigation;
- (void)showRoute:(struct CLLocationCoordinate2D *)arg1 withCount:(int)arg2;
- (int)routeCount;
- (_Bool)checkLocationIfAuthorize;
- (void)stopBlockNavigation;
- (void)startNavigation:(id)arg1 toPlace:(id)arg2 startSucceed:(CDUnknownBlockType)arg3 startFailed:(CDUnknownBlockType)arg4 updateRoute:(CDUnknownBlockType)arg5 returnTTSValue:(CDUnknownBlockType)arg6 userNavigationEnd:(CDUnknownBlockType)arg7;
- (void)mapView:(id)arg1 didChangeScaleAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 annotation:(id)arg2 animationKey:(id)arg3 didFinishAnimation:(_Bool)arg4;
- (void)mapPositionChanged:(id)arg1;
- (void)mapView:(id)arg1 didUpdateTraffic:(id)arg2;
- (void)mapView:(id)arg1 onClickedMapPoi:(id)arg2;
- (void)mapView:(id)arg1 longPressAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didLayoutCalloutView:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutViewTapped:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)touchesWithOutCallout;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didAddOverlayViews:(id)arg2;
- (void)mapView:(id)arg1 didAddOverlayView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (_Bool)removeSubViewAtMap:(id)arg1;
- (_Bool)addSubViewAtMap:(id)arg1;
- (void)removeRouteOverlayGroupAtMap:(id)arg1;
- (void)addRouteOverlayGroupAtMap:(id)arg1;
- (void)removeRouteGuidanceGroup;
- (void)removeRouteGuidanceOverlay;
- (void)removeCameraOverlay;
- (void)removeOverlayAtMap:(id)arg1;
- (void)addOverlayAtMap:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (_Bool)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (_Bool)addOverlay:(id)arg1;
- (id)overlays;
- (void)roatateAnnotationView:(id)arg1;
- (id)convertFullPathToImageName:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)updateUserLocationDispLevel:(int)arg1;
- (void)updateAnnotationDispLevel:(id)arg1 dispLevel:(int)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 Completed:(CDUnknownBlockType)arg6;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (void)updateAnnotation:(id)arg1 imageName:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotationAtRestore:(id)arg1 cleanQueue:(_Bool)arg2;
- (void)addAnnotationAtRestore:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (_Bool)removeTileOverlay:(id)arg1;
- (_Bool)removeAnnotation:(id)arg1;
- (void)bringTextAnnotationToFront:(id)arg1;
- (_Bool)removeTextAnnotation:(id)arg1;
- (_Bool)addAnnotations:(id)arg1;
- (_Bool)addTileOverlay:(id)arg1;
- (_Bool)addAnnotation:(id)arg1;
- (_Bool)addTextAnnotation:(id)arg1;
- (id)annotations;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (CDStruct_02837cd9)visibleRect:(id)arg1;
- (CDStruct_02837cd9)mapRectMake:(struct CLLocationCoordinate2D)arg1 withZoomlevel:(double)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5 focusEffect:(_Bool)arg6;
- (void)setVisibleMapRectContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animationType:(long long)arg3 duration:(double)arg4 focusEffect:(_Bool)arg5;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3 on2d:(_Bool)arg4;
- (void)setVisibleMapRectWithAnnotations:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (CDStruct_02837cd9)visibleMapRect;
- (void)needAdjustBestView;
- (long long)getCurrentMapNaviShowMode;
- (CDStruct_02837cd9)getRouteLineVisibleRect:(int)arg1;
- (CDStruct_02837cd9)getRouteLineLeftVisibleRect:(int)arg1;
- (CDStruct_b7cb895d)regionThatFits:(CDStruct_b7cb895d)arg1;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (CDStruct_b7cb895d)region;
- (void)setCenterOffsetY:(double)arg1 curveType:(long long)arg2 duration:(double)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (struct CLLocationCoordinate2D)centerCoordinate;
- (_Bool)openglAnnoView;
- (void)setStayCenteredDuringZoom:(_Bool)arg1;
- (_Bool)stayCenteredDuringZoom;
- (long long)lineWidth;
- (void)setLineWidth:(long long)arg1;
- (double)centerOffsetY;
- (void)setCenterOffsetY:(double)arg1;
- (void)recalculateRouteDidFailWithErrorFinally:(id)arg1;
- (void)recalculateRouteDidFailWithError:(id)arg1;
- (void)recalculateRouteDidFinishWithResult:(id)arg1;
- (double)refreshTime;
- (_Bool)isEraseRouteMode;
- (void)setIsEraseRouteMode:(_Bool)arg1;
- (void)setIsSCTXNavigating:(_Bool)arg1;
- (_Bool)isLightNavigating;
- (void)setIsLightNavigating:(_Bool)arg1;
- (_Bool)isWalkNavigation;
- (_Bool)isNavigation;
- (void)setShowsBuildings:(_Bool)arg1;
- (_Bool)showsBuildings;
- (void)stopTrakingModeFollowWithHeading;
- (void)startTrackingModeFollow;
- (void)cancelContinueTrackingBlock;
- (void)setContinue2DTrackingBlock:(CDUnknownBlockType)arg1 afterTime:(double)arg2;
- (void)startTrackingModeFollowWithHeading;
- (void)setUserTrackingMode:(unsigned long long)arg1;
- (unsigned long long)userTrackingMode;
- (void)setMapType:(long long)arg1;
- (long long)mapType;
- (void)setShowsUserLocation:(_Bool)arg1;
- (_Bool)showsUserLocation;
- (_Bool)pitchEnabled;
- (void)setPitchEnabled:(_Bool)arg1;
- (void)setShow3D:(_Bool)arg1;
- (_Bool)show3D;
- (_Bool)showsCompass;
- (void)setShowsCompass:(_Bool)arg1;
- (_Bool)disable3DBuildingEffect;
- (void)setDisable3DBuildingEffect:(_Bool)arg1;
- (void)setCompassYOffSet:(double)arg1;
- (void)setLogoOffSet:(struct CGPoint)arg1;
- (void)setHideAccuracyCircle:(_Bool)arg1;
- (_Bool)hideAccuracyCircle;
- (void)setShowTraffic:(_Bool)arg1;
- (_Bool)showTraffic;
- (void)setShowsScale:(_Bool)arg1;
- (_Bool)showsScale;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)setLongPressedEnabled:(_Bool)arg1;
- (_Bool)longPressedEnabled;
- (_Bool)scrollEnabled;
- (void)setZoomEnabled:(_Bool)arg1;
- (_Bool)zoomEnabled;
- (void)setZoomLevel:(long long)arg1 animated:(_Bool)arg2;
- (void)setZoomLevel:(double)arg1;
- (double)zoomLevel;
- (struct CGRect)frame;
- (_Bool)keepCallout;
- (void)setKeepCallout:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNavigationType:(int)arg1;
- (int)navigationType;
- (id)mapViewObject;
- (void)updateUserLocationCalloutview:(id)arg1;
- (void)setEnableEnlargeRoadView:(_Bool)arg1;
- (_Bool)enableEnlargeRoadView;
- (void)setEnableLanview:(_Bool)arg1;
- (_Bool)enableLanview;
- (_Bool)mapIsNightStyle;
- (id)userLocationView;
- (id)currentCity;
- (_Bool)userLocationAvailable;
- (_Bool)userLocationVisible;
- (void)showsUserLocation:(_Bool)arg1 withMapCenter:(_Bool)arg2;
- (id)userLocation;
- (id)version;
- (double)mapScale;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1;
- (long long)zoomLevelFitsRegion:(CDStruct_b7cb895d)arg1;
- (long long)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1;
- (void)zoomOutOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomInOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomOut;
- (void)zoomIn;
- (void)innerReleaseMapView;
- (void)releaseMapView;
- (void)mapHibernate;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)dealloc;
- (void)log:(id)arg1;
- (void)setIsActive:(_Bool)arg1;
- (id)creatQMapview;
- (id)initWithConfig:(id)arg1;
- (CDStruct_c3b9c2ee)coordinateSpanWithMapView:(struct CLLocationCoordinate2D)arg1 withZoomLevel:(unsigned long long)arg2;
- (CDStruct_b7cb895d)ONESCoordinateRegionMakeWithDistance:(struct CLLocationCoordinate2D)arg1 withlatMeter:(double)arg2 lngMeter:(double)arg3;
- (_Bool)ONESMapRectContainsRect:(CDStruct_02837cd9)arg1 rect2:(CDStruct_02837cd9)arg2;
- (_Bool)ONESMapRectContainsPoint:(CDStruct_02837cd9)arg1 point:(CDStruct_c3b9c2ee)arg2;
- (_Bool)ONESMapRectIsValid:(CDStruct_02837cd9)arg1;
- (_Bool)ONESMapSizeIsValid:(CDStruct_c3b9c2ee)arg1;
- (_Bool)ONESCoordinateRegionIsValid:(CDStruct_b7cb895d)arg1;
- (struct CLLocationCoordinate2D)ONESCoordinateForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)ONESMapPointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (CDStruct_b7cb895d)ONESCoordinateRegionWithMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)ONESMapRectWithCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (void)updateRouteOverlayGroupIndexMainThread:(long long)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupMainThread:(id)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndexMainThread:(long long)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupMainThread:(id)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndexMainThread:(long long)arg1 dispLevel:(int)arg2;
- (void)updateRouteOverlayGroupMainThread:(id)arg1 dispLevel:(int)arg2;
- (void)removeOverlaysMainThread:(id)arg1;
- (_Bool)removeOverlayMainThread:(id)arg1;
- (void)addOverlaysMainThread:(id)arg1;
- (_Bool)addOverlayMainThread:(id)arg1;
- (void)updateAnnotationDispLevelMainThread:(id)arg1 dispLevel:(int)arg2;
- (void)updateAnnotationMainThread:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 Completed:(CDUnknownBlockType)arg6;
- (void)updateAnnotationMainThread:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotationMainThread:(id)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotationMainThread:(id)arg1 alpha:(double)arg2;
- (void)updateAnnotationMainThread:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5;
- (void)updateAnnotationMainThread:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotationMainThread:(id)arg1 angle:(double)arg2;
- (void)updateAnnotationMainThread:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)updateAnnotationMainThread:(id)arg1 imageName:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)bringTextAnnotationToFrontMainThread:(id)arg1;
- (void)bringAnnotationToFrontMainThread:(id)arg1;
- (void)deselectAnnotationMainThread:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationMainThread:(id)arg1 animated:(_Bool)arg2;
- (void)removeAnnotationsMainThread:(id)arg1;
- (_Bool)removeAnnotationMainThread:(id)arg1;
- (_Bool)addAnnotationsMainThread:(id)arg1;
- (_Bool)removeTileOverlayMainThread:(id)arg1;
- (_Bool)addTileOverlayMainThread:(id)arg1;
- (_Bool)removeTextAnnotationMainThread:(id)arg1;
- (_Bool)addTextAnnotationMainThread:(id)arg1;
- (_Bool)addAnnotationMainThread:(id)arg1;
- (void)setCenterCoordinateMainThread:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5 focusEffect:(_Bool)arg6;
- (void)setVisibleMapRectMainThread:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animationType:(long long)arg3 duration:(double)arg4 focusEffect:(_Bool)arg5;
- (void)setVisibleMapRectMainThread:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3 on2d:(_Bool)arg4;
- (void)setVisibleMapRectWithAnnotationsMainThread:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setVisibleMapRectMainThread:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRectMainThread:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (void)setRegionMainThread:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setCenterOffsetYMainThread:(double)arg1 curveType:(long long)arg2 duration:(double)arg3;
- (void)setCenterCoordinateMainThread:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinateMainThread:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinateMainThread:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

