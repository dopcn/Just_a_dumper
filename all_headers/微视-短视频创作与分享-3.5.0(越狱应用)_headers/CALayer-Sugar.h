//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (Sugar)
+ (void)load;
- (void)updateReverseAnimation:(id)arg1;
- (void)setAnimationTime:(double)arg1;
- (void)resetState;
- (void)revertAnimation:(double)arg1 duration:(double)arg2 complete:(CDUnknownBlockType)arg3;
- (void)revertAnimation:(double)arg1 complete:(CDUnknownBlockType)arg2;
- (void)playAnimation:(double)arg1;
- (void)playAnimation;
- (void)pauseAnimation;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (CDUnknownBlockType)animationDidReverseToEnd;
- (void)setAnimationDidReverseToEnd:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool animationReversed;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void)swizzle_addAnimation:(id)arg1 forKey:(id)arg2;
@end

