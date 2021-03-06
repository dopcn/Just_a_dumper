//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SCSIEPhotoCache : NSObject
{
    NSMutableDictionary *_cacheDic;
    NSString *_cahcePath;
    long long _maxCacheSize;
}

+ (id)sharedInstance;
@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(retain, nonatomic) NSString *cahcePath; // @synthesize cahcePath=_cahcePath;
@property(retain, nonatomic) NSMutableDictionary *cacheDic; // @synthesize cacheDic=_cacheDic;
- (void).cxx_destruct;
- (id)imageForRequestUrl:(id)arg1;
- (id)dataForRequestUrl:(id)arg1;
- (void)setCacheForUrl:(id)arg1;
- (id)cacheFilePathForUrl:(id)arg1;
- (id)encodeStrUrl:(id)arg1;
- (id)sha1StrWithStr:(id)arg1;
- (void)storeCacheForDisk;
- (void)loadCacheFromDisk;
- (id)init;

@end

