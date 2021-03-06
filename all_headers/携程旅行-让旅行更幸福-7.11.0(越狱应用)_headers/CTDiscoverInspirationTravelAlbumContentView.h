//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CTDiscoverRecommendDestinationModel, CTImageView, NSLayoutConstraint, NSMutableArray, UIButton, UILabel;
@protocol CTDiscoverInspirationTravelAlbumContentViewDelegate;

@interface CTDiscoverInspirationTravelAlbumContentView : UIView
{
    id <CTDiscoverInspirationTravelAlbumContentViewDelegate> _delegate;
    UIButton *_enterMapBtn;
    NSLayoutConstraint *_priceSymbolOneLeadingConstraint;
    NSLayoutConstraint *_priceSymbolTwoLeadingConstraint;
    NSLayoutConstraint *_priceSymbolThreeLeadingConstraint;
    CTImageView *_bkImageView;
    UIView *_itemOneContainerView;
    UIView *_itemTwoContainerView;
    UIView *_itemThreeContainerView;
    CTImageView *_itemOneImageView;
    UIView *_itemOneInformationContentView;
    UILabel *_itemOneTitleLabel;
    UIView *_itemOnePriceSymbolContainerView;
    UILabel *_itemOnePriceSymbolLabel;
    UILabel *_itemOnePriceLabel;
    CTImageView *_itemTwoImageView;
    UIView *_itemTwoInformationContentView;
    UILabel *_itemTwoTitleLabel;
    UIView *_itemTwoPriceSymbolContainerView;
    UILabel *_itemTwoPriceSymbolLabel;
    UILabel *_itemTwoPriceLabel;
    CTImageView *_itemThreeImageView;
    UIView *_itemThreeInformationContentView;
    UILabel *_itemThreeTitleLabel;
    UIView *_itemThreePriceSymbolContainerView;
    UILabel *_itemThreePriceSymbolLabel;
    UILabel *_itemThreePriceLabel;
    UIView *_itemOneImageShadowView;
    UIView *_itemTwoImageShadowView;
    UIView *_itemThreeImageShadowView;
    UIView *_itemOneInformationShadowView;
    UIView *_itemTwoInformationShadowView;
    UIView *_itemThreeInformationShadowView;
    NSMutableArray *_dataList;
    CTDiscoverRecommendDestinationModel *_model;
    CAGradientLayer *_layerOne;
    CAGradientLayer *_layerTwo;
    CAGradientLayer *_layerThree;
    struct CGPoint _startPoint;
}

