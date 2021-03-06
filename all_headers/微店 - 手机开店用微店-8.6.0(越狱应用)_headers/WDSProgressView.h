//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UILabel;

@interface WDSProgressView : UIView <CAAnimationDelegate>
{
    UILabel *labelTwo;
    double _duration;
    double _lineWidth;
    CDUnknownBlockType _animationCompleteBlock;
    CAShapeLayer *_shapeLayer2;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) CAShapeLayer *shapeLayer2; // @synthesize shapeLayer2=_shapeLayer2;
@property(copy, nonatomic) CDUnknownBlockType animationCompleteBlock; // @synthesize animationCompleteBlock=_animationCompleteBlock;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)addLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)circleAnimationTypeOne;
- (void)initData;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

