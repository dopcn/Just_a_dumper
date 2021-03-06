//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReaderOutput;

@interface MTMovieVideoReader : NSObject
{
    _Bool _willFinished;
    _Bool _finished;
    _Bool _firstFrameArrived;
    struct opaqueCMSampleBuffer *_buffer;
    AVAsset *_asset;
    AVAssetReaderOutput *_output;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _previousFrameTime;
}

@property(nonatomic) CDStruct_1b6d18a9 previousFrameTime; // @synthesize previousFrameTime=_previousFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) AVAssetReaderOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (CDStruct_1b6d18a9)videoTime;
- (void)dealloc;
- (id)init;

@end

