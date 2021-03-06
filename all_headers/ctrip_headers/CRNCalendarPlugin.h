//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRNPlugin.h"

#import "CTBasicCalendarViewControllerDelegate-Protocol.h"
#import "CTFloatingCalendarViewDelegate-Protocol.h"

@class CTFloatingCalendarView, NSMutableArray, NSString;

@interface CRNCalendarPlugin : CRNPlugin <CTBasicCalendarViewControllerDelegate, CTFloatingCalendarViewDelegate>
{
    CDUnknownBlockType _callback;
    CTFloatingCalendarView *_floatingCalendar;
    unsigned long long _selectedType;
    NSString *_leftLabel;
    NSString *_leftTip;
    NSString *_rightLabel;
    NSString *_rightTip;
    NSString *_originLeftLabel;
    NSMutableArray *_originSelectedDates;
}

@property(retain, nonatomic) NSMutableArray *originSelectedDates; // @synthesize originSelectedDates=_originSelectedDates;
@property(copy, nonatomic) NSString *originLeftLabel; // @synthesize originLeftLabel=_originLeftLabel;
@property(copy, nonatomic) NSString *rightTip; // @synthesize rightTip=_rightTip;
@property(copy, nonatomic) NSString *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(copy, nonatomic) NSString *leftTip; // @synthesize leftTip=_leftTip;
@property(copy, nonatomic) NSString *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) unsigned long long selectedType; // @synthesize selectedType=_selectedType;
@property(retain, nonatomic) CTFloatingCalendarView *floatingCalendar; // @synthesize floatingCalendar=_floatingCalendar;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)floatingCalendarView:(id)arg1 didDeselectedDay:(id)arg2;
- (id)floatingCalendarView:(id)arg1 bubbleWithSelectedDay:(id)arg2 dateView:(id)arg3 selectedDays:(id)arg4;
- (_Bool)floatingCalendarView:(id)arg1 highlightSectionWithBeginSelectedDay:(id)arg2 endSelectedDay:(id)arg3;
- (void)floatingCalendarView:(id)arg1 didSelectedDateView:(id)arg2 andSelectedDate:(id)arg3;
- (void)calendarViewController:(id)arg1 didSelectedDate:(id)arg2;
- (void)dismiss;
- (id)colorArrayForHex:(id)arg1;
- (id)colorFromStr:(id)arg1;
- (void)showCalendarWithParas:(id)arg1;
- (void)removeEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)callFunction:(id)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

