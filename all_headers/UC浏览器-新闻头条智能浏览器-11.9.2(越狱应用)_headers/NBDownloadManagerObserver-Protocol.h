//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NBChapterContentDownInfo, NBDownloadInfo, NSString;

@protocol NBDownloadManagerObserver <NSObject>

@optional
- (void)incrUpdateTask:(NBDownloadInfo *)arg1 didFinishDownloadChapterContent:(NBChapterContentDownInfo *)arg2;
- (void)downloadTaskCanceled:(NBDownloadInfo *)arg1;
- (void)downloadTaskAddedToTaskList:(NBDownloadInfo *)arg1;
- (void)downloadTaskWithInfo:(NBDownloadInfo *)arg1 didChangeStatus:(int)arg2 savePath:(NSString *)arg3;
@end