+ (double)ViewWidth;
+ (double)ViewHeight;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) CAGradientLayer *layerThree; // @synthesize layerThree=_layerThree;
@property(retain, nonatomic) CAGradientLayer *layerTwo; // @synthesize layerTwo=_layerTwo;
@property(retain, nonatomic) CAGradientLayer *layerOne; // @synthesize layerOne=_layerOne;
@property(retain, nonatomic) CTDiscoverRecommendDestinationModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) __weak UIView *itemThreeInformationShadowView; // @synthesize itemThreeInformationShadowView=_itemThreeInformationShadowView;
@property(nonatomic) __weak UIView *itemTwoInformationShadowView; // @synthesize itemTwoInformationShadowView=_itemTwoInformationShadowView;
@property(nonatomic) __weak UIView *itemOneInformationShadowView; // @synthesize itemOneInformationShadowView=_itemOneInformationShadowView;
@property(nonatomic) __weak UIView *itemThreeImageShadowView; // @synthesize itemThreeImageShadowView=_itemThreeImageShadowView;
@property(nonatomic) __weak UIView *itemTwoImageShadowView; // @synthesize itemTwoImageShadowView=_itemTwoImageShadowView;
@property(nonatomic) __weak UIView *itemOneImageShadowView; // @synthesize itemOneImageShadowView=_itemOneImageShadowView;
@property(nonatomic) __weak UILabel *itemThreePriceLabel; // @synthesize itemThreePriceLabel=_itemThreePriceLabel;
@property(nonatomic) __weak UILabel *itemThreePriceSymbolLabel; // @synthesize itemThreePriceSymbolLabel=_itemThreePriceSymbolLabel;
@property(nonatomic) __weak UIView *itemThreePriceSymbolContainerView; // @synthesize itemThreePriceSymbolContainerView=_itemThreePriceSymbolContainerView;
@property(nonatomic) __weak UILabel *itemThreeTitleLabel; // @synthesize itemThreeTitleLabel=_itemThreeTitleLabel;
@property(nonatomic) __weak UIView *itemThreeInformationContentView; // @synthesize itemThreeInformationContentView=_itemThreeInformationContentView;
@property(nonatomic) __weak CTImageView *itemThreeImageView; // @synthesize itemThreeImageView=_itemThreeImageView;
@property(nonatomic) __weak UILabel *itemTwoPriceLabel; // @synthesize itemTwoPriceLabel=_itemTwoPriceLabel;
@property(nonatomic) __weak UILabel *itemTwoPriceSymbolLabel; // @synthesize itemTwoPriceSymbolLabel=_itemTwoPriceSymbolLabel;
@property(nonatomic) __weak UIView *itemTwoPriceSymbolContainerView; // @synthesize itemTwoPriceSymbolContainerView=_itemTwoPriceSymbolContainerView;
@property(nonatomic) __weak UILabel *itemTwoTitleLabel; // @synthesize itemTwoTitleLabel=_itemTwoTitleLabel;
@property(nonatomic) __weak UIView *itemTwoInformationContentView; // @synthesize itemTwoInformationContentView=_itemTwoInformationContentView;
@property(nonatomic) __weak CTImageView *itemTwoImageView; // @synthesize itemTwoImageView=_itemTwoImageView;
@property(nonatomic) __weak UILabel *itemOnePriceLabel; // @synthesize itemOnePriceLabel=_itemOnePriceLabel;
@property(nonatomic) __weak UILabel *itemOnePriceSymbolLabel; // @synthesize itemOnePriceSymbolLabel=_itemOnePriceSymbolLabel;
@property(nonatomic) __weak UIView *itemOnePriceSymbolContainerView; // @synthesize itemOnePriceSymbolContainerView=_itemOnePriceSymbolContainerView;
@property(nonatomic) __weak UILabel *itemOneTitleLabel; // @synthesize itemOneTitleLabel=_itemOneTitleLabel;
@property(nonatomic) __weak UIView *itemOneInformationContentView; // @synthesize itemOneInformationContentView=_itemOneInformationContentView;
@property(nonatomic) __weak CTImageView *itemOneImageView; // @synthesize itemOneImageView=_itemOneImageView;
@property(nonatomic) __weak UIView *itemThreeContainerView; // @synthesize itemThreeContainerView=_itemThreeContainerView;
@property(nonatomic) __weak UIView *itemTwoContainerView; // @synthesize itemTwoContainerView=_itemTwoContainerView;
@property(nonatomic) __weak UIView *itemOneContainerView; // @synthesize itemOneContainerView=_itemOneContainerView;
@property(nonatomic) __weak CTImageView *bkImageView; // @synthesize bkImageView=_bkImageView;
@property(nonatomic) __weak NSLayoutConstraint *priceSymbolThreeLeadingConstraint; // @synthesize priceSymbolThreeLeadingConstraint=_priceSymbolThreeLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *priceSymbolTwoLeadingConstraint; // @synthesize priceSymbolTwoLeadingConstraint=_priceSymbolTwoLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *priceSymbolOneLeadingConstraint; // @synthesize priceSymbolOneLeadingConstraint=_priceSymbolOneLeadingConstraint;
@property(nonatomic) __weak UIButton *enterMapBtn; // @synthesize enterMapBtn=_enterMapBtn;
@property(nonatomic) __weak id <CTDiscoverInspirationTravelAlbumContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showAllItemViews;
- (void)openMapVC;
- (void)pressEnterMapBtn:(id)arg1;
- (void)pressBtnThree:(id)arg1;
- (void)pressBtnTwo:(id)arg1;
- (void)pressBtnOne:(id)arg1;
- (void)addShadowForInformationView:(id)arg1;
- (void)addShadowForImageView:(id)arg1;
- (void)animationForView:(id)arg1 startTimePoint:(float)arg2;
- (void)doAnimationForContent;
- (id)createLayerWithSize:(struct CGSize)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (void)configUI;
- (void)handlePriceColorWithIndex:(long long)arg1 model:(id)arg2;
- (void)updateCellData:(id)arg1 isAnimation:(_Bool)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)initPanGesture;
- (id)init;
- (void)awakeFromNib;

@end

