//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NVImageView, TGPriceView, UIColor;

@interface TGImageViewWithPriceInfo : UIView
{
    NSString *_imageUrl;
    NSString *_hint;
    UIColor *_colorForPrice;
    double _price;
    long long _style;
    NVImageView *_imageView;
    TGPriceView *_priceView;
}

@property(retain, nonatomic) TGPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) NVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) UIColor *colorForPrice; // @synthesize colorForPrice=_colorForPrice;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

