//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BusBaseTableViewCell.h"

@class UIButton, UILabel;

@interface BusRecommendTrainSectionCell : BusBaseTableViewCell
{
    UILabel *_imageLabel;
    UILabel *_titleLabel;
    CDUnknownBlockType _jumpRecommendVC;
    UILabel *_showMoreLabel;
    UILabel *_iconArrowLabel;
    UIButton *_showMoreBtn;
}

+ (double)getHeight;
@property(nonatomic) __weak UIButton *showMoreBtn; // @synthesize showMoreBtn=_showMoreBtn;
@property(nonatomic) __weak UILabel *iconArrowLabel; // @synthesize iconArrowLabel=_iconArrowLabel;
@property(nonatomic) __weak UILabel *showMoreLabel; // @synthesize showMoreLabel=_showMoreLabel;
@property(copy, nonatomic) CDUnknownBlockType jumpRecommendVC; // @synthesize jumpRecommendVC=_jumpRecommendVC;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *imageLabel; // @synthesize imageLabel=_imageLabel;
- (void).cxx_destruct;
- (void)showMoreBtnClick:(id)arg1;
- (void)loadCellWithShowMore:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

