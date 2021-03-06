//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EZPlot.h"

#import "EZAudioDisplayLinkDelegate-Protocol.h"

@class EZAudioDisplayLink, EZAudioPlotWaveformLayer, NSString;

@interface EZAudioPlot : EZPlot <EZAudioDisplayLinkDelegate>
{
    _Bool _shouldOptimizeForRealtimePlot;
    _Bool _shouldCenterYAxis;
    unsigned int _pointCount;
    EZAudioPlotWaveformLayer *_waveformLayer;
    EZAudioDisplayLink *_displayLink;
    CDStruct_3bcacdbf *_historyInfo;
    struct CGPoint *_points;
}

@property(nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
@property(nonatomic) CDStruct_3bcacdbf *historyInfo; // @synthesize historyInfo=_historyInfo;
@property(retain, nonatomic) EZAudioDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) EZAudioPlotWaveformLayer *waveformLayer; // @synthesize waveformLayer=_waveformLayer;
@property(nonatomic) _Bool shouldCenterYAxis; // @synthesize shouldCenterYAxis=_shouldCenterYAxis;
@property(nonatomic) _Bool shouldOptimizeForRealtimePlot; // @synthesize shouldOptimizeForRealtimePlot=_shouldOptimizeForRealtimePlot;
- (void).cxx_destruct;
- (void)displayLinkNeedsDisplay:(id)arg1;
- (_Bool)isDeviceOriginFlipped;
- (int)maximumRollingHistoryLength;
- (int)initialPointCount;
- (int)defaultRollingHistoryLength;
- (int)setRollingHistoryLength:(int)arg1;
- (int)rollingHistoryLength;
- (void)setSampleData:(float *)arg1 length:(int)arg2;
- (void)updateBuffer:(float *)arg1 withBufferSize:(unsigned int)arg2;
- (struct CGPath *)createPathWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned int)arg2 inRect:(struct CGRect)arg3;
- (void)redraw;
- (void)clear;
- (void)setShouldFill:(_Bool)arg1;
- (void)setColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)resetHistoryBuffers;
- (void)setupPlot;
- (void)initPlot;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

