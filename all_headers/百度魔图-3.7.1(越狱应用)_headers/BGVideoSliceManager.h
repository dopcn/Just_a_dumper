//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface BGVideoSliceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void).cxx_destruct;
- (id)videoSliceDurations;
- (double)totalDuration;
- (_Bool)isComoletedVideoRecord;
- (void)clearVideoButKeepSlices;
- (void)clearVideoDisk;
- (id)videoSlicePaths;
- (unsigned long long)countVideoSlices;
- (_Bool)deleteLateastSlice;
- (_Bool)saveSliceWith:(double)arg1 videoName:(id)arg2;
- (id)videoRecordInfo;
- (id)sliceVideoPathWithName:(id)arg1;
- (id)sliceInfoPath;
- (void)resetVideoSlicesInfo;
- (void)initDirectory;
- (void)dealloc;
- (id)init;

@end

