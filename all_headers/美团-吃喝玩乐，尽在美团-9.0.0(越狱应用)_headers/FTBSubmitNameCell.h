//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class NSString, RACSignal, UIButton, UILabel, UITextField;

@interface FTBSubmitNameCell : GCBaseMarginCell
{
    RACSignal *_selectSignal;
    UITextField *_textFieldForName;
    NSString *_nameString;
    UILabel *_labelForTitle;
    UIButton *_buttonForMale;
    UIButton *_buttonForFemale;
    UILabel *_labelForName;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UILabel *labelForName; // @synthesize labelForName=_labelForName;
@property(retain, nonatomic) UIButton *buttonForFemale; // @synthesize buttonForFemale=_buttonForFemale;
@property(retain, nonatomic) UIButton *buttonForMale; // @synthesize buttonForMale=_buttonForMale;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(copy, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(readonly, nonatomic) UITextField *textFieldForName; // @synthesize textFieldForName=_textFieldForName;
@property(readonly, nonatomic) RACSignal *selectSignal; // @synthesize selectSignal=_selectSignal;
- (void).cxx_destruct;
- (void)textFieldDidEnd:(id)arg1;
- (void)layoutSubviews;
- (void)setCellState:(long long)arg1;
- (void)setSelected:(_Bool)arg1 ForButton:(id)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;

@end

