//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, JDIcon, JDImageView, JDShopPlusPriceView, JDShopPriceLabel, JDShopSamPriceView, NSString, UILabel;
@protocol JDActivityUnitExtendViewDelegate;

@interface JDActivityUnitExtendView : UIView
{
    UILabel *_titleLabel;
    JDShopPriceLabel *_priceLabel;
    JDShopSamPriceView *_samPriceLabel;
    JDShopPlusPriceView *_plusPriceLabel;
    JDIcon *_promotionIcon;
    UILabel *_promotionLabel;
    JDImageView *_imageView;
    UIView *_boarderBgView;
    id <JDActivityUnitExtendViewDelegate> _delegate;
    NSString *_wareId;
    CALayer *_stockLayer;
}

@property(retain, nonatomic) CALayer *stockLayer; // @synthesize stockLayer=_stockLayer;
@property(retain, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(nonatomic) id <JDActivityUnitExtendViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *boarderBgView; // @synthesize boarderBgView=_boarderBgView;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void)dealloc;
- (void)handleStock:(_Bool)arg1 withUnderCarriage:(_Bool)arg2;
- (void)setViewWithModel:(id)arg1 withViewType:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTapWareView;
- (void)setHeight:(double)arg1;

@end

