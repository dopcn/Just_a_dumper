//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWIBaseCardView.h"

@class CLLocation, MTStarRater, TWIPOI, UIImageView, UILabel, UIView;

@interface TWIPOICardView : TWIBaseCardView
{
    _Bool _showCategory;
    _Bool _showBorder;
    _Bool _showSmallImage;
    TWIPOI *_poi;
    CLLocation *_datumLocation;
    UIView *_infoPanel;
    UIImageView *_coverImageView;
    UILabel *_categoryLabel;
    UILabel *_titleLabel;
    MTStarRater *_starView;
    UILabel *_noStarLabel;
    UILabel *_commentNumberLabel;
    UILabel *_priceLabel;
    UILabel *_addressLabel;
    UILabel *_distanceLabel;
}

@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *commentNumberLabel; // @synthesize commentNumberLabel=_commentNumberLabel;
@property(retain, nonatomic) UILabel *noStarLabel; // @synthesize noStarLabel=_noStarLabel;
@property(retain, nonatomic) MTStarRater *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *infoPanel; // @synthesize infoPanel=_infoPanel;
@property(retain, nonatomic) CLLocation *datumLocation; // @synthesize datumLocation=_datumLocation;
@property(nonatomic) _Bool showSmallImage; // @synthesize showSmallImage=_showSmallImage;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(nonatomic) _Bool showCategory; // @synthesize showCategory=_showCategory;
@property(retain, nonatomic) TWIPOI *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateCardConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

