//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SHMoviePlayerControllerDelegate-Protocol.h"

@class NSString;

@interface WSMVVideoPlayerViewObserver : NSObject <SHMoviePlayerControllerDelegate>
{
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playbackTimeDidChanged;
- (void)playerPlaybackFinishByUserExited;
- (void)playerPlaybackComplete;
- (void)playerPlaybackFinish:(long long)arg1;
- (_Bool)playerbackRequestError:(id)arg1;
- (void)playerPlayError:(unsigned long long)arg1;
- (void)playbackSeekingBackward;
- (void)playbackSeekingForward;
- (void)playbackInterrupted;
- (void)playbackStop;
- (void)playbackPause;
- (void)playbackStalling;
- (void)playbackStart;
- (void)playbackPrepared;
- (void)playbackDurationAvailable;
- (void)playerLoadDuration:(double)arg1 success:(_Bool)arg2;
- (void)playbackPreparing;
- (void)playerPlayAdvertError;
- (void)playerExitAdvertMode;
- (void)advertPlayerPrepared;
- (void)advertPlayerPreparing;
- (void)playerPlayAdvertWithInfo:(id)arg1;
- (void)playerEnterAdvertMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

