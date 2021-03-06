//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface MPIMayInterestedMediaCell : UICollectionViewCell
{
    UIImageView *_coverImageView;
    UILabel *_captionLabel;
    UIImageView *_bottomGradientImageView;
}

@property(retain, nonatomic) UIImageView *bottomGradientImageView; // @synthesize bottomGradientImageView=_bottomGradientImageView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)commonInit;
- (void)configWithCoverURL:(id)arg1 caption:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

