//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewBaseCardCell.h"

@class NSArray, NSLayoutConstraint, UIButton, UIImageView, UILabel;
@protocol MCTXCellDelegte;

@interface MCTXCell : NewBaseCardCell
{
    _Bool _isExtraLayoutNew;
    id <MCTXCellDelegte> _delegate;
    UIButton *_moreButton;
    UILabel *_topLabel;
    UIImageView *_imageView1;
    UIImageView *_imageView2;
    UIImageView *_imageView3;
    UILabel *_titleLabel1;
    UILabel *_titleLabel2;
    UILabel *_titleLabel3;
    NSArray *_allImageViews;
    NSArray *_allTitleLabels;
    NSArray *_allInfo;
    UILabel *_noneLabel;
    NSLayoutConstraint *_lineHeightConstraint;
    NSLayoutConstraint *_imageHeightContraint;
    NSLayoutConstraint *_imageWidthContraint;
}

+ (double)getCardHeight;
@property(nonatomic) __weak NSLayoutConstraint *imageWidthContraint; // @synthesize imageWidthContraint=_imageWidthContraint;
@property(nonatomic) __weak NSLayoutConstraint *imageHeightContraint; // @synthesize imageHeightContraint=_imageHeightContraint;
@property(nonatomic) __weak NSLayoutConstraint *lineHeightConstraint; // @synthesize lineHeightConstraint=_lineHeightConstraint;
@property(nonatomic) __weak UILabel *noneLabel; // @synthesize noneLabel=_noneLabel;
@property(copy, nonatomic) NSArray *allInfo; // @synthesize allInfo=_allInfo;
@property(copy, nonatomic) NSArray *allTitleLabels; // @synthesize allTitleLabels=_allTitleLabels;
@property(copy, nonatomic) NSArray *allImageViews; // @synthesize allImageViews=_allImageViews;
@property(nonatomic) __weak UILabel *titleLabel3; // @synthesize titleLabel3=_titleLabel3;
@property(nonatomic) __weak UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(nonatomic) __weak UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(nonatomic) __weak UIImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(nonatomic) __weak UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(nonatomic) __weak UIImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(nonatomic) __weak UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) _Bool isExtraLayoutNew; // @synthesize isExtraLayoutNew=_isExtraLayoutNew;
@property(nonatomic) __weak id <MCTXCellDelegte> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapGesture:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)emptyInfoFillSubViews;
- (void)setImageView:(id)arg1 andLabel:(id)arg2 withInfo:(id)arg3;
- (void)fillSubViews;
- (void)updateCardUI;
- (void)initAllSubViewsAndData;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

