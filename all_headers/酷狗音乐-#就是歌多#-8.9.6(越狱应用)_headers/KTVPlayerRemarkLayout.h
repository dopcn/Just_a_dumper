//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface KTVPlayerRemarkLayout : UICollectionViewFlowLayout
{
    long long _rows;
    long long _columns;
    struct CGSize _cellSize;
}

@property(nonatomic) long long columns; // @synthesize columns=_columns;
@property(nonatomic) long long rows; // @synthesize rows=_rows;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithCellSize:(struct CGSize)arg1;

@end

