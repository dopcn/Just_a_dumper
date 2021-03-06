//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSMutableArray, UIColor;

@interface TBCAudioVisualizer : UIView
{
    _Bool _shouldRoundCorner;
    UIColor *_barColor;
    CADisplayLink *_displayLink;
    long long _audioHeight;
    long long _barWidth;
    long long _barPading;
    NSMutableArray *_barArray;
}

@property(retain, nonatomic) NSMutableArray *barArray; // @synthesize barArray=_barArray;
@property(nonatomic) _Bool shouldRoundCorner; // @synthesize shouldRoundCorner=_shouldRoundCorner;
@property(nonatomic) long long barPading; // @synthesize barPading=_barPading;
@property(nonatomic) long long barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic) long long audioHeight; // @synthesize audioHeight=_audioHeight;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
- (void)layoutBarFrame;
@property(nonatomic) long long barNums;
- (void)showDefaultBars:(id)arg1;
- (void)onDisplay;
- (void)stop;
- (void)start;
- (id)initWithNumberOfBars:(int)arg1;
- (void)dealloc;

@end

