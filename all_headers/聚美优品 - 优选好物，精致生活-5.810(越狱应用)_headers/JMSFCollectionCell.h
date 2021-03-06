//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YJUICollectionViewCell.h"

@class JMSFilterTabCVCellModel, UIImageView, UILabel, UIView;

@interface JMSFCollectionCell : YJUICollectionViewCell
{
    UIView *_backgroundLayerView;
    UIImageView *_openImageView;
    UILabel *_titleLabel;
    UIImageView *_tagImageView;
    JMSFilterTabCVCellModel *_cellModel;
}

+ (long long)cellCreate;
+ (struct CGSize)collectionViewManager:(id)arg1 sizeForCellObject:(id)arg2;
@property(nonatomic) __weak JMSFilterTabCVCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *openImageView; // @synthesize openImageView=_openImageView;
@property(nonatomic) __weak UIView *backgroundLayerView; // @synthesize backgroundLayerView=_backgroundLayerView;
- (void).cxx_destruct;
- (void)racItemModelSelectBlock;
- (void)reloadItemData;
- (void)racTabModelOpenBlock;
- (void)racTabModelDefaultTitleBlock;
- (void)reloadTabData;
- (void)reloadDataSyncWithCellObject:(id)arg1 collectionViewManager:(id)arg2;
- (void)awakeFromNib;

@end

