//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKHPXTableViewCell.h"

@class UIImageView, UILabel;

@interface TPKHPXPackagePromotionFoldTipCell : TPKHPXTableViewCell
{
    UILabel *_foldTipLabel;
    UIImageView *_rightArrowImageView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) UILabel *foldTipLabel; // @synthesize foldTipLabel=_foldTipLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupUI;

@end

