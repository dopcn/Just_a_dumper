//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJobBaseCell.h"

@class UIButton, UILabel, WBJobNotRepeatOptionModel;
@protocol WBJobNotRepeatOptionCellDelegate;

@interface WBJobNotRepeatOptionCell : WBJobBaseCell
{
    WBJobNotRepeatOptionModel *_model;
    UIButton *_repeateOptionCheckBtn;
    UILabel *_repeateOptionCheckLbl;
}

@property(retain, nonatomic) UILabel *repeateOptionCheckLbl; // @synthesize repeateOptionCheckLbl=_repeateOptionCheckLbl;
@property(retain, nonatomic) UIButton *repeateOptionCheckBtn; // @synthesize repeateOptionCheckBtn=_repeateOptionCheckBtn;
@property(retain, nonatomic) WBJobNotRepeatOptionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)repeatOptionClickHandler;
- (void)initSubview;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <WBJobNotRepeatOptionCellDelegate> delegate;

@end

