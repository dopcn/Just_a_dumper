//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableData, NSThread, NSURL;

@interface AudioStreamer : NSObject
{
    NSURL *url;
    struct OpaqueAudioQueue *audioQueue;
    struct OpaqueAudioFileStreamID *audioFileStream;
    struct AudioStreamBasicDescription asbd;
    NSThread *internalThread;
    struct AudioQueueBuffer *audioQueueBuffer[5];
    struct AudioStreamPacketDescription packetDescs[512];
    unsigned int fillBufferIndex;
    unsigned int packetBufferSize;
    unsigned long long bytesFilled;
    unsigned long long packetsFilled;
    _Bool inuse[5];
    long long buffersUsed;
    NSDictionary *httpHeaders;
    int state;
    int stopReason;
    int errorCode;
    int err;
    _Bool discontinuous;
    struct _opaque_pthread_mutex_t queueBuffersMutex;
    struct _opaque_pthread_cond_t queueBufferReadyCondition;
    struct __CFReadStream *stream;
    unsigned int bitRate;
    long long dataOffset;
    long long fileLength;
    long long seekByteOffset;
    unsigned long long audioDataByteCount;
    unsigned long long processedPacketsCount;
    unsigned long long processedPacketsSizeTotal;
    double seekTime;
    _Bool seekWasRequested;
    double requestedSeekTime;
    double sampleRate;
    double packetDuration;
    double lastProgress;
    _Bool pausedByInterruption;
    int _laststate;
    _Bool _isAMR;
    _Bool _isDone;
    int _amrType;
    int *_destate;
    int _hasReadSize;
    NSMutableData *_dataBuffer;
    int _bufferReadIndex;
}

+ (unsigned int)hintForFileExtension:(id)arg1;
+ (id)stringForErrorCode:(int)arg1;
@property(readonly) NSDictionary *httpHeaders; // @synthesize httpHeaders;
@property unsigned int bitRate; // @synthesize bitRate;
@property int errorCode; // @synthesize errorCode;
- (void)releaseDecoder;
- (void)notifyDelegatePlaybackStateChanged:(id)arg1;
- (void)audioQueueOutputWithQueue:(struct OpaqueAudioQueue *)arg1 queueBuffer:(struct AudioQueueBuffer *)arg2;
- (unsigned int)readPacketsIntoBuffer:(struct AudioQueueBuffer *)arg1;
- (long long)readBuffer:(char *)arg1 count:(unsigned long long)arg2;
- (void)createQueueForPCM;
- (void)handleInterruptionChangeToState:(id)arg1;
- (void)handlePropertyChangeForQueue:(struct OpaqueAudioQueue *)arg1 propertyID:(unsigned int)arg2;
- (void)handlePropertyChange:(id)arg1;
- (void)handleBufferCompleteForQueue:(struct OpaqueAudioQueue *)arg1 buffer:(struct AudioQueueBuffer *)arg2;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned int)arg2 numberPackets:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned int)arg2 ioFlags:(unsigned int *)arg3;
- (void)createQueue;
- (void)enqueueBuffer;
- (void)handleReadFromStream:(struct __CFReadStream *)arg1 eventType:(unsigned long long)arg2;
- (void)stop;
- (_Bool)pause;
- (void)start;
- (id)totalTime;
- (id)currentTime;
@property(readonly) double duration;
- (double)calculatedBitRate;
@property(readonly) double progress;
- (void)seekToTime:(double)arg1;
- (void)internalSeekToTime:(double)arg1;
- (void)startInternal;
- (_Bool)openReadStream;
@property int state; // @synthesize state;
- (void)mainThreadStateNotification;
- (void)failWithErrorCode:(int)arg1;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (_Bool)runLoopShouldExit;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isFinishing;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

