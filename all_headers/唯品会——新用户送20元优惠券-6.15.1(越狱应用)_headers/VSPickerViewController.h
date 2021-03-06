//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIPickerView, UIToolbar;
@protocol VSPickerDelegate;

@interface VSPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    float _componentHeight;
    float _componentWidth;
    NSMutableArray *_components;
    NSMutableArray *_componentViewIdentifiers;
    NSArray *_selection;
    id <VSPickerDelegate> _delegate;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    UIButton *_backgroundView;
    double _bottomMargin;
    struct CGRect _pickerFrame;
}

@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(retain, nonatomic) UIButton *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) float componentWidth; // @synthesize componentWidth=_componentWidth;
@property(nonatomic) float componentHeight; // @synthesize componentHeight=_componentHeight;
@property(nonatomic) struct CGRect pickerFrame; // @synthesize pickerFrame=_pickerFrame;
@property(nonatomic) __weak id <VSPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSMutableArray *componentViewIdentifiers; // @synthesize componentViewIdentifiers=_componentViewIdentifiers;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (void)updateSelection;
- (void)setupViewWithFrame:(struct CGRect)arg1;
- (void)confirmSelection:(id)arg1;
- (void)cancel:(id)arg1;
- (void)backgroundDidTap;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2;
- (void)setPickerViewHidden:(_Bool)arg1;
- (void)setComponent:(long long)arg1 withItems:(id)arg2;
- (void)reloadPickerViewData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

