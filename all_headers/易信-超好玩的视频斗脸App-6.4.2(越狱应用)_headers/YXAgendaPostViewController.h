//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "AudioPlayerDelegate-Protocol.h"
#import "SNSRecordAudioViewControllerDelegate-Protocol.h"
#import "TimerHolderDelegate-Protocol.h"
#import "UIExpandingTextViewDelegate-Protocol.h"
#import "VoicePlayViewDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSString, SNSRecordAudioViewController, TimerHolder, UIButton, UIExpandingTextView, UITextView, UIView, VoicePlayView, YXTableView;
@protocol YXAgendaPostViewControllerDelegate;

@interface YXAgendaPostViewController : YXUIViewController <UIExpandingTextViewDelegate, VoicePlayViewDelegate, AudioPlayerDelegate, SNSRecordAudioViewControllerDelegate, TimerHolderDelegate>
{
    UIButton *rightButton;
    UIExpandingTextView *exTextView;
    _Bool _isPreparingData;
    UIView *audioRecordingView;
    VoicePlayView *voicePlayView;
    _Bool _isPasteText;
    MBProgressHUD *_hud;
    _Bool _isPosted;
    long long _remindType;
    _Bool _isShowUserInfoView;
    _Bool _isRemind;
    YXTableView *_tableView;
    id <YXAgendaPostViewControllerDelegate> _pDelegate;
    NSArray *_tableContents;
    UITextView *_postTextView;
    NSString *_audioFilepath;
    NSString *_audioURL;
    long long _duration;
    SNSRecordAudioViewController *_recordingController;
    NSString *_sessionID;
    long long _sessionType;
    TimerHolder *_timerHolder;
    NSString *_agendaId;
}

@property(retain, nonatomic) NSString *agendaId; // @synthesize agendaId=_agendaId;
@property(retain, nonatomic) TimerHolder *timerHolder; // @synthesize timerHolder=_timerHolder;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SNSRecordAudioViewController *recordingController; // @synthesize recordingController=_recordingController;
@property(nonatomic) _Bool isRemind; // @synthesize isRemind=_isRemind;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *audioURL; // @synthesize audioURL=_audioURL;
@property(retain, nonatomic) NSString *audioFilepath; // @synthesize audioFilepath=_audioFilepath;
@property(retain, nonatomic) UITextView *postTextView; // @synthesize postTextView=_postTextView;
@property(retain, nonatomic) NSArray *tableContents; // @synthesize tableContents=_tableContents;
@property(nonatomic) _Bool isShowUserInfoView; // @synthesize isShowUserInfoView=_isShowUserInfoView;
@property(nonatomic) __weak id <YXAgendaPostViewControllerDelegate> pDelegate; // @synthesize pDelegate=_pDelegate;
@property(retain, nonatomic) YXTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)onTimerHolderFire:(id)arg1;
- (void)expandingTextViewDidPaste:(id)arg1;
- (_Bool)expandingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)expandingTextViewDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onRemoteProximity:(id)arg1;
- (void)onRecordingUploader:(id)arg1;
- (void)voicePlayViewPressed:(id)arg1;
- (void)audioPlayerCancelled:(id)arg1;
- (void)audioPlayerEnd:(id)arg1;
- (void)audioPlayerBegin:(id)arg1;
- (void)snsRecordAudioViewControllerDidCancel:(id)arg1;
- (void)audioRecordTimeTooShort;
- (void)snsRecordAudioViewController:(id)arg1 didFinish:(id)arg2 duration:(long long)arg3;
- (void)snsRecordAudioViewController:(id)arg1 didBegin:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)cellForUserRow:(id)arg1 indexPath:(id)arg2;
- (id)cellForRemindRow:(id)arg1 indexPath:(id)arg2;
- (id)cellForVoice:(id)arg1 indexPath:(id)arg2;
- (id)cellForText:(id)arg1 indexPath:(id)arg2;
- (void)updateSessionID:(id)arg1 sessionType:(long long)arg2;
- (_Bool)isPostEnabled;
- (void)updateAudioCell;
- (int)getCountLen:(id)arg1;
- (void)dismissViewController;
- (void)showToast:(id)arg1;
- (void)hideProgress;
- (void)showProgress;
- (void)refreshRemindSection;
- (void)postAgenda;
- (void)syncPostAgenda;
- (void)doPostFeed:(id)arg1;
- (void)postButtonPressed:(id)arg1;
- (void)onRemindSelected:(id)arg1;
- (void)switchChanged:(id)arg1;
- (void)back:(id)arg1;
- (void)delAudio:(id)arg1;
- (void)showVoiceRecordingView:(id)arg1;
- (void)setTableData;
- (void)setExpandingTextView;
- (void)setBarButtonItem;
- (void)initUIComponent;
- (void)updateTelphoneUIByErrorTip:(id)arg1;
- (void)receiveVoiceMsgCode:(long long)arg1 remainCount:(long long)arg2;
- (void)voiceMsgPermit:(id)arg1;
- (void)removeListener;
- (void)addListenEvents;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

