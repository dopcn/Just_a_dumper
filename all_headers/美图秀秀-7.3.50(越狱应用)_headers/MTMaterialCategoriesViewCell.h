//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MTMaterialCategoriesViewCell : UICollectionViewCell
{
    UIImageView *_backgroundImageView;
    UIView *_coverView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)layout;
- (void)setup;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

