//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class JDImageView, UILabel;

@interface FinderArticleDetailCouponCell : JDFinderTableViewCell
{
    JDImageView *_couponImageView;
    UILabel *_discountTagLabel;
    UILabel *_discountLabel;
    UILabel *_quotaLabel;
    UILabel *_ruleLabel;
}

@property(retain, nonatomic) UILabel *ruleLabel; // @synthesize ruleLabel=_ruleLabel;
@property(retain, nonatomic) UILabel *quotaLabel; // @synthesize quotaLabel=_quotaLabel;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *discountTagLabel; // @synthesize discountTagLabel=_discountTagLabel;
@property(retain, nonatomic) JDImageView *couponImageView; // @synthesize couponImageView=_couponImageView;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

