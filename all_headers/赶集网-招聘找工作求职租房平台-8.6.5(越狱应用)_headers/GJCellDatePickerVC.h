//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJUIViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIPickerView;
@protocol GJCellPickerDelegate;

@interface GJCellDatePickerVC : GJUIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    int _pikerType;
    NSMutableArray *_firstDataSource;
    NSMutableArray *_secondDataSource;
    NSMutableArray *_thirdDataSource;
    NSMutableDictionary *_contenDict;
    id <GJCellPickerDelegate> _pickerDelegate;
    UIPickerView *_picker;
    long long _componentNum;
    long long _selectYear;
    long long _year;
    long long _month;
    long long _day;
}

@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long selectYear; // @synthesize selectYear=_selectYear;
@property(nonatomic) int pikerType; // @synthesize pikerType=_pikerType;
@property(nonatomic) long long componentNum; // @synthesize componentNum=_componentNum;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
@property(nonatomic) id <GJCellPickerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(retain, nonatomic) NSMutableDictionary *contenDict; // @synthesize contenDict=_contenDict;
@property(retain, nonatomic) NSMutableArray *thirdDataSource; // @synthesize thirdDataSource=_thirdDataSource;
@property(retain, nonatomic) NSMutableArray *secondDataSource; // @synthesize secondDataSource=_secondDataSource;
@property(retain, nonatomic) NSMutableArray *firstDataSource; // @synthesize firstDataSource=_firstDataSource;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)resetDateDaySourceWithMonth:(long long)arg1;
- (void)resetDateMonthSourceWithYear:(long long)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)getDaysInMonth:(long long)arg1 year:(long long)arg2;
- (void)goBack;
- (void)confirmAction:(id)arg1;
- (void)initPicker:(int)arg1;
- (void)viewDidLoad;
- (void)setContentDataWithArr:(id)arg1;
- (id)initWithType:(int)arg1 withComponentNum:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

