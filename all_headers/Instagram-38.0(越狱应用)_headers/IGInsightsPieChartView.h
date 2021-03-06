//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CPTPlotDataSource-Protocol.h"
#import "IGChartView-Protocol.h"

@class CPTGraphHostingView, IGInsightsChartViewConfiguration, IGSimpleChartData, NSArray, NSString;

@interface IGInsightsPieChartView : UIView <CPTPlotDataSource, IGChartView>
{
    _Bool _shouldShowLabel;
    IGInsightsChartViewConfiguration *_configuration;
    CPTGraphHostingView *_hostingView;
    NSArray *_legendItems;
    NSArray *_legendSeparators;
    UIView *_bottomSeparator;
    IGSimpleChartData *_chartData;
    NSArray *_colors;
}

@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) IGSimpleChartData *chartData; // @synthesize chartData=_chartData;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(readonly, copy, nonatomic) NSArray *legendSeparators; // @synthesize legendSeparators=_legendSeparators;
@property(readonly, copy, nonatomic) NSArray *legendItems; // @synthesize legendItems=_legendItems;
@property(readonly, nonatomic) CPTGraphHostingView *hostingView; // @synthesize hostingView=_hostingView;
@property(readonly, nonatomic) IGInsightsChartViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool shouldShowLabel; // @synthesize shouldShowLabel=_shouldShowLabel;
- (void).cxx_destruct;
- (id)sliceFillForPieChart:(id)arg1 recordIndex:(unsigned long long)arg2;
- (id)numberForPlot:(id)arg1 field:(unsigned long long)arg2 recordIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfRecordsForPlot:(id)arg1;
- (void)layoutLegendItemsStartAtY:(double)arg1;
- (double)getLegendLabelHeightSumWithSize:(struct CGSize)arg1;
- (void)setupLegendItemSeparators:(unsigned long long)arg1;
- (void)setupLegendItems;
- (void)generatePiePlot;
- (void)setupColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithChartData:(id)arg1 configuration:(id)arg2;
- (id)initWithChartData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

