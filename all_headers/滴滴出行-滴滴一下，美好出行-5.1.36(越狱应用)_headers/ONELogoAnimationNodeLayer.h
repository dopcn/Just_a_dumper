//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class ONELetterAnimationNode;

@interface ONELogoAnimationNodeLayer : CAShapeLayer
{
    ONELetterAnimationNode *_node;
    CAShapeLayer *_maskLayer;
    int _maskDirection;
    double _progress;
}

@property(nonatomic) int maskDirection; // @synthesize maskDirection=_maskDirection;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) ONELetterAnimationNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)layoutSublayers;

@end

