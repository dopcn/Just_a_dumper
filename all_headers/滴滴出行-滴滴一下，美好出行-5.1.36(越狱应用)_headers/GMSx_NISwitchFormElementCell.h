//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_NIFormElementCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UISwitch;

@interface GMSx_NISwitchFormElementCell : GMSx_NIFormElementCell <UITextFieldDelegate>
{
    UISwitch *_switchControl;
}

@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (void)switchDidChangeValue;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

