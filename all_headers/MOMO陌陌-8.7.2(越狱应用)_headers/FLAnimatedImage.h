//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSIndexSet, NSMutableArray, NSMutableIndexSet, UIImage;
@protocol OS_dispatch_queue;

@interface FLAnimatedImage : NSObject
{
    struct CGImageSource *_imageSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    FLAnimatedImage *_weakProxy;
    UIImage *_posterImage;
    unsigned long long _loopCount;
    NSArray *_delayTimes;
    unsigned long long _frameCount;
    unsigned long long _frameCacheSizeMax;
    NSData *_data;
    unsigned long long _frameCacheSizeOptimal;
    unsigned long long _frameCacheSizeMaxInternal;
    unsigned long long _requestedFrameIndex;
    unsigned long long _posterImageFrameIndex;
    NSMutableArray *_cachedFrames;
    NSMutableIndexSet *_cachedFrameIndexes;
    NSMutableIndexSet *_requestedFrameIndexes;
    NSIndexSet *_allFramesIndexSet;
    unsigned long long _memoryWarningCount;
    struct CGSize _size;
}

+ (id)predrawnImageFromImage:(id)arg1;
+ (struct CGSize)sizeForImage:(id)arg1;
@property(nonatomic) unsigned long long memoryWarningCount; // @synthesize memoryWarningCount=_memoryWarningCount;
@property(readonly, nonatomic) NSIndexSet *allFramesIndexSet; // @synthesize allFramesIndexSet=_allFramesIndexSet;
@property(readonly, nonatomic) NSMutableIndexSet *requestedFrameIndexes; // @synthesize requestedFrameIndexes=_requestedFrameIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *cachedFrameIndexes; // @synthesize cachedFrameIndexes=_cachedFrameIndexes;
@property(readonly, nonatomic) NSMutableArray *cachedFrames; // @synthesize cachedFrames=_cachedFrames;
@property(readonly, nonatomic) unsigned long long posterImageFrameIndex; // @synthesize posterImageFrameIndex=_posterImageFrameIndex;
@property(nonatomic) unsigned long long requestedFrameIndex; // @synthesize requestedFrameIndex=_requestedFrameIndex;
@property(nonatomic) unsigned long long frameCacheSizeMaxInternal; // @synthesize frameCacheSizeMaxInternal=_frameCacheSizeMaxInternal;
@property(readonly, nonatomic) unsigned long long frameCacheSizeOptimal; // @synthesize frameCacheSizeOptimal=_frameCacheSizeOptimal;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long frameCacheSizeMax; // @synthesize frameCacheSizeMax=_frameCacheSizeMax;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSArray *delayTimes; // @synthesize delayTimes=_delayTimes;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (void).cxx_destruct;
- (id)description;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)resetFrameCacheSizeMaxInternal;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)arg1;
- (void)purgeFrameCacheIfNeeded;
- (id)frameIndexesToCache;
- (id)predrawnImageAtIndex:(unsigned long long)arg1;
- (void)addFrameIndexesToCache:(id)arg1;
- (id)imageLazilyCachedAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAnimatedGIFData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) FLAnimatedImage *weakProxy; // @synthesize weakProxy=_weakProxy;
@property(readonly, nonatomic) unsigned long long frameCacheSizeCurrent;

@end

