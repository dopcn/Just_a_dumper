//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CATextLayer;

@interface ScreenCaptureTipLayer : CALayer
{
    CATextLayer *_textLayer;
    CALayer *_roundedLayer;
}

@property(retain, nonatomic) CALayer *roundedLayer; // @synthesize roundedLayer=_roundedLayer;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void).cxx_destruct;
- (void)updateText:(id)arg1;
- (id)initWithText:(id)arg1;

@end

