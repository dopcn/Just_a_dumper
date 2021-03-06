//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, VSCommonGoodsItemModel;

@interface VSChannelProductListItemView : UIView
{
    CDUnknownBlockType _channelProductListItemViewDidClicked;
    CDUnknownBlockType _channelProductListItemViewEntranceDidClicked;
    UIButton *_coverButton;
    UIImageView *_merchandiseImageView;
    UILabel *_vipPriceLabel;
    UILabel *_titleLabel;
    UILabel *_entranceLabel;
    UIImageView *_iconImageView;
    UIView *_remindView;
    UILabel *_remindLabel;
    UIButton *_entranceButton;
    VSCommonGoodsItemModel *_commonGoodsItemModel;
    long long _holeInBrandList;
    struct CGSize _imageSize;
}

@property(nonatomic) long long holeInBrandList; // @synthesize holeInBrandList=_holeInBrandList;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) VSCommonGoodsItemModel *commonGoodsItemModel; // @synthesize commonGoodsItemModel=_commonGoodsItemModel;
@property(nonatomic) __weak UIButton *entranceButton; // @synthesize entranceButton=_entranceButton;
@property(nonatomic) __weak UILabel *remindLabel; // @synthesize remindLabel=_remindLabel;
@property(nonatomic) __weak UIView *remindView; // @synthesize remindView=_remindView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *entranceLabel; // @synthesize entranceLabel=_entranceLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *vipPriceLabel; // @synthesize vipPriceLabel=_vipPriceLabel;
@property(nonatomic) __weak UIImageView *merchandiseImageView; // @synthesize merchandiseImageView=_merchandiseImageView;
@property(nonatomic) __weak UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(copy, nonatomic) CDUnknownBlockType channelProductListItemViewEntranceDidClicked; // @synthesize channelProductListItemViewEntranceDidClicked=_channelProductListItemViewEntranceDidClicked;
@property(copy, nonatomic) CDUnknownBlockType channelProductListItemViewDidClicked; // @synthesize channelProductListItemViewDidClicked=_channelProductListItemViewDidClicked;
- (void).cxx_destruct;
- (id)stockString;
- (id)entranceTitle;
- (_Bool)meetTheConditionOfLink;
- (_Bool)withTitle;
- (_Bool)withURL;
- (id)title;
- (id)link;
- (id)vipPrice;
- (id)productName;
- (id)imgUrl;
- (void)updateWithGoodsItemModel:(id)arg1 holeInBrandList:(long long)arg2;
- (void)entranceButtonAction:(id)arg1;
- (void)coverButtonAction:(id)arg1;
- (void)setupUI;
- (void)bindEntranceButtonDataSet;
- (void)bindCoverButtonDataSet;
- (id)initWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (void)dealloc;

@end

