//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMAssetItem.h"

@class UIImage;

@interface NMAssetCameraItem : NMAssetItem
{
    UIImage *_imageForCamera;
    UIImage *_highlightedImageForCamera;
}

- (void).cxx_destruct;
- (long long)fileLength;
- (_Bool)isCamera;
- (id)highlightedThumbnail;
- (id)thumbnail;
- (id)init;

@end

