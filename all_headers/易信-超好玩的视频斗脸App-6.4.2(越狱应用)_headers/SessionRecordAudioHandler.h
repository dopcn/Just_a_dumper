//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AudioInputDelegate-Protocol.h"
#import "AudioRecorderDelegate-Protocol.h"
#import "InputActionDelegate-Protocol.h"

@class NSString, SessionRecordVoiceView;
@protocol SessionRecordAudioProtocol><SessionViewControllerProxyProtocol><SessionInputViewControllerProxyProtocol><SessionTypingMessageProtocol><SessionSendMessageProtocol><SessionPlayAudioProtocol;

@interface SessionRecordAudioHandler : NSObject <AudioInputDelegate, AudioRecorderDelegate, InputActionDelegate>
{
    long long _currentRecordSecond;
    long long _addAudioRecordDelayKey;
    SessionRecordVoiceView *_recordVoiceView;
    id <SessionRecordAudioProtocol><SessionViewControllerProxyProtocol><SessionInputViewControllerProxyProtocol><SessionTypingMessageProtocol><SessionSendMessageProtocol><SessionPlayAudioProtocol> _sessionRecordAudioHandlerObj;
}

@property(retain, nonatomic) id <SessionRecordAudioProtocol><SessionViewControllerProxyProtocol><SessionInputViewControllerProxyProtocol><SessionTypingMessageProtocol><SessionSendMessageProtocol><SessionPlayAudioProtocol> sessionRecordAudioHandlerObj; // @synthesize sessionRecordAudioHandlerObj=_sessionRecordAudioHandlerObj;
@property(retain, nonatomic) SessionRecordVoiceView *recordVoiceView; // @synthesize recordVoiceView=_recordVoiceView;
- (void).cxx_destruct;
- (void)delegateEndRecordingAudio;
- (void)delegateBeginRecordingAudio;
- (void)addAudioRecordStartedTiprtedTip;
- (void)addAudioRecordStartedTipWithDelayKey:(id)arg1;
- (void)audioDidStarted:(_Bool)arg1 filepath:(id)arg2;
- (void)audioRecordNotGranted;
- (void)showAudioRecordNotGrantedTip;
- (void)audioRecordTimeTooShort;
- (void)onRecordSeconds:(double)arg1 totalSeconds:(long long)arg2;
- (void)onVolumeDBUpdated:(double)arg1;
- (_Bool)audioDidFinished:(id)arg1 url:(id)arg2 successfully:(_Bool)arg3;
- (void)delegateInterruptRecordAudio;
- (void)delegateRecordAudioCancel:(id)arg1 audioRecordButton:(id)arg2;
- (void)delegateRecordAudioEnd:(id)arg1 audioRecordButton:(id)arg2;
- (void)delegateRecordAudioMove:(id)arg1 audioRecordButton:(id)arg2;
- (void)delegateRecordAudioBegin:(id)arg1 audioRecordButton:(id)arg2;
- (void)recordAudioBySeconds:(long long)arg1 totalSeconds:(long long)arg2;
- (void)audioRecorderCreateError;
- (_Bool)audioDidSuccess:(id)arg1 url:(id)arg2 contentType:(long long)arg3 isDoubleTapAudio:(_Bool)arg4;
- (_Bool)audioDidSuccess:(id)arg1 url:(id)arg2 contentType:(long long)arg3;
- (void)handleAudioError:(int)arg1;
- (void)audioRecordCompleted:(id)arg1 contentType:(long long)arg2;
- (void)audioRecordCompleted:(id)arg1 contentType:(long long)arg2 isDoubleTapAudio:(_Bool)arg3;
- (void)resetUIForRecord;
- (void)resetUIAfterRecordFinish;
- (void)handleTouchOutsideAudioButton:(id)arg1;
- (void)handleTouchInsideAudioButton:(id)arg1;
- (void)audioTouchesEnd:(struct CGPoint)arg1 audioRecordButton:(id)arg2;
- (void)audioTouchesMoved:(struct CGPoint)arg1 touches:(id)arg2 audioRecordButton:(id)arg3;
- (void)audioTouchBegin;
- (void)initRecordVoiceView;
- (id)initSessionRecordAudioHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

