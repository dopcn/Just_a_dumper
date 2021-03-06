//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BCBaseCameraView.h"

#import "BCBeautyCustomAlertViewDelegate-Protocol.h"

@class CameraExpandableThemeListView, FilterModel, NSString, UIButton, UILabel;

@interface BCFilterCameraView : BCBaseCameraView <BCBeautyCustomAlertViewDelegate>
{
    UIButton *_cameraFilterButton;
    CameraExpandableThemeListView *_filterThemeView;
    FilterModel *_filterModel;
    UILabel *_filterTipLabel;
}

@property(retain, nonatomic) UILabel *filterTipLabel; // @synthesize filterTipLabel=_filterTipLabel;
@property(retain, nonatomic) FilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) CameraExpandableThemeListView *filterThemeView; // @synthesize filterThemeView=_filterThemeView;
@property(retain, nonatomic) UIButton *cameraFilterButton; // @synthesize cameraFilterButton=_cameraFilterButton;
- (void).cxx_destruct;
- (void)beautyCustomAlertView:(id)arg1 didPressedCancelButton:(id)arg2;
- (void)beautyCustomAlertView:(id)arg1 didPressedSettingBeautyCustomButton:(id)arg2;
- (void)showBeautyCustomAlertView;
- (void)dismissBGViewAnimation;
- (void)AuthorityEnableUIChange;
- (void)AuthorityNotDetermindUIChange;
- (void)AuthorityDenyUIChange;
- (void)rotateViewWithTransform:(struct CGAffineTransform)arg1;
- (void)hideFilterTipLabel;
- (void)showFilterTipLabel;
- (void)hideFilterThemeView;
- (void)showFilterThemeView;
- (void)updatePreviewIntoTheRatioOf3To4;
- (void)updatePreviewIntoTheRatioOf1To1;
- (void)configFilterSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

