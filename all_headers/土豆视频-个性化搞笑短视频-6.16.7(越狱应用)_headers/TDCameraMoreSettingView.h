//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol TDCameraMoreSettingDelegate;

@interface TDCameraMoreSettingView : UIView
{
    _Bool _changeTimeDuration;
    int _timeoutSecond;
    int _timeDuration;
    UILabel *_label11;
    UIButton *_button12;
    UIButton *_button13;
    UIButton *_button14;
    UIButton *_button15;
    UILabel *_label21;
    UIButton *_button22;
    UIButton *_button23;
    UIView *_bgView;
    id <TDCameraMoreSettingDelegate> _delegate;
}

@property(nonatomic) __weak id <TDCameraMoreSettingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool changeTimeDuration; // @synthesize changeTimeDuration=_changeTimeDuration;
@property(nonatomic) int timeDuration; // @synthesize timeDuration=_timeDuration;
@property(nonatomic) int timeoutSecond; // @synthesize timeoutSecond=_timeoutSecond;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *button23; // @synthesize button23=_button23;
@property(retain, nonatomic) UIButton *button22; // @synthesize button22=_button22;
@property(retain, nonatomic) UILabel *label21; // @synthesize label21=_label21;
@property(retain, nonatomic) UIButton *button15; // @synthesize button15=_button15;
@property(retain, nonatomic) UIButton *button14; // @synthesize button14=_button14;
@property(retain, nonatomic) UIButton *button13; // @synthesize button13=_button13;
@property(retain, nonatomic) UIButton *button12; // @synthesize button12=_button12;
@property(retain, nonatomic) UILabel *label11; // @synthesize label11=_label11;
- (void).cxx_destruct;
- (void)checkChangeTimeDuration:(_Bool)arg1;
- (void)clickbutton2:(id)arg1;
- (void)clickbutton1:(id)arg1;
- (void)tapOperation;
- (void)updateAllLabelLayout;
- (void)dismissView;
- (void)initData;
- (void)addSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

