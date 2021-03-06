//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSString, NSTimer;
@protocol YLMediaButtonDelegate;

@interface YLMediaButton : UIButton <AVAudioPlayerDelegate>
{
    NSTimer *timer;
    int soundMeters[15];
    struct CGRect hudRect;
    float recordTime;
    _Bool pause;
    _Bool _isAll;
    _Bool _isFromOldList;
    int _type;
    NSString *_mediaName;
    NSString *_mediaID;
    AVAudioPlayer *_avPlay;
    id <YLMediaButtonDelegate> _delegate;
}

@property(nonatomic) _Bool isFromOldList; // @synthesize isFromOldList=_isFromOldList;
@property(nonatomic) _Bool isAll; // @synthesize isAll=_isAll;
@property(nonatomic) __weak id <YLMediaButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAudioPlayer *avPlay; // @synthesize avPlay=_avPlay;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)stopSound;
- (void)pauseSound;
- (void)shiftSoundMeterLeft;
- (void)addSoundMeterItem:(int)arg1;
- (void)detectionVoice;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playSound;
- (void)handleTapGesture;
- (void)configureWithMediaType:(int)arg1 imageUrl:(id)arg2;
- (void)configureWithMediaType:(int)arg1 image:(id)arg2;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

