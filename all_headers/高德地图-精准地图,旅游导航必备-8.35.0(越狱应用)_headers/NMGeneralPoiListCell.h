//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseTableViewCell.h"

@class NMOrientDistArrow, NMPoiCustomPriceLabel, NMRatingView, UIImageView, UILabel;

@interface NMGeneralPoiListCell : NMBaseTableViewCell
{
    NMOrientDistArrow *_orientDistArrow;
    UILabel *_mbsLabel;
    UIImageView *_mbsImgView;
    NMRatingView *_ratingsView;
    NMPoiCustomPriceLabel *_averageCostLabel;
    UILabel *_parkingPrice;
    UILabel *_parkingType;
    UILabel *_update_status;
}

@property(readonly, nonatomic) UILabel *parkingType; // @synthesize parkingType=_parkingType;
@property(readonly, nonatomic) UILabel *parkingPrice; // @synthesize parkingPrice=_parkingPrice;
- (void).cxx_destruct;
- (id)bottomBorder;
- (id)topBorder;
- (id)lastRowBottomBorder;
- (id)firstRowTopBorder;
- (void)renderSubTitleLabel;
- (void)renderTitleLabel;
- (void)removeAverageCost;
- (void)removeRating;
- (void)setAverageCost:(id)arg1;
- (void)setRating:(double)arg1;
- (void)setAccessoryTag:(long long)arg1;
- (void)setTitle:(id)arg1 andSubTitle:(id)arg2;
- (void)refreshTitleLabelWidthOnIndoor;
- (void)removeParkingInfo;
- (void)setParkingInfo:(id)arg1;
- (void)refreshTitleLabelWidth;
- (void)setUpdataStatus:(id)arg1 andColor:(id)arg2;
@property(readonly, nonatomic) UIImageView *mbsImgView;
@property(readonly, nonatomic) UILabel *mbsLabel;
- (void)setOrientData:(id)arg1;
- (void)initSettings;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andCellWidth:(double)arg3 andCellHeight:(double)arg4;

@end

