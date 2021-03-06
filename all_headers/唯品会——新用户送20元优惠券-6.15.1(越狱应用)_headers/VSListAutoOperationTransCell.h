//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, VSListAutoOperationViewModel;

@interface VSListAutoOperationTransCell : UICollectionViewCell
{
    VSListAutoOperationViewModel *_viewModel;
    UIImageView *_productImageView;
    UIImageView *_cornerImageView;
    UIImageView *_iconImageView;
    UIImageView *_backgroundImageView;
    UIView *_rightContentView;
    UILabel *_titleLabel;
    UIImageView *_subtitleSplitlineImageView;
    UILabel *_subtitleLabel;
    UIImageView *_titleSeparateImageView;
    UIButton *_actionButton;
    double _cellWidth;
    double _cellHeight;
    UIImageView *_timeLimitBgImageView;
    UILabel *_timeLimitTextLabel;
}

@property(retain, nonatomic) UILabel *timeLimitTextLabel; // @synthesize timeLimitTextLabel=_timeLimitTextLabel;
@property(retain, nonatomic) UIImageView *timeLimitBgImageView; // @synthesize timeLimitBgImageView=_timeLimitBgImageView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *titleSeparateImageView; // @synthesize titleSeparateImageView=_titleSeparateImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIImageView *subtitleSplitlineImageView; // @synthesize subtitleSplitlineImageView=_subtitleSplitlineImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) VSListAutoOperationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)handleTapEvent;
- (void)updateTimeLimitData;
- (void)updateData:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

