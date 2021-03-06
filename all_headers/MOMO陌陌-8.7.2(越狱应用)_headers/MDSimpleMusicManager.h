//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDFeedMusicItem, MDSimpleMusicPlayer, MDXiamiMusicHandler, NSCache, NSString, UIImageView, UIPanGestureRecognizer, UIWindow;
@protocol MDSimpleMusicManagerDelegate;

@interface MDSimpleMusicManager : NSObject
{
    _Bool _isRequesting;
    _Bool _isVoiceChating;
    _Bool _isPauseByEffectSound;
    id <MDSimpleMusicManagerDelegate> _delegate;
    NSString *_currentPlayFeedID;
    MDSimpleMusicPlayer *_player;
    UIWindow *_globalMusicWindow;
    UIPanGestureRecognizer *_panGestureRecognizer;
    MDXiamiMusicHandler *_xiamiHandler;
    UIImageView *_coverView;
    MDFeedMusicItem *_item;
    NSCache *_musicItemCache;
    struct CGRect _globalMusicWindowRect;
}

+ (id)shareMusicManager;
@property(retain, nonatomic) NSCache *musicItemCache; // @synthesize musicItemCache=_musicItemCache;
@property(retain, nonatomic) MDFeedMusicItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MDXiamiMusicHandler *xiamiHandler; // @synthesize xiamiHandler=_xiamiHandler;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) struct CGRect globalMusicWindowRect; // @synthesize globalMusicWindowRect=_globalMusicWindowRect;
@property(retain, nonatomic) UIWindow *globalMusicWindow; // @synthesize globalMusicWindow=_globalMusicWindow;
@property(nonatomic) _Bool isPauseByEffectSound; // @synthesize isPauseByEffectSound=_isPauseByEffectSound;
@property(nonatomic) _Bool isVoiceChating; // @synthesize isVoiceChating=_isVoiceChating;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) MDSimpleMusicPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *currentPlayFeedID; // @synthesize currentPlayFeedID=_currentPlayFeedID;
@property(nonatomic) id <MDSimpleMusicManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleADEnd;
- (void)handleADBegin;
- (void)handleCloseVideoNotify;
- (void)audioSessionInterruption:(id)arg1;
- (void)handleResignActiveNotify;
- (void)handleBecomeActiveNotify;
- (void)handlePicPreviewEndNotify;
- (void)handlePicPreviewBeginNotify;
- (void)handleSpecialStopMusic;
- (void)handleStopMusicNotify;
- (void)handleAudioSessionEndNotify;
- (void)handleAudioSessionBeginNotify;
- (void)addNotification;
- (void)handleEnterBackGround;
- (void)handleEnterForeGround;
- (void)openMusicDetail;
- (void)closeMusicViewWithoutNotification;
- (void)closeMusicView;
- (void)startAnimation;
- (void)setWindowRootViewController;
- (void)doHandlePanAction:(id)arg1;
- (void)hideGlobalMusicView;
- (void)showGlobalMusicView;
- (_Bool)isPause;
- (_Bool)isPlaying;
- (void)playMusicWithURL:(id)arg1 showMusicView:(_Bool)arg2;
- (void)requsetMusicDataWithFeedItem:(id)arg1 requsetComplete:(CDUnknownBlockType)arg2;
- (void)cancelLastMusic;
- (void)dealloc;

@end

