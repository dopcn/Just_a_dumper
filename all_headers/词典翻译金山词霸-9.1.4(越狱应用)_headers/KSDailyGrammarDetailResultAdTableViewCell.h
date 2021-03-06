//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSDailyGrammarDetailResultItemModel, KSSingleThinLabel, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface KSDailyGrammarDetailResultAdTableViewCell : UITableViewCell
{
    _Bool _isFirst;
    UILabel *_helpfulTipsLabel;
    UIImageView *_imageContentView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    NSLayoutConstraint *_helpfulTipsTopConstraint;
    NSLayoutConstraint *_helpfulTipsHeightConstraint;
    UIView *_topLineView;
    NSLayoutConstraint *_topLineViewConstraintHeight;
    UIView *_bottomLineView;
    NSLayoutConstraint *_bottomLineViewConstraintHeight;
    KSSingleThinLabel *_singleLabel;
    UILabel *_descriptionLabel;
    NSString *_hint;
    NSLayoutConstraint *_descirptionLabelLeftConstraint;
    NSLayoutConstraint *_contentLabelRightConstraint;
    KSDailyGrammarDetailResultItemModel *_model;
}

@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) KSDailyGrammarDetailResultItemModel *model; // @synthesize model=_model;
@property(nonatomic) __weak NSLayoutConstraint *contentLabelRightConstraint; // @synthesize contentLabelRightConstraint=_contentLabelRightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *descirptionLabelLeftConstraint; // @synthesize descirptionLabelLeftConstraint=_descirptionLabelLeftConstraint;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak KSSingleThinLabel *singleLabel; // @synthesize singleLabel=_singleLabel;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineViewConstraintHeight; // @synthesize bottomLineViewConstraintHeight=_bottomLineViewConstraintHeight;
@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak NSLayoutConstraint *topLineViewConstraintHeight; // @synthesize topLineViewConstraintHeight=_topLineViewConstraintHeight;
@property(nonatomic) __weak UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak NSLayoutConstraint *helpfulTipsHeightConstraint; // @synthesize helpfulTipsHeightConstraint=_helpfulTipsHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *helpfulTipsTopConstraint; // @synthesize helpfulTipsTopConstraint=_helpfulTipsTopConstraint;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(nonatomic) __weak UILabel *helpfulTipsLabel; // @synthesize helpfulTipsLabel=_helpfulTipsLabel;
- (void).cxx_destruct;
- (void)setTheme;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

