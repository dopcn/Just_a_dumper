//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class UIImageView, UILabel;

@interface EasyLifeShopProgramsCell : GCBaseMarginCell
{
    UIImageView *_imageViewForLeft;
    UILabel *_labelForTitle;
    UILabel *_labelForContent;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *labelForContent; // @synthesize labelForContent=_labelForContent;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) UIImageView *imageViewForLeft; // @synthesize imageViewForLeft=_imageViewForLeft;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;

@end

