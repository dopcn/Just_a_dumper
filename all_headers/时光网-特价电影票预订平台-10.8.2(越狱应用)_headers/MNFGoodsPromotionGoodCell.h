//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBTableViewCell.h"

@class MTBAttributedStringLabel, MTBButton, MTBImageView, MTBLabel, MTBView;

@interface MNFGoodsPromotionGoodCell : MTBTableViewCell
{
    MTBView *_viewContainer;
    MTBImageView *_imgViewGood;
    MTBAttributedStringLabel *_labelTitle;
    MTBLabel *_labelSubTitle;
    MTBLabel *_labelPrompt;
    MTBButton *_btnBuy;
}

+ (double)mt_cellHeightForObject:(id)arg1;
@property(retain, nonatomic) MTBButton *btnBuy; // @synthesize btnBuy=_btnBuy;
@property(retain, nonatomic) MTBLabel *labelPrompt; // @synthesize labelPrompt=_labelPrompt;
@property(retain, nonatomic) MTBLabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) MTBAttributedStringLabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) MTBImageView *imgViewGood; // @synthesize imgViewGood=_imgViewGood;
@property(retain, nonatomic) MTBView *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void).cxx_destruct;
- (void)setGoodsPromotion:(id)arg1 bgColor:(id)arg2;
- (void)mt_addViewConstraints;
- (void)mt_createViews;

@end

