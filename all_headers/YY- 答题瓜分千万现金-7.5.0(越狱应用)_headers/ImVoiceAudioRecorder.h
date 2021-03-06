//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ChannelCoreClient-Protocol.h"
#import "SpeechMsgRecorderDelegate-Protocol.h"

@class NSString, SpeechMsgRecorder;

@interface ImVoiceAudioRecorder : NSObject <SpeechMsgRecorderDelegate, ChannelCoreClient>
{
    NSString *_currentRecordingFilePath;
    SpeechMsgRecorder *_audioRecorder;
}

@property(retain, nonatomic) SpeechMsgRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSString *currentRecordingFilePath; // @synthesize currentRecordingFilePath=_currentRecordingFilePath;
- (void).cxx_destruct;
- (void)onChannelChanged:(id)arg1;
- (void)OnReachMaxDuration:(unsigned int)arg1 maxDuration:(unsigned int)arg2;
- (void)OnStopRecordData:(unsigned int)arg1 maxDuration:(unsigned int)arg2;
- (void)OnRecordMeetError;
- (void)OnRecordedVolumeDisplay:(unsigned int)arg1 volume:(unsigned int)arg2;
- (void)removeCurrentRecordingFile;
- (void)cancelRecordingAudio;
- (void)stopRecordingAudio;
- (_Bool)startRecordingAudioWithFilePath:(id)arg1;
- (void)checkMicPrivacy:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

