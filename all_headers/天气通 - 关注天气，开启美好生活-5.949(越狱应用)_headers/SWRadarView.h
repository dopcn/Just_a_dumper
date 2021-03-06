//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface SWRadarView : UIView
{
    long long _status;
    CDUnknownBlockType _stopBlock;
    UIImageView *_backgroundImageView;
    UIImageView *_radarImageView;
    UIImageView *_breathImageView0;
    UIImageView *_breathImageView1;
    UIImageView *_targetImageView;
    UIImageView *_failImageView;
    NSMutableArray *_shiningDots;
    NSMutableArray *_shiningDotsCGPoints;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSMutableArray *shiningDotsCGPoints; // @synthesize shiningDotsCGPoints=_shiningDotsCGPoints;
@property(retain, nonatomic) NSMutableArray *shiningDots; // @synthesize shiningDots=_shiningDots;
@property(retain, nonatomic) UIImageView *failImageView; // @synthesize failImageView=_failImageView;
@property(retain, nonatomic) UIImageView *targetImageView; // @synthesize targetImageView=_targetImageView;
@property(retain, nonatomic) UIImageView *breathImageView1; // @synthesize breathImageView1=_breathImageView1;
@property(retain, nonatomic) UIImageView *breathImageView0; // @synthesize breathImageView0=_breathImageView0;
@property(retain, nonatomic) UIImageView *radarImageView; // @synthesize radarImageView=_radarImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)addAnimationForShiningDots;
- (id)breathAnimationGroup;
- (id)targetAnimation;
- (id)rotationStopAnimation;
- (id)rotationAnimation;
- (void)removeAllAnimations;
- (void)stopAnimations;
- (void)startAnimations;
- (struct CGPoint)pointAtIndex:(long long)arg1;
- (void)appendPointArrayWithCGPoint:(struct CGPoint)arg1;
- (void)createShiningDots;
- (void)initializeSubviews;
- (void)failedAnimations;
- (void)setTargetOrigin:(struct CGPoint)arg1;
- (void)adjustSubviewFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

