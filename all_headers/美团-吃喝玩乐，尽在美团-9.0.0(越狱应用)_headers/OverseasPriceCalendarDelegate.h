//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADYearModeFlowCalendarViewDelegate.h"

@class HTKScrollViewFPSDelegate, OverseasPriceCalendarDateSourceAdapter;

@interface OverseasPriceCalendarDelegate : ADYearModeFlowCalendarViewDelegate
{
    OverseasPriceCalendarDateSourceAdapter *_adapter;
    CDUnknownBlockType _dayClickedBlock;
    HTKScrollViewFPSDelegate *_fpsReporter;
}

@property(retain, nonatomic) HTKScrollViewFPSDelegate *fpsReporter; // @synthesize fpsReporter=_fpsReporter;
@property(copy, nonatomic) CDUnknownBlockType dayClickedBlock; // @synthesize dayClickedBlock=_dayClickedBlock;
@property(retain, nonatomic) OverseasPriceCalendarDateSourceAdapter *adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)flowCalendarView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 dayModel:(id)arg3;
- (_Bool)flowCalendarView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 dayModel:(id)arg3;
- (_Bool)flowCalendarView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 dayModel:(id)arg3;
- (_Bool)canOperateOnDayModel:(id)arg1;
- (id)dayPriceStockInfoForDate:(id)arg1;

@end

