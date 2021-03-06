//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAsset.h"

#import "IMAssetCacheDelegate-Protocol.h"
#import "IMStrandsViewPoolDelegate-Protocol.h"
#import "IMUIVideoViewDelegate-Protocol.h"
#import "IMVastUnwrapperDelegate-Protocol.h"

@class AVPlayerItem, AVURLAsset, IMAdsConfig, IMIASNativeVideoViewability, IMUISlider, IMUIVideoProperties, IMVastCompanion, IMVastUnwrapper, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, UIColor;

@interface IMVideoAsset : IMAsset <IMStrandsViewPoolDelegate, IMVastUnwrapperDelegate, IMUIVideoViewDelegate, IMAssetCacheDelegate>
{
    _Bool _shouldFireCompanionTrackers;
    _Bool _shouldFireVideoTrackers;
    _Bool _viewPresented;
    _Bool _impressionFired;
    _Bool _startFired;
    _Bool _creativeViewFired;
    _Bool _isPlayingCachedVideo;
    float _deviceVolume;
    IMUIVideoProperties *properties;
    NSArray *_viewabilityTimes;
    NSDictionary *_viewabilityTrackers;
    unsigned long long _videoAssetType;
    IMIASNativeVideoViewability *_iasViewability;
    NSArray *_ads;
    IMVastUnwrapper *_unwrapper;
    NSString *_videoURL;
    AVPlayerItem *_playerItem;
    NSNumber *_isVideoMuted;
    NSString *_clickThroughURL;
    NSMutableArray *_companionClickTrackers;
    NSMutableArray *_videoClickTrackers;
    double _duration;
    IMAdsConfig *_config;
    NSNumber *_shouldShowMuteButton;
    NSNumber *_soundOn;
    NSNumber *_loop;
    NSNumber *_showProgressBar;
    IMUISlider *_progressSlider;
    UIColor *_progressSliderColor;
    IMVastCompanion *_selectedCompanion;
    NSString *_assetPath;
    AVURLAsset *_videoAsset;
    id _timeObserver;
    NSString *_videoCachePath;
    unsigned long long _unWrappingStartTime;
    unsigned long long _assetFetchStartTime;
    NSDictionary *_macros;
    NSMutableArray *_iasJavascriptResources;
}

