//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, QMapView, QPointAnnotation, QSmoothFunction, SCTXMapPassengeOrderRouteRes;
@protocol QSmoothNoRouteAnnimatedDelegate;

@interface QSmoothNoRouteAnnimated : NSObject
{
    _Bool _isCurCycleMoving;
    _Bool _isNextCyclePointReady;
    float _stepCycle;
    QSmoothFunction *_qSmoothFunction;
    id <QSmoothNoRouteAnnimatedDelegate> _delegate;
    QMapView *_mapView;
    QPointAnnotation *_driverAnnotation;
    NSDate *_curCycleEndTimePlan;
    NSDate *_beginTime;
    SCTXMapPassengeOrderRouteRes *_lastRes;
    SCTXMapPassengeOrderRouteRes *_nextRes;
    struct _QSCTXGPSPoint _lastDriverPoint;
}

@property(nonatomic) struct _QSCTXGPSPoint lastDriverPoint; // @synthesize lastDriverPoint=_lastDriverPoint;
@property(nonatomic) _Bool isNextCyclePointReady; // @synthesize isNextCyclePointReady=_isNextCyclePointReady;
@property(retain, nonatomic) SCTXMapPassengeOrderRouteRes *nextRes; // @synthesize nextRes=_nextRes;
@property(retain, nonatomic) SCTXMapPassengeOrderRouteRes *lastRes; // @synthesize lastRes=_lastRes;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool isCurCycleMoving; // @synthesize isCurCycleMoving=_isCurCycleMoving;
@property(retain, nonatomic) NSDate *curCycleEndTimePlan; // @synthesize curCycleEndTimePlan=_curCycleEndTimePlan;
@property(retain, nonatomic) QPointAnnotation *driverAnnotation; // @synthesize driverAnnotation=_driverAnnotation;
@property(nonatomic) __weak QMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <QSmoothNoRouteAnnimatedDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSmoothFunction *qSmoothFunction; // @synthesize qSmoothFunction=_qSmoothFunction;
@property(nonatomic) float stepCycle; // @synthesize stepCycle=_stepCycle;
- (void).cxx_destruct;
- (void)smoothMoveTo:(id)arg1 MapCanMove:(_Bool)arg2;
- (void)smoothMoveTo:(id)arg1;
- (void)pointMove:(id)arg1 annimated:(_Bool)arg2 TotalTime:(float)arg3;
- (id)initWithMapView:(id)arg1 Annotation:(id)arg2;

@end

