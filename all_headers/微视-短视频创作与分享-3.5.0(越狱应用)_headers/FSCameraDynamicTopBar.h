//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FilterSlider, UIButton;
@protocol MCCameraBottomBarDelegate;

@interface FSCameraDynamicTopBar : UIView
{
    UIButton *_faceSmoothButton;
    UIButton *_vFaceEnlargeEyeBtn;
    UIButton *_dimissButton;
    FilterSlider *_filterSlider;
    id <MCCameraBottomBarDelegate> _delegate;
}

@property(nonatomic) __weak id <MCCameraBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FilterSlider *filterSlider; // @synthesize filterSlider=_filterSlider;
@property(retain, nonatomic) UIButton *dimissButton; // @synthesize dimissButton=_dimissButton;
@property(retain, nonatomic) UIButton *vFaceEnlargeEyeBtn; // @synthesize vFaceEnlargeEyeBtn=_vFaceEnlargeEyeBtn;
@property(retain, nonatomic) UIButton *faceSmoothButton; // @synthesize faceSmoothButton=_faceSmoothButton;
- (void).cxx_destruct;
- (void)dismissSlider:(_Bool)arg1;
- (void)showSlider:(_Bool)arg1;
- (void)touchButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

