//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _LFUISafeNSDictionary;

@interface LFUIRemoteImageManager : NSObject
{
    _LFUISafeNSDictionary *_imageProssorMap;
}

+ (id)cacheKeyForURL:(id)arg1;
+ (_Bool)diskImageExistsForURL:(id)arg1;
+ (_Bool)cachedImageExistsForURL:(id)arg1;
+ (void)cancelAll;
+ (unsigned long long)diskByteCount;
+ (void)cleanCacheWithCompletion:(CDUnknownBlockType)arg1;
+ (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)downloadImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)prefetchImagesWithURLs:(id)arg1 options:(unsigned long long)arg2;
+ (void)prefetchImagesWithURLs:(id)arg1;
+ (void)prefetchImageWithURL:(id)arg1 options:(unsigned long long)arg2;
+ (void)prefetchImageWithURL:(id)arg1;
+ (id)shareInstance;
@property(copy, nonatomic) _LFUISafeNSDictionary *imageProssorMap; // @synthesize imageProssorMap=_imageProssorMap;
- (void).cxx_destruct;

@end

