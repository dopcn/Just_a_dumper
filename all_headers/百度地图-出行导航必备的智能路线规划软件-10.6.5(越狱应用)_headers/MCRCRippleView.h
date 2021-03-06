//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray;

@interface MCRCRippleView : UIView
{
    CALayer *_animationLayer;
    NSMutableArray *_rippleLayerArray;
}

@property(retain, nonatomic) NSMutableArray *rippleLayerArray; // @synthesize rippleLayerArray=_rippleLayerArray;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (void).cxx_destruct;
- (_Bool)isAnimationing;
- (void)stopAnimation;
- (void)startAnimation;

@end

