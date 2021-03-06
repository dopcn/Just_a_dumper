//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PLAudioRenderProtocol-Protocol.h"

@class NSString;
@protocol PLAudioRenderDataSource, PLAudioRenderDelegate;

@interface PLAudioQueueCallbackRender : NSObject <PLAudioRenderProtocol>
{
    struct OpaqueAudioQueue *_playQueue;
    struct AudioQueueBuffer *_playQueueBuffers[3];
    unsigned int _bytesPerBuffer;
    struct AudioStreamBasicDescription _audioFormat;
    id _observer;
    _Bool _running;
    _Bool _paused;
    id <PLAudioRenderDelegate> _delegate;
    id <PLAudioRenderDataSource> _dataSource;
}

@property(getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <PLAudioRenderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PLAudioRenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setPlayerVolume:(float)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)start;
- (void)primePlayQueueBuffers;
- (void)freePlayQueueBuffers;
- (void)allocatePlayQueueBuffers;
- (void)tearDownPlayQueue;
- (void)setUpPlayQueue;
- (void)setUpAudio;
- (void)dealloc;
- (void)startWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 packetsPerBuffer:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

