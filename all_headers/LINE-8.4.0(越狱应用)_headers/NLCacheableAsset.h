//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVURLAsset.h>

@class NLCacheableLoaderDelegate, NSString, NSURL;

@interface NLCacheableAsset : AVURLAsset
{
    NSString *_cacheKey;
    NLCacheableLoaderDelegate *_loaderDelegate;
}

+ (id)cacheableURLAssetWithURL:(id)arg1 cacheKey:(id)arg2 options:(id)arg3;
+ (id)assetWithURL:(id)arg1 cacheKey:(id)arg2 options:(id)arg3;
@property(retain, nonatomic) NLCacheableLoaderDelegate *loaderDelegate; // @synthesize loaderDelegate=_loaderDelegate;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *originURL;
- (void)removeCache;
- (void)removeLoaderDelegate;
- (id)initWithURL:(id)arg1 cacheKey:(id)arg2 options:(id)arg3 queue:(id)arg4;
- (id)initWithURL:(id)arg1 cacheKey:(id)arg2 options:(id)arg3;

@end

