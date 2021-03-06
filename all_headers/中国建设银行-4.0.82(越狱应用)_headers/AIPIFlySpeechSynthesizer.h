//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AIPIFlySpeechSynthesizerDelegate-Protocol.h"

@class AIPIFlyTTSParam, IFlyMscSynthesizer, NSDictionary, NSString, TTSEngine;
@protocol AIPIFlySpeechSynthesizerDelegate;

@interface AIPIFlySpeechSynthesizer : NSObject <AIPIFlySpeechSynthesizerDelegate>
{
    IFlyMscSynthesizer *_mscSynthesizer;
    TTSEngine *ttsEngine;
    _Bool _isListening;
    _Bool _isCompleted;
    NSDictionary *_playBufferDict;
    NSString *_paramEx;
    id <AIPIFlySpeechSynthesizerDelegate> _delegate;
    AIPIFlyTTSParam *_sessionConfig;
}

+ (_Bool)destroy;
+ (id)sharedInstance;
@property(retain) AIPIFlyTTSParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(nonatomic) id <AIPIFlySpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSessionId;
- (void)setParameterEx:(id)arg1;
- (void)onEventEx:(int)arg1 arg0Ex:(int)arg2 arg1Ex:(int)arg3 dataEx:(id)arg4;
- (void)onSpeakProgressEx:(float)arg1;
- (void)onBufferProgressEx:(float)arg1 messageEx:(id)arg2;
- (void)onCompletedEx:(id)arg1;
- (void)onSpeakResumedEx;
- (void)onSpeakPausedEx;
- (void)onSpeakBeginEx;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isSpeaking;
- (id)parameterForKey:(id)arg1;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;
- (void)stopSpeaking;
- (void)resumeSpeaking;
- (void)pauseSpeaking;
- (void)runService:(id)arg1;
- (void)startListeningThread;
- (void)_startSpeaking:(id)arg1;
- (void)synthesize:(id)arg1 toUri:(id)arg2;
- (void)startSpeaking:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

