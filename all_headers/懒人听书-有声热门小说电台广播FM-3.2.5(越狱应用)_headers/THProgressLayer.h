//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface THProgressLayer : CALayer
{
    UIColor *_backgroundTintColor;
    double _progress;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
- (void).cxx_destruct;
- (void)drawRectangleInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 withRadius:(double)arg3;
- (void)drawInContext:(struct CGContext *)arg1;

// Remaining properties
@property(retain, nonatomic) UIColor *borderTintColor; // @dynamic borderTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @dynamic progressTintColor;

@end

