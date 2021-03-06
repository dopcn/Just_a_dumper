//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSImageSearchUIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIPickerView;
@protocol MISLotteryPickerViewDelegate;

@interface MISLotteryPickerView : MMSImageSearchUIView
{
    NSString *_selectedTitle;
    long long _selectedIndex;
    id <MISLotteryPickerViewDelegate> _delegate;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIPickerView *_pickerView;
    NSArray *_titleArray;
    NSLayoutConstraint *_topMarginLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *topMarginLayoutConstraint; // @synthesize topMarginLayoutConstraint=_topMarginLayoutConstraint;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) __weak UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MISLotteryPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)doneButtonClicked:(id)arg1;
- (long long)numberOfRowsInComponent;
- (void)resetTitleArray:(id)arg1;
- (void)resetTitleArray:(id)arg1 withDefaultTitle:(id)arg2;
- (void)hidden;
- (void)showInSuperView:(id)arg1 delegate:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;

@end

