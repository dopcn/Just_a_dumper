//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface GJGCVideoKeyframeCell : UICollectionViewCell
{
    _Bool _needCellOffset;
    UIImageView *_imageView;
    double _imageWidth;
}

@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool needCellOffset; // @synthesize needCellOffset=_needCellOffset;
- (void).cxx_destruct;
- (void)updateCellWithImage:(id)arg1;
- (void)updateCellWithKeyframeTime:(id)arg1 videoAsset:(id)arg2 filterID:(long long)arg3;
- (void)updateCellWithKeyframeTime:(id)arg1 videoAsset:(id)arg2;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

