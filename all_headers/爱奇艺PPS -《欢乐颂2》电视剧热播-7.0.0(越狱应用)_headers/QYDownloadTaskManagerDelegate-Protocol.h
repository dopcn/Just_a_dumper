//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QYDownloadTask;

@protocol QYDownloadTaskManagerDelegate <NSObject>
- (void)downloadTask:(QYDownloadTask *)arg1 progress:(float)arg2 bytesRead:(long long)arg3 totalBytesRead:(long long)arg4 expectedBytesRead:(long long)arg5;

@optional
- (void)finishVIPDownloadTrial;
@end

