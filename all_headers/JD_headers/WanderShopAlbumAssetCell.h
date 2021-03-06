//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;
@protocol WanderShopAlbumAssetCellDelegate;

@interface WanderShopAlbumAssetCell : UITableViewCell
{
    NSMutableArray *_viewArray;
    _Bool _isFirstRow;
    NSArray *_assetsArray;
    id <WanderShopAlbumAssetCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WanderShopAlbumAssetCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFirstRow; // @synthesize isFirstRow=_isFirstRow;
@property(retain, nonatomic) NSArray *assetsArray; // @synthesize assetsArray=_assetsArray;
- (void).cxx_destruct;
- (void)imageViewDidSelected:(id)arg1;
- (void)takePhotos;
- (void)layoutSubviews;
- (void)configUI;
- (void)imageViewClicked:(id)arg1;
- (id)createCheckBoxView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

