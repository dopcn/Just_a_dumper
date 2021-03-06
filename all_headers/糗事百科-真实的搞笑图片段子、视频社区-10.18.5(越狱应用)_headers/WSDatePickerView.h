//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSDate, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIColor, UILabel, UIPickerView;

@interface WSDatePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, UIGestureRecognizerDelegate>
{
    NSMutableArray *_yearArray;
    NSMutableArray *_monthArray;
    NSMutableArray *_dayArray;
    NSMutableArray *_hourArray;
    NSMutableArray *_minuteArray;
    NSString *_dateFormatter;
    long long yearIndex;
    long long monthIndex;
    long long dayIndex;
    long long hourIndex;
    long long minuteIndex;
    long long preRow;
    NSDate *_startDate;
    int _datePickerStyle;
    UIColor *_doneButtonColor;
    UIColor *_dateLabelColor;
    UIColor *_datePickerColor;
    NSDate *_maxLimitDate;
    NSDate *_minLimitDate;
    UIColor *_yearLabelColor;
    UIView *_buttomView;
    UILabel *_showYearView;
    UIButton *_doneBtn;
    NSLayoutConstraint *_bottomConstraint;
    UIPickerView *_datePicker;
    NSDate *_scrollToDate;
    CDUnknownBlockType _doneBlock;
}

@property(nonatomic) int datePickerStyle; // @synthesize datePickerStyle=_datePickerStyle;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) NSDate *scrollToDate; // @synthesize scrollToDate=_scrollToDate;
@property(retain, nonatomic) UIPickerView *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(nonatomic) __weak UILabel *showYearView; // @synthesize showYearView=_showYearView;
@property(nonatomic) __weak UIView *buttomView; // @synthesize buttomView=_buttomView;
@property(retain, nonatomic) UIColor *yearLabelColor; // @synthesize yearLabelColor=_yearLabelColor;
@property(retain, nonatomic) NSDate *minLimitDate; // @synthesize minLimitDate=_minLimitDate;
@property(retain, nonatomic) NSDate *maxLimitDate; // @synthesize maxLimitDate=_maxLimitDate;
@property(retain, nonatomic) UIColor *datePickerColor; // @synthesize datePickerColor=_datePickerColor;
@property(retain, nonatomic) UIColor *dateLabelColor; // @synthesize dateLabelColor=_dateLabelColor;
@property(retain, nonatomic) UIColor *doneButtonColor; // @synthesize doneButtonColor=_doneButtonColor;
- (void).cxx_destruct;
- (void)getNowDate:(id)arg1 animated:(_Bool)arg2;
- (void)setdayArray:(long long)arg1;
- (long long)DaysfromYear:(long long)arg1 andMonth:(long long)arg2;
- (void)doneAction:(id)arg1;
- (void)dismiss;
- (void)show;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)yearChange:(long long)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)getNumberOfRowsInComponent;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)setArray:(id)arg1;
- (void)addLabelWithName:(id)arg1;
- (void)defaultConfig;
- (void)setupUI;
- (id)initWithDateStyle:(int)arg1 scrollToDate:(id)arg2 CompleteBlock:(CDUnknownBlockType)arg3;
- (id)initWithDateStyle:(int)arg1 CompleteBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

