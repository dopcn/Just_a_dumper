//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, VSBrandCellViewModel;

@interface VSBrandCollectionViewCell : UICollectionViewCell
{
    VSBrandCellViewModel *_viewModel;
    UIImageView *_choosenImageView;
    UIImageView *_brandImageView;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(retain, nonatomic) UIImageView *choosenImageView; // @synthesize choosenImageView=_choosenImageView;
@property(retain, nonatomic) VSBrandCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)bindViewModel;
- (void)init:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

