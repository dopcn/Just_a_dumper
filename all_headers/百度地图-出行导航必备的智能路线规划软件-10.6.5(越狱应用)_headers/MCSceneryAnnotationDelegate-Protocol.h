//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCSceneryAnnotation, MCSceneryAnnotationCell, MapView, NSArray;

@protocol MCSceneryAnnotationDelegate <NSObject>
- (MCSceneryAnnotationCell *)mapView:(MapView *)arg1 viewForAnnotation:(MCSceneryAnnotation *)arg2;

@optional
- (void)mapViewDidFinishLoad:(MapView *)arg1;
- (void)mapView:(MapView *)arg1 didDeselectAnnotation:(MCSceneryAnnotation *)arg2;
- (void)mapView:(MapView *)arg1 didClickAnnotation:(MCSceneryAnnotation *)arg2;
- (void)mapView:(MapView *)arg1 didSelectAnnotation:(MCSceneryAnnotation *)arg2;
- (void)mapView:(MapView *)arg1 willSelectAnnotation:(MCSceneryAnnotation *)arg2;
- (void)mapView:(MapView *)arg1 didAddAnnotations:(NSArray *)arg2;
- (void)mapView:(MapView *)arg1 didUpdateWithIntersectedAnnotations:(NSArray *)arg2 unintersectedAnnotations:(NSArray *)arg3;
@end

