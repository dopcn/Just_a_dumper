//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NVModelBaseBabyShopAlbum, UIImageView, UILabel;

@interface BabyShopInfoAlbumView : UIView
{
    NVModelBaseBabyShopAlbum *_shopAlbum;
    UIImageView *_imageViewForPic;
    UILabel *_labelForTitle;
}

+ (struct CGSize)viewSize;
+ (id)viewReuseId;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) UIImageView *imageViewForPic; // @synthesize imageViewForPic=_imageViewForPic;
@property(retain, nonatomic) NVModelBaseBabyShopAlbum *shopAlbum; // @synthesize shopAlbum=_shopAlbum;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

