//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVSimpleRecordViewController.h"

#import "KTVLyricsViewDelegate-Protocol.h"
#import "KTVRecordVolumeViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface KTVMicrophoneAudioRecordViewController : KTVSimpleRecordViewController <KTVLyricsViewDelegate, KTVRecordVolumeViewDelegate>
{
    UIView *_lyricsAreaView;
    UIView *_scoreBgView;
    UILabel *_singOnlyTitleLabel;
    NSLayoutConstraint *_lineTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *lineTopConstraint; // @synthesize lineTopConstraint=_lineTopConstraint;
@property(nonatomic) __weak UILabel *singOnlyTitleLabel; // @synthesize singOnlyTitleLabel=_singOnlyTitleLabel;
@property(nonatomic) __weak UIView *scoreBgView; // @synthesize scoreBgView=_scoreBgView;
@property(nonatomic) __weak UIView *lyricsAreaView; // @synthesize lyricsAreaView=_lyricsAreaView;
- (void).cxx_destruct;
- (void)oberverForPlayerComplete:(id)arg1;
- (void)showCancelRecordAlert;
- (void)restartTouchUpInside:(id)arg1;
- (void)closeTouchUpInside:(id)arg1;
- (void)volumeTouchUpInside:(id)arg1;
- (void)lyricsViewDidEndSelect:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)lyricsViewWillBeginSelect:(id)arg1;
- (double)currentRecordTime;
- (void)pauseTouchUpInside:(id)arg1;
- (void)initLyricsView;
- (void)reRecordAtTimepoint:(double)arg1 immediately:(_Bool)arg2 ignoreLrc:(_Bool)arg3 preRecordDelta:(double)arg4;
- (void)completeRecord;
- (void)cancelRecord;
- (void)pauseRecord;
- (void)startRecord:(_Bool)arg1;
- (_Bool)prepareRecord;
- (void)createStateMachine;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDuet:(id)arg1;
- (id)initWithSong:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

