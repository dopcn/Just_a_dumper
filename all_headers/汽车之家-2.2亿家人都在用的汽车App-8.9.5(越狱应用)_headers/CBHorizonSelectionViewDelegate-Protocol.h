//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBHorizonSelectionView, NSIndexPath, UICollectionViewCell;

@protocol CBHorizonSelectionViewDelegate <NSObject>
- (void)clickShowAll:(CBHorizonSelectionView *)arg1;
- (void)CBHorizonSelectionView:(CBHorizonSelectionView *)arg1 didSelectedAtIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfTitleInCBHorizonSelectionView:(CBHorizonSelectionView *)arg1;
- (void)CBHorizonSelectionView:(CBHorizonSelectionView *)arg1 configurCell:(UICollectionViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

