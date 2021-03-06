//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, PHXExhibitionItem, UIImageView, UILabel;

@interface PHXHotelProductListView : UIView
{
    UIImageView *_imageView;
    CAGradientLayer *_coverLayer;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    PHXExhibitionItem *_item;
}

+ (struct CGSize)cellSize;
@property(retain, nonatomic) PHXExhibitionItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *coverLayer; // @synthesize coverLayer=_coverLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)bindWithExhibitionItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

