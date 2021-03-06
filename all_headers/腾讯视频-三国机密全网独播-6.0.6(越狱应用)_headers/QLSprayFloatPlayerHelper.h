//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QLSprayFloatPlayerViewDatasource-Protocol.h"
#import "QLSprayFloatPlayerViewDelegate-Protocol.h"

@class KKMediaRootViewController, NSString, QLSprayContext, QLSprayFloatPlayerView;

@interface QLSprayFloatPlayerHelper : NSObject <QLSprayFloatPlayerViewDelegate, QLSprayFloatPlayerViewDatasource>
{
    id _videoData;
    QLSprayFloatPlayerView *_floatPlayerView;
    QLSprayContext *_sprayContext;
    NSString *_playerErrorMsg;
    CDUnknownBlockType _playNextCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType playNextCompletion; // @synthesize playNextCompletion=_playNextCompletion;
@property(copy, nonatomic) NSString *playerErrorMsg; // @synthesize playerErrorMsg=_playerErrorMsg;
@property(nonatomic) __weak QLSprayContext *sprayContext; // @synthesize sprayContext=_sprayContext;
@property(retain, nonatomic) QLSprayFloatPlayerView *floatPlayerView; // @synthesize floatPlayerView=_floatPlayerView;
@property(retain, nonatomic) id videoData; // @synthesize videoData=_videoData;
- (void).cxx_destruct;
- (id)posterUrlForFloatPlayerView:(id)arg1;
- (id)playerViewForFloatPlayerView:(id)arg1;
- (id)titleForFloatPlayerView:(id)arg1;
- (void)handleClickAction;
- (void)didPlayNextAnimationFinished:(id)arg1;
- (void)didShowError:(id)arg1;
- (void)didPosterClick:(id)arg1;
- (void)didTitleClick:(id)arg1;
- (void)didCloseBtnClick:(id)arg1;
- (void)prepareToPlayNextVideo:(CDUnknownBlockType)arg1;
- (void)showFloatPlayerError:(_Bool)arg1 errorMsg:(id)arg2;
- (void)showFloatPlayerError:(_Bool)arg1;
- (void)updateFloatPlayerFromPreWatchFinish;
- (id)sparyPlayerView;
- (_Bool)isFloatPlayerExist;
- (void)hideFloatPlayer;
- (void)updateFloatPlayerFrame:(struct CGRect)arg1;
- (void)showFloatPlayerWithVideoData:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3;
@property(readonly, nonatomic, getter=player) __weak KKMediaRootViewController *player;
- (id)initWithSprayContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

