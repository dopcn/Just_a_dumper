//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTCosBrandCollectionView;

@protocol TTCosBrandCollectionViewDelegate <NSObject>

@optional
- (void)collectionView:(TTCosBrandCollectionView *)arg1 didSelectCategoryAtIndex:(long long)arg2;
- (void)collectionView:(TTCosBrandCollectionView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)moreInfoClicked:(TTCosBrandCollectionView *)arg1;
@end

