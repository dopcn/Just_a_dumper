//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class AVAudioPlayer, AVAudioRecorder, AVAudioSession, NSDate, NSNumber, NSString, NSURL, RCTBridge;
@protocol OS_dispatch_queue;

@interface RNAudioRecorderManager : NSObject <RCTBridgeModule, AVAudioRecorderDelegate>
{
    AVAudioRecorder *_audioRecorder;
    AVAudioPlayer *_audioPlayer;
    double _currentTime;
    id _progressUpdateTimer;
    int _progressUpdateInterval;
    NSDate *_prevProgressUpdateTime;
    NSURL *_audioFileURL;
    NSNumber *_audioQuality;
    NSNumber *_audioEncoding;
    NSNumber *_audioChannels;
    NSNumber *_audioSampleRate;
    AVAudioSession *_recordSession;
    _Bool _meteringEnabled;
}

+ (const struct RCTMethodInfo *)__rct_export__2338;
+ (const struct RCTMethodInfo *)__rct_export__1937;
+ (const struct RCTMethodInfo *)__rct_export__1866;
+ (const struct RCTMethodInfo *)__rct_export__1795;
+ (const struct RCTMethodInfo *)__rct_export__1524;
+ (const struct RCTMethodInfo *)__rct_export__1443;
+ (const struct RCTMethodInfo *)__rct_export__1372;
+ (const struct RCTMethodInfo *)__rct_export__1271;
+ (const struct RCTMethodInfo *)__rct_export__340;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (id)applicationDocumentsDirectory;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (void)sendProgressUpdate;
- (void)requestAuthorization:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)checkAuthorizationStatus:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)stopPlaying;
- (void)pausePlaying;
- (void)playRecording;
- (void)pauseRecording;
- (void)stopRecording;
- (void)startRecording;
- (void)prepareRecordingAtPath:(id)arg1 sampleRate:(float)arg2 channels:(id)arg3 quality:(id)arg4 encoding:(id)arg5 meteringEnabled:(_Bool)arg6;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

