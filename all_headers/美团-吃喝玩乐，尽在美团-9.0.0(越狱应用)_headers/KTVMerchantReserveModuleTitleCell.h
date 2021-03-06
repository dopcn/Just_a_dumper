//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class NVJsonLabel, UIImageView, UILabel;

@interface KTVMerchantReserveModuleTitleCell : GCBaseMarginCell
{
    UILabel *_leftTitleLabel;
    NVJsonLabel *_rightRefundLabel;
    NVJsonLabel *_rightCountLabel;
    UIImageView *_leftImageView;
    UIImageView *_rightRefundImageView;
    UIImageView *_rightCountImageView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *rightCountImageView; // @synthesize rightCountImageView=_rightCountImageView;
@property(retain, nonatomic) UIImageView *rightRefundImageView; // @synthesize rightRefundImageView=_rightRefundImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) NVJsonLabel *rightCountLabel; // @synthesize rightCountLabel=_rightCountLabel;
@property(retain, nonatomic) NVJsonLabel *rightRefundLabel; // @synthesize rightRefundLabel=_rightRefundLabel;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRefundText:(id)arg1 andCountText:(id)arg2 andTips:(id)arg3;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellMarginType:(long long)arg3;

@end

