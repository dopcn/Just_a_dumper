//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCRemoteImageProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface UCRemoteImageCenter : NSObject <UCRemoteImageProtocol>
{
    NSMutableDictionary *_progressiveDownloadHash;
}

+ (id)cacheDirectory;
+ (id)defaultCenter;
@property(retain, nonatomic) NSMutableDictionary *progressiveDownloadHash; // @synthesize progressiveDownloadHash=_progressiveDownloadHash;
- (void).cxx_destruct;
- (unsigned long long)diskSize;
- (void)clearMemory;
- (void)clearDisk;
- (id)loadImageForParam:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 progressDownloadBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)loadImageForParam:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)loadImageForURLString:(id)arg1 forWidth:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)loadImageForURLString:(id)arg1 forSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelImageDownloadForURLString:(id)arg1;
- (id)loadImageForURLString:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 progressDownloadBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)loadImageForURLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)queryImageCacheForURLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)imageDataFromDiskForURLString:(id)arg1;
- (id)imageFromCacheForURLString:(id)arg1;
- (id)imageFromDiskCacheForURLString:(id)arg1;
- (id)imageFromMemoryCacheForURLString:(id)arg1;
- (id)imageManagerForURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

