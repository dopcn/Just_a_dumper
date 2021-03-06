//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSMutableArray, NSString, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface BCAlbumChooseModel : NSObject <PHPhotoLibraryChangeObserver>
{
    _Bool _isOnlyImage;
    _Bool _isOnlyVideo;
    NSMutableArray *_allGroupAlbumArray;
    PHAssetCollection *_selectCollection;
    PHFetchResult *_selectFetchResults;
    PHFetchOptions *_fetchOptions;
    PHAssetCollection *_firstCollection;
    NSMutableArray *_smartAlbumArray;
    NSMutableArray *_smartFetchResultArray;
    NSMutableArray *_topUserAlbumArray;
    NSMutableArray *_topUserFetchResultArray;
    PHFetchResult *_topUserCollections;
}

@property(retain, nonatomic) PHFetchResult *topUserCollections; // @synthesize topUserCollections=_topUserCollections;
@property(retain, nonatomic) NSMutableArray *topUserFetchResultArray; // @synthesize topUserFetchResultArray=_topUserFetchResultArray;
@property(retain, nonatomic) NSMutableArray *topUserAlbumArray; // @synthesize topUserAlbumArray=_topUserAlbumArray;
@property(retain, nonatomic) NSMutableArray *smartFetchResultArray; // @synthesize smartFetchResultArray=_smartFetchResultArray;
@property(retain, nonatomic) NSMutableArray *smartAlbumArray; // @synthesize smartAlbumArray=_smartAlbumArray;
@property(nonatomic) _Bool isOnlyVideo; // @synthesize isOnlyVideo=_isOnlyVideo;
@property(nonatomic) _Bool isOnlyImage; // @synthesize isOnlyImage=_isOnlyImage;
@property(retain, nonatomic) PHAssetCollection *firstCollection; // @synthesize firstCollection=_firstCollection;
@property(retain, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) PHFetchResult *selectFetchResults; // @synthesize selectFetchResults=_selectFetchResults;
@property(retain, nonatomic) PHAssetCollection *selectCollection; // @synthesize selectCollection=_selectCollection;
@property(retain, nonatomic) NSMutableArray *allGroupAlbumArray; // @synthesize allGroupAlbumArray=_allGroupAlbumArray;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;
- (id)fetchSmartAlbumWithSubtype:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

