//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIBezierPath, UIImageView;

@interface MLRoomAtmosphereView : UIView
{
    _Bool _loop;
    int _loopCount;
    int _animationCount;
    long long _animationType;
    UIImageView *_backgroundView;
    NSArray *_lights;
    UIBezierPath *_lightsPath;
    CDUnknownBlockType _animationCompletion;
}

@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(copy, nonatomic) CDUnknownBlockType animationCompletion; // @synthesize animationCompletion=_animationCompletion;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(copy, nonatomic) UIBezierPath *lightsPath; // @synthesize lightsPath=_lightsPath;
@property(copy, nonatomic) NSArray *lights; // @synthesize lights=_lights;
@property(nonatomic) __weak UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (id)lightAtIndex:(long long)arg1;
- (long long)horizontalLightCount;
- (void)startAnimatingLoop:(_Bool)arg1 loopCount:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performDiamondAnimation;
- (void)performFlowAnimation;
- (void)stopAnimating;
- (void)layoutSubviews;
- (void)setupAtmosphereView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 animationType:(long long)arg2;

@end

