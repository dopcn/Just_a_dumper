//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PHXImageSwipeView, PHXProductPriceView, PHXProductTagCollectionView, PHXSimpleProductForGuest, UIImageView, UILabel;

@interface PHXProductInfoView : UIView
{
    _Bool _scrollEnabled;
    _Bool _shouldShowScoreDesc;
    PHXSimpleProductForGuest *_product;
    PHXImageSwipeView *_imageSwipeView;
    PHXProductPriceView *_priceView;
    UIImageView *_discountView;
    UIImageView *_choiceProductIcon;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    PHXProductTagCollectionView *_tagView;
}

+ (_Bool)shouldShowExpireTagWithProduct:(id)arg1;
+ (_Bool)shouldShowTagViewWithProduct:(id)arg1;
+ (double)heightForWidth:(double)arg1 product:(id)arg2;
+ (double)maxHeightForWidth:(double)arg1;
+ (double)imageHeightForWidth:(double)arg1;
@property(retain, nonatomic) PHXProductTagCollectionView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *choiceProductIcon; // @synthesize choiceProductIcon=_choiceProductIcon;
@property(retain, nonatomic) UIImageView *discountView; // @synthesize discountView=_discountView;
@property(retain, nonatomic) PHXProductPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) PHXImageSwipeView *imageSwipeView; // @synthesize imageSwipeView=_imageSwipeView;
@property(retain, nonatomic) PHXSimpleProductForGuest *product; // @synthesize product=_product;
@property(nonatomic) _Bool shouldShowScoreDesc; // @synthesize shouldShowScoreDesc=_shouldShowScoreDesc;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (void).cxx_destruct;
- (_Bool)shouldShowComment;
- (void)updateProduct:(id)arg1;
- (void)updateConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)currentImageFrame;
- (id)currentImage;

@end

