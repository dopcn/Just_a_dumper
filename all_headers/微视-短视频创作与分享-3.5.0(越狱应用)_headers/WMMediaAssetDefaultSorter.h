//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMMediaAssetSorter.h"

@class NSArray;

@interface WMMediaAssetDefaultSorter : WMMediaAssetSorter
{
    NSArray *_timeSortedAssets;
}

@property(retain, nonatomic) NSArray *timeSortedAssets; // @synthesize timeSortedAssets=_timeSortedAssets;
- (void).cxx_destruct;
- (id)assetSectionsForSequenceMode;
- (id)assetSectionsForGroupMode;
- (id)sortedAssetSequence;
- (void)setAssets:(id)arg1;
- (id)timeSortedAssetsWithAssets:(id)arg1;
- (id)GEOGroupedSectionsWithAssets:(id)arg1;
- (id)mergeSections:(id)arg1;
- (id)GEOGroupSections:(id)arg1;
- (id)timeGroupedSectionsWithAssets:(id)arg1;
- (_Bool)assetSection:(id)arg1 canJointBehindAssetSection:(id)arg2;
- (_Bool)asset:(id)arg1 isSameMomentWithAsset:(id)arg2;
- (_Bool)asset:(id)arg1 isFarFromAsset:(id)arg2;

@end

