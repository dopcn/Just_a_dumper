//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXOChatBubbleViewModelFactory : NSObject
{
}

+ (void)removeCachesWithCacheKeyPrefix:(id)arg1;
+ (id)getAllCachesWithCacheKeyPrefix:(id)arg1;
+ (id)viewModel4Message:(id)arg1 cacheKeyPrefix:(id)arg2 withHookBlock:(CDUnknownBlockType)arg3 andPrepare4UseBlock:(CDUnknownBlockType)arg4;
+ (id)viewModelCacheKey4Message:(id)arg1 cacheKeyPrefix:(id)arg2;
+ (id)getCacheKeyPrefix:(id)arg1;
+ (id)mapViewModelCacheObj;

@end

