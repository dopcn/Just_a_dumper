//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYBaseOrderTableCell.h"

@class MAYCustomIndicatorView, UIButton, UILabel;

@interface MAYGroupOrderTableCell : MAYBaseOrderTableCell
{
    UILabel *_timeLabel;
    MAYCustomIndicatorView *_refundIndicatorView;
    UIButton *_checkGroupBtn;
    UILabel *_cinemaNameL;
    UILabel *_cinemaNumberLabel;
}

@property(retain, nonatomic) UILabel *cinemaNumberLabel; // @synthesize cinemaNumberLabel=_cinemaNumberLabel;
@property(retain, nonatomic) UILabel *cinemaNameL; // @synthesize cinemaNameL=_cinemaNameL;
@property(retain, nonatomic) UIButton *checkGroupBtn; // @synthesize checkGroupBtn=_checkGroupBtn;
@property(retain, nonatomic) MAYCustomIndicatorView *refundIndicatorView; // @synthesize refundIndicatorView=_refundIndicatorView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)handleProgressIndicateBtn;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupGroupOrderViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

