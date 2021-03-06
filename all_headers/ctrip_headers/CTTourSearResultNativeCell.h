//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CTTourSearchLevelView, CTTourSearchProductSingle, CTTourSearchProductTypeView, NSLayoutConstraint, NSMutableArray, UIButton, UIImageView, UILabel, UIView, clButton;

@interface CTTourSearResultNativeCell : UITableViewCell
{
    _Bool _isShowMoreView;
    clButton *_compareButton;
    clButton *_collectButton;
    NSLayoutConstraint *_compareButtonWidthConstraint;
    NSLayoutConstraint *_collectButtonWidthConstraint;
    CDUnknownBlockType _compareBlock;
    CDUnknownBlockType _loveBlock;
    CDUnknownBlockType _moreBlock;
    CTTourSearchProductSingle *_product;
    UIImageView *_mainImgView;
    UILabel *_startCityLabel;
    UIView *_startCityBgView;
    CTTourSearchProductTypeView *_typeView;
    UIView *_bottomLine;
    NSLayoutConstraint *_bottomLineHeightConstraint;
    UILabel *_adverLabel;
    UILabel *_mainTitleLabel;
    NSLayoutConstraint *_mainTitleLabelTopConstraint;
    UIButton *_moreButton;
    UIView *_moreView;
    UIImageView *_providerImage;
    UILabel *_providerLabel;
    UILabel *_holidaysLabel;
    UILabel *_pricesignLabel;
    UILabel *_priceLabel;
    UILabel *_priceendLabel;
    UILabel *_scoreLabel;
    NSLayoutConstraint *_priceendLabelTrailingConstraint;
    UIImageView *_bluePointImageView;
    UIButton *_closeButton;
    UIView *_soldOutView;
    UIImageView *_soldOutImageView;
    UIImageView *_moreIconImageView;
    UIImageView *_closeIconImageView;
    CTTourSearchLevelView *_levelInfoView;
    NSMutableArray *_tagViewsArray;
    NSMutableArray *_exposeTagViewArray;
    UIImageView *_hotelScenicIcon;
    UILabel *_hotelScenicLb;
    UIImageView *_hotelPosIcon;
    UILabel *_hotelPosLb;
}

+ (id)nib;
@property(nonatomic) __weak UILabel *hotelPosLb; // @synthesize hotelPosLb=_hotelPosLb;
@property(nonatomic) __weak UIImageView *hotelPosIcon; // @synthesize hotelPosIcon=_hotelPosIcon;
@property(nonatomic) __weak UILabel *hotelScenicLb; // @synthesize hotelScenicLb=_hotelScenicLb;
@property(nonatomic) __weak UIImageView *hotelScenicIcon; // @synthesize hotelScenicIcon=_hotelScenicIcon;
@property(retain, nonatomic) NSMutableArray *exposeTagViewArray; // @synthesize exposeTagViewArray=_exposeTagViewArray;
@property(retain, nonatomic) NSMutableArray *tagViewsArray; // @synthesize tagViewsArray=_tagViewsArray;
@property(retain, nonatomic) CTTourSearchLevelView *levelInfoView; // @synthesize levelInfoView=_levelInfoView;
@property(nonatomic) __weak UIImageView *closeIconImageView; // @synthesize closeIconImageView=_closeIconImageView;
@property(nonatomic) __weak UIImageView *moreIconImageView; // @synthesize moreIconImageView=_moreIconImageView;
@property(nonatomic) __weak UIImageView *soldOutImageView; // @synthesize soldOutImageView=_soldOutImageView;
@property(nonatomic) __weak UIView *soldOutView; // @synthesize soldOutView=_soldOutView;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIImageView *bluePointImageView; // @synthesize bluePointImageView=_bluePointImageView;
@property(nonatomic) __weak NSLayoutConstraint *priceendLabelTrailingConstraint; // @synthesize priceendLabelTrailingConstraint=_priceendLabelTrailingConstraint;
@property(nonatomic) __weak UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) __weak UILabel *priceendLabel; // @synthesize priceendLabel=_priceendLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *pricesignLabel; // @synthesize pricesignLabel=_pricesignLabel;
@property(retain, nonatomic) UILabel *holidaysLabel; // @synthesize holidaysLabel=_holidaysLabel;
@property(retain, nonatomic) UILabel *providerLabel; // @synthesize providerLabel=_providerLabel;
@property(retain, nonatomic) UIImageView *providerImage; // @synthesize providerImage=_providerImage;
@property(nonatomic) __weak UIView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak NSLayoutConstraint *mainTitleLabelTopConstraint; // @synthesize mainTitleLabelTopConstraint=_mainTitleLabelTopConstraint;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(nonatomic) __weak UILabel *adverLabel; // @synthesize adverLabel=_adverLabel;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineHeightConstraint; // @synthesize bottomLineHeightConstraint=_bottomLineHeightConstraint;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) CTTourSearchProductTypeView *typeView; // @synthesize typeView=_typeView;
@property(nonatomic) __weak UIView *startCityBgView; // @synthesize startCityBgView=_startCityBgView;
@property(nonatomic) __weak UILabel *startCityLabel; // @synthesize startCityLabel=_startCityLabel;
@property(nonatomic) __weak UIImageView *mainImgView; // @synthesize mainImgView=_mainImgView;
@property(retain, nonatomic) CTTourSearchProductSingle *product; // @synthesize product=_product;
@property(nonatomic) _Bool isShowMoreView; // @synthesize isShowMoreView=_isShowMoreView;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock=_moreBlock;
@property(copy, nonatomic) CDUnknownBlockType loveBlock; // @synthesize loveBlock=_loveBlock;
@property(copy, nonatomic) CDUnknownBlockType compareBlock; // @synthesize compareBlock=_compareBlock;
@property(nonatomic) __weak NSLayoutConstraint *collectButtonWidthConstraint; // @synthesize collectButtonWidthConstraint=_collectButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *compareButtonWidthConstraint; // @synthesize compareButtonWidthConstraint=_compareButtonWidthConstraint;
@property(nonatomic) __weak clButton *collectButton; // @synthesize collectButton=_collectButton;
@property(nonatomic) __weak clButton *compareButton; // @synthesize compareButton=_compareButton;
- (void).cxx_destruct;
- (id)sharedImage;
- (void)loveAction:(id)arg1;
- (void)compareAction:(id)arg1;
- (void)close:(id)arg1;
- (void)More:(id)arg1;
- (void)moveMoreViewToTop;
- (void)updateUIForVIP:(_Bool)arg1;
- (void)updateUIForTraced:(_Bool)arg1;
- (id)exposeTagItemsWithProduct:(id)arg1 exposeName:(id)arg2;
- (void)bindProduct:(id)arg1 withTab:(id)arg2 searchType:(id)arg3;
- (void)setLayerForButton:(id)arg1;
- (void)awakeFromNib;

@end

