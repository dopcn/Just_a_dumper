//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TDCacheManager : NSObject
{
}

+ (id)sharedInstance;
- (id)getRootDirectory;
- (id)getCachePathWithType:(long long)arg1;
- (void)clearCache;
- (void)storeCacheData:(id)arg1 type:(long long)arg2;
- (id)loadCacheDataWithType:(long long)arg1;

@end

