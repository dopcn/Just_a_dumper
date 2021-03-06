//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView;

@interface MJLSelectCityPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *_pickerView;
    UIView *_pickerContainerView;
    NSArray *_provinceArray;
    NSArray *_cityArray;
    NSArray *_districtArray;
    CDUnknownBlockType _block;
    long long _component0;
    long long _component1;
    long long _component2;
}

@property(nonatomic) long long component2; // @synthesize component2=_component2;
@property(nonatomic) long long component1; // @synthesize component1=_component1;
@property(nonatomic) long long component0; // @synthesize component0=_component0;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSArray *districtArray; // @synthesize districtArray=_districtArray;
@property(retain, nonatomic) NSArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) NSArray *provinceArray; // @synthesize provinceArray=_provinceArray;
@property(retain, nonatomic) UIView *pickerContainerView; // @synthesize pickerContainerView=_pickerContainerView;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)p_tapCancel;
- (void)appendOldStr:(id)arg1 newStr:(id)arg2;
- (void)p_tapSelect;
- (void)dismissFromView;
- (void)showInView:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)initActionButton;
- (id)getDistrictFromParentDic:(id)arg1;
- (id)getCitysFromParentId:(id)arg1;
- (void)initData;
- (void)initMaskLayerView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

