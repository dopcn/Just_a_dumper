//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponent.h"

#import "DWGIFVideoPlayerLifecycleProtocol-Protocol.h"

@class DWGIFInstance, NSString, UIImageView, UIView;

@interface TBShopVideoGifComponent : WeAppComponent <DWGIFVideoPlayerLifecycleProtocol>
{
    _Bool _isPlaying;
    _Bool _hasExposured;
    _Bool _isPlayFailed;
    NSString *_videoId;
    NSString *_videoUrl;
    NSString *_videoCoverUrl;
    NSString *_jumpUrl;
    DWGIFInstance *_videoGif;
    UIView *_bgView;
    UIImageView *_coverImageView;
}

+ (_Bool)isViewAppeared:(id)arg1 toView:(id)arg2;
+ (void)setVideoPlayingComponent:(id)arg1;
@property(nonatomic) _Bool isPlayFailed; // @synthesize isPlayFailed=_isPlayFailed;
@property(nonatomic) _Bool hasExposured; // @synthesize hasExposured=_hasExposured;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) DWGIFInstance *videoGif; // @synthesize videoGif=_videoGif;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *videoCoverUrl; // @synthesize videoCoverUrl=_videoCoverUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)onVideoInstance:(id)arg1 withErrorCode:(id)arg2;
- (id)utArgs;
- (void)destroyVideo;
- (void)componentExposure;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)scrollEnd:(id)arg1;
- (void)refreshData;
- (id)createView;
- (void)dealloc;
- (void)viewDidDisAppear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (id)init;
- (void)pauseVideo;
- (void)playVideoWithContainer:(id)arg1;
- (void)playVideo;
- (void)hideGifIcon;
- (void)loadCoverImage;
- (void)loadVideoGif;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

