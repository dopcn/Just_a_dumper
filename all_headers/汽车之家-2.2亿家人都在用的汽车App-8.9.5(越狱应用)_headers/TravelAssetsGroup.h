//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAssetCollection, PHFetchResult;

@interface TravelAssetsGroup : NSObject
{
    PHAssetCollection *_phAssetCollection;
    PHFetchResult *_phFetchResult;
    NSArray *_assetslocalIdentifiers;
}

@property(copy, nonatomic) NSArray *assetslocalIdentifiers; // @synthesize assetslocalIdentifiers=_assetslocalIdentifiers;
@property(retain, nonatomic) PHFetchResult *phFetchResult; // @synthesize phFetchResult=_phFetchResult;
@property(retain, nonatomic) PHAssetCollection *phAssetCollection; // @synthesize phAssetCollection=_phAssetCollection;
- (void).cxx_destruct;
- (void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)posterImageWithSize:(struct CGSize)arg1;
- (long long)numberOfAssets;
- (id)name;
- (id)initWithPHCollection:(id)arg1 fetchAssetsOptions:(id)arg2;
- (id)initWithPHCollection:(id)arg1;

@end

