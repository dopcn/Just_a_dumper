//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IFlyAudioPlayerDelegate-Protocol.h"
#import "TTSEngineDelegate-Protocol.h"

@class AIPIFlyTTSParam, IFlyPcmPlayer, NSMutableData, NSOperationQueue, NSString, TTSEngine;
@protocol AIPIFlySpeechSynthesizerDelegate;

@interface IFlyMscSynthesizer : NSObject <TTSEngineDelegate, IFlyAudioPlayerDelegate>
{
    NSOperationQueue *_queue;
    TTSEngine *_ttsEngine;
    NSString *_playText;
    float _bufferProgress;
    float _playProgress;
    int _index;
    int _errorCode;
    id <AIPIFlySpeechSynthesizerDelegate> _delegate;
    _Bool _isCanceled;
    _Bool _autoPlay;
    NSMutableData *synthesizeData;
    NSMutableData *synthesizePreData;
    NSString *synthesizepreText;
    NSString *synthesizepreVcnName;
    _Bool _isEngineFinished;
    AIPIFlyTTSParam *_sessionConfig;
    IFlyPcmPlayer *_pcmPlayer;
}

@property(retain) IFlyPcmPlayer *pcmPlayer; // @synthesize pcmPlayer=_pcmPlayer;
@property(readonly, retain, nonatomic) AIPIFlyTTSParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property _Bool isEngineFinished; // @synthesize isEngineFinished=_isEngineFinished;
- (void)paramsetMscEx:(id)arg1;
- (void)onBufferPrecent:(float)arg1;
- (void)onResume;
- (void)onStop:(int)arg1;
- (void)onStopThread;
- (void)onPaused;
- (void)onPlay;
- (void)onBuffer;
- (void)onEnd:(int)arg1;
- (void)onAudioBuffer:(const void *)arg1 length:(unsigned int)arg2 status:(int)arg3 engine:(id)arg4;
- (void)onPreAudioBuffer:(id)arg1 preText:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (void)replay;
- (void)resume;
- (void)pause;
- (void)startPreSyth;
- (_Bool)handlePreSynth:(id)arg1;
- (void)playText:(id)arg1 config:(id)arg2;
- (id)initWithParams:(id)arg1;

@end

