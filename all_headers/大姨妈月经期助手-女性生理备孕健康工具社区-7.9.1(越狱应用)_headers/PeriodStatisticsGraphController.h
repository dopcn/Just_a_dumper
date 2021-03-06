//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DUIViewController.h"

#import "LineGraphViewDelegate-Protocol.h"

@class LineGraphView, NSArray, NSString;

@interface PeriodStatisticsGraphController : DUIViewController <LineGraphViewDelegate>
{
    LineGraphView *_periodGraph;
    NSArray *_dataSource;
}

@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak LineGraphView *periodGraph; // @synthesize periodGraph=_periodGraph;
- (void).cxx_destruct;
- (double)minValue:(id)arg1;
- (double)maxValue:(id)arg1;
- (id)lineGraphView:(id)arg1 line:(id)arg2 textAtIndex:(long long)arg3;
- (double)lineGraphView:(id)arg1 line:(id)arg2 valueAtIndex:(long long)arg3;
- (id)lineGraphView:(id)arg1 datelineStringAtIndex:(long long)arg2;
- (long long)lineGraphViewNumberOfDatelines:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)back;
- (void)refresh;
- (void)viewWillAppear:(_Bool)arg1;
- (id)lineGraphViewWithFrame:(struct CGRect)arg1;
- (void)initViews;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

