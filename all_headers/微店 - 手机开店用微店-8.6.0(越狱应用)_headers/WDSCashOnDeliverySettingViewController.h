//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSAssureAgreeViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIView;

@interface WDSCashOnDeliverySettingViewController : WDSAssureAgreeViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UILabel *_rateLabel;
    UILabel *_protocolLabel2;
    UIView *_pickerView;
    UIButton *_priceRateButton;
    NSString *_selectedRate;
}

@property(retain, nonatomic) NSString *selectedRate; // @synthesize selectedRate=_selectedRate;
@property(retain, nonatomic) UIButton *priceRateButton; // @synthesize priceRateButton=_priceRateButton;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UILabel *protocolLabel2; // @synthesize protocolLabel2=_protocolLabel2;
@property(retain, nonatomic) UILabel *rateLabel; // @synthesize rateLabel=_rateLabel;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)hideDatePicker;
- (void)selectPriceRate;
- (void)priceRateClicked:(id)arg1;
- (void)agreeSwitched:(id)arg1;
- (void)openFailed:(id)arg1;
- (void)openSuccessfully:(id)arg1;
- (void)modifyCashOnDeliveryStatus;
- (void)smartUpdate;
- (void)didReceiveMemoryWarning;
- (void)wdUpdateDesc;
- (void)setFeeRateEnableStatusAnimated:(_Bool)arg1;
- (void)generateViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

