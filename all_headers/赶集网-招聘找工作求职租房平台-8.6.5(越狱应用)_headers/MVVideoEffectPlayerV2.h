//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVMutableComposition, AVPlayer, AVPlayerItem, GPUImageView, MVVideoEffectAudioProcessor, MVVideoEffectPlayerModel, MVVideoEffectVideoProcessor, NSNumber, NSOperationQueue, SDAVAssetExportSession, UIImage, UISlider;
@protocol MVVideoEffectPlayerV2Delegate;

@interface MVVideoEffectPlayerV2 : NSObject
{
    _Bool _processedStarted;
    _Bool _hasCaptureCoverImage;
    _Bool _playerPlaying;
    float _progress;
    id <MVVideoEffectPlayerV2Delegate> _delegate;
    UISlider *_playerSlider;
    UIImage *_coverImage;
    MVVideoEffectPlayerModel *_effectModel;
    NSNumber *_videoBitrate;
    double _timelineSpeed;
    SDAVAssetExportSession *_exportSession;
    AVAsset *_asset;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
    AVMutableComposition *_currentComposition;
    AVAudioMix *_currentMutex;
    MVVideoEffectVideoProcessor *_videoProcessor;
    MVVideoEffectAudioProcessor *_audioProcessor;
    id _playerTimeObserver;
    double _coverTime;
    NSOperationQueue *_coverImageOperationQueue;
}

@property(nonatomic) _Bool playerPlaying; // @synthesize playerPlaying=_playerPlaying;
@property(retain, nonatomic) NSOperationQueue *coverImageOperationQueue; // @synthesize coverImageOperationQueue=_coverImageOperationQueue;
@property(nonatomic) _Bool hasCaptureCoverImage; // @synthesize hasCaptureCoverImage=_hasCaptureCoverImage;
@property(nonatomic) double coverTime; // @synthesize coverTime=_coverTime;
@property(retain, nonatomic) id playerTimeObserver; // @synthesize playerTimeObserver=_playerTimeObserver;
@property(retain, nonatomic) MVVideoEffectAudioProcessor *audioProcessor; // @synthesize audioProcessor=_audioProcessor;
@property(retain, nonatomic) MVVideoEffectVideoProcessor *videoProcessor; // @synthesize videoProcessor=_videoProcessor;
@property(retain, nonatomic) AVAudioMix *currentMutex; // @synthesize currentMutex=_currentMutex;
@property(retain, nonatomic) AVMutableComposition *currentComposition; // @synthesize currentComposition=_currentComposition;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) SDAVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(nonatomic) double timelineSpeed; // @synthesize timelineSpeed=_timelineSpeed;
@property(nonatomic) _Bool processedStarted; // @synthesize processedStarted=_processedStarted;
@property(retain, nonatomic) NSNumber *videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(retain, nonatomic) MVVideoEffectPlayerModel *effectModel; // @synthesize effectModel=_effectModel;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UISlider *playerSlider; // @synthesize playerSlider=_playerSlider;
@property(nonatomic) __weak id <MVVideoEffectPlayerV2Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updatePlayerItemIfNeeded;
- (void)createPlayerItemIfNeeded;
- (id)effectTimeLines;
- (_Bool)isProcessingCompleted;
- (void)onSliderValueChange:(id)arg1;
- (void)onSliderTouchUp:(id)arg1;
- (void)onSliderTouchDown:(id)arg1;
- (void)handleAVPlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (id)addVideo:(id)arg1 toAudioComposition:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) AVAsset *compositionAsset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)settingWaterMarkLayer:(id)arg1;
- (void)setFilterIdInfo:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)exportVideoCompletion:(CDUnknownBlockType)arg1;
- (void)removePlayerTimeObserver;
- (void)cancelPlay;
- (void)resumePlay;
- (void)pausePlay;
- (_Bool)isPlaying;
- (void)startPlay;
- (void)preparePlay;
- (void)loadAudioModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadEffectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GPUImageView *ginPreviewView;
- (void)createPlayerWithPlayerItem:(id)arg1;
- (id)init;
- (void)dealloc;

@end

