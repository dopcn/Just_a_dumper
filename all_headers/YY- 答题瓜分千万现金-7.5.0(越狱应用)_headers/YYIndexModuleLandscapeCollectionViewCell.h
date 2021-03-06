//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYIndexBaseCollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YYIndexModuleLandscapeCollectionViewCell : YYIndexBaseCollectionViewCell
{
    UIImageView *_thumbImageView;
    UILabel *_titleLabel;
    UILabel *_subLabel;
    UIImageView *_tagBackgroundImageView;
    UILabel *_tagLabel;
    UIView *_tagView;
}

@property(nonatomic) __weak UIView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) __weak UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) __weak UIImageView *tagBackgroundImageView; // @synthesize tagBackgroundImageView=_tagBackgroundImageView;
@property(nonatomic) __weak UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (void).cxx_destruct;
- (id)highlightView;
- (id)numberStringFromNumber:(id)arg1;
- (void)displayInfo:(id)arg1 showTag:(long long)arg2;
- (void)awakeFromNib;

@end

