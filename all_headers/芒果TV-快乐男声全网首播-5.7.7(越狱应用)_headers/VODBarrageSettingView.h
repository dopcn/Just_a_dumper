//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UISlider, UISwitch;
@protocol VODBarrageSettingDelegate;

@interface VODBarrageSettingView : UIView
{
    _Bool _isShow;
    id <VODBarrageSettingDelegate> _delegate;
    NSLayoutConstraint *_widthConstraint;
    UISwitch *_speedSwitch;
    UISlider *_barrageSlider;
    UISlider *_lightSlider;
    UISlider *_soundSlider;
    NSLayoutConstraint *_trailingConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(nonatomic) __weak UISlider *soundSlider; // @synthesize soundSlider=_soundSlider;
@property(nonatomic) __weak UISlider *lightSlider; // @synthesize lightSlider=_lightSlider;
@property(nonatomic) __weak UISlider *barrageSlider; // @synthesize barrageSlider=_barrageSlider;
@property(nonatomic) __weak UISwitch *speedSwitch; // @synthesize speedSwitch=_speedSwitch;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) __weak id <VODBarrageSettingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeSound:(id)arg1;
- (void)changeScreenLight:(id)arg1;
- (void)dynamicBarrageRows:(id)arg1;
- (void)changeBarrageRows:(id)arg1;
- (void)changeSpeedStatus:(id)arg1;
- (void)panAction;
- (void)showAnimation:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)awakeFromNib;

@end

