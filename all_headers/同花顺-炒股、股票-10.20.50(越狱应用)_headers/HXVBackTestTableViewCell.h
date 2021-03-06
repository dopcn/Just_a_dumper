//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXVTableViewCell.h"

@class HXVBackTestCellViewModel, HXVTimeSharingView, UILabel, UIView;

@interface HXVBackTestTableViewCell : HXVTableViewCell
{
    UIView *_backView;
    HXVTimeSharingView *_timeSharingView;
    UILabel *_titleLabel;
    UILabel *_annualYieldTitleLabel;
    UILabel *_annualYieldLabel;
    UILabel *_winRateTitleLabel;
    UILabel *_winRateLabel;
    HXVBackTestCellViewModel *_viewModel;
}

@property(retain, nonatomic) HXVBackTestCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *winRateLabel; // @synthesize winRateLabel=_winRateLabel;
@property(retain, nonatomic) UILabel *winRateTitleLabel; // @synthesize winRateTitleLabel=_winRateTitleLabel;
@property(retain, nonatomic) UILabel *annualYieldLabel; // @synthesize annualYieldLabel=_annualYieldLabel;
@property(retain, nonatomic) UILabel *annualYieldTitleLabel; // @synthesize annualYieldTitleLabel=_annualYieldTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HXVTimeSharingView *timeSharingView; // @synthesize timeSharingView=_timeSharingView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)backViewClicked;
- (void)hxv_initializeViews;
- (void)hxv_autoLayoutViews;
- (void)bindViewModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

