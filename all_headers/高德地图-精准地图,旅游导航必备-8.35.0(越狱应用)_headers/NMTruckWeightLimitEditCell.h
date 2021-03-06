//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMCarBaseCell.h"

@class UISwitch;
@protocol NMCarEditSwitchDelegate;

@interface NMTruckWeightLimitEditCell : NMCarBaseCell
{
    _Bool _switchStatus;
    id <NMCarEditSwitchDelegate> _switchDelegate;
    UISwitch *_switchButton;
}

@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(nonatomic) _Bool switchStatus; // @synthesize switchStatus=_switchStatus;
@property(nonatomic) __weak id <NMCarEditSwitchDelegate> switchDelegate; // @synthesize switchDelegate=_switchDelegate;
- (void).cxx_destruct;
- (void)refreshContentFrame;
- (void)layoutSubviews;
- (void)resetTitleFont:(id)arg1 textColor:(id)arg2;
- (void)resetTitle:(id)arg1;
- (void)cellBgClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

