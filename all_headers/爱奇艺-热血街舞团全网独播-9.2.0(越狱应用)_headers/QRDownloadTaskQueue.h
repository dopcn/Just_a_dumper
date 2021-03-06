//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QRDownloadTaskQueue : NSObject
{
    struct vector<VolumeChapter, std::__1::allocator<VolumeChapter>> *_downloadingTask;
    long long _finishedTaskNum;
    long long _maxTaskNum;
}

@property(nonatomic) long long maxTaskNum; // @synthesize maxTaskNum=_maxTaskNum;
@property(nonatomic) long long finishedTaskNum; // @synthesize finishedTaskNum=_finishedTaskNum;
- (void)dealloc;
- (void)clear;
- (_Bool)isFull;
@property(readonly, nonatomic) long long size;
- (void)finishDownloadTask:(struct VolumeChapter)arg1;
- (void)addDownloadTask:(struct VolumeChapter)arg1;
- (struct VolumeChapter)firstTask;
- (id)init;

@end

