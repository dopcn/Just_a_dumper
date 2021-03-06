//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;
@protocol OS_dispatch_queue;

@interface UGCAnimatedImage : NSObject
{
    float _frameDuration;
    UIImage *_posterImage;
    unsigned long long _frameCount;
    struct CGImageSource *_imageSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    UIImage *_prepareNextFrame;
}

@property(retain, nonatomic) UIImage *prepareNextFrame; // @synthesize prepareNextFrame=_prepareNextFrame;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(nonatomic) float frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (void).cxx_destruct;
- (float)frameDurationWithSource:(struct CGImageSource *)arg1;
- (void)loadImageFrameAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadImageFrameAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAnimatedImageData:(id)arg1;

@end

