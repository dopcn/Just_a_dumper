//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface HourPointImageLayer : CALayer
{
    NSArray *_pointArr;
}

@property(retain, nonatomic) NSArray *pointArr; // @synthesize pointArr=_pointArr;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawPoint:(id)arg1;

@end

