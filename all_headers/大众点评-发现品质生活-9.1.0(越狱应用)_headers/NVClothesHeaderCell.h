//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, NVImageView, UIImageView, UILabel;

@interface NVClothesHeaderCell : UITableViewCell
{
    NSString *_headerPicUrl;
    NSString *_logoUrl;
    NSString *_shopTitle;
    NVImageView *_headerMaskView;
    NVImageView *_headerPicView;
    NVImageView *_logoView;
    UILabel *_shopNameLabel;
    UIImageView *_albumBgView;
    UILabel *_albumLabel;
    UIImageView *_albumArrowView;
}

+ (double)headerHeight;
@property(retain, nonatomic) UIImageView *albumArrowView; // @synthesize albumArrowView=_albumArrowView;
@property(retain, nonatomic) UILabel *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(retain, nonatomic) UIImageView *albumBgView; // @synthesize albumBgView=_albumBgView;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) NVImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) NVImageView *headerPicView; // @synthesize headerPicView=_headerPicView;
@property(retain, nonatomic) NVImageView *headerMaskView; // @synthesize headerMaskView=_headerMaskView;
@property(copy, nonatomic) NSString *shopTitle; // @synthesize shopTitle=_shopTitle;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *headerPicUrl; // @synthesize headerPicUrl=_headerPicUrl;
- (void).cxx_destruct;
- (double)logoWidth;
- (void)refreshData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

