//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface QPEffectViewCell : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UIImageView *_frameImageView;
    UIImageView *_imageViewFrame;
}

@property(nonatomic) __weak UIImageView *imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(nonatomic) __weak UIImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)awakeFromNib;

@end

