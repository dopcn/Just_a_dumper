//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, FSVideoInput, NSArray, NSURL;

@interface FSMovieVideoNode : NSObject
{
    _Bool _isImage;
    _Bool _restartWhenComplete;
    _Bool _returnThLastBufferIfFinished;
    _Bool _prefetchFramesWhenPrepareFinished;
    int _movieBufferType;
    NSURL *_url;
    AVAsset *_asset;
    double _startTime;
    double _duration;
    id _videoReaderLasetBuffer;
    FSVideoInput *_videoInput;
    NSArray *_imagesArray;
    double _imagesDuration;
    long long _outputFormat;
    CDStruct_1b6d18a9 _precisionTime;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) double imagesDuration; // @synthesize imagesDuration=_imagesDuration;
@property(retain, nonatomic) NSArray *imagesArray; // @synthesize imagesArray=_imagesArray;
@property(retain, nonatomic) FSVideoInput *videoInput; // @synthesize videoInput=_videoInput;
@property(nonatomic) int movieBufferType; // @synthesize movieBufferType=_movieBufferType;
@property(retain, nonatomic) id videoReaderLasetBuffer; // @synthesize videoReaderLasetBuffer=_videoReaderLasetBuffer;
@property(nonatomic) _Bool prefetchFramesWhenPrepareFinished; // @synthesize prefetchFramesWhenPrepareFinished=_prefetchFramesWhenPrepareFinished;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) CDStruct_1b6d18a9 precisionTime; // @synthesize precisionTime=_precisionTime;
@property(nonatomic) _Bool returnThLastBufferIfFinished; // @synthesize returnThLastBufferIfFinished=_returnThLastBufferIfFinished;
@property(nonatomic) _Bool restartWhenComplete; // @synthesize restartWhenComplete=_restartWhenComplete;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
- (void).cxx_destruct;
- (id)movieRenderBufferWithPreferFrameTime:(CDStruct_1b6d18a9)arg1 waitUntilFinish:(_Bool)arg2;
- (id)imageWithPreferFrameTime:(CDStruct_1b6d18a9)arg1 waitUntilFinish:(_Bool)arg2;
- (id)imageWithTimeOffset:(CDStruct_1b6d18a9)arg1 waitUntilFinish:(_Bool)arg2;
- (id)nextSampleBufferWithPreferFrameTime:(CDStruct_1b6d18a9)arg1 waitUntilFinish:(_Bool)arg2;
- (id)nextSampleBufferWithTimeOffset:(CDStruct_1b6d18a9)arg1 waitUntilFinish:(_Bool)arg2;
- (void)seekTime:(CDStruct_1b6d18a9)arg1;
- (void)reset;
- (void)endReading;
- (_Bool)beginReading;
- (void)prepareForReadingWaitUntilFinish:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 outputFormat:(long long)arg2;
- (id)initWithFSImages:(id)arg1 duration:(double)arg2;
- (id)initWithAsset:(id)arg1 outputFormat:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)description;
- (id)getResourceURL;

@end

