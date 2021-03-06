//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FAUserDigitalAlbumItem, UIImageView, UILabel, UIView;

@interface FAUserDigitalAlbumPurchaseCell : UICollectionViewCell
{
    unsigned long long _cellType;
    UIView *_backView;
    UIImageView *_backImageView;
    UIImageView *_coverIamgeView;
    UILabel *_titleLabel;
    UILabel *_singerLabel;
    FAUserDigitalAlbumItem *_model;
}

+ (id)publisheReuseIdentifier;
+ (id)purchaseReuseIdentifier;
@property(retain, nonatomic) FAUserDigitalAlbumItem *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *singerLabel; // @synthesize singerLabel=_singerLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverIamgeView; // @synthesize coverIamgeView=_coverIamgeView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)createSubViews;
- (id)roundUp:(long long)arg1 afterPoint:(int)arg2;
- (void)configureItemWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

