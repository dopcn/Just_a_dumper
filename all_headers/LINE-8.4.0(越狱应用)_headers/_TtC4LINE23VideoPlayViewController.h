//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLAVPlayerProjectionViewController.h"

@protocol _TtP4LINE31VideoPlayViewControllerDelegate_;

@interface _TtC4LINE23VideoPlayViewController : NLAVPlayerProjectionViewController
{
    // Error parsing type: , name: topControlViewHeight
    // Error parsing type: , name: bottomControlViewHeight
    // Error parsing type: , name: cancelSaveFromUser
    // Error parsing type: , name: cancelSaveCauseNoSpace
    // Error parsing type: , name: needsCheckFreeDiskSpace
    // Error parsing type: , name: downloadOperation
    // Error parsing type: , name: repeatWhenPlayedToEndTime
    // Error parsing type: , name: mediaPlaybackLogger
    // Error parsing type: , name: playStateWhenSeeking
    // Error parsing type: , name: isPanning
    // Error parsing type: , name: playbackState
    // Error parsing type: , name: showingNetworkErrorAlert
    // Error parsing type: , name: watchingTime
    // Error parsing type: , name: dismissMode
    // Error parsing type: , name: delegate
    // Error parsing type: , name: topControlView
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: seekBar
    // Error parsing type: , name: pipButton
    // Error parsing type: , name: bottomControlView
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: playControlButton
    // Error parsing type: , name: saveButton
    // Error parsing type: , name: progressView
    // Error parsing type: , name: pipToolTip
    // Error parsing type: , name: _hideControls
}

- (CDUnknownBlockType).cxx_destruct;
- (void)loadAndPlay;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideControls;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPlayerView:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <_TtP4LINE31VideoPlayViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) CDStruct_1b6d18a9 watchingTime; // @synthesize watchingTime;

@end

