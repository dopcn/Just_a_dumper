//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KGAlbumStoreBLL : NSObject
{
}

- (void)queryKGAlbumStoreDataWithPage:(long long)arg1 pageSize:(long long)arg2 dataType:(long long)arg3 successCallback:(CDUnknownBlockType)arg4 andErrorCallback:(CDUnknownBlockType)arg5;
- (void)queryKGAlbumStoreBestSellRankWithPage:(long long)arg1 pageSize:(long long)arg2 dataType:(long long)arg3 successCallback:(CDUnknownBlockType)arg4 andErrorCallback:(CDUnknownBlockType)arg5;
- (void)queryKGAlbumStoreWellSellDataWithPage:(long long)arg1 pageSize:(long long)arg2 successCallback:(CDUnknownBlockType)arg3 andErrorCallback:(CDUnknownBlockType)arg4;
- (void)queryKGAlbumStoreRecommendDataWithWellSellPage:(long long)arg1 wellSellpageSize:(long long)arg2 successCallBack:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4;
- (void)queryRecommendBannerDataWithSuccessCallBack:(CDUnknownBlockType)arg1 errorCallback:(CDUnknownBlockType)arg2;

@end

