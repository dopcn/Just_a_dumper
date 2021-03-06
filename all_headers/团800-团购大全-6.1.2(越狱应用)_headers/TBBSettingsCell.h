//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBBorderBaseCell.h"

#import "TBBAlertViewDelegate-Protocol.h"

@class UILabel, UISwitch;

@interface TBBSettingsCell : TBBBorderBaseCell <TBBAlertViewDelegate>
{
    UISwitch *_rightSwitch;
    UILabel *_titletextLabel;
    UILabel *_contenttextLabel;
    UILabel *_bindingLabel;
}

@property(retain, nonatomic) UILabel *bindingLabel; // @synthesize bindingLabel=_bindingLabel;
@property(retain) UISwitch *rightSwitch; // @synthesize rightSwitch=_rightSwitch;
@property(retain, nonatomic) UILabel *contenttextLabel; // @synthesize contenttextLabel=_contenttextLabel;
@property(retain, nonatomic) UILabel *titletextLabel; // @synthesize titletextLabel=_titletextLabel;
- (void).cxx_destruct;
- (void)switchValueChanged:(id)arg1;
- (void)setObject:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)getRightSwitchRect;
- (void)layoutSubviews;
- (void)tbbAlertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)haveSwitchedToState:(BOOL)arg1;
- (void)switchAction:(id)arg1;

@end

