//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibrary/ALAssetsLibrary.h>

@interface ALAssetsLibrary (CustomPhotoAlbum)
- (void)loadImagesFromAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAssetURL:(id)arg1 toAlbum:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)saveImageData:(id)arg1 toAlbum:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)saveVideo:(id)arg1 toAlbum:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)saveImage:(id)arg1 toAlbum:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_assetForURLResultBlockWithGroup:(id)arg1 assetURL:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_resultBlockOfAddingToAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@end

