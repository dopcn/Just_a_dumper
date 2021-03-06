//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, STTableViewCellItem, UISwitch, UITextField;

@interface STTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UISwitch *_switchView;
    UITextField *_textField;
    STTableViewCellItem *_cellItem;
}

@property(retain, nonatomic) STTableViewCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (void)_switchActionFired:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

