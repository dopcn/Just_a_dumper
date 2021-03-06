//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class GCShopStar, NVModelBaseBabyEduShopInfo, UIImageView, UILabel;

@interface BabyEduHeadTitleInfoCell : GCBaseMarginCell
{
    NVModelBaseBabyEduShopInfo *_eduShopInfo;
    UILabel *_titleLabel;
    UIImageView *_qualityView;
    GCShopStar *_shopStar;
    UILabel *_countLabel;
    UILabel *_regionLabel;
    UILabel *_categoryLabel;
    double _baseHeight;
}

@property(nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UILabel *regionLabel; // @synthesize regionLabel=_regionLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) GCShopStar *shopStar; // @synthesize shopStar=_shopStar;
@property(retain, nonatomic) UIImageView *qualityView; // @synthesize qualityView=_qualityView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NVModelBaseBabyEduShopInfo *eduShopInfo; // @synthesize eduShopInfo=_eduShopInfo;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)layoutSelf;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;

@end

