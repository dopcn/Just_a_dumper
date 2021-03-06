//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, DCDotLoadingView, DCPreCalcPriceModel, UIButton, UILabel;

@interface DCRPORPriceCostView : UIView
{
    _Bool _hasCouponInfo;
    _Bool _isLoading;
    CDUnknownBlockType _tapLoading;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_couponInfoView;
    UIButton *_button;
    DCDotLoadingView *_loadingView;
    CALayer *_bottomLine;
    DCPreCalcPriceModel *_model;
}

@property(retain, nonatomic) DCPreCalcPriceModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasCouponInfo; // @synthesize hasCouponInfo=_hasCouponInfo;
@property(retain, nonatomic) CALayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) DCDotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *couponInfoView; // @synthesize couponInfoView=_couponInfoView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapLoading; // @synthesize tapLoading=_tapLoading;
- (void).cxx_destruct;
- (void)onButtonClick;
- (void)tapAction;
- (double)viewHeight;
- (void)showError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)layoutSubviews;
- (void)setupWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

