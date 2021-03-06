//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIBezierPath, UIControl, UIImage, UIImageView;

@interface CDSportProgressiveRouteView : UIView <CAAnimationDelegate>
{
    _Bool _repeatAnimation;
    UIImage *_mapImage;
    UIImage *_routeImage;
    UIImage *_startImage;
    UIImage *_endImage;
    UIView *_mapView;
    UIControl *_control;
    UIBezierPath *_path;
    CAShapeLayer *_shapeLayer;
    UIImageView *_backView;
    UIImageView *_frontView;
    UIImageView *_startView;
    UIImageView *_endView;
    UIImageView *_dotView;
    CDUnknownBlockType _completion;
    double _duration;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    struct CGPoint _previousPoint;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGPoint previousPoint; // @synthesize previousPoint=_previousPoint;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIImageView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UIImageView *startView; // @synthesize startView=_startView;
@property(retain, nonatomic) UIImageView *frontView; // @synthesize frontView=_frontView;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) UIControl *control; // @synthesize control=_control;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) __weak UIView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool repeatAnimation; // @synthesize repeatAnimation=_repeatAnimation;
@property(retain, nonatomic) UIImage *endImage; // @synthesize endImage=_endImage;
@property(retain, nonatomic) UIImage *startImage; // @synthesize startImage=_startImage;
@property(retain, nonatomic) UIImage *routeImage; // @synthesize routeImage=_routeImage;
@property(retain, nonatomic) UIImage *mapImage; // @synthesize mapImage=_mapImage;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)cancelStroke;
- (void)strokeWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endTransaction;
- (void)enqueueAnimationWithBeginPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
- (_Bool)shouldEnqueuePoint:(struct CGPoint)arg1;
- (void)beginTransaction;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

