//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

@interface PHAsset (Utility)
- (id)fixOrientation:(id)arg1;
- (id)fetchOriginImageData;
- (void)fetchPreviewImageWithCompletion:(CDUnknownBlockType)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
- (id)fetchPreviewImage;
- (void)fetchThumbnailImageWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchThumbnailWithSize:(struct CGSize)arg1;
- (void)fetchOriginImageWithCompletion:(CDUnknownBlockType)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
- (id)fetchOrignImage;
@end

