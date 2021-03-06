//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WBPickerUpIndexDataDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIPickerView, WBPickerDataManger, WBPickerViewModel, WBPickerWheelModel;
@protocol WBPickerUpIndexDataDelegate;

@interface WBPickerKeyBoardView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, WBPickerUpIndexDataDelegate>
{
    CDUnknownBlockType _returnBlock;
    id <WBPickerUpIndexDataDelegate> _btnDelegate;
    UIView *_headerView;
    UIView *_sureButton;
    UILabel *_sureLab;
    UILabel *_suggestLab;
    UIPickerView *_dateChoose;
    WBPickerDataManger *_dataManager;
    WBPickerWheelModel *_wheelModel;
    WBPickerViewModel *_needModel;
    NSMutableArray *_floorArray;
}

@property(retain, nonatomic) NSMutableArray *floorArray; // @synthesize floorArray=_floorArray;
@property(retain, nonatomic) WBPickerViewModel *needModel; // @synthesize needModel=_needModel;
@property(retain, nonatomic) WBPickerWheelModel *wheelModel; // @synthesize wheelModel=_wheelModel;
@property(retain, nonatomic) WBPickerDataManger *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak UIPickerView *dateChoose; // @synthesize dateChoose=_dateChoose;
@property(nonatomic) __weak UILabel *suggestLab; // @synthesize suggestLab=_suggestLab;
@property(nonatomic) __weak UILabel *sureLab; // @synthesize sureLab=_sureLab;
@property(nonatomic) __weak UIView *sureButton; // @synthesize sureButton=_sureButton;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WBPickerUpIndexDataDelegate> btnDelegate; // @synthesize btnDelegate=_btnDelegate;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSeparatorWithView:(id)arg1;
- (void)initBoderHeaderView;
- (void)requireUpdateFloorArrayByRow:(long long)arg1;
- (void)updateResultData;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)updateDataSourceFromIndex:(unsigned long long)arg1 toIndex:(long long)arg2;
- (void)updateDataSourceByIndex:(unsigned long long)arg1;
- (long long)checkCompleteButtonState;
- (long long)checkDefaultValue;
- (id)getResultString;
- (void)showLogByIndex:(long long)arg1;
- (void)chooseButtonTouchHandler;
- (void)clickDummyButtonAndReturnResultStr;
- (id)initWithDataManager:(id)arg1 withFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

