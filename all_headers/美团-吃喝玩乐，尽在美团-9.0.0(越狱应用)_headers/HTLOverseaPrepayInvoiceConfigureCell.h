//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVBaseCellProtocol-Protocol.h"

@class NSString, UILabel, UISwitch;

@interface HTLOverseaPrepayInvoiceConfigureCell : UITableViewCell <NVBaseCellProtocol>
{
    UILabel *_titleLabel;
    CDUnknownBlockType _didTapSwitchControl;
    UISwitch *_switchControl;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(copy, nonatomic) CDUnknownBlockType didTapSwitchControl; // @synthesize didTapSwitchControl=_didTapSwitchControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureSwitchControl:(_Bool)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

