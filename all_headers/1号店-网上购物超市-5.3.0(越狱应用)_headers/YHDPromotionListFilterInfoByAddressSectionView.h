//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSBase/OTSCollectionReusableView.h>

@class OTSListProductLogic, OTSPromotionListFilterItem, UIImageView, UILabel, UIView;

@interface YHDPromotionListFilterInfoByAddressSectionView : OTSCollectionReusableView
{
    UILabel *_nameLab;
    UILabel *_describeLab;
    UIImageView *_tipImage;
    OTSListProductLogic *_logic;
    UIView *_lineView;
    OTSPromotionListFilterItem *_item;
}

@property(retain, nonatomic) OTSPromotionListFilterItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) OTSListProductLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) UIImageView *tipImage; // @synthesize tipImage=_tipImage;
@property(retain, nonatomic) UILabel *describeLab; // @synthesize describeLab=_describeLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateWithCellData:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

