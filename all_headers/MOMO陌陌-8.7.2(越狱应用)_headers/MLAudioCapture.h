//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IJKAudioConvert, NSMutableArray;
@protocol MLAudioCaptureDelegate, OS_dispatch_queue;

@interface MLAudioCapture : NSObject
{
    struct AudioBuffer audioBuffer;
    _Bool _muted;
    _Bool _running;
    _Bool _isRunning;
    _Bool _isLoopbackAudio;
    int _audioSampleRate;
    int _audioChannels;
    unsigned int _componentSubType;
    id <MLAudioCaptureDelegate> _delegate;
    struct OpaqueAudioComponentInstance *_componetInstance;
    struct OpaqueAudioComponent *_component;
    NSObject<OS_dispatch_queue> *_taskQueue;
    IJKAudioConvert *_audioConvert;
    NSMutableArray *_loopbackDataCache;
}

@property(retain, nonatomic) NSMutableArray *loopbackDataCache; // @synthesize loopbackDataCache=_loopbackDataCache;
@property(nonatomic) _Bool isLoopbackAudio; // @synthesize isLoopbackAudio=_isLoopbackAudio;
@property(nonatomic) unsigned int componentSubType; // @synthesize componentSubType=_componentSubType;
@property(retain, nonatomic) IJKAudioConvert *audioConvert; // @synthesize audioConvert=_audioConvert;
@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) struct OpaqueAudioComponent *component; // @synthesize component=_component;
@property(nonatomic) struct OpaqueAudioComponentInstance *componetInstance; // @synthesize componetInstance=_componetInstance;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <MLAudioCaptureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)copyLoopbackBuffer:(struct AudioBuffer *)arg1;
- (void)copyRecordBuffer:(struct AudioBufferList *)arg1;
- (void)handleInterruption:(id)arg1;
- (void)updateAudioLoopbackSetting;
- (_Bool)isHeadsetPluggedIn;
- (void)handleRouteChange:(id)arg1;
- (void)handleAudioComponentCreationFailure;
- (void)stopCapture;
- (void)startCapture;
- (void)uninitCapture;
- (void)initCaptureWithSubType:(unsigned int)arg1;
- (void)unregisterNotification;
- (void)registerNotification;
- (struct AudioBuffer)audioBuffer;
- (void)dealloc;
- (id)initWithAudioSampleRate:(int)arg1 audioChannels:(int)arg2;

@end

