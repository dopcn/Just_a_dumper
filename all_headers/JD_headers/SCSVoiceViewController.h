//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSModuleViewController.h"

#import "EZMicrophoneDelegate-Protocol.h"
#import "SCSAccentViewControllerDelegate-Protocol.h"
#import "SCSSpeechRecognizerDelegate-Protocol.h"

@class EZMicrophone, NSLock, NSString, SCSSpeechRecognizer, SCSVoiceWavePlotView, UIButton, UIImageView, UILabel;

@interface SCSVoiceViewController : SCSModuleViewController <SCSSpeechRecognizerDelegate, SCSAccentViewControllerDelegate, EZMicrophoneDelegate>
{
    _Bool _shouldDontRemoveWhenVoiceEnd;
    _Bool _isPlaying;
    UIButton *_btnAssent;
    UILabel *_labTitle;
    UIButton *_btnDone;
    SCSSpeechRecognizer *_recognizer;
    NSLock *_voiceEndLock;
    SCSVoiceWavePlotView *_audioPlot;
    UIImageView *_imgViewNoVoice;
    EZMicrophone *_microphone;
    NSString *_recVoiceText;
}

@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSString *recVoiceText; // @synthesize recVoiceText=_recVoiceText;
@property(retain, nonatomic) EZMicrophone *microphone; // @synthesize microphone=_microphone;
@property(retain, nonatomic) UIImageView *imgViewNoVoice; // @synthesize imgViewNoVoice=_imgViewNoVoice;
@property(retain, nonatomic) SCSVoiceWavePlotView *audioPlot; // @synthesize audioPlot=_audioPlot;
@property(retain, nonatomic) NSLock *voiceEndLock; // @synthesize voiceEndLock=_voiceEndLock;
@property(nonatomic) _Bool shouldDontRemoveWhenVoiceEnd; // @synthesize shouldDontRemoveWhenVoiceEnd=_shouldDontRemoveWhenVoiceEnd;
@property(retain, nonatomic) SCSSpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) UIButton *btnDone; // @synthesize btnDone=_btnDone;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIButton *btnAssent; // @synthesize btnAssent=_btnAssent;
- (void).cxx_destruct;
- (void)showVoiceListeningView;
- (void)showNoVoiceTextView:(id)arg1;
- (void)microphone:(id)arg1 hasAudioReceived:(float **)arg2 withBufferSize:(unsigned int)arg3 withNumberOfChannels:(unsigned int)arg4;
- (void)avcDidSelectedAccentName:(id)arg1;
- (void)resultSpeechRecText:(id)arg1 errcode:(long long)arg2 errmsg:(id)arg3;
- (void)cancelSpeechRecText;
- (void)stopSpeechRecText:(id)arg1;
- (void)listenSpeechRecText:(id)arg1 isLast:(_Bool)arg2;
- (void)btnDoneAction:(id)arg1;
- (void)btnAssentAction:(id)arg1;
- (void)clearAudioPlot;
- (void)stopListening;
- (void)startListening;
- (double)moduleHeight;
- (void)setupNoVoiceView;
- (void)setupEZAudio;
- (void)setupRecognizer;
- (void)setupDefault;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

