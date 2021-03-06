//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIDatePicker, UIPickerView;
@protocol JDJPPickViewDelegate;

@interface JDJPPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *_picker;
    UIDatePicker *_datePicker;
    long long *_currentRow;
    _Bool _isDatePicker;
    UIView *_maskView;
    id <JDJPPickViewDelegate> delegate;
    NSArray *_dataArr;
}

@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) id <JDJPPickViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool isDatePicker; // @synthesize isDatePicker=_isDatePicker;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)selectRow:(long long)arg1;
- (void)dateChanged:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)reloadComponent;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tapAction;
- (void)finishAction;
- (void)closeAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

