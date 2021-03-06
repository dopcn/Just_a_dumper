//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMTableViewCell.h"

@class UIButton, UITableView, UIView, WMPoi, WMPoiOffersInfoView, WMSearchPoiGoodsView, WMSearchPoiInfoTopView;

@interface WMSearchPoiTableViewCell : WMTableViewCell
{
    _Bool _hideBottomSepatator;
    UITableView *_parentTableView;
    WMPoi *_poi;
    CDUnknownBlockType _needReloadCellWithAnimation;
    CDUnknownBlockType _didClickProductPBIExposeBlock;
    CDUnknownBlockType _productJudasExposeBlock;
    UIView *_highlightBackgroundView;
    WMSearchPoiInfoTopView *_poiInfoTopView;
    WMPoiOffersInfoView *_offersInfoView;
    WMSearchPoiGoodsView *_goodsView;
    UIButton *_leftMiddleButton;
    UIButton *_bottomButton;
    UIView *_maskView;
}

+ (double)calculateCellTemplateBHeightWithPoi:(id)arg1;
+ (double)calculateCellHeightWithPoi:(id)arg1 strategy:(id)arg2;
+ (id)viewWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
+ (id)getReuseIdentifier;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIButton *leftMiddleButton; // @synthesize leftMiddleButton=_leftMiddleButton;
@property(retain, nonatomic) WMSearchPoiGoodsView *goodsView; // @synthesize goodsView=_goodsView;
@property(retain, nonatomic) WMPoiOffersInfoView *offersInfoView; // @synthesize offersInfoView=_offersInfoView;
@property(retain, nonatomic) WMSearchPoiInfoTopView *poiInfoTopView; // @synthesize poiInfoTopView=_poiInfoTopView;
@property(retain, nonatomic) UIView *highlightBackgroundView; // @synthesize highlightBackgroundView=_highlightBackgroundView;
@property(nonatomic) _Bool hideBottomSepatator; // @synthesize hideBottomSepatator=_hideBottomSepatator;
@property(copy, nonatomic) CDUnknownBlockType productJudasExposeBlock; // @synthesize productJudasExposeBlock=_productJudasExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickProductPBIExposeBlock; // @synthesize didClickProductPBIExposeBlock=_didClickProductPBIExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType needReloadCellWithAnimation; // @synthesize needReloadCellWithAnimation=_needReloadCellWithAnimation;
@property(retain, nonatomic) WMPoi *poi; // @synthesize poi=_poi;
@property(retain, nonatomic) UITableView *parentTableView; // @synthesize parentTableView=_parentTableView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (double)poiInfoViewLeftMargin;
- (void)commonInit;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andType:(id)arg3;
- (id)init;

@end

