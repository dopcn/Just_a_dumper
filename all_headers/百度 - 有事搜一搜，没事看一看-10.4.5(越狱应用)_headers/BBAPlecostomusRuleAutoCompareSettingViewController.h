//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBATableViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class BBAPlecostomusAutoCompareTaskInfo, BBAPlecostomusRuleAutoCompareSettingModel, NSMutableArray, NSString, UIPickerView, UIView;
@protocol BBAPlecostomusRuleAutoCompareSettingViewControllerDelegate;

@interface BBAPlecostomusRuleAutoCompareSettingViewController : BBATableViewController <UIPickerViewDataSource, UIPickerViewDelegate, UIAlertViewDelegate>
{
    id <BBAPlecostomusRuleAutoCompareSettingViewControllerDelegate> _autoCompareSettingDelegate;
    BBAPlecostomusRuleAutoCompareSettingModel *_model;
    UIPickerView *_pickerView;
    UIView *_inputView;
    long long _selectedRowInPickerView;
    NSMutableArray *_taskTypeList;
    NSMutableArray *_startNumList;
    NSMutableArray *_endNumList;
    BBAPlecostomusAutoCompareTaskInfo *_originalTaskInfo;
}

@property(retain, nonatomic) BBAPlecostomusAutoCompareTaskInfo *originalTaskInfo; // @synthesize originalTaskInfo=_originalTaskInfo;
@property(retain, nonatomic) NSMutableArray *endNumList; // @synthesize endNumList=_endNumList;
@property(retain, nonatomic) NSMutableArray *startNumList; // @synthesize startNumList=_startNumList;
@property(retain, nonatomic) NSMutableArray *taskTypeList; // @synthesize taskTypeList=_taskTypeList;
@property(nonatomic) long long selectedRowInPickerView; // @synthesize selectedRowInPickerView=_selectedRowInPickerView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) BBAPlecostomusRuleAutoCompareSettingModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <BBAPlecostomusRuleAutoCompareSettingViewControllerDelegate> autoCompareSettingDelegate; // @synthesize autoCompareSettingDelegate=_autoCompareSettingDelegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)setupEndNumList;
- (unsigned long long)setupStartNumList;
- (unsigned long long)setupTaskTypeList;
- (void)pickerViewCancel:(id)arg1;
- (void)pickerViewDone:(id)arg1;
- (void)setupSubviews;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didClickLeftNavigationItem;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

