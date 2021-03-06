//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock;

@interface IJKVODSDLAudioQueueController : NSObject
{
    struct OpaqueAudioQueue *_audioQueueRef;
    struct AudioQueueBuffer *_audioQueueBufferRefArray[3];
    int _renderStatus;
    NSRecursiveLock *_statusLock;
    struct SDL_AudioSpec _spec;
}

+ (id)AudioRenderStatusDesc:(int)arg1;
@property(retain, nonatomic) NSRecursiveLock *statusLock; // @synthesize statusLock=_statusLock;
@property(readonly, nonatomic) struct SDL_AudioSpec spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)setPlaybackVolume:(float)arg1;
- (void)close;
- (void)stop;
- (void)flush;
- (void)pause;
- (void)play;
- (_Bool)start;
- (void)dealloc;
- (id)initWithAudioSpec:(const struct SDL_AudioSpec *)arg1;

@end

