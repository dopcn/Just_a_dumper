//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWIBaseTableViewCell.h"

@class TWIHolidayTitleCellViewModel, UIButton;

@interface TWIHolidayTitleCell : TWIBaseTableViewCell
{
    UIButton *_titleButton;
    UIButton *_showMoreButton;
    TWIHolidayTitleCellViewModel *_mViewModel;
}

@property(retain, nonatomic) TWIHolidayTitleCellViewModel *mViewModel; // @synthesize mViewModel=_mViewModel;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_didClickShowMoreButton;
- (void)bindWithViewModel:(id)arg1;

@end

