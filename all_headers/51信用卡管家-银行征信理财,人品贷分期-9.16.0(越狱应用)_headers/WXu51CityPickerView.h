//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIPickerView;

@interface WXu51CityPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    NSArray *_cityArray;
    NSArray *_countryArray;
    UIView *_pickerBackView;
    unsigned long long _pickerType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    NSDictionary *_allCityData;
    NSArray *_proviceArray;
    long long _provinceIndex;
    long long _cityIndex;
    long long _countryIndex;
}

+ (id)cityPickerView;
@property(nonatomic) long long countryIndex; // @synthesize countryIndex=_countryIndex;
@property(nonatomic) long long cityIndex; // @synthesize cityIndex=_cityIndex;
@property(nonatomic) long long provinceIndex; // @synthesize provinceIndex=_provinceIndex;
@property(retain, nonatomic) NSArray *proviceArray; // @synthesize proviceArray=_proviceArray;
@property(retain, nonatomic) NSDictionary *allCityData; // @synthesize allCityData=_allCityData;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long pickerType; // @synthesize pickerType=_pickerType;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)_showWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithData:(id)arg1;
- (void)show;
- (void)hidden;
- (void)surePress;
- (void)cancnlePress;
- (id)getCitysWithKey:(id)arg1;
- (void)_getSelectRowWithSelectData:(id)arg1;
- (id)getSelectRowData;
- (void)_updateWithProviceIndex:(long long)arg1 cityIndex:(long long)arg2 countryIndex:(long long)arg3;
- (void)_retSetUI;
- (void)_initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

