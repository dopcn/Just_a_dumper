//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TDLocalDownloadShow.h"

@interface TDLocalDownloadShow : _TDLocalDownloadShow
{
}

+ (id)findAllShowsHavefinishedVideo;
+ (id)findAllVideosDownloaded:(id)arg1;
+ (id)findAllVideosByShowID:(id)arg1;
+ (id)findFirstByShowID:(id)arg1;
- (_Bool)doesAllDownloadVideoHasPlayed;
- (_Bool)isFinishedShow;
- (id)findAllFinishedVideosInOrder;
- (id)findAllVideosInOrder;
- (id)sortDescriptors;
- (_Bool)orderAscending;
- (_Bool)containsVideo:(id)arg1;
- (id)findRecentlyPlayedVideo;
- (id)findAllVideosDownloadUnComplete;
- (id)findAllVideosDownloadComplete;
- (id)findAllLocalMediasByDownloadState:(_Bool)arg1;
- (id)findAllVideos;
- (id)showTotalEpisode;
- (id)showcategory;
- (id)showthumbURL;
- (id)modelfilesize;
- (float)modelprogress;
- (id)modelstatusstring;
- (id)modelthumbimg;
- (id)modeltitle;

@end

