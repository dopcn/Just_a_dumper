//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioSessionDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol IFlyAudioPlayerDelegate;

@interface IFlyPcmPlayer : NSObject <AVAudioSessionDelegate>
{
    struct IFlyAQCallBackStruct _aqc;
    _Bool _isSystemPaused;
    _Bool _isHaveData;
    _Bool _isLastData;
    _Bool _isRegisterRunningCB;
    NSMutableArray *_lastBuffLenArray;
    _Bool _addNewBuffer;
    int _beginPos;
    int _endPos;
    int _errorCode;
    _Bool _isAppendToPlayer;
    struct AudioQueueBuffer *_stopCBQB;
    int _sampleRate;
    int _state;
    int _playMode;
    id <IFlyAudioPlayerDelegate> _delegate;
}

@property int playMode; // @synthesize playMode=_playMode;
@property(readonly) int state; // @synthesize state=_state;
@property int sampleRate; // @synthesize sampleRate=_sampleRate;
@property id <IFlyAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAudioBuffer:(struct AudioQueueBuffer *)arg1 empty:(_Bool)arg2;
- (void)interruption:(id)arg1;
- (void)endInterruption;
- (void)beginInterruption;
- (void)removeNotification;
- (void)setPlayerState:(int)arg1;
- (_Bool)startAudioQueue;
- (_Bool)begin;
- (_Bool)initPlayerAllRes;
- (void)freePlayerAllRes;
- (void)pause;
- (void)resume;
- (_Bool)appendAudioData:(const void *)arg1 length:(unsigned int)arg2 progress:(int)arg3 isLast:(_Bool)arg4;
- (void)cancel;
- (_Bool)play;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

