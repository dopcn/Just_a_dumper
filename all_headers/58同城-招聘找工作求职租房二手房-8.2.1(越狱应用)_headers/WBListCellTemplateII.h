//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBListBaseCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView, WBRoundedLabels;

@interface WBListCellTemplateII : WBListBaseCell
{
    NSLayoutConstraint *_lineWidthConstraint;
    NSLayoutConstraint *_vvImgViewTrailingContraint;
    UILabel *_itemTitleLabel;
    UILabel *_itemDescriptionLabel;
    UIImageView *_iconImgView;
    UIButton *_callBtn;
    UIView *_separateLineView;
    UIView *_bottomLineView;
    UIImageView *_tagAImgView;
    UIImageView *_tagBImgView;
    UILabel *_tagALabel;
    UILabel *_tagBLabel;
    NSLayoutConstraint *_tagALabelWidthConstraint;
    NSLayoutConstraint *_tagBLabelWidthConstraint;
    NSLayoutConstraint *_middleRightImgViewConstraint;
    NSLayoutConstraint *_bottomRightImgViewConstraint;
    UILabel *_callCountLabel;
    WBRoundedLabels *_roundedLabels;
}

+ (double)computeHeightWithCellData:(id)arg1;
@property(nonatomic) __weak WBRoundedLabels *roundedLabels; // @synthesize roundedLabels=_roundedLabels;
@property(retain, nonatomic) UILabel *callCountLabel; // @synthesize callCountLabel=_callCountLabel;
@property(nonatomic) __weak NSLayoutConstraint *bottomRightImgViewConstraint; // @synthesize bottomRightImgViewConstraint=_bottomRightImgViewConstraint;
@property(nonatomic) __weak NSLayoutConstraint *middleRightImgViewConstraint; // @synthesize middleRightImgViewConstraint=_middleRightImgViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tagBLabelWidthConstraint; // @synthesize tagBLabelWidthConstraint=_tagBLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tagALabelWidthConstraint; // @synthesize tagALabelWidthConstraint=_tagALabelWidthConstraint;
@property(retain, nonatomic) UILabel *tagBLabel; // @synthesize tagBLabel=_tagBLabel;
@property(retain, nonatomic) UILabel *tagALabel; // @synthesize tagALabel=_tagALabel;
@property(nonatomic) __weak UIImageView *tagBImgView; // @synthesize tagBImgView=_tagBImgView;
@property(nonatomic) __weak UIImageView *tagAImgView; // @synthesize tagAImgView=_tagAImgView;
@property(nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(nonatomic) __weak UIButton *callBtn; // @synthesize callBtn=_callBtn;
@property(nonatomic) __weak UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak UILabel *itemDescriptionLabel; // @synthesize itemDescriptionLabel=_itemDescriptionLabel;
@property(nonatomic) __weak UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *vvImgViewTrailingContraint; // @synthesize vvImgViewTrailingContraint=_vvImgViewTrailingContraint;
@property(nonatomic) __weak NSLayoutConstraint *lineWidthConstraint; // @synthesize lineWidthConstraint=_lineWidthConstraint;
- (void).cxx_destruct;
- (void)configCellViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)prepareCellViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)markCellWithReadState:(_Bool)arg1;
- (void)layoutVVImgViewWithHasTagA:(_Bool)arg1;
- (void)configJingZhunImgViewWithState:(_Bool)arg1;
- (id)TagBLabelWidthConstraint;
- (id)TagBImgViewWidthConstraint;
- (id)TagALabelWidthConstraint;
- (id)TagAImgViewWidthConstraint;
- (void)hideAllRightTags;
- (id)bottomRightLabel;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configYPCellIIViewWithAboluoData:(id)arg1;

@end

