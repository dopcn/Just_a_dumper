//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MTUploadDelegate-Protocol.h"
#import "VSRecorderDelegate-Protocol.h"

@class AVAsset, MTCircleProgressView, MTExportSession, MTPlaybackView, MTPopupAlertView, NSString, UIButton, UIImageView, UILabel, UIView, VSRecorder;

@interface MTCustomRecorderViewController : MTBaseViewController <VSRecorderDelegate, MTUploadDelegate>
{
    unsigned long long _templateAspectRatio;
    double _fixRecordSecond;
    VSRecorder *_recorder;
    unsigned long long _saveStatus;
    unsigned long long _curStatus;
    AVAsset *_curAsset;
    UIView *_topFinishGroup;
    UILabel *_aspectLabel;
    UIView *_recordPreview;
    MTPlaybackView *_curPlaybackView;
    UIImageView *_focusImageView;
    UIImageView *_recordImage;
    UIImageView *_tickImageView;
    MTCircleProgressView *_circleProgressView;
    UIView *_blinkView;
    UILabel *_timeLabel;
    UIButton *_finishedBtn;
    UIView *_finishGroup;
    MTPopupAlertView *_alertView;
    MTExportSession *_mtExportSession;
}

@property(retain, nonatomic) MTExportSession *mtExportSession; // @synthesize mtExportSession=_mtExportSession;
@property(retain, nonatomic) MTPopupAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *finishGroup; // @synthesize finishGroup=_finishGroup;
@property(retain, nonatomic) UIButton *finishedBtn; // @synthesize finishedBtn=_finishedBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *blinkView; // @synthesize blinkView=_blinkView;
@property(retain, nonatomic) MTCircleProgressView *circleProgressView; // @synthesize circleProgressView=_circleProgressView;
@property(retain, nonatomic) UIImageView *tickImageView; // @synthesize tickImageView=_tickImageView;
@property(retain, nonatomic) UIImageView *recordImage; // @synthesize recordImage=_recordImage;
@property(retain, nonatomic) UIImageView *focusImageView; // @synthesize focusImageView=_focusImageView;
@property(retain, nonatomic) MTPlaybackView *curPlaybackView; // @synthesize curPlaybackView=_curPlaybackView;
@property(retain, nonatomic) UIView *recordPreview; // @synthesize recordPreview=_recordPreview;
@property(retain, nonatomic) UILabel *aspectLabel; // @synthesize aspectLabel=_aspectLabel;
@property(retain, nonatomic) UIView *topFinishGroup; // @synthesize topFinishGroup=_topFinishGroup;
@property(retain, nonatomic) AVAsset *curAsset; // @synthesize curAsset=_curAsset;
@property(nonatomic) unsigned long long curStatus; // @synthesize curStatus=_curStatus;
@property(nonatomic) unsigned long long saveStatus; // @synthesize saveStatus=_saveStatus;
@property(retain, nonatomic) VSRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) double fixRecordSecond; // @synthesize fixRecordSecond=_fixRecordSecond;
@property(nonatomic) unsigned long long templateAspectRatio; // @synthesize templateAspectRatio=_templateAspectRatio;
- (void).cxx_destruct;
- (void)didUploadComplete:(id)arg1 withResponse:(id)arg2;
- (void)didUploadProgress:(id)arg1 uploadBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (void)confirmUpload:(id)arg1;
- (void)uploadVideo:(id)arg1;
- (void)recorder:(id)arg1 didBeginSegmentInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2 inSession:(id)arg3 error:(id)arg4;
- (void)recorder:(id)arg1 didCompleteSession:(id)arg2;
- (void)recorder:(id)arg1 didAppendVideoSampleBufferInSession:(id)arg2;
- (void)onEditorHandler;
- (void)onRetakeHandler;
- (void)onSaveHandler;
- (void)onBackHandler;
- (void)onAspectRatioHandler;
- (void)onRecordComplete;
- (void)onDeleteOrCompleteHandle;
- (void)onRecordHandle;
- (void)onAutoFocusHandle:(id)arg1;
- (void)resetRecordSession;
- (void)cleanCurStepPlaybackView;
- (void)cleanRecordPreview;
- (void)configRecordMaxDuration;
- (void)hideCurStepPlaybackView;
- (void)showCurStepPlaybackView;
- (void)showFinishView;
- (void)showPauseView;
- (void)showRecordingView;
- (void)showStartRecordView;
- (void)showPreview;
- (void)changeRecordState:(unsigned long long)arg1;
- (void)updateBlinkAndTime:(double)arg1;
- (void)updateRecordRogressWithAnimated:(_Bool)arg1;
- (void)layoutBottomView;
- (void)layoutPreview;
- (void)layoutNavigation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

