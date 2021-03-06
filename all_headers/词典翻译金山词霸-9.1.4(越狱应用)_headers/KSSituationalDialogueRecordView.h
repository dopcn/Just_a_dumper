//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSXibView.h"

#import "ISEResultXmlParserDelegate-Protocol.h"
#import "KSAudioPlayerDelegate-Protocol.h"
#import "KSRecordViewDelegate-Protocol.h"

@class ISEResult, KSAudioPlayer, KSDesigbableButton, KSRecordView, NSLayoutConstraint, NSString, TTTAttributedLabel, UILabel, UIView;
@protocol KSSituationalDialogueRecordViewDelegate;

@interface KSSituationalDialogueRecordView : KSXibView <KSRecordViewDelegate, ISEResultXmlParserDelegate, KSAudioPlayerDelegate>
{
    _Bool _isFromRank;
    _Bool _isFirstTimeRecord;
    long long _currentOrder;
    NSString *_contentStr;
    NSString *_contentTip;
    long long _dialogueId;
    long long _userStatus;
    long long _position;
    TTTAttributedLabel *_middleContentLabel;
    id <KSSituationalDialogueRecordViewDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_topView;
    UIView *_middleView;
    UIView *_bottomView;
    KSDesigbableButton *_playButton;
    KSDesigbableButton *_recordButton;
    KSDesigbableButton *_finishButton;
    UILabel *_topContentLabel;
    UIView *_tipContentView;
    UIView *_tipView;
    TTTAttributedLabel *_tipLabel;
    NSLayoutConstraint *_tipContentViewHeight;
    UILabel *_loadingLabel;
    long long _voiceLength;
    KSRecordView *_recordView;
    KSAudioPlayer *_audioPlayer;
    ISEResult *_myResult;
}

@property(nonatomic) _Bool isFirstTimeRecord; // @synthesize isFirstTimeRecord=_isFirstTimeRecord;
@property(retain, nonatomic) ISEResult *myResult; // @synthesize myResult=_myResult;
@property(retain, nonatomic) KSAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) KSRecordView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) long long voiceLength; // @synthesize voiceLength=_voiceLength;
@property(nonatomic) __weak UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) __weak NSLayoutConstraint *tipContentViewHeight; // @synthesize tipContentViewHeight=_tipContentViewHeight;
@property(nonatomic) __weak TTTAttributedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) __weak UIView *tipContentView; // @synthesize tipContentView=_tipContentView;
@property(nonatomic) __weak UILabel *topContentLabel; // @synthesize topContentLabel=_topContentLabel;
@property(nonatomic) __weak KSDesigbableButton *finishButton; // @synthesize finishButton=_finishButton;
@property(nonatomic) __weak KSDesigbableButton *recordButton; // @synthesize recordButton=_recordButton;
@property(nonatomic) __weak KSDesigbableButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *middleView; // @synthesize middleView=_middleView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <KSSituationalDialogueRecordViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak TTTAttributedLabel *middleContentLabel; // @synthesize middleContentLabel=_middleContentLabel;
@property(nonatomic) _Bool isFromRank; // @synthesize isFromRank=_isFromRank;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long userStatus; // @synthesize userStatus=_userStatus;
@property(nonatomic) long long dialogueId; // @synthesize dialogueId=_dialogueId;
@property(retain, nonatomic) NSString *contentTip; // @synthesize contentTip=_contentTip;
@property(retain, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(nonatomic) long long currentOrder; // @synthesize currentOrder=_currentOrder;
- (void).cxx_destruct;
- (void)audioPlayer:(id)arg1 playWithError:(id)arg2;
- (void)audioPlayer:(id)arg1 didEndPlayWithURLString:(id)arg2;
- (id)setAttributedWithString:(id)arg1 fontsize:(double)arg2 flag:(_Bool)arg3;
- (id)getAndCreatePlayableFileFromPcmData:(id)arg1;
- (void)changeToRealFileName;
- (void)onISEResultXmlParserResult:(id)arg1;
- (void)onISEResultXmlParser:(id)arg1 Error:(id)arg2;
- (void)startParsingWithResult:(id)arg1;
- (void)recordView:(id)arg1 error:(id)arg2;
- (void)recordView:(id)arg1 result:(id)arg2 isLast:(_Bool)arg3;
- (void)recordView:(id)arg1;
- (void)onFinishButtonClicked:(id)arg1;
- (void)onRecordButtonClicked:(id)arg1;
- (void)removeRecordView;
- (void)onPlayButtonClicked:(id)arg1;
- (void)removeDialogueRecordingView;
- (void)setUpContentWithFlag:(_Bool)arg1;
- (void)setTheme;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

