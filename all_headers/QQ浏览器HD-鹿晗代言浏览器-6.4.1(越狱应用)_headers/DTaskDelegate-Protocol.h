//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BaseTask;

@protocol DTaskDelegate

@optional
- (void)taskDownloadOKForSnap:(BaseTask *)arg1;
- (void)taskDownloadStatusChange:(BaseTask *)arg1;
- (void)taskDownloadSizeChange:(BaseTask *)arg1;
- (void)taskDownloadError:(BaseTask *)arg1;
- (void)taskDownloaded:(BaseTask *)arg1;
@end

