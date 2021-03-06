//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BBALiveAudioRecorderToolProtocool-Protocol.h"

@class BBALiveAudioRecorderTool, NSArray, NSString, UIImageView, UILabel;
@protocol BBALiveVoiceRecordViewDelegate;

@interface BBALiveVoiceRecordView : UIView <BBALiveAudioRecorderToolProtocool>
{
    _Bool _isShowCancel;
    _Bool _isRecording;
    id <BBALiveVoiceRecordViewDelegate> _delegate;
    UILabel *_promptLabel;
    UILabel *_countDownLabel;
    UILabel *_stateLabel;
    UIImageView *_logoView;
    BBALiveAudioRecorderTool *_recorder;
    long long _lastVolume;
    NSArray *_imageIndexs;
}

@property(retain, nonatomic) NSArray *imageIndexs; // @synthesize imageIndexs=_imageIndexs;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool isShowCancel; // @synthesize isShowCancel=_isShowCancel;
@property(nonatomic) long long lastVolume; // @synthesize lastVolume=_lastVolume;
@property(retain, nonatomic) BBALiveAudioRecorderTool *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) __weak id <BBALiveVoiceRecordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sendRecordEndNotification;
- (void)sendRecordStartNotification;
- (void)cancelRecord;
- (void)audioTool:(id)arg1 volumeChanged:(float)arg2 duration:(float)arg3;
- (void)endRecord;
- (void)startRecord;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

