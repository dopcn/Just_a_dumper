//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PLCellContentView.h"

@class NSLayoutConstraint, UILabel, UIView, YYLabel;

@interface QBPayRecordeCell : PLCellContentView
{
    UILabel *_titleLabel;
    YYLabel *_decrLabel;
    UILabel *_rightLabel;
    UIView *_bottomLineView;
    NSLayoutConstraint *_righeLabelWidthConstraints;
    NSLayoutConstraint *_descLabelHeightConstraints;
}

@property(nonatomic) __weak NSLayoutConstraint *descLabelHeightConstraints; // @synthesize descLabelHeightConstraints=_descLabelHeightConstraints;
@property(nonatomic) __weak NSLayoutConstraint *righeLabelWidthConstraints; // @synthesize righeLabelWidthConstraints=_righeLabelWidthConstraints;
@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(nonatomic) __weak YYLabel *decrLabel; // @synthesize decrLabel=_decrLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (double)cellHeight:(id)arg1;
- (void)bindData:(id)arg1;
- (void)setupUI;
- (void)awakeFromNib;
- (void)dealloc;

@end

