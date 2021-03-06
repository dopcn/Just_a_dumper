//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMOverlay.h"

@class NSMutableArray;

@interface QMAnnotationOverlay : QMOverlay
{
    NSMutableArray *_annotationViewArray;
    NSMutableArray *_annotationArray;
}

@property(retain, nonatomic) NSMutableArray *annotationArray; // @synthesize annotationArray=_annotationArray;
@property(retain, nonatomic) NSMutableArray *annotationViewArray; // @synthesize annotationViewArray=_annotationViewArray;
- (void).cxx_destruct;
- (_Bool)onClickAnnotation:(id)arg1;
- (void)updateAnnotation:(id)arg1 scale:(double)arg2 duration:(double)arg3 delay:(double)arg4 curveType:(long long)arg5 completion:(CDUnknownBlockType)arg6 bNeedCallback:(_Bool)arg7;
- (void)updateAnnotationDispLevel:(id)arg1 dispLevel:(int)arg2;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 mapPoint:(struct _TXMapPoint)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 bNeedCallback:(_Bool)arg6;
- (void)updateAnnotation:(id)arg1 mapPoint:(struct _TXMapPoint)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6 bNeedCallback:(_Bool)arg7;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 bNeedCallback:(_Bool)arg6;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4 bNeedCallback:(_Bool)arg5;
- (void)updateAnnotation:(id)arg1 mapPoint:(struct _TXMapPoint)arg2 duration:(double)arg3 animated:(_Bool)arg4 bNeedCallback:(_Bool)arg5;
- (void)updateAnnotation:(id)arg1 imageIcon:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)updateAnnotation:(id)arg1 imageName:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)hide;
- (void)clickLeftAccessory:(id)arg1;
- (int)type;
- (void)accessoryControlTapped:(id)arg1;
- (void)clickCalloutView:(id)arg1;
- (void)doLoad;
- (id)itemIdForAnnotation:(void *)arg1;
- (id)viewForAnnotation:(id)arg1;
- (id)viewForAnnotation:(id)arg1 reusingView:(id)arg2;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;
- (id)init;
- (void)addLongPressAnnotation:(id)arg1;
- (void)removeAnnotationViewNoNeedReload:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotationNoNeedReload:(id)arg1 animated:(_Bool)arg2;
- (void)addAnnotationNoNeedReload:(id)arg1;
- (void)addAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)addAnnotation:(id)arg1;

@end

