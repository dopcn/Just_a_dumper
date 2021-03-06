//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface YKUDVideoManager : NSObject
{
    NSArray *_videos;
    NSMutableDictionary *_downloadId2SegmentMapping;
    NSObject<OS_dispatch_queue> *_io_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *io_queue; // @synthesize io_queue=_io_queue;
@property(retain, nonatomic) NSMutableDictionary *downloadId2SegmentMapping; // @synthesize downloadId2SegmentMapping=_downloadId2SegmentMapping;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
- (void).cxx_destruct;
- (id)videoStatusDescription;
- (void)removeVideoInfo:(id)arg1 atFolder:(_Bool)arg2 andInMemeory:(_Bool)arg3;
- (void)addOrUpdateVideo:(id)arg1;
- (void)addOrUpdateVideoAsync:(id)arg1;
- (id)loadVideo:(id)arg1;
- (id)findSegmentWithDownloadId:(id)arg1;
- (void)updateSegmentAsync:(id)arg1;
- (void)updateVideoAsync:(id)arg1;
- (void)updateVideo:(id)arg1;
- (void)resumeVideos:(id)arg1;
- (void)pauseVideos:(id)arg1;
- (void)removeVideos:(id)arg1;
- (void)addVideos:(id)arg1;
- (void)loadVideos;
- (id)findAllUnfinishedVideos;
- (id)init;

@end

