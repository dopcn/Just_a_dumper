//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSImportsChannelProductView.h"

@class OTSEnlargeButton, OTSPlaceholderImageView, UIImageView, UILabel, UIView;

@interface OTSImportsChannelRushBuyProductView : OTSImportsChannelProductView
{
    OTSPlaceholderImageView *imageView;
    UILabel *nameLabel;
    UILabel *priceLabel;
    UILabel *refPriceLabel;
    OTSEnlargeButton *addCartButton;
    OTSEnlargeButton *findSimilarButton;
    UIView *_statusMaskView;
    UILabel *_statusTextLabel;
    UIImageView *_superHotStytleImage;
    UILabel *_superHotStytleLabel;
}

+ (id)productView;
@property(nonatomic) __weak UILabel *superHotStytleLabel; // @synthesize superHotStytleLabel=_superHotStytleLabel;
@property(nonatomic) __weak UIImageView *superHotStytleImage; // @synthesize superHotStytleImage=_superHotStytleImage;
@property(nonatomic) __weak UILabel *statusTextLabel; // @synthesize statusTextLabel=_statusTextLabel;
@property(nonatomic) __weak UIView *statusMaskView; // @synthesize statusMaskView=_statusMaskView;
@property(nonatomic) __weak OTSEnlargeButton *findSimilarButton; // @synthesize findSimilarButton;
@property(nonatomic) __weak OTSEnlargeButton *addCartButton; // @synthesize addCartButton;
@property(nonatomic) __weak UILabel *refPriceLabel; // @synthesize refPriceLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel;
@property(nonatomic) __weak OTSPlaceholderImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)updateStatus:(int)arg1;
- (void)setupUI;
- (void)setProduct:(id)arg1;
- (void)awakeFromNib;

@end

