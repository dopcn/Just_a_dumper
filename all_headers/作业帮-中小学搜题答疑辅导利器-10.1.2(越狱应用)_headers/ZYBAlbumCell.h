//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HBExpandButton, NSMutableArray, PHAsset, UIImageView, UIView;

@interface ZYBAlbumCell : UICollectionViewCell
{
    NSMutableArray *_selectAssets;
    PHAsset *_asset;
    long long _currentMaxCount;
    UIImageView *_photoImage;
    UIView *_blurView;
    HBExpandButton *_choosetBtn;
}

+ (struct CGSize)cellSize;
+ (id)indentifier;
@property(nonatomic) __weak HBExpandButton *choosetBtn; // @synthesize choosetBtn=_choosetBtn;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak UIImageView *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) long long currentMaxCount; // @synthesize currentMaxCount=_currentMaxCount;
@property(nonatomic) __weak PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak NSMutableArray *selectAssets; // @synthesize selectAssets=_selectAssets;
- (void).cxx_destruct;
- (void)chooseClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showCamera:(long long)arg1;

@end

