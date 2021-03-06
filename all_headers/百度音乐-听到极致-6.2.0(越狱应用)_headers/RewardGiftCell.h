//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class RewardGiftDataModel, UIImageView, UILabel, UIView;

@interface RewardGiftCell : UICollectionViewCell
{
    RewardGiftDataModel *_model;
    UIView *_backgourndView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *backgourndView; // @synthesize backgourndView=_backgourndView;
@property(retain, nonatomic) RewardGiftDataModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)iconViewDidClikc:(id)arg1;
- (void)_layoutTitleLabel;
- (void)_layoutIconView;
- (void)_layoutBackgroundView;
- (void)_layoutView;
- (void)layoutSubviews;
- (void)_initializeTitleLabel;
- (void)_initializeIconView;
- (void)_initializeBackgroundView;
- (void)_initializeView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

