//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NVImageView, NVLineView, NVModelBaseReviewWithPic, UILabel;

@interface NVMarketHotCell : UICollectionViewCell
{
    NVImageView *_bigImg;
    NVImageView *_faceImgView;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    NVLineView *_line;
    NVModelBaseReviewWithPic *_data;
}

@property(retain, nonatomic) NVModelBaseReviewWithPic *data; // @synthesize data=_data;
@property(retain, nonatomic) NVLineView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NVImageView *faceImgView; // @synthesize faceImgView=_faceImgView;
@property(retain, nonatomic) NVImageView *bigImg; // @synthesize bigImg=_bigImg;
- (void).cxx_destruct;
- (void)setupData:(id)arg1;
- (double)bigImgHeight;
- (double)borderCorner;
- (struct CGSize)contentWidthWizText:(id)arg1;
- (struct CGSize)titleSizeWizText:(id)arg1;
- (id)textFont;
- (double)labelHeight;
- (double)faceWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

