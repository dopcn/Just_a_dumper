//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KxArtworkFrame, KxMovieDecoder, KxMovieGLView, NSData, NSDate, NSDictionary, NSMutableArray, NSObject, NSString, UIImageView;
@protocol OS_dispatch_queue;

@interface VideoPlayerController : UIViewController
{
    KxMovieDecoder *_decoder;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSObject<OS_dispatch_queue> *_tickQueue;
    NSMutableArray *_videoFrames;
    NSMutableArray *_audioFrames;
    NSMutableArray *_subtitles;
    NSData *_currentAudioFrame;
    unsigned long long _currentAudioFramePos;
    double _moviePosition;
    double _seekPosition;
    unsigned long long _tickCounter;
    _Bool _interrupted;
    KxMovieGLView *_glView;
    UIImageView *_imageView;
    double _debugStartTime;
    unsigned long long _debugAudioStatus;
    NSDate *_debugAudioStatusTS;
    _Bool _bNotifyProgress;
    _Bool _isBuffering;
    _Bool _isMute;
    NSDate *_startBufferTimeStamp;
    double _bufferedVideoDuration;
    double _bufferedAudioDuration;
    double _minBufferedDuration;
    double _maxBufferedDuration;
    NSString *_tickID;
    NSString *_decodeID;
    _Bool _bIsTicking;
    _Bool _bIsDecoding;
    NSDictionary *_parameters;
    _Bool _isObserve;
    _Bool _contentModeIsFill;
    int _eCurStatus;
    NSString *_url;
    KxArtworkFrame *_artworkFrame;
}

@property(retain) KxArtworkFrame *artworkFrame; // @synthesize artworkFrame=_artworkFrame;
@property(nonatomic) _Bool contentModeIsFill; // @synthesize contentModeIsFill=_contentModeIsFill;
@property(readonly) int eCurStatus; // @synthesize eCurStatus=_eCurStatus;
@property(readonly, copy) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)setVideoDrawRect:(struct CGRect)arg1;
- (_Bool)pause;
- (_Bool)play;
- (void)reload;
- (void)unloadContent;
- (void)loadFail;
- (void)openFileTimeOut;
- (void)loadContent:(id)arg1;
@property _Bool isMute;
- (_Bool)isAlive;
- (_Bool)isPaused;
- (_Bool)isPlaying;
@property double fVolume;
@property double fCurrentPosition;
@property(readonly) double fProgressLoaded;
@property(readonly) _Bool isCaching;
- (void)setIsCaching:(_Bool)arg1;
@property(readonly) double fTotalDuration;
- (void)freeBufferedFrames;
- (double)getBufferedDuration;
- (void)stopDecode;
- (void)startDecode;
- (void)stopTick;
- (void)startTick;
- (void)fillAudioFrame:(float *)arg1 numFrames:(unsigned int)arg2 numChannels:(unsigned int)arg3;
- (unsigned int)tickLoop;
- (double)tickCorrection;
- (double)presentVideoFrame:(id)arg1;
- (double)presentFrame;
- (void)setMoviePositionFromDecoder;
- (void)setDecoderPosition:(double)arg1;
- (id)frameView;
- (_Bool)subtitleForPosition:(double)arg1 actual:(id *)arg2 outdated:(id *)arg3;
- (void)enableAudio:(_Bool)arg1;
- (void)notifyProgressChanged;
- (void)setPlayStatus:(int)arg1;
- (_Bool)addFrames:(id)arg1;
- (void)closeDecoder;
- (void)preparePlay;
- (_Bool)interruptDecoder;
- (void)clearView;
- (void)setupPresentView;
- (void)TeleCallNotificationAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)awakeFromNib;
- (id)init;
- (void)appEnterBackground:(id)arg1;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;

@end

