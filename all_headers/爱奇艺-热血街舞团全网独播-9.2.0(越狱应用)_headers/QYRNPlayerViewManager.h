//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "QYRNPlayerViewDelegate-Protocol.h"

@class NSString;

@interface QYRNPlayerViewManager : RCTViewManager <QYRNPlayerViewDelegate>
{
}

+ (id)__rct_export__21212;
+ (id)__rct_export__19811;
+ (id)__rct_export__18410;
+ (id)__rct_export__1709;
+ (id)__rct_export__1568;
+ (id)__rct_export__1427;
+ (id)__rct_export__1306;
+ (id)__rct_export__1195;
+ (id)__rct_export__1084;
+ (id)__rct_export__973;
+ (id)__rct_export__862;
+ (id)__rct_export__751;
+ (id)propConfig_frame;
+ (id)propConfig_dataItem;
+ (id)propConfig_shouldPlay;
+ (id)propConfig_autoPlay;
+ (void)load;
+ (id)moduleName;
- (_Bool)shouldPlay:(id)arg1;
- (_Bool)autoPlay:(id)arg1;
- (void)playbackTimeChanged:(id)arg1;
- (void)onContentStartPlay:(id)arg1;
- (void)onAdEndPlay:(id)arg1;
- (void)onAdStartPlay:(id)arg1;
- (void)onPlayStuckWithParam:(long long)arg1;
- (void)onPlayerError:(id)arg1;
- (void)playbackFinshed:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)startLoading:(id)arg1;
- (void)changePlayerRenderEffect:(id)arg1 by:(id)arg2;
- (void)isLoading:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)isPlaying:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playableDuration:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)duration:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)currentPlaybackTime:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setFrame:(id)arg1 by:(id)arg2;
- (void)close:(id)arg1;
- (void)stop:(id)arg1;
- (void)seekToTime:(id)arg1 time:(id)arg2;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)set_frame:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_dataItem:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

