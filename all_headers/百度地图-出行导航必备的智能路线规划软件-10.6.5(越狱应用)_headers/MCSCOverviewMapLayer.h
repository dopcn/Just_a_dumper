//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface MCSCOverviewMapLayer : CALayer
{
    CALayer *_shapeLayer;
    CALayer *_ringLayer;
}

@property(retain, nonatomic) CALayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(retain, nonatomic) CALayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
- (void).cxx_destruct;
- (void)setShadow;
- (void)setFrame:(struct CGRect)arg1;
- (void)setup;
- (id)init;

@end

