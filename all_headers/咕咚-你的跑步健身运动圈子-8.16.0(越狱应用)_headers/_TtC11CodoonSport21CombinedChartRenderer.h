//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChartDataRendererBase.h"

@class NSArray, _TtC11CodoonSport17CombinedChartView;

@interface _TtC11CodoonSport21CombinedChartRenderer : ChartDataRendererBase
{
    // Error parsing type: , name: chart
    // Error parsing type: , name: drawValueAboveBarEnabled
    // Error parsing type: , name: drawBarShadowEnabled
    // Error parsing type: , name: _renderers
    // Error parsing type: , name: _drawOrder
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithAnimator:(id)arg1 viewPortHandler:(id)arg2;
@property(nonatomic, readonly) _Bool isDrawBarShadowEnabled;
@property(nonatomic, readonly) _Bool isDrawValueAboveBarEnabled;
@property(nonatomic, copy) NSArray *subRenderers;
- (id)getSubRendererWithIndex:(long long)arg1;
- (void)drawHighlightedWithContext:(struct CGContext *)arg1 indices:(id)arg2;
- (void)drawExtrasWithContext:(struct CGContext *)arg1;
- (void)drawValuesWithContext:(struct CGContext *)arg1;
- (void)drawDataWithContext:(struct CGContext *)arg1;
- (void)initBuffers;
- (id)initWithChart:(id)arg1 animator:(id)arg2 viewPortHandler:(id)arg3;
@property(nonatomic) _Bool drawBarShadowEnabled; // @synthesize drawBarShadowEnabled;
@property(nonatomic) _Bool drawValueAboveBarEnabled; // @synthesize drawValueAboveBarEnabled;
@property(nonatomic) __weak _TtC11CodoonSport17CombinedChartView *chart; // @synthesize chart;

@end