@property(nonatomic) float deviceVolume; // @synthesize deviceVolume=_deviceVolume;
@property(retain, nonatomic) NSMutableArray *iasJavascriptResources; // @synthesize iasJavascriptResources=_iasJavascriptResources;
@property(retain, nonatomic) NSDictionary *macros; // @synthesize macros=_macros;
@property(nonatomic) unsigned long long assetFetchStartTime; // @synthesize assetFetchStartTime=_assetFetchStartTime;
@property(nonatomic) unsigned long long unWrappingStartTime; // @synthesize unWrappingStartTime=_unWrappingStartTime;
@property(nonatomic) _Bool isPlayingCachedVideo; // @synthesize isPlayingCachedVideo=_isPlayingCachedVideo;
@property(retain, nonatomic) NSString *videoCachePath; // @synthesize videoCachePath=_videoCachePath;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) AVURLAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(retain, nonatomic) IMVastCompanion *selectedCompanion; // @synthesize selectedCompanion=_selectedCompanion;
@property(retain, nonatomic) UIColor *progressSliderColor; // @synthesize progressSliderColor=_progressSliderColor;
@property(retain, nonatomic) IMUISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property _Bool creativeViewFired; // @synthesize creativeViewFired=_creativeViewFired;
@property(retain, nonatomic) NSNumber *showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(retain, nonatomic) NSNumber *loop; // @synthesize loop=_loop;
@property(retain, nonatomic) NSNumber *soundOn; // @synthesize soundOn=_soundOn;
@property(retain, nonatomic) NSNumber *shouldShowMuteButton; // @synthesize shouldShowMuteButton=_shouldShowMuteButton;
@property _Bool startFired; // @synthesize startFired=_startFired;
@property _Bool impressionFired; // @synthesize impressionFired=_impressionFired;
@property(nonatomic) _Bool viewPresented; // @synthesize viewPresented=_viewPresented;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool shouldFireVideoTrackers; // @synthesize shouldFireVideoTrackers=_shouldFireVideoTrackers;
@property(nonatomic) _Bool shouldFireCompanionTrackers; // @synthesize shouldFireCompanionTrackers=_shouldFireCompanionTrackers;
@property(retain, nonatomic) NSMutableArray *videoClickTrackers; // @synthesize videoClickTrackers=_videoClickTrackers;
@property(retain, nonatomic) NSMutableArray *companionClickTrackers; // @synthesize companionClickTrackers=_companionClickTrackers;
@property(retain, nonatomic) NSString *clickThroughURL; // @synthesize clickThroughURL=_clickThroughURL;
@property(retain, nonatomic) NSNumber *isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) IMVastUnwrapper *unwrapper; // @synthesize unwrapper=_unwrapper;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) IMIASNativeVideoViewability *iasViewability; // @synthesize iasViewability=_iasViewability;
@property(nonatomic) unsigned long long videoAssetType; // @synthesize videoAssetType=_videoAssetType;
@property(retain, nonatomic) NSDictionary *viewabilityTrackers; // @synthesize viewabilityTrackers=_viewabilityTrackers;
@property(retain, nonatomic) NSArray *viewabilityTimes; // @synthesize viewabilityTimes=_viewabilityTimes;
@property(retain, nonatomic) IMUIVideoProperties *properties; // @synthesize properties;
- (void).cxx_destruct;
- (id)videoTelemetryPayload;
- (void)dealloc;
- (void)fireVolumeChangeEvent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopListeningToDeviceVolume;
- (void)startListeningToDeviceVolume;
- (void)gotAssetFromCacheAt:(id)arg1 forURL:(id)arg2;
- (void)assetAddToCacheFailedForURL:(id)arg1 withError:(id)arg2;
- (void)assetReturningFromNetworkAt:(id)arg1 forURL:(id)arg2;
- (void)assetReturnedFromCacheAt:(id)arg1 forURL:(id)arg2;
- (void)viewVisibilityComputedAs:(double)arg1;
- (void)screenDismissed;
- (void)screenPresented;
- (id)getTrackersOfType:(id)arg1 withProperties:(id)arg2;
- (id)getAssetURLWithProperties:(id)arg1;
- (id)getResolvedClickableAssetForCreativeType:(id)arg1;
- (id)assetOnClickParams;
- (id)getViewabilityTrackersForAsset;
- (id)getJavascriptResources:(id)arg1;
- (id)getMacros:(id)arg1;
- (void)replaceMacrosForIASJavascriptResources;
- (void)extractIASViewabilityMetaDataFromJSON;
- (void)extractIASViewabilityMetaDataFromVastAds;
- (void)extractIASViewabilityMetaData;
- (_Bool)isValidViewabilityTracker:(id)arg1;
- (id)getNonObstuctiveViewForVideoViewability;
- (void)videoViewCTAButtonClicked:(id)arg1;
- (void)videoViewUnMutedVideo:(id)arg1;
- (void)videoViewMutedVideo:(id)arg1;
- (void)videoViewEndedPlayback:(id)arg1;
- (void)videoViewed:(id)arg1 forTime:(id)arg2;
- (void)videoViewCompletedPlayback:(id)arg1;
- (void)videoViewCompletedThirdQuartile:(id)arg1;
- (void)videoViewCompletedSecondQuartile:(id)arg1;
- (void)videoViewCompletedFirstQuartile:(id)arg1;
- (void)videoViewExitsFullScreen:(id)arg1;
- (void)videoViewEnteredFullScreen:(id)arg1;
- (void)videoViewPaused:(id)arg1;
- (void)videoViewStartedPlaying:(id)arg1;
- (id)urlByReplacingAssetUri:(id)arg1 withURI:(id)arg2;
- (id)urlByReplacingCacheBustingMacro:(id)arg1;
- (id)urlByReplacingErrorCode:(id)arg1 errorCode:(long long)arg2;
- (void)generateProperties:(id)arg1 fromJson:(id)arg2;
- (id)propertiesFromJson:(id)arg1;
- (_Bool)isFieldValid:(id)arg1;
- (id)getErrorTrackersForErrorCode:(long long)arg1;
- (void)fireErrorEventsForErrorCode:(long long)arg1;
- (id)getBestFitCompanionForSize:(struct CGSize)arg1 withFetchErrorTrackers:(id *)arg2 withError:(id *)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)wakeUpFromHibernation;
- (void)hibernateVideo;
- (void)setVideoMetadata:(id)arg1;
- (id)getVideoMetadata;
- (id)getPlayerItem;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)reloadVideo;
- (void)prepareVideoPlay;
- (void)vastUnwrapper:(id)arg1 finishedUnwrappingWithAds:(id)arg2;
- (void)vastUnwrapper:(id)arg1 didFailToUnwrapWithError:(id)arg2 andUnwrappedAds:(id)arg3;
- (id)getMediaFileToPlay:(id)arg1 fromAd:(id)arg2;
- (void)imStrandsViewPoolResetView:(id)arg1 withProperties:(id)arg2;
- (void)imStrandsViewPoolCleanView:(id)arg1;
- (id)imStrandsViewPoolCreateViewWithProperties:(id)arg1;
- (_Bool)isCustomTrackingEnabled;
- (void)fetchAssetResources;
- (void)recycleView;
- (id)buildAssetView;
- (void)skipVideo;
- (id)initWithJson:(id)arg1 withStyles:(id)arg2 atJPath:(id)arg3;
- (void)fireQuartileActionCallback:(long long)arg1;
- (void)fireImpressions;
- (void)checkAndFireImpressions;
- (void)fireGenericVideoEvent:(long long)arg1 shouldReplaceMDMacro:(_Bool)arg2;
- (void)fireGenericVideoEvent:(long long)arg1;
- (void)checkAndFireGenericVideoEvent:(long long)arg1 shouldReplaceMDMacro:(_Bool)arg2;
- (void)fireURLs;
- (_Bool)shouldFireEvent:(id)arg1;
- (double)videoDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

