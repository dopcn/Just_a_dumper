//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RecommendListDTO, SNUIImageView, UIButton, UILabel;

@interface SNSHProDetaiRecBTestProductItem : UIView
{
    UILabel *_numLbl;
    RecommendListDTO *_recommendListDTO;
    UIButton *_carBtn;
    UILabel *_promotionLbl;
    SNUIImageView *_productImgView;
    UILabel *_nameLbl;
    UILabel *_priceLbl;
}

+ (id)getPromotionDictWithType:(id)arg1;
+ (_Bool)isNum:(id)arg1;
@property(retain, nonatomic) UILabel *priceLbl; // @synthesize priceLbl=_priceLbl;
@property(retain, nonatomic) UILabel *nameLbl; // @synthesize nameLbl=_nameLbl;
@property(retain, nonatomic) SNUIImageView *productImgView; // @synthesize productImgView=_productImgView;
@property(retain, nonatomic) UILabel *promotionLbl; // @synthesize promotionLbl=_promotionLbl;
@property(retain, nonatomic) UIButton *carBtn; // @synthesize carBtn=_carBtn;
@property(retain, nonatomic) RecommendListDTO *recommendListDTO; // @synthesize recommendListDTO=_recommendListDTO;
@property(retain, nonatomic) UILabel *numLbl; // @synthesize numLbl=_numLbl;
- (void).cxx_destruct;
- (void)setItemWithData:(id)arg1 productDto:(id)arg2;

@end

