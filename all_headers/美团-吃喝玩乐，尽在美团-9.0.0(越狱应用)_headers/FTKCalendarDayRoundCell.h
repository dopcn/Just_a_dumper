//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTKCalendarDayCell.h"

@class UILabel;

@interface FTKCalendarDayRoundCell : FTKCalendarDayCell
{
    long long _calendarType;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) long long calendarType; // @synthesize calendarType=_calendarType;
- (void).cxx_destruct;
- (void)updateUI;
- (void)prepareForReuse;
- (void)setupUI;
- (void)setSelected:(_Bool)arg1;
- (void)bindData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UILabel *iconLabel;

@end

