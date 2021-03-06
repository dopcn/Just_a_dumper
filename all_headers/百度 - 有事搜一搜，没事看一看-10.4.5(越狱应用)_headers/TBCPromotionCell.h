//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBCCornerImageView, TBCMultipleImageView, TBCPromotionGoodsItem, TBCPromotionItem, TBCRankLevelView, UIButton, UIImageView, UILabel;

@interface TBCPromotionCell : UITableViewCell
{
    TBCPromotionItem *_promotionItem;
    CDUnknownBlockType _promotionCellBlock;
    TBCPromotionGoodsItem *_goodsItem;
    UIImageView *_backgroundImageView;
    TBCCornerImageView *_appIconImageView;
    UILabel *_appNameLabel;
    UILabel *_appDescLabel;
    UIImageView *_promotionImageView;
    UILabel *_promotionLabel;
    TBCCornerImageView *_appImgView;
    UILabel *_appTimeLabel;
    UIButton *_downloadButton;
    UILabel *_appTypeLabel;
    TBCMultipleImageView *_multipleImageView;
    TBCRankLevelView *_rankLevelView;
}

+ (_Bool)shouldShowAppImg;
+ (_Bool)shouldShowAppIcon;
+ (struct CGSize)calculateSizeForText:(id)arg1 withFont:(id)arg2 maxWidth:(double)arg3 maxLineNumber:(int)arg4;
@property(retain, nonatomic) TBCRankLevelView *rankLevelView; // @synthesize rankLevelView=_rankLevelView;
@property(retain, nonatomic) TBCMultipleImageView *multipleImageView; // @synthesize multipleImageView=_multipleImageView;
@property(retain, nonatomic) UILabel *appTypeLabel; // @synthesize appTypeLabel=_appTypeLabel;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UILabel *appTimeLabel; // @synthesize appTimeLabel=_appTimeLabel;
@property(retain, nonatomic) TBCCornerImageView *appImgView; // @synthesize appImgView=_appImgView;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) UIImageView *promotionImageView; // @synthesize promotionImageView=_promotionImageView;
@property(retain, nonatomic) UILabel *appDescLabel; // @synthesize appDescLabel=_appDescLabel;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) TBCCornerImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TBCPromotionGoodsItem *goodsItem; // @synthesize goodsItem=_goodsItem;
@property(copy, nonatomic) CDUnknownBlockType promotionCellBlock; // @synthesize promotionCellBlock=_promotionCellBlock;
@property(retain, nonatomic) TBCPromotionItem *promotionItem; // @synthesize promotionItem=_promotionItem;
- (void)openUrl:(id)arg1;
- (void)bindData:(id)arg1;
- (void)dealloc;

@end

