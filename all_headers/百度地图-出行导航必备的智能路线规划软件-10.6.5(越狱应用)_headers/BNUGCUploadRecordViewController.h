//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, BNUGCVoiceRecordHud, CADisplayLink, NSDictionary, NSString, NSTimer, UIControl;
@protocol BNUGCUploadRecordViewControllerDelegate;

@interface BNUGCUploadRecordViewController : UIViewController <AVAudioRecorderDelegate>
{
    _Bool _isRecorded;
    id <BNUGCUploadRecordViewControllerDelegate> _delegate;
    NSString *_recordedAudioURL;
    AVAudioRecorder *_recorder;
    BNUGCVoiceRecordHud *_recordHud;
    NSString *_previousCategory;
    double _maxRecordTime;
    double _currentTimeInterval;
    CADisplayLink *_voiceAnimationDisplayLink;
    NSTimer *_recordTimer;
    long long _recordTime;
    UIControl *_backgroundControl;
}

@property(retain, nonatomic) UIControl *backgroundControl; // @synthesize backgroundControl=_backgroundControl;
@property(nonatomic) long long recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSTimer *recordTimer; // @synthesize recordTimer=_recordTimer;
@property(retain, nonatomic) CADisplayLink *voiceAnimationDisplayLink; // @synthesize voiceAnimationDisplayLink=_voiceAnimationDisplayLink;
@property(nonatomic) double currentTimeInterval; // @synthesize currentTimeInterval=_currentTimeInterval;
@property(nonatomic) double maxRecordTime; // @synthesize maxRecordTime=_maxRecordTime;
@property(copy, nonatomic) NSString *previousCategory; // @synthesize previousCategory=_previousCategory;
@property(nonatomic) _Bool isRecorded; // @synthesize isRecorded=_isRecorded;
@property(retain, nonatomic) BNUGCVoiceRecordHud *recordHud; // @synthesize recordHud=_recordHud;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSString *recordedAudioURL; // @synthesize recordedAudioURL=_recordedAudioURL;
@property(nonatomic) __weak id <BNUGCUploadRecordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)interruption:(id)arg1;
- (void)updateRecordTime:(id)arg1;
- (void)startRecordTimer;
- (void)stopVolumeAnimation;
- (void)startVolumeAnimation;
- (void)configRecordingHUDImageWithPeakPower:(double)arg1;
- (void)setPeakPower:(double)arg1;
- (void)setAudioSessionCategory:(id)arg1;
@property(readonly, nonatomic) NSDictionary *recordSettings;
- (id)getCacheDirectory;
- (void)deletingPreviousRecordFile;
- (void)audioRecorderBeginInterruption:(id)arg1;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)updateMeters;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)resetCategory;
- (_Bool)setupAndPrepareToRecord;
- (void)endRecord;
- (void)startRecord:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)enterBackground;
- (void)showRecordView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMask:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

