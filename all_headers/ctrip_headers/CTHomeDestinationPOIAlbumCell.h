//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CTHomeCascadeCategoryInfoItemModel, CTImageView, UILabel;

@interface CTHomeDestinationPOIAlbumCell : UICollectionViewCell
{
    CTImageView *_productImageView;
    UILabel *_subTitle;
    UILabel *_mainTitle;
    CTHomeCascadeCategoryInfoItemModel *_cellData;
}

+ (double)CellHeight;
+ (double)CellWidth;
@property(retain, nonatomic) CTHomeCascadeCategoryInfoItemModel *cellData; // @synthesize cellData=_cellData;
@property(nonatomic) __weak UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(nonatomic) __weak UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) __weak CTImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;
- (void)updateCellWithData:(id)arg1;
- (void)awakeFromNib;

@end

