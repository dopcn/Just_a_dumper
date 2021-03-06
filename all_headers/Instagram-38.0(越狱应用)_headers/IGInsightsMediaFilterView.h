//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGInsightsMediaFilterHeaderViewDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class IGInsightsContentRowListView, IGInsightsMediaFilterHeaderView, NSArray, NSString, UIPickerView;
@protocol IGInsightsContentRowListViewDelegate, IGInsightsMediaFilterViewDelegate;

@interface IGInsightsMediaFilterView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, IGInsightsMediaFilterHeaderViewDelegate>
{
    _Bool _isStory;
    unsigned long long _activeMediaTypeIndex;
    unsigned long long _activeDataOrderingIndex;
    unsigned long long _activeTimeframeIndex;
    NSArray *_mediaTypes;
    NSArray *_dataOrderings;
    NSArray *_timeframes;
    id <IGInsightsMediaFilterViewDelegate> _delegate;
    id <IGInsightsContentRowListViewDelegate> _educationViewDelegate;
    IGInsightsContentRowListView *_educationView;
    UIPickerView *_pickerView;
    UIView *_educationUnitSeparator;
    IGInsightsMediaFilterHeaderView *_headerView;
    NSArray *_components;
}

+ (id)createEducationViewWithEducationalUnit:(id)arg1;
@property(readonly, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, nonatomic) _Bool isStory; // @synthesize isStory=_isStory;
@property(retain, nonatomic) IGInsightsMediaFilterHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *educationUnitSeparator; // @synthesize educationUnitSeparator=_educationUnitSeparator;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) IGInsightsContentRowListView *educationView; // @synthesize educationView=_educationView;
@property(nonatomic) __weak id <IGInsightsContentRowListViewDelegate> educationViewDelegate; // @synthesize educationViewDelegate=_educationViewDelegate;
@property(nonatomic) __weak id <IGInsightsMediaFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *timeframes; // @synthesize timeframes=_timeframes;
@property(copy, nonatomic) NSArray *dataOrderings; // @synthesize dataOrderings=_dataOrderings;
@property(copy, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property(nonatomic) unsigned long long activeTimeframeIndex; // @synthesize activeTimeframeIndex=_activeTimeframeIndex;
@property(nonatomic) unsigned long long activeDataOrderingIndex; // @synthesize activeDataOrderingIndex=_activeDataOrderingIndex;
@property(nonatomic) unsigned long long activeMediaTypeIndex; // @synthesize activeMediaTypeIndex=_activeMediaTypeIndex;
- (void).cxx_destruct;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)filterHeaderViewDidTapApply:(id)arg1;
- (void)collapseEducationView;
- (unsigned long long)indexInComponents:(id)arg1;
- (void)setTimeFrames:(id)arg1;
- (void)setupComponentsArrayAndReload;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupComponentsArray;
- (id)initWithMediaTypes:(id)arg1 dataOrderings:(id)arg2 timeframes:(id)arg3 isStory:(_Bool)arg4 educationalUnit:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

