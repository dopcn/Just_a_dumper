//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYFeedsBoxAdView.h"

@class IMYTouchEXButton, UIImageView;

@interface IMYInfoHomeDetailAdView : IMYFeedsBoxAdView
{
    UIImageView *_imageView;
    UIImageView *_secondImageView;
    UIImageView *_thirdImageView;
    IMYTouchEXButton *_closeButton;
}

+ (struct UIEdgeInsets)edgeInsets;
+ (double)setImagesStyleHeightWithModel:(id)arg1;
+ (double)setTextAndImageStyleHeightWithModel:(id)arg1;
+ (double)setImageStyleHeightWithModel:(id)arg1;
+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) IMYTouchEXButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(retain, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setupImagesStyleWithModel:(id)arg1;
- (void)setupTextAndImageStyleWithModel:(id)arg1;
- (void)setupImageStyleWithModel:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (id)imageViews;
- (void)clickImageWithIndex:(long long)arg1;
- (void)setupImageViewTap;
- (void)setPlaceholderImage;
- (void)closeAd;
- (void)setupSubviews;

@end

