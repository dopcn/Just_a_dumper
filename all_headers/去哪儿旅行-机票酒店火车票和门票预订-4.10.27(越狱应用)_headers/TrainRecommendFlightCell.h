//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrainBaseTableViewCell.h"

#import "TrainRecommendFlightCellProtocol-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface TrainRecommendFlightCell : TrainBaseTableViewCell <TrainRecommendFlightCellProtocol>
{
    CDUnknownBlockType _onClick;
    UIView *_titleView;
    UILabel *_stationLabel;
    UILabel *_flightInfoLabel;
    UILabel *_priceLabel;
    UILabel *_discountLabel;
    UIImageView *_bottomLineImageView;
    NSLayoutConstraint *_stationLabelWidthConstraint;
    UILabel *_planeImageLabel;
}

+ (double)getHeight;
@property(nonatomic) __weak UILabel *planeImageLabel; // @synthesize planeImageLabel=_planeImageLabel;
@property(nonatomic) __weak NSLayoutConstraint *stationLabelWidthConstraint; // @synthesize stationLabelWidthConstraint=_stationLabelWidthConstraint;
@property(nonatomic) __weak UIImageView *bottomLineImageView; // @synthesize bottomLineImageView=_bottomLineImageView;
@property(nonatomic) __weak UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *flightInfoLabel; // @synthesize flightInfoLabel=_flightInfoLabel;
@property(nonatomic) __weak UILabel *stationLabel; // @synthesize stationLabel=_stationLabel;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void).cxx_destruct;
- (void)gotoFlight:(id)arg1;
- (void)setHiddenBottomLine:(_Bool)arg1;
- (void)loadWithModel:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

