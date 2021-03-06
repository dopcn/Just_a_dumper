//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NBBookItem, NBChapterContentDownInfo, NBSMDownloadService;

@protocol NBSMDownloadServiceDelegate <NSObject>
- (void)bookDownloadService:(NBSMDownloadService *)arg1 didChangeDownloadCornerMarkStatusForBookItem:(NBBookItem *)arg2;
- (void)bookDownloadService:(NBSMDownloadService *)arg1 didFinishIncrCacheForChapter:(NBChapterContentDownInfo *)arg2 forBookItem:(NBBookItem *)arg3;
- (void)bookDownloadService:(NBSMDownloadService *)arg1 didFinishOfflineDownloadForBookItem:(NBBookItem *)arg2;
@end

