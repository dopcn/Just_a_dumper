//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SNNewAlertViewDelegate-Protocol.h"
#import "SNNewsSpeakerDelegate-Protocol.h"
#import "SNSpeakerRemoteControlDelegate-Protocol.h"

@class NSString, SNNewAlertView, UIButton, UILabel;

@interface SNNewsSpeakerManager : NSObject <SNNewAlertViewDelegate, SNNewsSpeakerDelegate, SNSpeakerRemoteControlDelegate>
{
    SNNewAlertView *_voiceAlertView;
    UILabel *_voiceTitle;
    UIButton *_playButton;
}

+ (id)shareManager;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *voiceTitle; // @synthesize voiceTitle=_voiceTitle;
@property(retain, nonatomic) SNNewAlertView *voiceAlertView; // @synthesize voiceAlertView=_voiceAlertView;
- (void).cxx_destruct;
- (void)newsSpeakerDidFailed:(id)arg1;
- (void)newsSpeakerDidFinished;
- (void)newsSpeakerStateDidChanged;
- (void)newsSpeakerContentDidChanged:(id)arg1 isFirst:(_Bool)arg2 isEnd:(_Bool)arg3;
- (void)willDisAppearAlertView:(id)arg1 withButtonIndex:(long long)arg2;
- (void)didDisAppearAlertView:(id)arg1 withButtonIndex:(long long)arg2;
- (void)downLoadVoiceAssistant:(id)arg1;
- (void)playAction:(id)arg1;
- (id)voiceFloatView;
- (void)PalyNextNewsNotificationCenter;
- (void)remoteControlNextTrack;
- (void)remoteControlPreviousTrack;
- (void)remoteControlPauseOrPlay;
- (void)closeNewsSpeakerView;
- (void)showNewsSpeakerViewWithList:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

