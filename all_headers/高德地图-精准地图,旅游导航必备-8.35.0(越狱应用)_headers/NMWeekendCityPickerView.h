//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBasePopupView.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UIPickerView, UIView;
@protocol NMWeekendCityPickerViewDataSource, NMWeekendCityPickerViewDelegate;

@interface NMWeekendCityPickerView : NMBasePopupView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UILabel *_titleLabel;
    UIPickerView *_pickerView;
    UIButton *_sureBtn;
    UIButton *_cancelBtn;
    UIView *_speratorView;
    id <NMWeekendCityPickerViewDataSource> _dataSourceDelegate;
    NSArray *_cityNames;
    NSArray *_currentDistrincNames;
}

@property(retain, nonatomic) NSArray *currentDistrincNames; // @synthesize currentDistrincNames=_currentDistrincNames;
@property(retain, nonatomic) NSArray *cityNames; // @synthesize cityNames=_cityNames;
@property(nonatomic) __weak id <NMWeekendCityPickerViewDataSource> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
- (void).cxx_destruct;
- (void)cancelBtnTouch:(id)arg1;
- (void)saveSelected:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)reloadNMData;
- (void)updateToPortraitSize;
- (id)initWithParent:(id)arg1 withIdfy:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NMWeekendCityPickerViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

