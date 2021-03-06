//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MCDayViewDelegate-Protocol.h"

@class MCDayView, NSArray, NSMutableArray, NSString, YLDate;
@protocol MCTXCardDetailViewDelegate;

@interface MCTXCardDetailView : UIView <MCDayViewDelegate>
{
    _Bool _isFirst;
    _Bool _isAnimation;
    id <MCTXCardDetailViewDelegate> _delegate;
    NSArray *_allKeys;
    YLDate *_selectedDate;
    NSMutableArray *_calViews;
    NSMutableArray *_dayViewsArrays;
    NSArray *_allDayView;
    MCDayView *_selectedDayView;
    NSArray *_calViewFrames;
}

@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(copy, nonatomic) NSArray *calViewFrames; // @synthesize calViewFrames=_calViewFrames;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) MCDayView *selectedDayView; // @synthesize selectedDayView=_selectedDayView;
@property(copy, nonatomic) NSArray *allDayView; // @synthesize allDayView=_allDayView;
@property(retain, nonatomic) NSMutableArray *dayViewsArrays; // @synthesize dayViewsArrays=_dayViewsArrays;
@property(retain, nonatomic) NSMutableArray *calViews; // @synthesize calViews=_calViews;
@property(retain, nonatomic) YLDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(copy, nonatomic) NSArray *allKeys; // @synthesize allKeys=_allKeys;
@property(nonatomic) __weak id <MCTXCardDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dayViewByTap:(id)arg1;
- (void)resetWeekSelectedDate:(id)arg1;
- (void)resetSelectedDate:(id)arg1;
- (void)becomeMonthShow;
- (void)becomeWeekShow;
- (void)updateWeekViewFrame;
- (void)moveToWeekToday;
- (void)moveToToday;
- (void)moveEndViewWith:(double)arg1;
- (void)moveCalViewWith:(double)arg1;
- (double)computeHeight;
- (void)setupAllData;
- (double)computeCalHeightWithIndex:(long long)arg1;
- (void)moveToRight;
- (void)moveToLeft;
- (void)moveToCenter;
- (void)updateDayViews:(id)arg1 withDate:(id)arg2;
- (void)updateAllSubViewWithDate:(id)arg1;
- (void)firstSetupAllDate;
- (void)resetWeekCalViewFrame;
- (void)resetCalViewFrame;
- (void)reinitAllSubView;
- (void)initAllSubView;
- (void)layoutSubviews;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

