//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MTLivePlayModel, UIImageView, UILabel;

@interface MTLiveCameraPlacementCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    MTLivePlayModel *_livePlayModel;
    UIImageView *_imageView;
    UILabel *_imageTitleLabel;
    UIImageView *_liveIconImageView;
    UIImageView *_bgView;
}

@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *liveIconImageView; // @synthesize liveIconImageView=_liveIconImageView;
@property(retain, nonatomic) UILabel *imageTitleLabel; // @synthesize imageTitleLabel=_imageTitleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) MTLivePlayModel *livePlayModel; // @synthesize livePlayModel=_livePlayModel;
- (void).cxx_destruct;
- (void)setImageTitleTextColor:(id)arg1 withBackgroundColor:(id)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

