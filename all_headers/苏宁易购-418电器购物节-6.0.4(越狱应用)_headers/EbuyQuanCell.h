//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SNDynamicFrameworks/SNSWTableViewCell.h>

@class MYEbuyCoumonDTO, UIButton, UIImageView, UILabel;

@interface EbuyQuanCell : SNSWTableViewCell
{
    UIImageView *_backImg;
    UIImageView *_newTipImg;
    UILabel *_dateLab;
    UILabel *_priceLab;
    UILabel *_quanRuleLbl;
    UILabel *_shopName;
    UILabel *_quanTypeName;
    UILabel *_valueHintLabel;
    UIButton *_arrowView;
    UIButton *_detailBtn;
    UIButton *_arrowBigView;
    UIButton *_detailBigBtn;
    UILabel *_detailLbl;
    UIImageView *_separatedLine;
    MYEbuyCoumonDTO *_dto;
    CDUnknownBlockType _detailBlock;
    CDUnknownBlockType _usingBlock;
    CDUnknownBlockType _tapBlankCap;
    UILabel *_rightTimeLbl;
    UILabel *_onUsingLbl;
    UIImageView *_cantUsingImage;
    UIButton *_blankCap;
}

@property(retain, nonatomic) UIButton *blankCap; // @synthesize blankCap=_blankCap;
@property(retain, nonatomic) UIImageView *cantUsingImage; // @synthesize cantUsingImage=_cantUsingImage;
@property(retain, nonatomic) UILabel *onUsingLbl; // @synthesize onUsingLbl=_onUsingLbl;
@property(retain, nonatomic) UILabel *rightTimeLbl; // @synthesize rightTimeLbl=_rightTimeLbl;
@property(copy, nonatomic) CDUnknownBlockType tapBlankCap; // @synthesize tapBlankCap=_tapBlankCap;
@property(copy, nonatomic) CDUnknownBlockType usingBlock; // @synthesize usingBlock=_usingBlock;
@property(copy, nonatomic) CDUnknownBlockType detailBlock; // @synthesize detailBlock=_detailBlock;
@property(retain, nonatomic) MYEbuyCoumonDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UIImageView *separatedLine; // @synthesize separatedLine=_separatedLine;
@property(retain, nonatomic) UILabel *detailLbl; // @synthesize detailLbl=_detailLbl;
@property(retain, nonatomic) UIButton *detailBigBtn; // @synthesize detailBigBtn=_detailBigBtn;
@property(retain, nonatomic) UIButton *arrowBigView; // @synthesize arrowBigView=_arrowBigView;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) UIButton *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *valueHintLabel; // @synthesize valueHintLabel=_valueHintLabel;
@property(retain, nonatomic) UILabel *quanTypeName; // @synthesize quanTypeName=_quanTypeName;
@property(retain, nonatomic) UILabel *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) UILabel *quanRuleLbl; // @synthesize quanRuleLbl=_quanRuleLbl;
@property(retain, nonatomic) UILabel *priceLab; // @synthesize priceLab=_priceLab;
@property(retain, nonatomic) UILabel *dateLab; // @synthesize dateLab=_dateLab;
@property(retain, nonatomic) UIImageView *newTipImg; // @synthesize newTipImg=_newTipImg;
@property(retain, nonatomic) UIImageView *backImg; // @synthesize backImg=_backImg;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUIItem:(id)arg1;
- (void)goToUsingNow:(id)arg1;
- (void)goToCouponDetail:(id)arg1;
- (id)getDottedLineWithWidth:(double)arg1 height:(double)arg2;
- (id)timeString:(id)arg1;

@end

