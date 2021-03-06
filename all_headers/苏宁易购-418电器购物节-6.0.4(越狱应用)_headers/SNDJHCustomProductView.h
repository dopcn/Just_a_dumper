//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNDJHCommonProductView.h"

@class UILabel, UIView;

@interface SNDJHCustomProductView : SNDJHCommonProductView
{
    long long _cateNum;
    long long _productNum;
    UIView *_topCutLineView;
    UIView *_firstSalePointBGView;
    UIView *_secondSalePointBGView;
    UILabel *_productSecondSellingPointLabel;
    UILabel *_goShoppingLabel;
}

@property(retain, nonatomic) UILabel *goShoppingLabel; // @synthesize goShoppingLabel=_goShoppingLabel;
@property(retain, nonatomic) UILabel *productSecondSellingPointLabel; // @synthesize productSecondSellingPointLabel=_productSecondSellingPointLabel;
@property(retain, nonatomic) UIView *secondSalePointBGView; // @synthesize secondSalePointBGView=_secondSalePointBGView;
@property(retain, nonatomic) UIView *firstSalePointBGView; // @synthesize firstSalePointBGView=_firstSalePointBGView;
@property(retain, nonatomic) UIView *topCutLineView; // @synthesize topCutLineView=_topCutLineView;
@property(nonatomic) long long productNum; // @synthesize productNum=_productNum;
@property(nonatomic) long long cateNum; // @synthesize cateNum=_cateNum;
- (void).cxx_destruct;
- (void)manamgeClickPoint;
- (void)pushToDetailView;
- (void)setGoodsStatus;
- (void)updatePrice;
- (void)updateDJHCustomProductViewWithDto:(id)arg1;
- (void)masontyLayout;
- (void)setColorAndFont;
- (void)initCustomView;
- (void)dealloc;

@end

