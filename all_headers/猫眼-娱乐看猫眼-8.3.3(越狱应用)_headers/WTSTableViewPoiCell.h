//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WTSGCTableViewCell.h"

@class UIImageView, UILabel, WTSPoiCellDiscountView, WTSStarRater;

@interface WTSTableViewPoiCell : WTSGCTableViewCell
{
    CDUnknownBlockType _needReloadThisCell;
    UIImageView *_logoImageView;
    UILabel *_pointNameLabel;
    UIImageView *_tagImageView;
    UILabel *_distanceLabel;
    WTSStarRater *_starRater;
    UILabel *_tagInfoLabel;
    WTSPoiCellDiscountView *_discountView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) WTSPoiCellDiscountView *discountView; // @synthesize discountView=_discountView;
@property(retain, nonatomic) UILabel *tagInfoLabel; // @synthesize tagInfoLabel=_tagInfoLabel;
@property(retain, nonatomic) WTSStarRater *starRater; // @synthesize starRater=_starRater;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *pointNameLabel; // @synthesize pointNameLabel=_pointNameLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(copy, nonatomic) CDUnknownBlockType needReloadThisCell; // @synthesize needReloadThisCell=_needReloadThisCell;
- (void).cxx_destruct;
- (double)calculatePointNameWidth;
- (void)didSelectAtIndexPath:(id)arg1;
- (void)didClickDiscountView;
- (void)defineLayout;
- (void)setupUI;
- (void)updateSomeUIConstraintsWithItem:(id)arg1;
- (void)createTagInfoLabelWith:(id)arg1 andPriceInfo:(id)arg2;
- (id)replaceBracket:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

