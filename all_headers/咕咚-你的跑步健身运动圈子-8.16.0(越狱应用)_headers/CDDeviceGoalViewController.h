//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDDeviceCommonViewController.h"

#import "CDZoomablePickerViewDelegate-Protocol.h"

@class CDAccount, CDZoomablePickerView, JTLabel, NSLayoutConstraint, NSMutableArray, NSString, UIImageView, UILabel, UISwitch, UIView;

@interface CDDeviceGoalViewController : CDDeviceCommonViewController <CDZoomablePickerViewDelegate>
{
    long long _goalType;
    UIView *_goalContainerView;
    UIView *_goalTopContainerView;
    UIImageView *_iconImageView;
    UILabel *_goalTitleLabel;
    UILabel *_goalValueLabel;
    CDZoomablePickerView *_pickerView;
    UILabel *_unitLabel;
    UIView *_switchContainerView;
    UILabel *_switchTiltleLabel;
    JTLabel *_switchSubtitleLabel;
    UISwitch *_pedometerSwitch;
    NSLayoutConstraint *_heightOfFirstCell;
    NSLayoutConstraint *_topOfFirstCell;
    UIView *_goalTipsContainerView;
    UILabel *_goalTipsTitleLabel;
    UILabel *_goalTipsDetailLabel;
    CDAccount *_curUser;
    NSMutableArray *_datas;
    long long _goalValue;
    long long _goalValueIndex;
}

+ (id)controllerWithReq:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long goalValueIndex; // @synthesize goalValueIndex=_goalValueIndex;
@property(nonatomic) long long goalValue; // @synthesize goalValue=_goalValue;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) CDAccount *curUser; // @synthesize curUser=_curUser;
@property(nonatomic) __weak UILabel *goalTipsDetailLabel; // @synthesize goalTipsDetailLabel=_goalTipsDetailLabel;
@property(nonatomic) __weak UILabel *goalTipsTitleLabel; // @synthesize goalTipsTitleLabel=_goalTipsTitleLabel;
@property(nonatomic) __weak UIView *goalTipsContainerView; // @synthesize goalTipsContainerView=_goalTipsContainerView;
@property(retain, nonatomic) NSLayoutConstraint *topOfFirstCell; // @synthesize topOfFirstCell=_topOfFirstCell;
@property(retain, nonatomic) NSLayoutConstraint *heightOfFirstCell; // @synthesize heightOfFirstCell=_heightOfFirstCell;
@property(nonatomic) __weak UISwitch *pedometerSwitch; // @synthesize pedometerSwitch=_pedometerSwitch;
@property(retain, nonatomic) JTLabel *switchSubtitleLabel; // @synthesize switchSubtitleLabel=_switchSubtitleLabel;
@property(nonatomic) __weak UILabel *switchTiltleLabel; // @synthesize switchTiltleLabel=_switchTiltleLabel;
@property(nonatomic) __weak UIView *switchContainerView; // @synthesize switchContainerView=_switchContainerView;
@property(nonatomic) __weak UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(nonatomic) __weak CDZoomablePickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak UILabel *goalValueLabel; // @synthesize goalValueLabel=_goalValueLabel;
@property(nonatomic) __weak UILabel *goalTitleLabel; // @synthesize goalTitleLabel=_goalTitleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIView *goalTopContainerView; // @synthesize goalTopContainerView=_goalTopContainerView;
@property(nonatomic) __weak UIView *goalContainerView; // @synthesize goalContainerView=_goalContainerView;
@property(nonatomic) long long goalType; // @synthesize goalType=_goalType;
- (void).cxx_destruct;
- (id)pageCode;
- (_Bool)cd_prefersNavigationBarBottomLineHidden;
- (long long)getDeviceSportsGoal;
- (void)autoSaveValue;
- (void)showValue:(id)arg1;
- (void)deviceStateNotification:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)switchValueChanged:(id)arg1;
- (void)didNaviRightButtonClicked;
- (void)pickerView:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (id)fontOfTitleForCellAtRow:(unsigned long long)arg1 inPickerView:(id)arg2 progress:(double)arg3;
- (id)titleForCellAtRow:(unsigned long long)arg1 inPickerView:(id)arg2;
- (unsigned long long)numberOfRowsInPickerView:(id)arg1;
- (void)initData;
- (void)initOtherViews;
- (void)initPickerView;
- (void)initTypeViews;
- (void)initViews;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

